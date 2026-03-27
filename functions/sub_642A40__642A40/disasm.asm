0x642A40: push    ebx
0x642A41: mov     ebx, [esp+4+arg_0]
0x642A45: push    esi
0x642A46: push    ebx
0x642A47: mov     esi, ecx
0x642A49: call    sub_4392E0
0x642A4E: test    bl, bl
0x642A50: jnz     short loc_642A65
0x642A52: mov     ecx, [esi+30h]
0x642A55: mov     edx, [esi+28h]
0x642A58: mov     eax, [ecx]
0x642A5A: pop     esi
0x642A5B: pop     ebx
0x642A5C: mov     [esp+arg_0], edx
0x642A60: mov     eax, [eax+10h]
0x642A63: jmp     eax
0x642A65: pop     esi
0x642A66: pop     ebx
0x642A67: retn    4
