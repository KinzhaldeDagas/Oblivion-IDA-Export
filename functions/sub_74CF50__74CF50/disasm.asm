0x74CF50: push    esi
0x74CF51: push    edi
0x74CF52: mov     edi, [esp+8+arg_0]
0x74CF56: push    edi
0x74CF57: mov     esi, ecx
0x74CF59: call    sub_753080
0x74CF5E: test    al, al
0x74CF60: jnz     short loc_74CF69
0x74CF62: pop     edi
0x74CF63: xor     al, al
0x74CF65: pop     esi
0x74CF66: retn    4
0x74CF69: fld     dword ptr [esi+54h]
0x74CF6C: fld     dword ptr [edi+54h]
0x74CF6F: fucompp
0x74CF71: fnstsw  ax
0x74CF73: test    ah, 44h
0x74CF76: jp      short loc_74CF62
0x74CF78: pop     edi
0x74CF79: mov     al, 1
0x74CF7B: pop     esi
0x74CF7C: retn    4
