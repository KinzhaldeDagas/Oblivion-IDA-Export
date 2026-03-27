0x5AD440: sub     esp, 30h
0x5AD443: push    ebp; a3
0x5AD444: xor     ebp, ebp
0x5AD446: cmp     ds:0B33A98h, ebp
0x5AD44C: jnz     short loc_5AD468
0x5AD44E: fldz
0x5AD450: push    ecx
0x5AD451: mov     ecx, [ecx+4]; this
0x5AD454: fstp    [esp+38h+a2]; a3
0x5AD457: push    0FAEh; a2
0x5AD45C: call    Tile_SetFloat
0x5AD461: pop     ebp
0x5AD462: add     esp, 30h
0x5AD465: retn    4
0x5AD468: add     ecx, 4Ch ; 'L'
0x5AD46B: cmp     [ecx+4], ebp
0x5AD46E: mov     [esp+34h+var_20], ecx
0x5AD472: jnz     loc_5AD6DD
0x5AD478: cmp     [ecx], ebp
0x5AD47A: jnz     loc_5AD6DD
0x5AD480: push    ebx
0x5AD481: push    esi
0x5AD482: push    edi
0x5AD483: mov     edi, [esp+40h+arg_0]
0x5AD487: xor     ebx, ebx
0x5AD489: cmp     edi, ebp
0x5AD48B: jz      short def_5AD499; jumptable 005AD499 default case, case 52
0x5AD48D: movzx   eax, byte ptr [edi+4]
0x5AD491: add     eax, 0FFFFFFD0h; switch 6 cases
0x5AD494: cmp     eax, 5
0x5AD497: ja      short def_5AD499; jumptable 005AD499 default case, case 52
0x5AD499: jmp     ds:jpt_5AD499[eax*4]; switch jump
0x5AD4A0: mov     ebx, edi; jumptable 005AD499 case 53
0x5AD4A2: jmp     short def_5AD499; jumptable 005AD499 default case, case 52
0x5AD4A4: mov     ecx, edi; jumptable 005AD499 case 48
0x5AD4A6: call    TESObjectCELL_GetWorldSpace
0x5AD4AB: jmp     short loc_5AD4B4
0x5AD4AD: mov     ecx, edi; jumptable 005AD499 cases 49-51
0x5AD4AF: call    TESObjectREFR_GetWorldSpace
0x5AD4B4: mov     ebx, eax
0x5AD4B6: mov     eax, ds:0B33A98h; jumptable 005AD499 default case, case 52
0x5AD4BB: add     eax, 9Ch ; 'œ'
0x5AD4C0: xor     ecx, ecx
0x5AD4C2: cmp     eax, ebp
0x5AD4C4: mov     [esp+40h+var_8], ebp
0x5AD4C8: mov     [esp+40h+var_4], ebp
0x5AD4CC: mov     [esp+40h+var_18], ebp
0x5AD4D0: mov     [esp+40h+var_14], ebp
0x5AD4D4: mov     [esp+40h+var_10], ebp
0x5AD4D8: mov     [esp+40h+var_C], ebp
0x5AD4DC: mov     [esp+40h+var_2C], ecx
0x5AD4E0: mov     [esp+40h+var_24], ebp
0x5AD4E4: mov     [esp+40h+var_28], ebp
0x5AD4E8: mov     [esp+40h+arg_0], eax
0x5AD4EC: jz      short loc_5AD55D
0x5AD4EE: mov     edi, edi
0x5AD4F0: mov     eax, [esp+40h+arg_0]
0x5AD4F4: mov     esi, [eax]
0x5AD4F6: cmp     esi, ebp
0x5AD4F8: jz      short loc_5AD54A
0x5AD4FA: push    edi
0x5AD4FB: mov     ecx, esi
0x5AD4FD: call    sub_4F9BB0
0x5AD502: test    al, al
0x5AD504: jz      short loc_5AD52B
0x5AD506: mov     ecx, esi
0x5AD508: call    sub_4F9A20
0x5AD50D: test    al, al
0x5AD50F: jz      short loc_5AD51C
0x5AD511: add     [esp+40h+var_2C], 1
0x5AD516: lea     ecx, [esp+40h+var_8]
0x5AD51A: jmp     short loc_5AD544
0x5AD51C: cmp     edi, ebp
0x5AD51E: jz      short loc_5AD54A
0x5AD520: add     [esp+40h+var_24], 1
0x5AD525: lea     ecx, [esp+40h+var_18]
0x5AD529: jmp     short loc_5AD544
0x5AD52B: cmp     ebx, ebp
0x5AD52D: jz      short loc_5AD54A
0x5AD52F: push    ebx
0x5AD530: mov     ecx, esi
0x5AD532: call    sub_4F9BB0
0x5AD537: test    al, al
0x5AD539: jz      short loc_5AD54A
0x5AD53B: add     [esp+40h+var_28], 1
0x5AD540: lea     ecx, [esp+40h+var_10]
0x5AD544: push    esi
0x5AD545: call    BSSimpleList_PushFront
0x5AD54A: mov     ecx, [esp+40h+arg_0]
0x5AD54E: mov     eax, [ecx+4]
0x5AD551: cmp     eax, ebp
0x5AD553: mov     [esp+40h+arg_0], eax
0x5AD557: jnz     short loc_5AD4F0
0x5AD559: mov     ecx, [esp+40h+var_2C]
0x5AD55D: xor     esi, esi
0x5AD55F: jmp     short loc_5AD567
0x5AD561: mov     ecx, [esp+40h+var_2C]
0x5AD565: xor     ebp, ebp
0x5AD567: mov     eax, esi
0x5AD569: sub     eax, 0
0x5AD56C: mov     [esp+40h+var_30], ebp
0x5AD570: jz      short loc_5AD59A
0x5AD572: sub     eax, 1
0x5AD575: jz      short loc_5AD58C
0x5AD577: sub     eax, 1
0x5AD57A: jnz     short loc_5AD5AE
0x5AD57C: lea     edx, [esp+40h+var_8]
0x5AD580: mov     [esp+40h+arg_0], edx
0x5AD584: mov     ebp, ecx
0x5AD586: mov     [esp+40h+var_30], ecx
0x5AD58A: jmp     short loc_5AD5AE
0x5AD58C: mov     ebp, [esp+40h+var_28]
0x5AD590: lea     eax, [esp+40h+var_10]
0x5AD594: mov     [esp+40h+arg_0], eax
0x5AD598: jmp     short loc_5AD5A6
0x5AD59A: mov     ebp, [esp+40h+var_24]
0x5AD59E: lea     ecx, [esp+40h+var_18]
0x5AD5A2: mov     [esp+40h+arg_0], ecx
0x5AD5A6: mov     [esp+40h+var_30], 1
0x5AD5AE: add     esi, 1
0x5AD5B1: cmp     [esp+40h+var_30], 0
0x5AD5B6: mov     [esp+40h+var_1C], esi
0x5AD5BA: jle     loc_5AD669
0x5AD5C0: test    ebp, ebp
0x5AD5C2: jle     loc_5AD669
0x5AD5C8: push    0; Seed
0x5AD5CA: call    GetRandomLargeInteger?
0x5AD5CF: cdq
0x5AD5D0: idiv    ebp
0x5AD5D2: mov     edi, [esp+44h+arg_0]
0x5AD5D6: add     esp, 4
0x5AD5D9: xor     eax, eax
0x5AD5DB: test    edx, edx
0x5AD5DD: jle     short loc_5AD5EE
0x5AD5DF: nop
0x5AD5E0: mov     edi, [edi+4]
0x5AD5E3: test    edi, edi
0x5AD5E5: jz      short loc_5AD656
0x5AD5E7: add     eax, 1
0x5AD5EA: cmp     eax, edx
0x5AD5EC: jl      short loc_5AD5E0
0x5AD5EE: test    edi, edi
0x5AD5F0: jz      short loc_5AD656
0x5AD5F2: cmp     dword ptr [edi+4], 0
0x5AD5F6: jnz     short loc_5AD5FD
0x5AD5F8: cmp     dword ptr [edi], 0
0x5AD5FB: jz      short loc_5AD656
0x5AD5FD: mov     ebx, [edi]
0x5AD5FF: test    ebx, ebx
0x5AD601: jz      short loc_5AD643
0x5AD603: mov     esi, [esp+40h+var_20]
0x5AD607: cmp     dword ptr [esi+4], 0
0x5AD60B: jz      short loc_5AD619
0x5AD60D: lea     ecx, [ecx+0]
0x5AD610: mov     esi, [esi+4]
0x5AD613: cmp     dword ptr [esi+4], 0
0x5AD617: jnz     short loc_5AD610
0x5AD619: cmp     dword ptr [esi], 0
0x5AD61C: jz      short loc_5AD641
0x5AD61E: push    8; Size
0x5AD620: call    FormHeapAlloc
0x5AD625: add     esp, 4
0x5AD628: test    eax, eax
0x5AD62A: jz      short loc_5AD63A
0x5AD62C: mov     [eax], ebx
0x5AD62E: mov     dword ptr [eax+4], 0
0x5AD635: mov     [esi+4], eax
0x5AD638: jmp     short loc_5AD643
0x5AD63A: xor     eax, eax
0x5AD63C: mov     [esi+4], eax
0x5AD63F: jmp     short loc_5AD643
0x5AD641: mov     [esi], ebx
0x5AD643: mov     edx, [edi]
0x5AD645: mov     ecx, [esp+40h+arg_0]
0x5AD649: push    edx
0x5AD64A: call    BSSimpleList_Remove
0x5AD64F: mov     esi, [esp+40h+var_1C]
0x5AD653: sub     ebp, 1
0x5AD656: mov     eax, [esp+40h+var_30]
0x5AD65A: sub     eax, 1
0x5AD65D: test    eax, eax
0x5AD65F: mov     [esp+40h+var_30], eax
0x5AD663: jg      loc_5AD5C0
0x5AD669: cmp     esi, 3
0x5AD66C: jl      loc_5AD561
0x5AD672: mov     eax, [esp+40h+var_14]
0x5AD676: xor     edi, edi
0x5AD678: cmp     eax, edi
0x5AD67A: jz      short loc_5AD696
0x5AD67C: lea     esp, [esp+0]
0x5AD680: mov     esi, [eax+4]
0x5AD683: push    eax
0x5AD684: call    FormHeapFree
0x5AD689: add     esp, 4
0x5AD68C: cmp     esi, edi
0x5AD68E: mov     eax, esi
0x5AD690: mov     [esp+40h+var_14], eax
0x5AD694: jnz     short loc_5AD680
0x5AD696: mov     eax, [esp+40h+var_C]
0x5AD69A: cmp     eax, edi
0x5AD69C: mov     [esp+40h+var_18], edi
0x5AD6A0: jz      short loc_5AD6B8
0x5AD6A2: mov     esi, [eax+4]
0x5AD6A5: push    eax
0x5AD6A6: call    FormHeapFree
0x5AD6AB: add     esp, 4
0x5AD6AE: cmp     esi, edi
0x5AD6B0: mov     eax, esi
0x5AD6B2: mov     [esp+40h+var_C], eax
0x5AD6B6: jnz     short loc_5AD6A2
0x5AD6B8: mov     eax, [esp+40h+var_4]
0x5AD6BC: cmp     eax, edi
0x5AD6BE: mov     [esp+40h+var_10], edi
0x5AD6C2: jz      short loc_5AD6DA
0x5AD6C4: mov     esi, [eax+4]
0x5AD6C7: push    eax
0x5AD6C8: call    FormHeapFree
0x5AD6CD: add     esp, 4
0x5AD6D0: cmp     esi, edi
0x5AD6D2: mov     eax, esi
0x5AD6D4: mov     [esp+40h+var_4], eax
0x5AD6D8: jnz     short loc_5AD6C4
0x5AD6DA: pop     edi
0x5AD6DB: pop     esi
0x5AD6DC: pop     ebx
0x5AD6DD: pop     ebp
0x5AD6DE: add     esp, 30h
0x5AD6E1: retn    4
