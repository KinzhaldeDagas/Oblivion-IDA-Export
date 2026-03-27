0x548C50: fld     dword ptr ds:0B37E00h
0x548C56: fmul    [esp+arg_0]
0x548C5A: fadd    dword ptr ds:0B37DF8h
0x548C60: fstp    [esp+arg_0]
0x548C64: fld     [esp+arg_0]
0x548C68: fld     dword ptr ds:0B37E08h
0x548C6E: fcomp   st(1)
0x548C70: fnstsw  ax
0x548C72: test    ah, 41h
0x548C75: jnz     short loc_548C7C
0x548C77: fstp    st
0x548C79: xor     eax, eax
0x548C7B: retn
0x548C7C: fld     dword ptr ds:0B37E10h
0x548C82: fcomp   st(1)
0x548C84: fnstsw  ax
0x548C86: test    ah, 41h
0x548C89: jnz     short loc_548C93
0x548C8B: fstp    st
0x548C8D: mov     eax, 1
0x548C92: retn
0x548C93: fld     dword ptr ds:0B37E18h
0x548C99: fcomp   st(1)
0x548C9B: fnstsw  ax
0x548C9D: test    ah, 41h
0x548CA0: jnz     short loc_548CAA
0x548CA2: fstp    st
0x548CA4: mov     eax, 2
0x548CA9: retn
0x548CAA: fld     dword ptr ds:0B37E20h
0x548CB0: fcompp
0x548CB2: fnstsw  ax
0x548CB4: test    ah, 41h
0x548CB7: mov     eax, 3
0x548CBC: jz      short locret_548CC3
0x548CBE: mov     eax, 4
0x548CC3: retn
