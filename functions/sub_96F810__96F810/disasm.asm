0x96F810: sub     esp, 3Ch
0x96F813: push    esi
0x96F814: mov     esi, ecx
0x96F816: mov     eax, [esi+38h]
0x96F819: mov     ecx, [eax+20h]
0x96F81C: add     eax, 20h ; ' '
0x96F81F: mov     [esp+40h+var_18], ecx
0x96F823: mov     edx, [eax+4]
0x96F826: mov     [esp+40h+var_14], edx
0x96F82A: mov     ecx, [eax+8]
0x96F82D: mov     [esp+40h+var_10], ecx
0x96F831: mov     edx, [eax+0Ch]
0x96F834: mov     [esp+40h+var_C], edx
0x96F838: mov     ecx, [eax+10h]
0x96F83B: mov     [esp+40h+var_8], ecx
0x96F83F: mov     edx, [eax+14h]
0x96F842: mov     eax, [esi+3Ch]
0x96F845: add     eax, 20h ; ' '
0x96F848: mov     [esp+40h+var_4], edx
0x96F84C: mov     ecx, [eax]
0x96F84E: mov     [esp+40h+var_30], ecx
0x96F852: mov     edx, [eax+4]
0x96F855: mov     [esp+40h+var_2C], edx
0x96F859: mov     ecx, [eax+8]
0x96F85C: mov     [esp+40h+var_28], ecx
0x96F860: mov     edx, [eax+0Ch]
0x96F863: mov     [esp+40h+var_24], edx
0x96F867: mov     ecx, [eax+10h]
0x96F86A: mov     [esp+40h+var_20], ecx
0x96F86E: mov     edx, [eax+14h]
0x96F871: mov     eax, [esp+40h+arg_0]
0x96F875: fld     dword ptr [eax]
0x96F877: lea     ecx, [esi+44h]
0x96F87A: fld     [esp+40h+arg_8]
0x96F87E: mov     [esp+40h+var_1C], edx
0x96F882: fld     st
0x96F884: lea     edx, [esp+40h+var_30]
0x96F888: fmulp   st(2), st
0x96F88A: fxch    st(1)
0x96F88C: fstp    [esp+40h+var_3C]
0x96F890: fld     dword ptr [eax+4]
0x96F893: fmul    st, st(1)
0x96F895: fstp    [esp+40h+var_38]
0x96F899: fld     dword ptr [eax+8]
0x96F89C: mov     eax, [esp+40h+arg_4]
0x96F8A0: fmul    st, st(1)
0x96F8A2: fstp    [esp+40h+var_34]
0x96F8A6: fld     [esp+40h+var_3C]
0x96F8AA: fadd    [esp+40h+var_18]
0x96F8AE: fstp    [esp+40h+var_18]
0x96F8B2: fld     [esp+40h+var_14]
0x96F8B6: fadd    [esp+40h+var_38]
0x96F8BA: fstp    [esp+40h+var_14]
0x96F8BE: fld     [esp+40h+var_10]
0x96F8C2: fadd    [esp+40h+var_34]
0x96F8C6: fstp    [esp+40h+var_10]
0x96F8CA: fld     dword ptr [eax]
0x96F8CC: fmul    st, st(1)
0x96F8CE: fstp    [esp+40h+var_3C]
0x96F8D2: fld     dword ptr [eax+4]
0x96F8D5: fmul    st, st(1)
0x96F8D7: fstp    [esp+40h+var_38]
0x96F8DB: fmul    dword ptr [eax+8]
0x96F8DE: lea     eax, [esi+48h]
0x96F8E1: push    eax
0x96F8E2: push    ecx
0x96F8E3: fstp    [esp+48h+var_34]
0x96F8E7: push    edx
0x96F8E8: fld     [esp+4Ch+var_3C]
0x96F8EC: lea     eax, [esp+4Ch+var_18]
0x96F8F0: fadd    [esp+4Ch+var_30]
0x96F8F4: push    eax
0x96F8F5: fstp    [esp+50h+var_30]
0x96F8F9: fld     [esp+50h+var_2C]
0x96F8FD: fadd    [esp+50h+var_38]
0x96F901: fstp    [esp+50h+var_2C]
0x96F905: fld     [esp+50h+var_28]
0x96F909: fadd    [esp+50h+var_34]
0x96F90D: fstp    [esp+50h+var_28]
0x96F911: call    sub_96FCD0
0x96F916: fmul    dword ptr [esi+40h]
0x96F919: add     esp, 10h
0x96F91C: fsub    qword ptr ds:0A2F928h
0x96F922: pop     esi
0x96F923: fstp    [esp+3Ch+arg_0]
0x96F927: fld     [esp+3Ch+arg_0]
0x96F92B: add     esp, 3Ch
0x96F92E: retn    0Ch
