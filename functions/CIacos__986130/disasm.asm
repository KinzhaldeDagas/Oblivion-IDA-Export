0x986130: cmp     dword ptr ds:0BAABDCh, 0
0x986137: jz      short __CIacos_____CIacos_default
0x986139: sub     esp, 8
0x98613C: stmxcsr [esp+8+var_4]
0x986141: mov     eax, [esp+8+var_4]
0x986145: and     eax, 1F80h
0x98614A: cmp     eax, 1F80h
0x98614F: jnz     short __CIacos___jnedef_4
0x986151: fnstcw  [esp+8+var_8]
0x986154: mov     ax, [esp+8+var_8]
0x986158: and     ax, 7Fh
0x98615C: cmp     ax, 7Fh
