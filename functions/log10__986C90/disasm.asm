0x986C90: cmp     dword ptr ds:0BAABDCh, 0
0x986C97: jz      __log10_default
0x986C9D: sub     esp, 8
0x986CA0: stmxcsr [esp+8+var_4]
0x986CA5: mov     eax, [esp+8+var_4]
0x986CA9: and     eax, 1F80h
0x986CAE: cmp     eax, 1F80h
0x986CB3: jnz     short _log10___jnedef_8
0x986CB5: fnstcw  [esp+8+var_8]
0x986CB8: mov     ax, [esp+8+var_8]
0x986CBC: and     ax, 7Fh
0x986CC0: cmp     ax, 7Fh
