0x563F90: fldz
0x563F92: fld     st
0x563F94: fld     [esp+arg_0]
0x563F98: fucom   st(1)
0x563F9A: fnstsw  ax
0x563F9C: fstp    st(1)
0x563F9E: test    ah, 44h
0x563FA1: jp      short loc_563FAC
0x563FA3: fstp    st
0x563FA5: mov     al, 1
0x563FA7: fstp    st
0x563FA9: retn    4
0x563FAC: fxch    st(1)
0x563FAE: fcomp   dword ptr [ecx+0ECh]
0x563FB4: fnstsw  ax
0x563FB6: test    ah, 44h
0x563FB9: jp      short loc_564004
0x563FBB: movzx   eax, byte ptr ds:0B3A000h
0x563FC2: fld     dword ptr ds:0B3A024h
0x563FC8: fld     st
0x563FCA: mov     [esp+arg_0], eax
0x563FCE: fidiv   dword ptr ds:0B3A01Ch
0x563FD4: fild    [esp+arg_0]
0x563FD8: fmulp   st(1), st
0x563FDA: fxch    st(1)
0x563FDC: faddp   st(2), st
0x563FDE: faddp   st(1), st
0x563FE0: fstp    dword ptr [ecx+0ECh]
0x563FE6: mov     cl, ds:0B3A000h
0x563FEC: add     cl, 1
0x563FEF: movzx   eax, cl
0x563FF2: cdq
0x563FF3: idiv    dword ptr ds:0B3A01Ch
0x563FF9: mov     al, 1
0x563FFB: mov     ds:0B3A000h, dl
0x564001: retn    4
0x564004: fld     dword ptr [ecx+0ECh]
0x56400A: xor     dl, dl
0x56400C: fcomp   st(1)
0x56400E: fnstsw  ax
0x564010: test    ah, 5
0x564013: jp      short loc_564028
0x564015: fadd    dword ptr ds:0B3A024h
0x56401B: mov     dl, 1
0x56401D: mov     al, dl
0x56401F: fstp    dword ptr [ecx+0ECh]
0x564025: retn    4
0x564028: fstp    st
0x56402A: mov     al, dl
0x56402C: retn    4
