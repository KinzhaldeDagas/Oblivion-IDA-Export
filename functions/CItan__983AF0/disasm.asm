0x983AF0: cmp     dword ptr ds:0BAABDCh, 0
0x983AF7: jz      short __CItan_____CItan_default
0x983AF9: sub     esp, 8
0x983AFC: stmxcsr [esp+8+var_4]
0x983B01: mov     eax, [esp+8+var_4]
0x983B05: and     eax, 1F80h
0x983B0A: cmp     eax, 1F80h
0x983B0F: jnz     short loc_983B20
0x983B11: fnstcw  [esp+8+var_8]
0x983B14: mov     ax, [esp+8+var_8]
0x983B18: and     ax, 7Fh
0x983B1C: cmp     ax, 7Fh
0x983B20: lea     esp, [esp+8]
0x983B24: jnz     short __CItan_____CItan_default
0x983B26: jmp     __CItan_pentium4
