0x7A7100: push    0FFFFFFFFh
0x7A7102: push    offset SEH_7A7100
0x7A7107: mov     eax, large fs:0
0x7A710D: push    eax
0x7A710E: sub     esp, 44h
0x7A7111: push    esi
0x7A7112: mov     eax, ds:0B30AACh
0x7A7117: xor     eax, esp
0x7A7119: push    eax
0x7A711A: lea     eax, [esp+58h+var_C]
0x7A711E: mov     large fs:0, eax
0x7A7124: fld1
0x7A7126: fld     [esp+58h+arg_0]
0x7A712A: fcom    st(1)
0x7A712C: fnstsw  ax
0x7A712E: fstp    st(1)
0x7A7130: test    ah, 1
0x7A7133: jz      short loc_7A7183
0x7A7135: fldz
0x7A7137: fcomp   st(1)
0x7A7139: fnstsw  ax
0x7A713B: test    ah, 1
0x7A713E: jz      short loc_7A7183
0x7A7140: fmul    qword ptr ds:0A8C628h
0x7A7146: call    Double_To_SInt32
0x7A714B: mov     dword ptr [esp+58h+arg_0], eax
0x7A714F: fild    dword ptr [esp+58h+arg_0]
0x7A7153: mov     esi, offset flt_B42A90
0x7A7158: fstp    qword ptr ds:0B42C90h
0x7A715E: mov     edi, edi
0x7A7160: call    sub_7A6CD0
0x7A7165: fstp    dword ptr [esi]
0x7A7167: add     esi, 4
0x7A716A: cmp     esi, offset dbl_B42C90
0x7A7170: jl      short loc_7A7160
0x7A7172: mov     ecx, [esp+58h+var_C]
0x7A7176: mov     large fs:0, ecx
0x7A717D: pop     ecx
0x7A717E: pop     esi
0x7A717F: add     esp, 50h
0x7A7182: retn
0x7A7183: push    19h; MaxCount
0x7A7185: fstp    st
0x7A7187: push    offset aNewranSeedOutO; "Newran: seed out of range"
0x7A718C: lea     ecx, [esp+60h+var_50]
0x7A7190: mov     [esp+60h+var_38], 0Fh
0x7A7198: mov     [esp+60h+var_3C], 0
0x7A71A0: mov     [esp+60h+var_4C], 0
0x7A71A5: call    sub_414500
0x7A71AA: lea     eax, [esp+58h+var_50]
0x7A71AE: push    eax
0x7A71AF: lea     ecx, [esp+5Ch+var_34]
0x7A71B3: mov     [esp+5Ch+var_4], 0
0x7A71BB: call    sub_4146E0
0x7A71C0: push    offset __TI2?AVlogic_error@std@@; throw info for 'class std::logic_error'
0x7A71C5: lea     ecx, [esp+5Ch+var_34]
0x7A71C9: push    ecx
0x7A71CA: call    ThrowException??
