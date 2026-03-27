0x4BFAA0: mov     edx, [esp+arg_0]
0x4BFAA4: fld     dword ptr [edx+4]
0x4BFAA7: fld     dword ptr [edx]
0x4BFAA9: fld     dword ptr [edx+8]
0x4BFAAC: fld     st(1)
0x4BFAAE: fmulp   st(2), st
0x4BFAB0: fld     st(2)
0x4BFAB2: fmulp   st(3), st
0x4BFAB4: fxch    st(1)
0x4BFAB6: faddp   st(2), st
0x4BFAB8: fmul    st, st
0x4BFABA: faddp   st(1), st
0x4BFABC: fstp    [esp+arg_0]
0x4BFAC0: mov     eax, [esp+arg_0]
0x4BFAC4: test    eax, eax
0x4BFAC6: jnz     short loc_4BFACC
0x4BFAC8: fldz
0x4BFACA: jmp     short loc_4BFB0C
0x4BFACC: mov     ecx, eax
0x4BFACE: shr     ecx, 17h
0x4BFAD1: sub     ecx, 7Fh
0x4BFAD4: movzx   ecx, cx
0x4BFAD7: and     eax, (offset loc_7FFFFA+5)
0x4BFADC: test    cl, 1
0x4BFADF: jz      short loc_4BFAE6
0x4BFAE1: or      eax, offset loc_800000
0x4BFAE6: sar     cx, 1
0x4BFAE9: movsx   ecx, cx
0x4BFAEC: add     ecx, 7Fh
0x4BFAEF: push    esi
0x4BFAF0: mov     esi, ds:0B3FD88h
0x4BFAF6: shr     eax, 10h
0x4BFAF9: shl     ecx, 17h
0x4BFAFC: or      ecx, [esi+eax*4]
0x4BFAFF: pop     esi
0x4BFB00: mov     [esp+arg_0], ecx
0x4BFB04: fld     [esp+arg_0]
0x4BFB08: fld1
0x4BFB0A: fdivrp  st(1), st
0x4BFB0C: fstp    [esp+arg_0]
0x4BFB10: fld     dword ptr [edx]
0x4BFB12: fld     [esp+arg_0]
0x4BFB16: fld     st
0x4BFB18: fmulp   st(2), st
0x4BFB1A: fxch    st(1)
0x4BFB1C: fstp    dword ptr [edx]
0x4BFB1E: fld     st
0x4BFB20: fmul    dword ptr [edx+4]
0x4BFB23: fstp    dword ptr [edx+4]
0x4BFB26: fmul    dword ptr [edx+8]
0x4BFB29: fstp    dword ptr [edx+8]
0x4BFB2C: retn
