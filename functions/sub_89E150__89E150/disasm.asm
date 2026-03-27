0x89E150: push    esi
0x89E151: push    edi
0x89E152: mov     edi, [esp+8+arg_0]
0x89E156: push    edi
0x89E157: mov     esi, ecx
0x89E159: call    sub_89D6F0
0x89E15E: test    al, al
0x89E160: jz      short loc_89E197
0x89E162: test    esi, esi
0x89E164: jz      short loc_89E172
0x89E166: mov     esi, [esi+8]
0x89E169: test    esi, esi
0x89E16B: jz      short loc_89E172
0x89E16D: mov     esi, [esi+18h]
0x89E170: jmp     short loc_89E174
0x89E172: xor     esi, esi
0x89E174: test    edi, edi
0x89E176: jz      short loc_89E18E
0x89E178: mov     ecx, [edi+8]
0x89E17B: test    ecx, ecx
0x89E17D: jz      short loc_89E18E
0x89E17F: mov     ecx, [ecx+18h]
0x89E182: cmp     esi, ecx
0x89E184: setz    cl
0x89E187: pop     edi
0x89E188: and     al, cl
0x89E18A: pop     esi
0x89E18B: retn    4
0x89E18E: xor     ecx, ecx
0x89E190: cmp     esi, ecx
0x89E192: setz    cl
0x89E195: and     al, cl
0x89E197: pop     edi
0x89E198: pop     esi
0x89E199: retn    4
