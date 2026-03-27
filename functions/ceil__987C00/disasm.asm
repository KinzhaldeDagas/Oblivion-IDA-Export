0x987C00: cmp     dword_BAABDC, 0
0x987C07: jz      __floor_default_0
0x987C0D: sub     esp, 8
0x987C10: stmxcsr [esp+8+var_4]
0x987C15: mov     eax, [esp+8+var_4]
0x987C19: and     eax, 1F80h
0x987C1E: cmp     eax, 1F80h
0x987C23: jnz     short _ceil___jnedef_10
0x987C25: fnstcw  [esp+8+var_8]
0x987C28: mov     ax, [esp+8+var_8]
0x987C2C: and     ax, 7Fh
0x987C30: cmp     ax, 7Fh
