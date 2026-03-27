0x753F50: push    esi
0x753F51: push    edi
0x753F52: mov     edi, [esp+8+arg_0]
0x753F56: push    edi
0x753F57: mov     esi, ecx
0x753F59: call    sub_75E890
0x753F5E: test    al, al
0x753F60: jnz     short loc_753F69
0x753F62: pop     edi
0x753F63: xor     al, al
0x753F65: pop     esi
0x753F66: retn    4
0x753F69: fld     dword ptr [edi+30h]
0x753F6C: fld     dword ptr [esi+30h]
0x753F6F: fucompp
0x753F71: fnstsw  ax
0x753F73: test    ah, 44h
0x753F76: jp      short loc_753F62
0x753F78: pop     edi
0x753F79: mov     al, 1
0x753F7B: pop     esi
0x753F7C: retn    4
