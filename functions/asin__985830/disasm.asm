0x985830: cmp     dword ptr ds:0BAABDCh, 0
0x985837: jz      __asin_default
0x98583D: sub     esp, 8
0x985840: stmxcsr [esp+8+var_4]
0x985845: mov     eax, [esp+8+var_4]
0x985849: and     eax, 1F80h
0x98584E: cmp     eax, 1F80h
0x985853: jnz     short loc_985864
0x985855: fnstcw  [esp+8+var_8]
0x985858: mov     ax, [esp+8+var_8]
0x98585C: and     ax, 7Fh
0x985860: cmp     ax, 7Fh
0x985864: lea     esp, [esp+8]
0x985868: jnz     short __asin_default
0x98586A: jmp     _asin_____asin_pentium4
