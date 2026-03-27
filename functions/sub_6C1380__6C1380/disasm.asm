0x6C1380: push    edi
0x6C1381: mov     edi, [esp+4+arg_8]
0x6C1385: test    edi, edi
0x6C1387: jbe     short loc_6C13A7
0x6C1389: push    ebx
0x6C138A: mov     ebx, [esp+8+arg_0]
0x6C138E: push    esi
0x6C138F: mov     esi, [esp+0Ch+arg_4]
0x6C1393: push    esi
0x6C1394: push    ebx
0x6C1395: call    sub_6C1240
0x6C139A: add     esp, 8
0x6C139D: add     esi, 40h ; '@'
0x6C13A0: sub     edi, 1
0x6C13A3: jnz     short loc_6C1393
0x6C13A5: pop     esi
0x6C13A6: pop     ebx
0x6C13A7: pop     edi
0x6C13A8: retn
