0x6C0A40: push    edi
0x6C0A41: mov     edi, [esp+4+arg_8]
0x6C0A45: test    edi, edi
0x6C0A47: jbe     short loc_6C0A67
0x6C0A49: push    ebx
0x6C0A4A: mov     ebx, [esp+8+arg_0]
0x6C0A4E: push    esi
0x6C0A4F: mov     esi, [esp+0Ch+arg_4]
0x6C0A53: push    esi
0x6C0A54: push    ebx
0x6C0A55: call    sub_6C0900
0x6C0A5A: add     esp, 8
0x6C0A5D: add     esi, 4Ch ; 'L'
0x6C0A60: sub     edi, 1
0x6C0A63: jnz     short loc_6C0A53
0x6C0A65: pop     esi
0x6C0A66: pop     ebx
0x6C0A67: pop     edi
0x6C0A68: retn
