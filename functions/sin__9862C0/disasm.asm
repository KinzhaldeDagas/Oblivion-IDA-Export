0x9862C0: cmp     dword ptr ds:0BAABDCh, 0
0x9862C7: jz      start_14_____sin_default
0x9862CD: sub     esp, 8
0x9862D0: stmxcsr [esp+8+var_4]
0x9862D5: mov     eax, [esp+8+var_4]
0x9862D9: and     eax, 1F80h
0x9862DE: cmp     eax, 1F80h
0x9862E3: jnz     short _sin___jnedef_5
0x9862E5: fnstcw  [esp+8+var_8]
0x9862E8: mov     ax, [esp+8+var_8]
0x9862EC: and     ax, 7Fh
0x9862F0: cmp     ax, 7Fh
