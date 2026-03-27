0x6BEC20: push    edi
0x6BEC21: mov     edi, [esp+4+arg_8]
0x6BEC25: test    edi, edi
0x6BEC27: jbe     short loc_6BEC47
0x6BEC29: push    ebx
0x6BEC2A: mov     ebx, [esp+8+arg_0]
0x6BEC2E: push    esi
0x6BEC2F: mov     esi, [esp+0Ch+arg_4]
0x6BEC33: push    esi
0x6BEC34: push    ebx
0x6BEC35: call    sub_6BEAD0
0x6BEC3A: add     esp, 8
0x6BEC3D: add     esi, 48h ; 'H'
0x6BEC40: sub     edi, 1
0x6BEC43: jnz     short loc_6BEC33
0x6BEC45: pop     esi
0x6BEC46: pop     ebx
0x6BEC47: pop     edi
0x6BEC48: retn
