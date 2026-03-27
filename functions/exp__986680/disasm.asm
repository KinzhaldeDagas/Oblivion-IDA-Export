0x986680: cmp     dword ptr ds:0BAABDCh, 0
0x986687: jz      short __CIexp_____exp_default
0x986689: sub     esp, 8
0x98668C: stmxcsr [esp+8+var_4]
0x986691: mov     eax, [esp+8+var_4]
0x986695: and     eax, 1F80h
0x98669A: cmp     eax, 1F80h
0x98669F: jnz     short _exp___jnedef_6
0x9866A1: fnstcw  [esp+8+var_8]
0x9866A4: mov     ax, [esp+8+var_8]
0x9866A8: and     ax, 7Fh
0x9866AC: cmp     ax, 7Fh
