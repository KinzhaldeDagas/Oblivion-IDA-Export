0x6DEB40: push    esi
0x6DEB41: push    edi
0x6DEB42: mov     edi, [esp+8+arg_0]
0x6DEB46: push    edi
0x6DEB47: mov     esi, ecx
0x6DEB49: call    sub_6EC5C0
0x6DEB4E: test    al, al
0x6DEB50: jnz     short loc_6DEB57
0x6DEB52: pop     edi
0x6DEB53: pop     esi
0x6DEB54: retn    4
0x6DEB57: mov     al, [edi+40h]
0x6DEB5A: xor     al, [esi+40h]
0x6DEB5D: pop     edi
0x6DEB5E: test    al, 7
0x6DEB60: setz    al
0x6DEB63: pop     esi
0x6DEB64: retn    4
