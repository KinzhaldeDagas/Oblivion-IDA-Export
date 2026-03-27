0x9363E0: movzx   eax, byte ptr [ecx+21h]
0x9363E4: dec     eax
0x9363E5: push    ebx
0x9363E6: push    esi
0x9363E7: js      short loc_936401
0x9363E9: mov     esi, [esp+8+arg_4]
0x9363ED: mov     dl, [esi]
0x9363EF: nop
0x9363F0: cmp     [ecx+eax*4], dl
0x9363F3: jnz     short loc_9363FE
0x9363F5: mov     bl, [ecx+eax*4+1]
0x9363F9: cmp     bl, [esi+1]
0x9363FC: jz      short loc_93640D
0x9363FE: dec     eax
0x9363FF: jns     short loc_9363F0
0x936401: mov     eax, [esp+8+arg_0]
0x936405: pop     esi
0x936406: mov     byte ptr [eax], 0
0x936409: pop     ebx
0x93640A: retn    8
0x93640D: mov     eax, [esp+8+arg_0]
0x936411: pop     esi
0x936412: mov     byte ptr [eax], 1
0x936415: pop     ebx
0x936416: retn    8
