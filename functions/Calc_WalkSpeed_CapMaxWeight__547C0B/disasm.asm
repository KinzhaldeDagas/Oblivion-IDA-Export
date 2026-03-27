0x547C0B: fld     [esp+arg_4]
0x547C0F: fld     dword ptr ds:0B37418h
0x547C15: fcom    st(1)
0x547C17: fnstsw  ax
0x547C19: test    ah, 5
0x547C1C: jp      short loc_547C2A
0x547C1E: fstp    st(1)
0x547C20: fst     [esp+arg_4]
0x547C24: fld     [esp+arg_4]
0x547C28: fxch    st(1)
0x547C2A: cmp     [esp+arg_C], 0
0x547C2F: fld     dword ptr ds:0B37410h
0x547C35: fld     st
0x547C37: faddp   st(3), st
0x547C39: fsubp   st(1), st
0x547C3B: fdivp   st(1), st
0x547C3D: jz      short loc_547C79
0x547C3F: fmul    dword ptr ds:0B373D8h
0x547C45: fld1
0x547C47: fsubrp  st(1), st
0x547C49: fld     dword ptr ds:0B373F8h
0x547C4F: fld     dword ptr ds:0B373F0h
0x547C55: fld     st
0x547C57: fsubp   st(2), st
0x547C59: fld     [esp+arg_0]
0x547C5D: fmul    qword ptr ds:0A3D8E8h
0x547C63: fmulp   st(2), st
0x547C65: faddp   st(1), st
0x547C67: fmulp   st(1), st
0x547C69: fstp    [esp+arg_10]
0x547C6D: fld     [esp+arg_10]
0x547C71: fmul    dword ptr ds:0B37420h
0x547C77: jmp     short loc_547CD1
0x547C79: fmul    dword ptr ds:0B373D0h
0x547C7F: fld1
0x547C81: fsubrp  st(1), st
0x547C83: fld     dword ptr ds:0B373F8h
0x547C89: fld     dword ptr ds:0B373F0h
0x547C8F: jmp     short loc_547CBD
0x547C91: fld     dword ptr ds:0B37410h
0x547C97: fld     st
0x547C99: fadd    [esp+arg_4]
0x547C9D: fld     dword ptr ds:0B37418h
0x547CA3: fsubrp  st(2), st
0x547CA5: fdivrp  st(1), st
0x547CA7: fmul    dword ptr ds:0B373D0h
0x547CAD: fld1
0x547CAF: fsubrp  st(1), st
0x547CB1: fld     dword ptr ds:0B37408h
0x547CB7: fld     dword ptr ds:0B37400h
0x547CBD: fld     st
0x547CBF: fsubp   st(2), st
0x547CC1: fld     [esp+arg_0]
0x547CC5: fmul    qword ptr ds:0A3D8E8h
0x547CCB: fmulp   st(2), st
0x547CCD: faddp   st(1), st
0x547CCF: fmulp   st(1), st
0x547CD1: cmp     [esp+arg_8], 0
0x547CD6: fstp    [esp+arg_10]
0x547CDA: jz      short loc_547CEA
0x547CDC: fld     dword ptr ds:0B37428h
0x547CE2: fmul    [esp+arg_10]
0x547CE6: fstp    [esp+arg_10]
0x547CEA: fldz
0x547CEC: fld     [esp+arg_10]
0x547CF0: fcom    st(1)
0x547CF2: fnstsw  ax
0x547CF4: test    ah, 5
0x547CF7: jp      short loc_547CFC
0x547CF9: fstp    st
0x547CFB: retn
0x547CFC: fstp    st(1)
0x547CFE: retn
