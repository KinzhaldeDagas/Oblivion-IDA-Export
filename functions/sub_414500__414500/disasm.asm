0x414500: push    ebx
0x414501: push    ebp
0x414502: push    esi
0x414503: mov     esi, ecx
0x414505: mov     ecx, [esi+18h]
0x414508: cmp     ecx, 10h
0x41450B: lea     ebx, [esi+4]
0x41450E: jb      short loc_414514
0x414510: mov     eax, [ebx]
0x414512: jmp     short loc_414516
0x414514: mov     eax, ebx
0x414516: mov     ebp, [esp+0Ch+Src]
0x41451A: cmp     ebp, eax
0x41451C: jb      short loc_41454F
0x41451E: cmp     ecx, 10h
0x414521: jb      short loc_414527
0x414523: mov     eax, [ebx]
0x414525: jmp     short loc_414529
0x414527: mov     eax, ebx
0x414529: mov     edx, [esi+14h]
0x41452C: add     edx, eax
0x41452E: cmp     edx, ebp
0x414530: jbe     short loc_41454F
0x414532: cmp     ecx, 10h
0x414535: jb      short loc_414539
0x414537: mov     ebx, [ebx]
0x414539: mov     eax, [esp+0Ch+MaxCount]
0x41453D: push    eax
0x41453E: sub     ebp, ebx
0x414540: push    ebp
0x414541: push    esi
0x414542: mov     ecx, esi
0x414544: call    sub_414420
0x414549: pop     esi
0x41454A: pop     ebp
0x41454B: pop     ebx
0x41454C: retn    8
0x41454F: push    edi; MaxCount
0x414550: mov     edi, [esp+10h+MaxCount]
0x414554: cmp     edi, 0FFFFFFFEh
0x414557: jbe     short loc_41455E
0x414559: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x41455E: mov     eax, [esi+18h]
0x414561: cmp     eax, edi
0x414563: jnb     short loc_414581
0x414565: mov     ecx, [esi+14h]
0x414568: push    ecx; MaxCount
0x414569: push    edi; Dst
0x41456A: mov     ecx, esi
0x41456C: call    sub_4135C0
0x414571: test    edi, edi
0x414573: jbe     short loc_4145B8
0x414575: mov     ecx, [esi+18h]
0x414578: cmp     ecx, 10h
0x41457B: jb      short loc_41459B
0x41457D: mov     eax, [ebx]
0x41457F: jmp     short loc_41459D
0x414581: test    edi, edi
0x414583: jnz     short loc_414573
0x414585: cmp     eax, 10h
0x414588: mov     [esi+14h], edi
0x41458B: jb      short loc_41458F
0x41458D: mov     ebx, [ebx]
0x41458F: pop     edi
0x414590: mov     eax, esi
0x414592: pop     esi
0x414593: pop     ebp
0x414594: mov     byte ptr [ebx], 0
0x414597: pop     ebx
0x414598: retn    8
0x41459B: mov     eax, ebx
0x41459D: push    edi; Src
0x41459E: push    ebp; Src
0x41459F: push    ecx; DstSize
0x4145A0: push    eax; Dst
0x4145A1: call    _memcpy_s
0x4145A6: add     esp, 10h
0x4145A9: cmp     dword ptr [esi+18h], 10h
0x4145AD: mov     [esi+14h], edi
0x4145B0: jb      short loc_4145B4
0x4145B2: mov     ebx, [ebx]
0x4145B4: mov     byte ptr [ebx+edi], 0
0x4145B8: pop     edi
0x4145B9: mov     eax, esi
0x4145BB: pop     esi
0x4145BC: pop     ebp
0x4145BD: pop     ebx
0x4145BE: retn    8
