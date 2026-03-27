0x53FF90: mov     eax, [ecx+10h]
0x53FF93: sub     esp, 10h
0x53FF96: test    eax, eax
0x53FF98: jz      loc_5400DC
0x53FF9E: mov     edx, [ecx+0DCh]
0x53FFA4: cmp     edx, 3
0x53FFA7: jz      short loc_53FFB2
0x53FFA9: cmp     edx, 2
0x53FFAC: jnz     loc_5400DC
0x53FFB2: fld1
0x53FFB4: movzx   eax, byte ptr [eax+48h]
0x53FFB8: fld     st
0x53FFBA: mov     [esp+10h+var_10], eax
0x53FFBD: fldz
0x53FFBF: mov     eax, [ecx+14h]
0x53FFC2: test    eax, eax
0x53FFC4: fsub    st(1), st
0x53FFC6: fild    [esp+10h+var_10]
0x53FFC9: fld     qword ptr ds:0A3F398h
0x53FFCF: fmul    st(1), st
0x53FFD1: fxch    st(1)
0x53FFD3: fmul    st, st(3)
0x53FFD5: fadd    st, st(2)
0x53FFD7: fstp    [esp+10h+var_10]; _DWORD
0x53FFDA: fld     [esp+10h+var_10]
0x53FFDD: fst     dword ptr [ecx+0C0h]
0x53FFE3: jz      short loc_540025
0x53FFE5: fmul    dword ptr [ecx+0D8h]
0x53FFEB: fstp    [esp+10h+var_10]
0x53FFEE: fld     [esp+10h+var_10]
0x53FFF1: fst     dword ptr [ecx+0C0h]
0x53FFF7: movzx   edx, byte ptr [eax+48h]
0x53FFFB: mov     [esp+10h+var_10], edx
0x53FFFE: fild    [esp+10h+var_10]
0x540001: fmulp   st(2), st
0x540003: fxch    st(1)
0x540005: fmulp   st(3), st
0x540007: fxch    st(2)
0x540009: faddp   st(1), st
0x54000B: fstp    [esp+10h+var_10]
0x54000E: fld     [esp+10h+var_10]
0x540011: fld     dword ptr [ecx+0D8h]
0x540017: fsubp   st(3), st
0x540019: fmulp   st(2), st
0x54001B: faddp   st(1), st
0x54001D: fstp    dword ptr [ecx+0C0h]
0x540023: jmp     short loc_54002F
0x540025: fstp    st(2)
0x540027: fstp    st(2)
0x540029: fstp    st
0x54002B: fstp    st(1)
0x54002D: fstp    st
0x54002F: cmp     dword ptr ds:0B42D78h, 0
0x540036: mov     eax, ds:0B27104h
0x54003B: mov     edx, ds:0B27108h
0x540041: mov     ds:0B430CCh, eax
0x540046: mov     ds:0B430D0h, edx
0x54004C: fld     dword ptr [ecx+0C0h]
0x540052: fstp    dword ptr ds:0B2C670h
0x540058: jz      short loc_540069
0x54005A: push    1; _DWORD
0x54005C: push    0; _DWORD
0x54005E: call    dword ptr ds:0B42D78h
0x540064: add     esp, 8
0x540067: jmp     short loc_54006B
0x540069: fldz
0x54006B: fstp    [esp+10h+var_10]
0x54006E: fld     [esp+10h+var_10]
0x540071: fdiv    qword ptr ds:0A2F938h
0x540077: fmul    qword ptr ds:0A56E20h
0x54007D: fmul    qword ptr ds:0A492F0h
0x540083: fstp    [esp+10h+var_10]
0x540086: fld     [esp+10h+var_10]
0x540089: call    __CIsin
0x54008E: fstp    [esp+10h+var_C]
0x540092: fld     [esp+10h+var_C]
0x540096: fmul    qword ptr ds:0A492F0h
0x54009C: fstp    [esp+10h+var_8]
0x5400A0: fld     [esp+10h+var_10]
0x5400A3: fmul    qword ptr ds:0A56E18h
0x5400A9: fstp    [esp+10h+var_C]
0x5400AD: fld     [esp+10h+var_C]
0x5400B1: call    __CIcos
0x5400B6: fstp    [esp+10h+var_C]
0x5400BA: fld     [esp+10h+var_C]
0x5400BE: fmul    qword ptr ds:0A492F0h
0x5400C4: fstp    [esp+10h+var_4]
0x5400C8: fld     [esp+10h+var_8]
0x5400CC: fstp    dword ptr ds:0B44EF8h
0x5400D2: fld     [esp+10h+var_4]
0x5400D6: fstp    dword ptr ds:0B44EFCh
0x5400DC: add     esp, 10h
0x5400DF: retn
