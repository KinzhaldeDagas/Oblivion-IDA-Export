0x9866BC: cmp     dword ptr ds:0BAABDCh, 0
0x9866C3: jz      short __CIexp_____CIexp_default
0x9866C5: sub     esp, 8
0x9866C8: stmxcsr [esp+8+var_4]
0x9866CD: mov     eax, [esp+8+var_4]
0x9866D1: and     eax, 1F80h
0x9866D6: cmp     eax, 1F80h
0x9866DB: jnz     short loc_9866EC
0x9866DD: fnstcw  [esp+8+var_8]
0x9866E0: mov     ax, [esp+8+var_8]
0x9866E4: and     ax, 7Fh
0x9866E8: cmp     ax, 7Fh
0x9866EC: lea     esp, [esp+8]
0x9866F0: jnz     short __CIexp_____CIexp_default
0x9866F2: jmp     __CIexp_pentium4
