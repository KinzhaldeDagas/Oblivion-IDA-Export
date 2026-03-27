0x987060: cmp     dword ptr ds:0BAABDCh, 0
0x987067: jz      __atan_default
0x98706D: sub     esp, 8
0x987070: stmxcsr [esp+8+var_4]
0x987075: mov     eax, [esp+8+var_4]
0x987079: and     eax, 1F80h
0x98707E: cmp     eax, 1F80h
0x987083: jnz     short loc_987094
0x987085: fnstcw  [esp+8+var_8]
0x987088: mov     ax, [esp+8+var_8]
0x98708C: and     ax, 7Fh
0x987090: cmp     ax, 7Fh
0x987094: lea     esp, [esp+8]
0x987098: jnz     short __atan_default
0x98709A: jmp     _atan_____atan_pentium4
