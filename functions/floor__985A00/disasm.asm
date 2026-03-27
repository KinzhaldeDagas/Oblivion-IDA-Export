0x985A00: cmp     dword ptr ds:0BAABDCh, 0
0x985A07: jz      __floor_default
0x985A0D: sub     esp, 8
0x985A10: stmxcsr [esp+8+var_4]
0x985A15: mov     eax, [esp+8+var_4]
0x985A19: and     eax, 1F80h
0x985A1E: cmp     eax, 1F80h
0x985A23: jnz     short _floor___jnedef_1
0x985A25: fnstcw  [esp+8+var_8]
0x985A28: mov     ax, [esp+8+var_8]
0x985A2C: and     ax, 7Fh
0x985A30: cmp     ax, 7Fh
