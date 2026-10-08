0x891050: push    0FFFFFFFFh
0x891052: push    offset SEH_8C62B0
0x891057: mov     eax, large fs:0
0x89105D: push    eax
0x89105E: push    ecx
0x89105F: push    esi
0x891060: mov     eax, ds:0B30AACh
0x891065: xor     eax, esp
0x891067: push    eax
0x891068: lea     eax, [esp+18h+var_C]
0x89106C: mov     large fs:0, eax
0x891072: mov     esi, ecx
0x891074: cmp     dword ptr [esi+0Ch], 0
0x891078: jnz     short loc_8910C6
0x89107A: push    0B0h ; '°'; Size
0x89107F: call    FormHeapAlloc
0x891084: add     esp, 4
0x891087: mov     [esp+18h+var_10], eax
0x89108B: test    eax, eax
0x89108D: mov     [esp+18h+var_4], 0
0x891095: jz      short loc_8910A2
0x891097: push    1
0x891099: mov     ecx, eax
0x89109B: call    sub_890C00; TES4 authoritative: initializes shared bhk character state table. Slots observed: 0=OnGround, 1=Jumping, 2=InAir, 4=Flying, 5=Swimming, 6=Projectile. No Climbing state is constructed here.
0x8910A0: jmp     short loc_8910A4
0x8910A2: xor     eax, eax
0x8910A4: cmp     dword ptr [esi+8], 0
0x8910A8: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8910B0: mov     [esi+0Ch], eax
0x8910B3: jz      short loc_8910BD
0x8910B5: push    eax
0x8910B6: mov     ecx, esi
0x8910B8: call    sub_8B9A00
0x8910BD: mov     eax, [esp+18h+arg_0]
0x8910C1: mov     byte ptr [eax], 1
0x8910C4: jmp     short loc_8910CD
0x8910C6: mov     ecx, [esp+18h+arg_0]
0x8910CA: mov     byte ptr [ecx], 0
0x8910CD: mov     eax, [esi+0Ch]
0x8910D0: mov     ecx, [esp+18h+var_C]
0x8910D4: mov     large fs:0, ecx
0x8910DB: pop     ecx
0x8910DC: pop     esi
0x8910DD: add     esp, 10h
0x8910E0: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
