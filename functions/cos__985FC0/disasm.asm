0x985FC0: cmp     dword ptr ds:0BAABDCh, 0
0x985FC7: jz      start_12_____cos_default
0x985FCD: sub     esp, 8
0x985FD0: stmxcsr [esp+8+var_4]
0x985FD5: mov     eax, [esp+8+var_4]
0x985FD9: and     eax, 1F80h
0x985FDE: cmp     eax, 1F80h
0x985FE3: jnz     short loc_985FF4
0x985FE5: fnstcw  word ptr [esp+8+var_8]
0x985FE8: mov     ax, word ptr [esp+8+var_8]
0x985FEC: and     ax, 7Fh
0x985FF0: cmp     ax, 7Fh
0x985FF4: lea     esp, [esp+8]
0x985FF8: jnz     short start_12_____cos_default
0x985FFA: jmp     _cos_____cos_pentium4
