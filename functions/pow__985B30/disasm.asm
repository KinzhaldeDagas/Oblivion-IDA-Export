0x985B30: cmp     dword ptr ds:0BAABDCh, 0
0x985B37: jz      __pow_default
0x985B3D: sub     esp, 8
0x985B40: stmxcsr [esp+8+var_4]
0x985B45: mov     eax, [esp+8+var_4]
0x985B49: and     eax, 1F80h
0x985B4E: cmp     eax, 1F80h
0x985B53: jnz     short loc_985B64
0x985B55: fnstcw  [esp+8+var_8]
0x985B58: mov     ax, [esp+8+var_8]
0x985B5C: and     ax, 7Fh
0x985B60: cmp     ax, 7Fh
0x985B64: lea     esp, [esp+8]
0x985B68: jnz     short __pow_default
0x985B6A: jmp     __pow_pentium4
