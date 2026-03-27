0x6FAC70: push    esi
0x6FAC71: push    edi
0x6FAC72: mov     edi, [esp+8+arg_0]
0x6FAC76: push    edi
0x6FAC77: mov     esi, ecx
0x6FAC79: call    sub_752CD0
0x6FAC7E: test    al, al
0x6FAC80: jz      short loc_6FAC9A
0x6FAC82: fld     dword ptr [esi+18h]
0x6FAC85: fld     dword ptr [edi+18h]
0x6FAC88: fucompp
0x6FAC8A: fnstsw  ax
0x6FAC8C: test    ah, 44h
0x6FAC8F: jp      short loc_6FAC98
0x6FAC91: pop     edi
0x6FAC92: mov     al, 1
0x6FAC94: pop     esi
0x6FAC95: retn    4
0x6FAC98: xor     al, al
0x6FAC9A: pop     edi
0x6FAC9B: pop     esi
0x6FAC9C: retn    4
