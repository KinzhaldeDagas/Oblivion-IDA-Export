0x7A50B0: mov     ecx, [esp+arg_8]
0x7A50B4: sub     esp, 18h
0x7A50B7: push    esi
0x7A50B8: mov     esi, [esp+1Ch+arg_4]
0x7A50BC: fld     dword ptr [esi]
0x7A50BE: fld     dword ptr [ecx]
0x7A50C0: fucompp
0x7A50C2: fnstsw  ax
0x7A50C4: test    ah, 44h
0x7A50C7: jp      short loc_7A5102
0x7A50C9: fld     dword ptr [esi+4]
0x7A50CC: fld     dword ptr [ecx+4]
0x7A50CF: fucompp
0x7A50D1: fnstsw  ax
0x7A50D3: test    ah, 44h
0x7A50D6: jp      short loc_7A5102
0x7A50D8: fld     dword ptr [esi+8]
0x7A50DB: fld     dword ptr [ecx+8]
0x7A50DE: fucompp
0x7A50E0: fnstsw  ax
0x7A50E2: test    ah, 44h
0x7A50E5: jp      short loc_7A5102
0x7A50E7: mov     ecx, [esi]
0x7A50E9: mov     eax, [esp+1Ch+arg_0]
0x7A50ED: mov     edx, [esi+4]
0x7A50F0: mov     [eax], ecx
0x7A50F2: mov     ecx, [esi+8]
0x7A50F5: mov     [eax+4], edx
0x7A50F8: mov     [eax+8], ecx
0x7A50FB: pop     esi
0x7A50FC: add     esp, 18h
0x7A50FF: retn    10h
0x7A5102: fld     dword ptr [ecx]
0x7A5104: fsub    dword ptr [esi]
0x7A5106: fstp    [esp+1Ch+var_18]
0x7A510A: fld     dword ptr [ecx+4]
0x7A510D: fsub    dword ptr [esi+4]
0x7A5110: fstp    [esp+1Ch+var_14]
0x7A5114: fld     dword ptr [ecx+8]
0x7A5117: lea     ecx, [esp+1Ch+var_18]
0x7A511B: fsub    dword ptr [esi+8]
0x7A511E: fstp    [esp+1Ch+var_10]
0x7A5122: call    sub_78ED70
0x7A5127: mov     eax, [esp+1Ch+arg_C]
0x7A512B: fld     dword ptr [eax]
0x7A512D: fsub    dword ptr [esi]
0x7A512F: fstp    [esp+1Ch+var_C]
0x7A5133: fld     dword ptr [eax+4]
0x7A5136: fsub    dword ptr [esi+4]
0x7A5139: fstp    [esp+1Ch+var_8]
0x7A513D: fld     dword ptr [eax+8]
0x7A5140: mov     eax, [esp+1Ch+arg_0]
0x7A5144: fsub    dword ptr [esi+8]
0x7A5147: fstp    [esp+1Ch+var_4]
0x7A514B: fld     [esp+1Ch+var_C]
0x7A514F: fld     [esp+1Ch+var_18]
0x7A5153: fld     st
0x7A5155: fmulp   st(2), st
0x7A5157: fld     [esp+1Ch+var_8]
0x7A515B: fld     [esp+1Ch+var_14]
0x7A515F: fld     st
0x7A5161: fmulp   st(2), st
0x7A5163: fxch    st(3)
0x7A5165: faddp   st(1), st
0x7A5167: fld     [esp+1Ch+var_4]
0x7A516B: fld     [esp+1Ch+var_10]
0x7A516F: fld     st
0x7A5171: fmulp   st(2), st
0x7A5173: fxch    st(2)
0x7A5175: faddp   st(1), st
0x7A5177: fstp    [esp+1Ch+arg_4]
0x7A517B: fld     [esp+1Ch+arg_4]
0x7A517F: fld     st
0x7A5181: fmulp   st(3), st
0x7A5183: fxch    st(2)
0x7A5185: fstp    [esp+1Ch+var_C]
0x7A5189: fld     st(1)
0x7A518B: fmulp   st(3), st
0x7A518D: fxch    st(2)
0x7A518F: fstp    [esp+1Ch+var_8]
0x7A5193: fmulp   st(1), st
0x7A5195: fstp    [esp+1Ch+var_4]
0x7A5199: fld     dword ptr [esi]
0x7A519B: fadd    [esp+1Ch+var_C]
0x7A519F: fstp    dword ptr [eax]
0x7A51A1: fld     dword ptr [esi+4]
0x7A51A4: fadd    [esp+1Ch+var_8]
0x7A51A8: fstp    dword ptr [eax+4]
0x7A51AB: fld     [esp+1Ch+var_4]
0x7A51AF: fadd    dword ptr [esi+8]
0x7A51B2: pop     esi
0x7A51B3: fstp    dword ptr [eax+8]
0x7A51B6: add     esp, 18h
0x7A51B9: retn    10h
