0x7A2440: push    ecx
0x7A2441: fld     dword ptr [ecx+8]
0x7A2444: fsub    dword ptr ds:0B429B0h
0x7A244A: fld     dword ptr [ecx+4]
0x7A244D: fsub    dword ptr ds:0B429ACh
0x7A2453: fld     dword ptr [ecx+0Ch]
0x7A2456: fsub    dword ptr ds:0B429B4h
0x7A245C: fld     st(1)
0x7A245E: fmulp   st(2), st
0x7A2460: fld     st(2)
0x7A2462: fmulp   st(3), st
0x7A2464: fxch    st(1)
0x7A2466: faddp   st(2), st
0x7A2468: fmul    st, st
0x7A246A: faddp   st(1), st
0x7A246C: fstp    [esp+4+var_4]
0x7A246F: mov     eax, [esp+4+var_4]
0x7A2472: sar     eax, 1
0x7A2474: add     eax, 1FC00000h
0x7A2479: mov     [esp+4+var_4], eax
0x7A247C: fld     [esp+4+var_4]
0x7A247F: fsub    dword ptr [ecx+44h]
0x7A2482: fld     dword ptr [ecx+40h]
0x7A2485: fsub    dword ptr [ecx+44h]
0x7A2488: fdivp   st(1), st
0x7A248A: fld1
0x7A248C: fsubrp  st(1), st
0x7A248E: fstp    [esp+4+var_4]
0x7A2491: fld     [esp+4+var_4]
0x7A2494: fst     dword ptr [ecx+14h]
0x7A2497: fld1
0x7A2499: fcom    st(1)
0x7A249B: fnstsw  ax
0x7A249D: test    ah, 5
0x7A24A0: jp      short loc_7A24AC
0x7A24A2: fstp    st(1)
0x7A24A4: fstp    dword ptr [ecx+14h]
0x7A24A7: fld     dword ptr [ecx+14h]
0x7A24AA: pop     ecx
0x7A24AB: retn
0x7A24AC: fstp    st
0x7A24AE: fldz
0x7A24B0: fcom    st(1)
0x7A24B2: fnstsw  ax
0x7A24B4: fstp    st(1)
0x7A24B6: test    ah, 41h
0x7A24B9: jz      short loc_7A24A4
0x7A24BB: fstp    st
0x7A24BD: fld     dword ptr [ecx+14h]
0x7A24C0: pop     ecx
0x7A24C1: retn
