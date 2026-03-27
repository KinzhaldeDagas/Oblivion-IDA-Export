0x716FC0: push    ebp
0x716FC1: mov     ebp, esp
0x716FC3: sub     esp, 34h
0x716FC6: movzx   eax, word ptr [ebp+arg_0]
0x716FCA: mov     [ebp+var_10], eax
0x716FCD: mov     eax, [ebp+arg_C]
0x716FD0: lea     ecx, [ebp+var_34]
0x716FD3: push    ebx
0x716FD4: fld     dword ptr [eax+24h]
0x716FD7: mov     [ebp+var_C], ecx
0x716FDA: fstp    [ebp+var_8]
0x716FDD: fld     dword ptr [eax+28h]
0x716FE0: fstp    [ebp+var_4]
0x716FE3: fld     dword ptr [eax+2Ch]
0x716FE6: fstp    [ebp+arg_C]
0x716FE9: fld     dword ptr [eax+30h]
0x716FEC: fstp    [ebp+arg_0]
0x716FEF: fld     dword ptr [eax]
0x716FF1: fld     [ebp+arg_0]
0x716FF4: fld     st
0x716FF6: fmulp   st(2), st
0x716FF8: fxch    st(1)
0x716FFA: fstp    [ebp+var_34]
0x716FFD: fld     dword ptr [eax+4]
0x717000: fmul    st, st(1)
0x717002: fstp    [ebp+var_30]
0x717005: fld     dword ptr [eax+8]
0x717008: fmul    st, st(1)
0x71700A: fstp    [ebp+var_2C]
0x71700D: fld     dword ptr [eax+0Ch]
0x717010: fmul    st, st(1)
0x717012: fstp    [ebp+var_28]
0x717015: fld     dword ptr [eax+10h]
0x717018: fmul    st, st(1)
0x71701A: fstp    [ebp+var_24]
0x71701D: fld     dword ptr [eax+14h]
0x717020: fmul    st, st(1)
0x717022: fstp    [ebp+var_20]
0x717025: fld     dword ptr [eax+18h]
0x717028: fmul    st, st(1)
0x71702A: fstp    [ebp+var_1C]
0x71702D: fld     dword ptr [eax+1Ch]
0x717030: fmul    st, st(1)
0x717032: fstp    [ebp+var_18]
0x717035: fmul    dword ptr [eax+20h]
0x717038: fstp    [ebp+var_14]
0x71703B: mov     edx, [ebp+var_10]
0x71703E: cmp     edx, 0
0x717041: jnz     short loc_717045
0x717043: jmp     short loc_7170BE
0x717045: mov     eax, [ebp+arg_4]
0x717048: mov     ebx, [ebp+arg_8]
0x71704B: mov     ecx, [ebp+var_C]
0x71704E: fld     dword ptr [eax]
0x717050: fmul    dword ptr [ecx]
0x717052: fld     dword ptr [eax+4]
0x717055: fmul    dword ptr [ecx+4]
0x717058: fld     dword ptr [eax+8]
0x71705B: fmul    dword ptr [ecx+8]
0x71705E: fxch    st(1)
0x717060: faddp   st(2), st
0x717062: fld     dword ptr [eax]
0x717064: fmul    dword ptr [ecx+0Ch]
0x717067: fxch    st(2)
0x717069: faddp   st(1), st
0x71706B: fxch    st(1)
0x71706D: fld     dword ptr [eax+4]
0x717070: fmul    dword ptr [ecx+10h]
0x717073: fld     dword ptr [eax+8]
0x717076: fmul    dword ptr [ecx+14h]
0x717079: fxch    st(1)
0x71707B: faddp   st(2), st
0x71707D: fxch    st(2)
0x71707F: fadd    [ebp+var_8]
0x717082: fld     dword ptr [ecx+18h]
0x717085: fxch    st(2)
0x717087: faddp   st(3), st
0x717089: fxch    st(1)
0x71708B: fmul    dword ptr [eax]
0x71708D: fld     dword ptr [ecx+1Ch]
0x717090: fld     dword ptr [ecx+20h]
0x717093: fxch    st(1)
0x717095: fmul    dword ptr [eax+4]
0x717098: fxch    st(4)
0x71709A: fadd    [ebp+var_4]
0x71709D: fxch    st(1)
0x71709F: fmul    dword ptr [eax+8]
0x7170A2: fxch    st(4)
0x7170A4: faddp   st(2), st
0x7170A6: fxch    st(2)
0x7170A8: fstp    dword ptr [ebx]
0x7170AA: faddp   st(2), st
0x7170AC: fstp    dword ptr [ebx+4]
0x7170AF: fadd    [ebp+arg_C]
0x7170B2: add     eax, 0Ch
0x7170B5: add     ebx, 0Ch
0x7170B8: fstp    dword ptr [ebx-4]
0x7170BB: dec     edx
0x7170BC: jnz     short loc_71704E
0x7170BE: pop     ebx
0x7170BF: mov     esp, ebp
0x7170C1: pop     ebp
0x7170C2: retn
