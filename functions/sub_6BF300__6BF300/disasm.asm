0x6BF300: push    edi
0x6BF301: mov     edi, [esp+4+arg_8]
0x6BF305: test    edi, edi
0x6BF307: jbe     short loc_6BF327
0x6BF309: push    ebx
0x6BF30A: mov     ebx, [esp+8+arg_0]
0x6BF30E: push    esi
0x6BF30F: mov     esi, [esp+0Ch+arg_4]
0x6BF313: push    esi
0x6BF314: push    ebx
0x6BF315: call    sub_6BB620
0x6BF31A: add     esp, 8
0x6BF31D: add     esi, 8
0x6BF320: sub     edi, 1
0x6BF323: jnz     short loc_6BF313
0x6BF325: pop     esi
0x6BF326: pop     ebx
0x6BF327: pop     edi
0x6BF328: retn
