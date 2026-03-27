0x848C40: sub     esp, 10h
0x848C43: mov     eax, [esp+10h+arg_0]
0x848C47: mov     ecx, [eax+40h]
0x848C4A: mov     edx, [eax+44h]
0x848C4D: mov     eax, [eax+48h]
0x848C50: mov     [esp+10h+var_10], ecx
0x848C53: fld     [esp+10h+var_10]
0x848C56: fld     st
0x848C58: mov     [esp+10h+var_8], eax
0x848C5C: fld     dword ptr ds:0B3FA90h
0x848C62: mov     [esp+10h+var_C], edx
0x848C66: fucompp
0x848C68: fnstsw  ax
0x848C6A: fld     [esp+10h+var_8]
0x848C6E: test    ah, 44h
0x848C71: fld     [esp+10h+var_C]
0x848C75: jp      short loc_848C9D
0x848C77: fld     st
0x848C79: fld     dword ptr ds:0B3FA94h
0x848C7F: fucompp
0x848C81: fnstsw  ax
0x848C83: test    ah, 44h
0x848C86: jp      short loc_848C9D
0x848C88: fld     st(1)
0x848C8A: fld     dword ptr ds:0B3FA98h
0x848C90: fucompp
0x848C92: fnstsw  ax
0x848C94: test    ah, 44h
0x848C97: jnp     loc_848D8A
0x848C9D: mov     al, ds:0B43070h
0x848CA2: test    al, al
0x848CA4: jz      short loc_848CE9
0x848CA6: cmp     byte ptr ds:0B43074h, 0
0x848CAD: jz      short loc_848CB7
0x848CAF: fld     dword ptr ds:0B4320Ch
0x848CB5: jmp     short loc_848CBD
0x848CB7: fld     dword ptr ds:0B43208h
0x848CBD: fstp    [esp+10h+arg_0]
0x848CC1: fld     [esp+10h+arg_0]
0x848CC5: fld     st
0x848CC7: fmulp   st(4), st
0x848CC9: fxch    st(3)
0x848CCB: fstp    [esp+10h+var_10]
0x848CCE: fmul    st, st(2)
0x848CD0: fstp    [esp+10h+var_C]
0x848CD4: fmulp   st(1), st
0x848CD6: fstp    [esp+10h+var_8]
0x848CDA: fld     [esp+10h+var_8]
0x848CDE: fld     [esp+10h+var_C]
0x848CE2: fld     [esp+10h+var_10]
0x848CE5: fxch    st(2)
0x848CE7: fxch    st(1)
0x848CE9: test    al, al
0x848CEB: mov     ecx, ds:0B46498h
0x848CF1: mov     edx, ds:0B4649Ch
0x848CF7: mov     [esp+10h+var_10], ecx
0x848CFA: fld     [esp+10h+var_10]
0x848CFD: mov     ecx, ds:0B464A0h
0x848D03: faddp   st(3), st
0x848D05: fxch    st(2)
0x848D07: mov     [esp+10h+var_C], edx
0x848D0B: mov     [esp+10h+var_8], ecx
0x848D0F: mov     ecx, ds:0B464A4h
0x848D15: fstp    [esp+10h+var_10]
0x848D18: fld     [esp+10h+var_C]
0x848D1C: faddp   st(2), st
0x848D1E: fxch    st(1)
0x848D20: fstp    [esp+10h+var_C]
0x848D24: fadd    [esp+10h+var_8]
0x848D28: fstp    [esp+10h+var_8]
0x848D2C: jnz     short loc_848D5F
0x848D2E: fld1
0x848D30: fcom    [esp+10h+var_10]
0x848D33: fnstsw  ax
0x848D35: test    ah, 41h
0x848D38: jz      short loc_848D3D
0x848D3A: fst     [esp+10h+var_10]
0x848D3D: fcom    [esp+10h+var_C]
0x848D41: fnstsw  ax
0x848D43: test    ah, 41h
0x848D46: jz      short loc_848D4C
0x848D48: fst     [esp+10h+var_C]
0x848D4C: fcom    [esp+10h+var_8]
0x848D50: fnstsw  ax
0x848D52: test    ah, 41h
0x848D55: jz      short loc_848D5D
0x848D57: fstp    [esp+10h+var_8]
0x848D5B: jmp     short loc_848D5F
0x848D5D: fstp    st
0x848D5F: mov     edx, [esp+10h+var_10]
0x848D62: sub     esp, 10h
0x848D65: mov     eax, esp
0x848D67: mov     [eax], edx
0x848D69: mov     edx, [esp+20h+var_C]
0x848D6D: mov     [eax+4], edx
0x848D70: mov     edx, [esp+20h+var_8]
0x848D74: mov     [eax+8], edx
0x848D77: push    0
0x848D79: mov     [eax+0Ch], ecx
0x848D7C: call    sub_7ECAE0
0x848D81: add     esp, 14h
0x848D84: add     esp, 10h
0x848D87: retn    4
0x848D8A: fstp    st(2)
0x848D8C: fstp    st
0x848D8E: fstp    st
0x848D90: add     esp, 10h
0x848D93: retn    4
