0x91B2A0: mov     edx, [ecx+14h]
0x91B2A3: add     ecx, 0FFFFFFE0h
0x91B2A6: xor     eax, eax
0x91B2A8: test    edx, edx
0x91B2AA: jle     short locret_91B2C7
0x91B2AC: push    esi
0x91B2AD: mov     esi, [ecx+30h]
0x91B2B0: push    edi
0x91B2B1: mov     edi, [esp+8+arg_0]
0x91B2B5: push    ebx
0x91B2B6: mov     ebx, [esi]
0x91B2B8: cmp     [ebx], edi
0x91B2BA: jz      short loc_91B2CA
0x91B2BC: inc     eax
0x91B2BD: add     esi, 4
0x91B2C0: cmp     eax, edx
0x91B2C2: jl      short loc_91B2B6
0x91B2C4: pop     ebx
0x91B2C5: pop     edi
0x91B2C6: pop     esi
0x91B2C7: retn    4
0x91B2CA: test    eax, eax
0x91B2CC: jl      short loc_91B2C4
0x91B2CE: pop     ebx
0x91B2CF: pop     edi
0x91B2D0: pop     esi
0x91B2D1: mov     [esp+arg_0], eax
0x91B2D5: jmp     sub_91B160
