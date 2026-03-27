0x5A62D0: sub     esp, 10h
0x5A62D3: fldz
0x5A62D5: mov     eax, [esp+10h+arg_4]
0x5A62D9: mov     ecx, [esp+10h+arg_0]
0x5A62DD: fst     [esp+10h+var_10]
0x5A62E0: fld     dword ptr [eax]
0x5A62E2: fsub    dword ptr [ecx]
0x5A62E4: fstp    [esp+10h+var_C]
0x5A62E8: fld     dword ptr [eax+4]
0x5A62EB: fsub    dword ptr [ecx+4]
0x5A62EE: fstp    [esp+10h+var_8]
0x5A62F2: fld     st
0x5A62F4: fld     [esp+10h+var_8]
0x5A62F8: fucom   st(1)
0x5A62FA: fnstsw  ax
0x5A62FC: fstp    st(1)
0x5A62FE: test    ah, 44h
0x5A6301: jnp     short loc_5A6381
0x5A6303: fstp    st(1)
0x5A6305: fdivr   [esp+10h+var_C]
0x5A6309: fstp    [esp+10h+arg_4]
0x5A630D: fld     [esp+10h+arg_4]
0x5A6311: call    __CIatan
0x5A6316: fstp    [esp+10h+arg_4]
0x5A631A: fld     [esp+10h+arg_4]
0x5A631E: fstp    [esp+10h+var_10]
0x5A6321: fldz
0x5A6323: fcom    [esp+10h+var_8]
0x5A6327: fnstsw  ax
0x5A6329: test    ah, 41h
0x5A632C: jnz     short loc_5A633A
0x5A632E: fld     [esp+10h+var_10]
0x5A6331: fadd    qword ptr ds:0A3D5B8h
0x5A6337: fstp    [esp+10h+var_10]
0x5A633A: fld     [esp+10h+var_10]
0x5A633D: fcom    st(1)
0x5A633F: fnstsw  ax
0x5A6341: fstp    st(1)
0x5A6343: test    ah, 5
0x5A6346: jp      short loc_5A6399
0x5A6348: fld     qword ptr ds:0A3D5B0h
0x5A634E: fadd    st(1), st
0x5A6350: fxch    st(1)
0x5A6352: fstp    [esp+10h+arg_4]
0x5A6356: fld     [esp+10h+arg_4]
0x5A635A: fxch    st(1)
0x5A635C: call    unknown_libname_14
0x5A6361: fstp    [esp+10h+arg_4]
0x5A6365: fld     [esp+10h+arg_4]
0x5A6369: fstp    [esp+10h+var_10]
0x5A636C: fld     [esp+10h+var_10]
0x5A636F: fmul    qword ptr ds:0A30DC8h
0x5A6375: fstp    [esp+10h+arg_4]
0x5A6379: fld     [esp+10h+arg_4]
0x5A637D: add     esp, 10h
0x5A6380: retn
0x5A6381: fstp    st
0x5A6383: fcomp   [esp+10h+var_C]
0x5A6387: fnstsw  ax
0x5A6389: test    ah, 41h
0x5A638C: jnz     short loc_5A639B
0x5A638E: fld     dword ptr ds:0A449C0h
0x5A6394: fstp    [esp+10h+var_10]
0x5A6397: jmp     short loc_5A639B
0x5A6399: fstp    st
0x5A639B: fld     [esp+10h+var_10]
0x5A639E: fld     qword ptr ds:0A3D5B0h
0x5A63A4: fcom    st(1)
0x5A63A6: fnstsw  ax
0x5A63A8: test    ah, 41h
0x5A63AB: jp      short loc_5A63D2
0x5A63AD: call    unknown_libname_14
0x5A63B2: fstp    [esp+10h+arg_4]
0x5A63B6: fld     [esp+10h+arg_4]
0x5A63BA: fstp    [esp+10h+var_10]
0x5A63BD: fld     [esp+10h+var_10]
0x5A63C0: fmul    qword ptr ds:0A30DC8h
0x5A63C6: fstp    [esp+10h+arg_4]
0x5A63CA: fld     [esp+10h+arg_4]
0x5A63CE: add     esp, 10h
0x5A63D1: retn
0x5A63D2: fstp    st
0x5A63D4: fstp    st
0x5A63D6: fld     [esp+10h+var_10]
0x5A63D9: fmul    qword ptr ds:0A30DC8h
0x5A63DF: fstp    [esp+10h+arg_4]
0x5A63E3: fld     [esp+10h+arg_4]
0x5A63E7: add     esp, 10h
0x5A63EA: retn
