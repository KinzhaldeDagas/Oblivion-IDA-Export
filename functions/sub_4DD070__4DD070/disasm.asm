0x4DD070: sub     esp, 30h
0x4DD073: fld     dword ptr [ecx+28h]
0x4DD076: fadd    [esp+30h+arg_4]
0x4DD07A: fstp    [esp+30h+arg_4]
0x4DD07E: fldz
0x4DD080: fld     [esp+30h+arg_4]
0x4DD084: fcom    st(1)
0x4DD086: fnstsw  ax
0x4DD088: fstp    st(1)
0x4DD08A: test    ah, 5
0x4DD08D: fld     qword ptr ds:0A3D5B0h
0x4DD093: jp      short loc_4DD0BA
0x4DD095: fadd    st(1), st
0x4DD097: fxch    st(1)
0x4DD099: fstp    [esp+30h+arg_4]
0x4DD09D: fld     [esp+30h+arg_4]
0x4DD0A1: fxch    st(1)
0x4DD0A3: call    unknown_libname_14
0x4DD0A8: fstp    [esp+30h+arg_4]
0x4DD0AC: fld     [esp+30h+arg_4]
0x4DD0B0: fstp    [esp+30h+arg_4]
0x4DD0B4: fld     [esp+30h+arg_4]
0x4DD0B8: jmp     short loc_4DD0DC
0x4DD0BA: fcom    st(1)
0x4DD0BC: fnstsw  ax
0x4DD0BE: test    ah, 41h
0x4DD0C1: jp      short loc_4DD0DA
0x4DD0C3: call    unknown_libname_14
0x4DD0C8: fstp    [esp+30h+arg_4]
0x4DD0CC: fld     [esp+30h+arg_4]
0x4DD0D0: fstp    [esp+30h+arg_4]
0x4DD0D4: fld     [esp+30h+arg_4]
0x4DD0D8: jmp     short loc_4DD0DC
0x4DD0DA: fstp    st
0x4DD0DC: fldz
0x4DD0DE: push    esi
0x4DD0DF: mov     esi, [esp+34h+arg_0]
0x4DD0E3: fst     dword ptr [esi]
0x4DD0E5: fld1
0x4DD0E7: push    ecx
0x4DD0E8: fstp    dword ptr [esi+4]
0x4DD0EB: lea     ecx, [esp+38h+var_24]
0x4DD0EF: fstp    dword ptr [esi+8]
0x4DD0F2: fstp    [esp+38h+var_38]; float
0x4DD0F5: call    NiMatrix33_InitRotationTransform
0x4DD0FA: push    esi
0x4DD0FB: lea     eax, [esp+38h+var_30]
0x4DD0FF: push    eax
0x4DD100: lea     ecx, [esp+3Ch+var_24]
0x4DD104: call    sub_7101F0
0x4DD109: mov     ecx, [eax]
0x4DD10B: mov     [esi], ecx
0x4DD10D: mov     edx, [eax+4]
0x4DD110: mov     [esi+4], edx
0x4DD113: mov     eax, [eax+8]
0x4DD116: mov     ecx, esi
0x4DD118: mov     [esi+8], eax
0x4DD11B: call    sub_43F350
0x4DD120: fstp    st
0x4DD122: mov     eax, esi
0x4DD124: pop     esi
0x4DD125: add     esp, 30h
0x4DD128: retn    8
