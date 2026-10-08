0x5E5690: sub     esp, 8; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5E5693: push    ebp
0x5E5694: push    esi
0x5E5695: mov     esi, ecx
0x5E5697: mov     eax, [esi]
0x5E5699: mov     edx, [eax+164h]
0x5E569F: call    edx
0x5E56A1: xor     ebp, ebp
0x5E56A3: cmp     eax, ebp
0x5E56A5: mov     [esp+10h+var_4], eax
0x5E56A9: jnz     short loc_5E56B7
0x5E56AB: pop     esi
0x5E56AC: mov     ax, 0FFh
0x5E56B0: pop     ebp
0x5E56B1: add     esp, 8
0x5E56B4: retn    0Ch
0x5E56B7: push    edi
0x5E56B8: mov     edi, [esp+14h+actionOrIdle]
0x5E56BC: cmp     edi, ebp
0x5E56BE: jnz     short loc_5E56D1
0x5E56C0: mov     ecx, [esi+58h]
0x5E56C3: mov     eax, [ecx]
0x5E56C5: mov     edx, [eax+0ECh]
0x5E56CB: push    1
0x5E56CD: call    edx
0x5E56CF: mov     edi, eax
0x5E56D1: mov     ecx, [esi+58h]
0x5E56D4: mov     eax, [ecx]
0x5E56D6: mov     edx, [eax+2C0h]
0x5E56DC: call    edx; Movement prefix priority from process flags: Swimming 0x0800 -> 2, else Flying 0x2000 -> 3, else Sneaking 0x0400 -> 1, otherwise 0.
0x5E56DE: movzx   eax, ax
0x5E56E1: test    eax, 800h
0x5E56E6: mov     [esp+14h+var_8], ebp
0x5E56EA: jz      short loc_5E56F6; Swimming overrides Flying and Sneaking when building encoded animation-key movement bits.
0x5E56EC: mov     [esp+14h+var_8], 2
0x5E56F4: jmp     short loc_5E5716
0x5E56F6: test    eax, 2000h
0x5E56FB: jz      short loc_5E5707; Flying is selected only when Swimming was not set; it overrides Sneaking.
0x5E56FD: mov     [esp+14h+var_8], 3
0x5E5705: jmp     short loc_5E5716
0x5E5707: test    eax, 400h
0x5E570C: jz      short loc_5E5716
0x5E570E: mov     [esp+14h+var_8], 1; Sneaking supplies movement prefix 1 only when neither Swimming nor Flying was selected.
0x5E5716: mov     eax, [esi]
0x5E5718: mov     edx, [eax+27Ch]
0x5E571E: push    ebx
0x5E571F: mov     ecx, esi
0x5E5721: call    edx
0x5E5723: test    eax, eax
0x5E5725: mov     bl, byte ptr [esp+18h+forceBaseMovement]
0x5E5729: jnz     short loc_5E573D
0x5E572B: mov     eax, [esi]
0x5E572D: mov     edx, [eax+334h]
0x5E5733: push    1
0x5E5735: mov     ecx, esi
0x5E5737: call    edx
0x5E5739: test    al, al
0x5E573B: jnz     short loc_5E579F
0x5E573D: mov     eax, [esi]
0x5E573F: mov     edx, [eax+27Ch]
0x5E5745: mov     ecx, esi
0x5E5747: call    edx
0x5E5749: test    eax, eax
0x5E574B: jz      short loc_5E575E
0x5E574D: mov     ecx, [esi+58h]
0x5E5750: mov     eax, [ecx]
0x5E5752: mov     edx, [eax+304h]
0x5E5758: call    edx
0x5E575A: test    al, al
0x5E575C: jnz     short loc_5E579F
0x5E575E: mov     eax, ds:0B333C4h
0x5E5763: cmp     esi, eax
0x5E5765: jnz     short loc_5E576F
0x5E5767: cmp     [eax+5DCh], ebp
0x5E576D: jnz     short loc_5E579F
0x5E576F: test    edi, edi
0x5E5771: jz      short loc_5E579B
0x5E5773: cmp     [esp+18h+actionOrIdle], ebp
0x5E5777: jnz     short loc_5E579F
0x5E5779: mov     ecx, [esi+58h]
0x5E577C: mov     eax, [ecx]
0x5E577E: mov     edx, [eax+304h]
0x5E5784: call    edx
0x5E5786: test    al, al
0x5E5788: jnz     short loc_5E579F
0x5E578A: mov     ecx, [esi+58h]
0x5E578D: mov     eax, [ecx]
0x5E578F: mov     edx, [eax+2FCh]
0x5E5795: call    edx
0x5E5797: test    al, al
0x5E5799: jnz     short loc_5E579F
0x5E579B: test    bl, bl
0x5E579D: jz      short loc_5E57BF
0x5E579F: test    edi, edi
0x5E57A1: jz      short loc_5E57BA
0x5E57A3: test    bl, bl
0x5E57A5: jnz     short loc_5E57BA
0x5E57A7: mov     eax, [edi+8]
0x5E57AA: movsx   ecx, byte ptr [eax+90h]
0x5E57B1: mov     ebp, ds:0B086B8h[ecx*4]; For an equipped weapon entry, read TESObjectWEAP::type byte at form +0x90 and map types 0..5 through g_weaponTypeToAnimWeaponPrefix: 2,3,2,3,4,5.
0x5E57B8: jmp     short loc_5E57BF
0x5E57BA: mov     ebp, 1
0x5E57BF: cmp     dword ptr [esi+58h], 0
0x5E57C3: mov     edi, [esp+18h+groupID]
0x5E57C7: pop     ebx
0x5E57C8: jz      short loc_5E5821
0x5E57CA: mov     ecx, [esi+58h]
0x5E57CD: mov     edx, [ecx]
0x5E57CF: mov     eax, [edx+0F8h]
0x5E57D5: push    1
0x5E57D7: call    eax
0x5E57D9: test    eax, eax
0x5E57DB: jz      short loc_5E57E9
0x5E57DD: cmp     edi, 1Bh
0x5E57E0: jl      short loc_5E57E9
0x5E57E2: cmp     edi, 1Ch
0x5E57E5: jg      short loc_5E57E9; With an equipped shield, BlockIdle (27) and BlockHit (28) force weapon prefix 0 before key construction.
0x5E57E7: xor     ebp, ebp
0x5E57E9: cmp     dword ptr [esi+58h], 0
0x5E57ED: jz      short loc_5E5821
0x5E57EF: test    ebp, ebp
0x5E57F1: jz      short loc_5E5821
0x5E57F3: cmp     edi, 22h ; '"'
0x5E57F6: jl      short loc_5E5821
0x5E57F8: cmp     edi, 27h ; '''
0x5E57FB: jg      short loc_5E5821
0x5E57FD: mov     ecx, [esi+58h]
0x5E5800: mov     edx, [ecx]
0x5E5802: mov     eax, [edx+304h]
0x5E5808: call    eax
0x5E580A: test    al, al
0x5E580C: jz      short loc_5E581F
0x5E580E: mov     ecx, [esi+58h]
0x5E5811: mov     edx, [ecx]
0x5E5813: mov     eax, [edx+138h]
0x5E5819: call    eax; For TorchIdle through CastTouchAlt (groups 34..39), clear a nonzero weapon prefix when the weapon is not drawn or process virtual +0x138 reports true.
0x5E581B: test    al, al
0x5E581D: jz      short loc_5E5821
0x5E581F: xor     ebp, ebp
0x5E5821: mov     ecx, [esp+14h+var_8]
0x5E5825: push    edi
0x5E5826: push    ebp
0x5E5827: push    ecx
0x5E5828: call    AnimKey_Make; Compose group | (weaponPrefix << 8) | (movementPrefix << 12). Movement priority is Swim > Fly > Sneak; weapon type table values are Blade1H=2, Blade2H=3, Blunt1H=2, Blunt2H=3, Staff=4, Bow=5, subject to the group/state prefix-clearing gates above.
0x5E582D: mov     ecx, [esp+20h+var_4]; this
0x5E5831: add     esp, 0Ch
0x5E5834: movzx   eax, ax
0x5E5837: push    0; fallbackPass
0x5E5839: push    eax; requestedKey
0x5E583A: call    ActorAnimData_ResolveAnimKeyFallback; Native caller consumes the resolved fallback key, not necessarily the initially requested movement/weapon/group combination.
0x5E583F: pop     edi
0x5E5840: pop     esi
0x5E5841: pop     ebp
0x5E5842: add     esp, 8
0x5E5845: retn    0Ch
