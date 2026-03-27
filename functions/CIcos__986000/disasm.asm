0x986000: cmp     dword ptr ds:0BAABDCh, 0
0x986007: jz      short __CIcos_____CIcos_default
0x986009: sub     esp, 8
0x98600C: stmxcsr [esp+8+var_4]
0x986011: mov     eax, [esp+8+var_4]
0x986015: and     eax, 1F80h
0x98601A: cmp     eax, 1F80h
0x98601F: jnz     short __CIcos___jnedef_3
0x986021: fnstcw  word ptr [esp+8+var_8]
0x986024: mov     ax, word ptr [esp+8+var_8]
0x986028: and     ax, 7Fh
0x98602C: cmp     ax, 7Fh
0x986030: lea     esp, [esp+8]
0x986034: jnz     short __CIcos_____CIcos_default
0x986036: jmp     __CIcos_pentium4
0x98603B: sub     esp, 0Ch
0x98603E: fst     qword ptr [esp]
0x986041: call    unknown_libname_161
0x986046: call    start_4
0x98604B: add     esp, 0Ch
0x98604E: retn
