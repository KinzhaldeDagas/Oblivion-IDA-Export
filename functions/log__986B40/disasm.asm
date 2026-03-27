0x986B40: cmp     dword ptr ds:0BAABDCh, 0
0x986B47: jz      __log_default
0x986B4D: sub     esp, 8
0x986B50: stmxcsr [esp+8+var_4]
0x986B55: mov     eax, [esp+8+var_4]
0x986B59: and     eax, 1F80h
0x986B5E: cmp     eax, 1F80h
0x986B63: jnz     short loc_986B74
0x986B65: fnstcw  [esp+8+var_8]
0x986B68: mov     ax, [esp+8+var_8]
0x986B6C: and     ax, 7Fh
0x986B70: cmp     ax, 7Fh
0x986B74: lea     esp, [esp+8]
0x986B78: jnz     short __log_default
0x986B7A: jmp     _log_____log_pentium4
