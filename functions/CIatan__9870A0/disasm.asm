0x9870A0: cmp     dword ptr ds:0BAABDCh, 0
0x9870A7: jz      short __CIatan_____CIatan_default
0x9870A9: sub     esp, 8
0x9870AC: stmxcsr [esp+8+var_4]
0x9870B1: mov     eax, [esp+8+var_4]
0x9870B5: and     eax, 1F80h
0x9870BA: cmp     eax, 1F80h
0x9870BF: jnz     short __CIatan___jnedef_9
0x9870C1: fnstcw  [esp+8+var_8]
0x9870C4: mov     ax, [esp+8+var_8]
0x9870C8: and     ax, 7Fh
0x9870CC: cmp     ax, 7Fh
