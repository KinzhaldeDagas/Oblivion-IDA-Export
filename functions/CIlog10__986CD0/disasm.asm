0x986CD0: cmp     dword ptr ds:0BAABDCh, 0
0x986CD7: jz      short __CIlog10_____CIlog10_default
0x986CD9: sub     esp, 8
0x986CDC: stmxcsr [esp+8+var_4]
0x986CE1: mov     eax, [esp+8+var_4]
0x986CE5: and     eax, 1F80h
0x986CEA: cmp     eax, 1F80h
0x986CEF: jnz     short loc_986D00
0x986CF1: fnstcw  [esp+8+var_8]
0x986CF4: mov     ax, [esp+8+var_8]
0x986CF8: and     ax, 7Fh
0x986CFC: cmp     ax, 7Fh
0x986D00: lea     esp, [esp+8]
0x986D04: jnz     short __CIlog10_____CIlog10_default
0x986D06: jmp     __CIlog10_pentium4
