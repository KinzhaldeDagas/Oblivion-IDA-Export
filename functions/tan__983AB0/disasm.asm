0x983AB0: cmp     dword ptr ds:0BAABDCh, 0
0x983AB7: jz      start_10_____tan_default
0x983ABD: sub     esp, 8
0x983AC0: stmxcsr [esp+8+var_4]
0x983AC5: mov     eax, [esp+8+var_4]
0x983AC9: and     eax, 1F80h
0x983ACE: cmp     eax, 1F80h
0x983AD3: jnz     short _tan___jnedef
0x983AD5: fnstcw  [esp+8+var_8]
0x983AD8: mov     ax, [esp+8+var_8]
0x983ADC: and     ax, 7Fh
0x983AE0: cmp     ax, 7Fh
