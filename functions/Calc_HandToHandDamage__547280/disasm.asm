0x547280: push    ecx
0x547281: mov     eax, [esp+4+arg_4]
0x547285: mov     ecx, [esp+4+arg_0]
0x547289: push    eax
0x54728A: push    ecx
0x54728B: call    Calc_LuckModifiedSkill
0x547290: fstp    [esp+0Ch+var_4]
0x547294: fld     [esp+0Ch+var_4]
0x547298: mov     eax, [esp+0Ch+arg_8]
0x54729C: fld     qword ptr ds:0A3B150h
0x5472A2: add     esp, 8
0x5472A5: cmp     eax, 64h ; 'd'
0x5472A8: fmul    st(1), st
0x5472AA: fld     dword ptr ds:0B36E58h
0x5472B0: mov     [esp+4+arg_8], eax
0x5472B4: fmulp   st(2), st
0x5472B6: fld     dword ptr ds:0B36E50h
0x5472BC: faddp   st(2), st
0x5472BE: fxch    st(1)
0x5472C0: fstp    [esp+4+var_4]
0x5472C3: jl      short loc_5472CD
0x5472C5: mov     [esp+4+arg_8], 64h ; 'd'
0x5472CD: fimul   [esp+4+arg_8]
0x5472D1: push    ecx
0x5472D2: fmul    dword ptr ds:0B36E68h
0x5472D8: fadd    dword ptr ds:0B36E60h
0x5472DE: fstp    [esp+8+arg_8]
0x5472E2: fld     [esp+8+arg_C]
0x5472E6: fstp    [esp+8+var_8]; float
0x5472E9: call    Calc_FatigueFactor
0x5472EE: fld     [esp+8+arg_8]
0x5472F2: mov     ecx, [esp+8+arg_14]
0x5472F6: fmul    [esp+8+var_4]
0x5472FA: add     esp, 4
0x5472FD: fmulp   st(1), st
0x5472FF: fstp    [esp+4+arg_8]
0x547303: fld     [esp+4+arg_8]
0x547307: fst     dword ptr [ecx]
0x547309: fld1
0x54730B: fcom    st(1)
0x54730D: fnstsw  ax
0x54730F: test    ah, 41h
0x547312: jnz     short loc_547318
0x547314: fstp    st
0x547316: jmp     short loc_54731A
0x547318: fstp    st(1)
0x54731A: cmp     [esp+4+arg_10], 0
0x54731F: fstp    [esp+4+arg_8]
0x547323: fld     dword ptr ds:0B36E78h
0x547329: fld     dword ptr ds:0B36E70h
0x54732F: fld     st
0x547331: fsubp   st(2), st
0x547333: fld     [esp+4+arg_8]
0x547337: fmulp   st(2), st
0x547339: faddp   st(1), st
0x54733B: fstp    [esp+4+arg_8]
0x54733F: fld     [esp+4+arg_8]
0x547343: fst     dword ptr [ecx]
0x547345: jz      short loc_547353
0x547347: mov     edx, [esp+4+arg_18]
0x54734B: fstp    st
0x54734D: fldz
0x54734F: fstp    dword ptr [edx]
0x547351: pop     ecx
0x547352: retn
0x547353: fmul    dword ptr ds:0B36E80h
0x547359: mov     eax, [esp+4+arg_18]
0x54735D: fadd    dword ptr ds:0B36E88h
0x547363: fstp    dword ptr [eax]
0x547365: pop     ecx
0x547366: retn
