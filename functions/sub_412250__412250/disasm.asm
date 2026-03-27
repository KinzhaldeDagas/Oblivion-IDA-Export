0x412250: mov     eax, [esp+arg_0]
0x412254: sub     esp, 0Ch
0x412257: cmp     eax, dword_B03178
0x41225D: jnb     short loc_4122C1
0x41225F: mov     ecx, eax
0x412261: and     ecx, 0Fh
0x412264: test    ecx, ecx
0x412266: mov     [esp+0Ch+arg_0], ecx
0x41226A: fild    [esp+0Ch+arg_0]
0x41226E: jge     short loc_412276
0x412270: fadd    ds:flt_A2FC78
0x412276: fld     flt_B03174
0x41227C: shr     eax, 4
0x41227F: test    eax, eax
0x412281: fld     st
0x412283: fmulp   st(2), st
0x412285: mov     [esp+0Ch+arg_0], eax
0x412289: fxch    st(1)
0x41228B: fstp    [esp+0Ch+var_C]
0x41228E: fild    [esp+0Ch+arg_0]
0x412292: jge     short loc_41229A
0x412294: fadd    ds:flt_A2FC78
0x41229A: mov     eax, [esp+0Ch+arg_4]
0x41229E: fmulp   st(1), st
0x4122A0: mov     edx, [esp+0Ch+var_C]
0x4122A3: mov     [eax], edx
0x4122A5: fstp    [esp+0Ch+var_8]
0x4122A9: mov     ecx, [esp+0Ch+var_8]
0x4122AD: fldz
0x4122AF: mov     [eax+4], ecx
0x4122B2: fstp    [esp+0Ch+var_4]
0x4122B6: mov     edx, [esp+0Ch+var_4]
0x4122BA: mov     [eax+8], edx
0x4122BD: add     esp, 0Ch
0x4122C0: retn
0x4122C1: fld     ds:flt_A32048
0x4122C7: mov     eax, [esp+0Ch+arg_4]
0x4122CB: fst     [esp+0Ch+var_C]
0x4122CE: mov     ecx, [esp+0Ch+var_C]
0x4122D1: fst     [esp+0Ch+var_8]
0x4122D5: mov     edx, [esp+0Ch+var_8]
0x4122D9: mov     [eax], ecx
0x4122DB: fstp    [esp+0Ch+var_4]
0x4122DF: mov     ecx, [esp+0Ch+var_4]
0x4122E3: mov     [eax+4], edx
0x4122E6: mov     [eax+8], ecx
0x4122E9: add     esp, 0Ch
0x4122EC: retn
