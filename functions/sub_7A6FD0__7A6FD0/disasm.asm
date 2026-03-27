0x7A6FD0: push    0FFFFFFFFh
0x7A6FD2: push    offset SEH_7A28E0
0x7A6FD7: mov     eax, large fs:0
0x7A6FDD: push    eax
0x7A6FDE: sub     esp, 48h
0x7A6FE1: push    esi
0x7A6FE2: mov     eax, ds:0B30AACh
0x7A6FE7: xor     eax, esp
0x7A6FE9: push    eax
0x7A6FEA: lea     eax, [esp+5Ch+var_C]
0x7A6FEE: mov     large fs:0, eax
0x7A6FF4: fldz
0x7A6FF6: fcomp   qword ptr ds:0B42C90h
0x7A6FFC: fnstsw  ax
0x7A6FFE: test    ah, 44h
0x7A7001: jp      short loc_7A704D
0x7A7003: push    27h ; '''; MaxCount
0x7A7005: push    offset aRandomNumberGe; "Random number generator not initialised"
0x7A700A: lea     ecx, [esp+64h+var_50]
0x7A700E: mov     [esp+64h+var_38], 0Fh
0x7A7016: mov     [esp+64h+var_3C], 0
0x7A701E: mov     [esp+64h+var_4C], 0
0x7A7023: call    sub_414500
0x7A7028: lea     eax, [esp+5Ch+var_50]
0x7A702C: push    eax
0x7A702D: lea     ecx, [esp+60h+var_34]
0x7A7031: mov     [esp+60h+var_4], 0
0x7A7039: call    sub_4146E0
0x7A703E: push    offset __TI2?AVlogic_error@std@@; throw info for 'class std::logic_error'
0x7A7043: lea     ecx, [esp+60h+var_34]
0x7A7047: push    ecx
0x7A7048: call    ThrowException??
0x7A704D: call    sub_7A6CD0
0x7A7052: fmul    qword ptr ds:0A3F428h
0x7A7058: call    Double_To_SInt32
0x7A705D: mov     esi, eax
0x7A705F: fld     dword ptr ds:0B42A90h[esi*4]
0x7A7066: fstp    [esp+5Ch+var_54]
0x7A706A: call    sub_7A6CD0
0x7A706F: fstp    dword ptr ds:0B42A90h[esi*4]
0x7A7076: fld     [esp+5Ch+var_54]
0x7A707A: mov     ecx, [esp+5Ch+var_C]
0x7A707E: mov     large fs:0, ecx
0x7A7085: pop     ecx
0x7A7086: pop     esi
0x7A7087: add     esp, 54h
0x7A708A: retn
