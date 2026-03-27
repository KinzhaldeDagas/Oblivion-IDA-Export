0x985B70: cmp     dword ptr ds:0BAABDCh, 0
0x985B77: jz      short __CIpow_____CIpow_default
0x985B79: sub     esp, 8
0x985B7C: stmxcsr [esp+8+var_4]
0x985B81: mov     eax, [esp+8+var_4]
0x985B85: and     eax, 1F80h
0x985B8A: cmp     eax, 1F80h
0x985B8F: jnz     short __CIpow___jnedef_2
0x985B91: fnstcw  [esp+8+var_8]
0x985B94: mov     ax, [esp+8+var_8]
0x985B98: and     ax, 7Fh
0x985B9C: cmp     ax, 7Fh
