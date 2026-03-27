0x414420: push    ebx
0x414421: mov     ebx, [esp+4+arg_0]
0x414425: push    ebp
0x414426: mov     ebp, [esp+8+arg_4]
0x41442A: cmp     [ebx+14h], ebp
0x41442D: push    esi
0x41442E: push    edi; MaxCount
0x41442F: mov     esi, ecx
0x414431: jnb     short loc_414438
0x414433: call    ?_Xran@_String_base@std@@SAXXZ; std::_String_base::_Xran(void)
0x414438: mov     edi, [ebx+14h]
0x41443B: mov     eax, [esp+10h+arg_8]
0x41443F: sub     edi, ebp
0x414441: cmp     eax, edi
0x414443: jnb     short loc_414447
0x414445: mov     edi, eax
0x414447: cmp     esi, ebx
0x414449: jnz     short loc_41446A
0x41444B: push    0FFFFFFFFh
0x41444D: add     edi, ebp
0x41444F: push    edi
0x414450: mov     ecx, esi
0x414452: call    sub_4134E0
0x414457: push    ebp
0x414458: push    0
0x41445A: mov     ecx, esi
0x41445C: call    sub_4134E0
0x414461: pop     edi
0x414462: mov     eax, esi
0x414464: pop     esi
0x414465: pop     ebp
0x414466: pop     ebx
0x414467: retn    0Ch
0x41446A: cmp     edi, 0FFFFFFFEh
0x41446D: jbe     short loc_414474
0x41446F: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x414474: mov     eax, [esi+18h]
0x414477: cmp     eax, edi
0x414479: jnb     short loc_414496
0x41447B: mov     eax, [esi+14h]
0x41447E: push    eax; MaxCount
0x41447F: push    edi; Dst
0x414480: mov     ecx, esi
0x414482: call    sub_4135C0
0x414487: test    edi, edi
0x414489: jbe     short loc_4144F1
0x41448B: cmp     dword ptr [ebx+18h], 10h
0x41448F: jb      short loc_4144C0
0x414491: mov     edx, [ebx+4]
0x414494: jmp     short loc_4144C3
0x414496: test    edi, edi
0x414498: jnz     short loc_414489
0x41449A: cmp     eax, 10h
0x41449D: mov     [esi+14h], edi
0x4144A0: jb      short loc_4144B1
0x4144A2: mov     eax, [esi+4]
0x4144A5: pop     edi
0x4144A6: mov     byte ptr [eax], 0
0x4144A9: mov     eax, esi
0x4144AB: pop     esi
0x4144AC: pop     ebp
0x4144AD: pop     ebx
0x4144AE: retn    0Ch
0x4144B1: lea     eax, [esi+4]
0x4144B4: pop     edi
0x4144B5: mov     byte ptr [eax], 0
0x4144B8: mov     eax, esi
0x4144BA: pop     esi
0x4144BB: pop     ebp
0x4144BC: pop     ebx
0x4144BD: retn    0Ch
0x4144C0: lea     edx, [ebx+4]
0x4144C3: mov     ecx, [esi+18h]
0x4144C6: cmp     ecx, 10h
0x4144C9: lea     ebx, [esi+4]
0x4144CC: jb      short loc_4144D2
0x4144CE: mov     eax, [ebx]
0x4144D0: jmp     short loc_4144D4
0x4144D2: mov     eax, ebx
0x4144D4: push    edi; Src
0x4144D5: add     edx, ebp
0x4144D7: push    edx; Src
0x4144D8: push    ecx; DstSize
0x4144D9: push    eax; Dst
0x4144DA: call    _memcpy_s
0x4144DF: add     esp, 10h
0x4144E2: cmp     dword ptr [esi+18h], 10h
0x4144E6: mov     [esi+14h], edi
0x4144E9: jb      short loc_4144ED
0x4144EB: mov     ebx, [ebx]
0x4144ED: mov     byte ptr [ebx+edi], 0
0x4144F1: pop     edi
0x4144F2: mov     eax, esi
0x4144F4: pop     esi
0x4144F5: pop     ebp
0x4144F6: pop     ebx
0x4144F7: retn    0Ch
