0x986300: cmp     dword ptr ds:0BAABDCh, 0
0x986307: jz      short __CIsin_____CIsin_default
0x986309: sub     esp, 8
0x98630C: stmxcsr [esp+8+var_4]
0x986311: mov     eax, [esp+8+var_4]
0x986315: and     eax, 1F80h
0x98631A: cmp     eax, 1F80h
0x98631F: jnz     short loc_986330
0x986321: fnstcw  word ptr [esp+8+var_8]
0x986324: mov     ax, word ptr [esp+8+var_8]
0x986328: and     ax, 7Fh
0x98632C: cmp     ax, 7Fh
0x986330: lea     esp, [esp+8]
0x986334: jnz     short __CIsin_____CIsin_default
0x986336: jmp     __CIsin_pentium4
0x98633B: sub     esp, 0Ch
0x98633E: fst     qword ptr [esp]
0x986341: call    unknown_libname_161
0x986346: call    start_6
0x98634B: add     esp, 0Ch
0x98634E: retn
