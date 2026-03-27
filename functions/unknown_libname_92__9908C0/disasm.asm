0x9908C0: push    ebp
0x9908C1: mov     ebp, esp
0x9908C3: add     esp, 0FFFFFD30h
0x9908C9: push    ebx
0x9908CA: fstcw   [ebp+var_A4]
0x9908D1: wait
0x9908D2: cmp     dword_B320E8, 0
0x9908D9: jz      short unknown_libname_92___unknown_libname_94
0x9908DB: call    unknown_libname_115
0x9908E0: or      [ebp+var_2C8], 3
0x9908E7: call    unknown_libname_100
0x9908EC: pop     ebx
0x9908ED: leave
0x9908EE: retn
0x9908EF: fxch    st(1)
0x9908F1: fst     [ebp+var_86]
0x9908F7: fxch    st(1)
0x9908F9: fst     [ebp+var_7E]
0x9908FC: jmp     short unknown_libname_92___unknown_libname_93
