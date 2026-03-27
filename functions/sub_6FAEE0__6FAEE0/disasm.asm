0x6FAEE0: push    ecx
0x6FAEE1: fldz
0x6FAEE3: fld     [esp+4+arg_0]
0x6FAEE7: fcom    st(1)
0x6FAEE9: fnstsw  ax
0x6FAEEB: fld     dword ptr ds:0B3F9A0h
0x6FAEF1: test    ah, 5
0x6FAEF4: jnp     short loc_6FAEFC
0x6FAEF6: fstp    st(2)
0x6FAEF8: jmp     short loc_6FAF17
0x6FAEFA: fxch    st(1)
0x6FAEFC: fld     st
0x6FAEFE: faddp   st(2), st
0x6FAF00: fxch    st(1)
0x6FAF02: fstp    [esp+4+arg_0]
0x6FAF06: fld     [esp+4+arg_0]
0x6FAF0A: fcom    st(2)
0x6FAF0C: fnstsw  ax
0x6FAF0E: test    ah, 5
0x6FAF11: jnp     short loc_6FAEFA
0x6FAF13: fstp    st(2)
0x6FAF15: fxch    st(1)
0x6FAF17: fld     st(1)
0x6FAF19: fcom    st(1)
0x6FAF1B: fnstsw  ax
0x6FAF1D: test    ah, 41h
0x6FAF20: jnp     short loc_6FAF2A
0x6FAF22: fstp    st(2)
0x6FAF24: fstp    st(1)
0x6FAF26: jmp     short loc_6FAF45
0x6FAF28: fxch    st(1)
0x6FAF2A: fld     st(2)
0x6FAF2C: fsubp   st(2), st
0x6FAF2E: fxch    st(1)
0x6FAF30: fstp    [esp+4+arg_0]
0x6FAF34: fld     [esp+4+arg_0]
0x6FAF38: fcom    st(1)
0x6FAF3A: fnstsw  ax
0x6FAF3C: test    ah, 1
0x6FAF3F: jz      short loc_6FAF28
0x6FAF41: fstp    st(2)
0x6FAF43: fstp    st
0x6FAF45: fmul    qword ptr ds:0A2FC70h
0x6FAF4B: fnstcw  word ptr [esp+4+arg_0]
0x6FAF4F: movzx   eax, word ptr [esp+4+arg_0]
0x6FAF54: or      eax, 0C00h
0x6FAF59: mov     [esp+4+var_4], eax
0x6FAF5C: fldcw   word ptr [esp+4+var_4]
0x6FAF5F: fistp   [esp+4+var_4]
0x6FAF62: mov     ax, word ptr [esp+4+var_4]
0x6FAF66: mov     [ecx+0Ch], ax
0x6FAF6A: fldcw   word ptr [esp+4+arg_0]
0x6FAF6E: pop     ecx
0x6FAF6F: retn    4
