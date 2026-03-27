0x4122F0: sub     esp, 10h
0x4122F3: push    esi
0x4122F4: mov     esi, [esp+14h+arg_0]
0x4122F8: fld     dword ptr [esi]
0x4122FA: push    edi
0x4122FB: fstp    [esp+18h+var_C]
0x4122FF: fld     [esp+18h+var_C]
0x412303: fistp   [esp+18h+arg_0]
0x412307: mov     eax, [esp+18h+arg_0]
0x41230B: fld     dword ptr [esi+4]
0x41230E: fstp    [esp+18h+var_C]
0x412312: sar     eax, 0Ch
0x412315: fld     [esp+18h+var_C]
0x412319: fistp   [esp+18h+arg_0]
0x41231D: mov     edi, [esp+18h+arg_0]
0x412321: shl     eax, 0Ch
0x412324: mov     [esp+18h+arg_0], eax
0x412328: fild    [esp+18h+arg_0]
0x41232C: sar     edi, 0Ch
0x41232F: fstp    [esp+18h+var_10]
0x412333: fld     dword ptr [esi]
0x412335: fsub    [esp+18h+var_10]
0x412339: fstp    [esp+18h+var_C]
0x41233D: fld     [esp+18h+var_C]
0x412341: fistp   [esp+18h+arg_0]
0x412345: fild    [esp+18h+arg_0]
0x412349: fdiv    flt_B03174
0x41234F: call    Double_To_SInt32
0x412354: shl     edi, 0Ch
0x412357: mov     [esp+18h+arg_0], edi
0x41235B: fild    [esp+18h+arg_0]
0x41235F: mov     [esp+18h+var_4], eax
0x412363: fstp    [esp+18h+var_C]
0x412367: fld     dword ptr [esi+4]
0x41236A: fsub    [esp+18h+var_C]
0x41236E: fstp    [esp+18h+var_8]
0x412372: fld     [esp+18h+var_8]
0x412376: fistp   [esp+18h+arg_0]
0x41237A: fild    [esp+18h+arg_0]
0x41237E: fld     flt_B03174
0x412384: fld     st
0x412386: fdivp   st(2), st
0x412388: fxch    st(1)
0x41238A: call    Double_To_SInt32
0x41238F: fimul   [esp+18h+var_4]
0x412393: mov     [esp+18h+arg_0], eax
0x412397: pop     edi
0x412398: fadd    [esp+14h+var_10]
0x41239C: fstp    dword ptr [esi]
0x41239E: fild    [esp+14h+arg_0]
0x4123A2: fmul    flt_B03174
0x4123A8: fadd    [esp+14h+var_C]
0x4123AC: fstp    dword ptr [esi+4]
0x4123AF: fldz
0x4123B1: fstp    dword ptr [esi+8]
0x4123B4: pop     esi
0x4123B5: add     esp, 10h
0x4123B8: retn
