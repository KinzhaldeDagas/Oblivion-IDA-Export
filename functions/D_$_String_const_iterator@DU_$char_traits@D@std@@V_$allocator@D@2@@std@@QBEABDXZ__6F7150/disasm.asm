0x6F7150: push    esi
0x6F7151: mov     esi, ecx
0x6F7153: mov     eax, [esi]
0x6F7155: cmp     eax, 0FFFFFFFEh
0x6F7158: jz      short loc_6F7182
0x6F715A: test    eax, eax
0x6F715C: jnz     short loc_6F7163
0x6F715E: call    __invalid_parameter_noinfo
0x6F7163: mov     eax, [esi]
0x6F7165: cmp     dword ptr [eax+18h], 10h
0x6F7169: jb      short loc_6F7170
0x6F716B: mov     ecx, [eax+4]
0x6F716E: jmp     short loc_6F7173
0x6F7170: lea     ecx, [eax+4]
0x6F7173: mov     eax, [eax+14h]
0x6F7176: add     eax, ecx
0x6F7178: cmp     [esi+4], eax
0x6F717B: jb      short loc_6F7182
0x6F717D: call    __invalid_parameter_noinfo
0x6F7182: mov     eax, [esi+4]
0x6F7185: pop     esi
0x6F7186: retn
