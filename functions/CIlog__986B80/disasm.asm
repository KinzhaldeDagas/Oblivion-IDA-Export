0x986B80: cmp     dword ptr ds:0BAABDCh, 0
0x986B87: jz      short __CIlog_____CIlog_default
0x986B89: sub     esp, 8
0x986B8C: stmxcsr [esp+8+var_4]
0x986B91: mov     eax, [esp+8+var_4]
0x986B95: and     eax, 1F80h
0x986B9A: cmp     eax, 1F80h
0x986B9F: jnz     short __CIlog___jnedef_7
0x986BA1: fnstcw  [esp+8+var_8]
0x986BA4: mov     ax, [esp+8+var_8]
0x986BA8: and     ax, 7Fh
0x986BAC: cmp     ax, 7Fh
