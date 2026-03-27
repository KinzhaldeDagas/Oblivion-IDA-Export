0x6C4790: push    ebx
0x6C4791: push    esi
0x6C4792: mov     esi, ecx
0x6C4794: mov     eax, [esi+4]
0x6C4797: cmp     [esi+8], eax
0x6C479A: push    edi
0x6C479B: jnz     short loc_6C47B0
0x6C479D: test    eax, eax
0x6C479F: jbe     short loc_6C47A5
0x6C47A1: add     eax, eax
0x6C47A3: jmp     short loc_6C47AA
0x6C47A5: mov     eax, 1
0x6C47AA: push    eax
0x6C47AB: call    sub_6C40A0
0x6C47B0: mov     eax, [esi+8]
0x6C47B3: mov     ecx, [esi]
0x6C47B5: mov     ebx, [esp+0Ch+arg_0]
0x6C47B9: lea     edi, [ecx+eax*4]
0x6C47BC: add     eax, 1
0x6C47BF: mov     [esi+8], eax
0x6C47C2: mov     esi, [edi]
0x6C47C4: cmp     esi, [ebx]
0x6C47C6: jz      short loc_6C4800
0x6C47C8: test    esi, esi
0x6C47CA: jz      short loc_6C47E8
0x6C47CC: lea     edx, [esi+4]
0x6C47CF: push    edx; lpAddend
0x6C47D0: call    dword ptr ds:0A2807Ch
0x6C47D6: test    eax, eax
0x6C47D8: jnz     short loc_6C47E8
0x6C47DA: test    esi, esi
0x6C47DC: jz      short loc_6C47E8
0x6C47DE: mov     eax, [esi]
0x6C47E0: mov     edx, [eax]
0x6C47E2: push    1
0x6C47E4: mov     ecx, esi
0x6C47E6: call    edx
0x6C47E8: mov     eax, [ebx]
0x6C47EA: test    eax, eax
0x6C47EC: mov     [edi], eax
0x6C47EE: jz      short loc_6C4800
0x6C47F0: pop     edi
0x6C47F1: pop     esi
0x6C47F2: add     eax, 4
0x6C47F5: pop     ebx
0x6C47F6: mov     [esp+arg_0], eax
0x6C47FA: jmp     dword ptr ds:0A28078h
0x6C4800: pop     edi
0x6C4801: pop     esi
0x6C4802: pop     ebx
0x6C4803: retn    4
