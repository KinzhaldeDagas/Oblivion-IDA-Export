0x9860F0: cmp     dword ptr ds:0BAABDCh, 0
0x9860F7: jz      __acos_default
0x9860FD: sub     esp, 8
0x986100: stmxcsr [esp+8+var_4]
0x986105: mov     eax, [esp+8+var_4]
0x986109: and     eax, 1F80h
0x98610E: cmp     eax, 1F80h
0x986113: jnz     short loc_986124
0x986115: fnstcw  [esp+8+var_8]
0x986118: mov     ax, [esp+8+var_8]
0x98611C: and     ax, 7Fh
0x986120: cmp     ax, 7Fh
0x986124: lea     esp, [esp+8]
0x986128: jnz     short __acos_default
0x98612A: jmp     _acos_____acos_pentium4
