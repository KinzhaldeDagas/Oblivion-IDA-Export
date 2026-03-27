0x990D10: fld     [esp+arg_C]
0x990D14: fld     [esp+arg_0]
0x990D18: mov     eax, dword ptr [esp+arg_0+4]
0x990D1C: add     eax, eax
0x990D1E: jnb     loc_990DAA
0x990D24: xor     eax, 0E000000h
0x990D29: test    eax, 0E000000h
0x990D2E: jz      short loc_990D33
0x990D30: fdivp   st(1), st
0x990D32: retn
0x990D33: shr     eax, 1Ch
0x990D36: cmp     byte_B319E0[eax], 0
0x990D3D: jnz     short loc_990D42
0x990D3F: fdivp   st(1), st
0x990D41: retn
0x990D42: mov     eax, dword ptr [esp+arg_0+8]
0x990D46: and     eax, 7FFFh
0x990D4B: jz      short loc_990DB4
0x990D4D: cmp     eax, 7FFFh
0x990D52: jz      short loc_990DB4
0x990D54: fnstcw  word ptr [esp+arg_18]
0x990D58: mov     eax, [esp+arg_18]
0x990D5C: or      eax, 33Fh
0x990D61: and     eax, 0F3FFh
0x990D66: mov     [esp+arg_1C], eax
0x990D6A: fldcw   word ptr [esp+arg_1C]
0x990D6E: mov     eax, dword ptr [esp+arg_C+8]
0x990D72: and     eax, 7FFFh
0x990D77: cmp     eax, 1
0x990D7A: jz      short loc_990D93
0x990D7C: fmul    flt_B319F0
0x990D82: fxch    st(1)
0x990D84: fmul    flt_B319F0
0x990D8A: fxch    st(1)
0x990D8C: fldcw   word ptr [esp+arg_18]
0x990D90: fdivp   st(1), st
0x990D92: retn
0x990D93: fmul    flt_B319F4
0x990D99: fxch    st(1)
0x990D9B: fmul    flt_B319F4
0x990DA1: fxch    st(1)
0x990DA3: fldcw   word ptr [esp+arg_18]
0x990DA7: fdivp   st(1), st
0x990DA9: retn
0x990DAA: mov     eax, dword ptr [esp+arg_0]
0x990DAE: or      eax, dword ptr [esp+arg_0+4]
0x990DB2: jnz     short loc_990DB7
0x990DB4: fdivp   st(1), st
0x990DB6: retn
0x990DB7: mov     eax, dword ptr [esp+arg_0+8]
0x990DBB: and     eax, 7FFFh
0x990DC0: jnz     short loc_990DB4
0x990DC2: fnstcw  word ptr [esp+arg_18]
0x990DC6: mov     eax, [esp+arg_18]
0x990DCA: or      eax, 33Fh
0x990DCF: and     eax, 0F3FFh
0x990DD4: mov     [esp+arg_1C], eax
0x990DD8: fldcw   word ptr [esp+arg_1C]
0x990DDC: mov     eax, dword ptr [esp+arg_C+8]
0x990DE0: and     eax, 7FFFh
0x990DE5: jz      short loc_990DF8
0x990DE7: cmp     eax, 7FFFh
0x990DEC: jz      short loc_990E20
0x990DEE: mov     eax, dword ptr [esp+arg_C+4]
0x990DF2: add     eax, eax
0x990DF4: jnb     short loc_990E20
0x990DF6: jmp     short loc_990E00
0x990DF8: mov     eax, dword ptr [esp+arg_C+4]
0x990DFC: add     eax, eax
0x990DFE: jb      short loc_990E20
0x990E00: fxch    st(1)
0x990E02: fstp    st
0x990E04: fld     st
0x990E06: fmul    flt_B319F8
0x990E0C: fstp    [esp+arg_0]
0x990E10: fld     [esp+arg_C]
0x990E14: fxch    st(1)
0x990E16: wait
0x990E17: fldcw   word ptr [esp+arg_18]
0x990E1B: jmp     loc_990D18
0x990E20: fldcw   word ptr [esp+arg_18]
0x990E24: fdivp   st(1), st
0x990E26: retn
