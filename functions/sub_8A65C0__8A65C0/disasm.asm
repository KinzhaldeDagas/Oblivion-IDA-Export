0x8A65C0: push    esi
0x8A65C1: lea     esi, [ecx+0A0h]
0x8A65C7: mov     ecx, [esi+4]
0x8A65CA: xor     eax, eax
0x8A65CC: test    ecx, ecx
0x8A65CE: jle     short loc_8A65DF
0x8A65D0: mov     edx, [esi]
0x8A65D2: cmp     dword ptr [edx], 0
0x8A65D5: jz      short loc_8A6610
0x8A65D7: inc     eax
0x8A65D8: add     edx, 4
0x8A65DB: cmp     eax, ecx
0x8A65DD: jl      short loc_8A65D2
0x8A65DF: mov     eax, [esi+8]
0x8A65E2: mov     ecx, [esi+4]
0x8A65E5: and     eax, 3FFFFFFFh
0x8A65EA: cmp     ecx, eax
0x8A65EC: jnz     short loc_8A65F9
0x8A65EE: push    4
0x8A65F0: push    esi
0x8A65F1: call    sub_8A6EE0
0x8A65F6: add     esp, 8
0x8A65F9: mov     ecx, [esi+4]
0x8A65FC: mov     edx, [esi]
0x8A65FE: mov     eax, [esp+4+arg_0]
0x8A6602: mov     [edx+ecx*4], eax
0x8A6605: mov     eax, [esi+4]
0x8A6608: inc     eax
0x8A6609: mov     [esi+4], eax
0x8A660C: pop     esi
0x8A660D: retn    4
0x8A6610: test    eax, eax
0x8A6612: jl      short loc_8A65DF
0x8A6614: mov     ecx, [esi]
0x8A6616: mov     edx, [esp+4+arg_0]
0x8A661A: mov     [ecx+eax*4], edx
0x8A661D: pop     esi
0x8A661E: retn    4
