0x985870: cmp     dword ptr ds:0BAABDCh, 0
0x985877: jz      short __CIasin_____CIasin_default
0x985879: sub     esp, 8
0x98587C: stmxcsr [esp+8+var_4]
0x985881: mov     eax, [esp+8+var_4]
0x985885: and     eax, 1F80h
0x98588A: cmp     eax, 1F80h
0x98588F: jnz     short __CIasin___jnedef_0
0x985891: fnstcw  [esp+8+var_8]
0x985894: mov     ax, [esp+8+var_8]
0x985898: and     ax, 7Fh
0x98589C: cmp     ax, 7Fh
