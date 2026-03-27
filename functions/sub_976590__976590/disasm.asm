0x976590: sub     esp, 3Ch
0x976593: mov     eax, [esp+3Ch+arg_0]
0x976597: fld     dword ptr [eax]
0x976599: push    ebx
0x97659A: fld     [esp+40h+arg_8]
0x97659E: mov     ebx, ecx
0x9765A0: fld     st
0x9765A2: push    esi
0x9765A3: fmulp   st(2), st
0x9765A5: push    edi
0x9765A6: fxch    st(1)
0x9765A8: lea     esi, [ebx+3Ch]
0x9765AB: mov     ecx, 9
0x9765B0: fstp    [esp+48h+var_3C]
0x9765B4: lea     edi, [esp+48h+var_24]
0x9765B8: fld     dword ptr [eax+4]
0x9765BB: lea     edx, [esp+48h+var_24]
0x9765BF: fmul    st, st(1)
0x9765C1: fstp    [esp+48h+var_38]
0x9765C5: fld     dword ptr [eax+8]
0x9765C8: mov     eax, [ebx+38h]
0x9765CB: fmul    st, st(1)
0x9765CD: add     eax, 4
0x9765D0: fstp    [esp+48h+var_34]
0x9765D4: fld     dword ptr [eax+4]
0x9765D7: fadd    [esp+48h+var_38]
0x9765DB: fstp    [esp+48h+arg_0]
0x9765DF: fld     dword ptr [eax+8]
0x9765E2: fadd    [esp+48h+var_34]
0x9765E6: fstp    [esp+48h+arg_8]
0x9765EA: fld     dword ptr [eax]
0x9765EC: mov     eax, [esp+48h+arg_4]
0x9765F0: fadd    [esp+48h+var_3C]
0x9765F4: rep movsd
0x9765F6: fstp    [esp+48h+var_30]
0x9765FA: fld     [esp+48h+arg_0]
0x9765FE: fstp    [esp+48h+var_2C]
0x976602: fld     [esp+48h+arg_8]
0x976606: fstp    [esp+48h+var_28]
0x97660A: fld     dword ptr [eax]
0x97660C: fmul    st, st(1)
0x97660E: lea     ecx, [ebx+64h]
0x976611: fstp    [esp+48h+var_3C]
0x976615: fld     dword ptr [eax+4]
0x976618: fmul    st, st(1)
0x97661A: fstp    [esp+48h+var_38]
0x97661E: fmul    dword ptr [eax+8]
0x976621: lea     eax, [ebx+68h]
0x976624: push    eax
0x976625: push    ecx
0x976626: fstp    [esp+50h+var_34]
0x97662A: push    edx
0x97662B: fld     [esp+54h+var_3C]
0x97662F: lea     eax, [esp+54h+var_30]
0x976633: fadd    [esp+54h+var_24]
0x976637: push    eax
0x976638: fstp    [esp+58h+var_24]
0x97663C: fld     [esp+58h+var_20]
0x976640: fadd    [esp+58h+var_38]
0x976644: fstp    [esp+58h+var_20]
0x976648: fld     [esp+58h+var_1C]
0x97664C: fadd    [esp+58h+var_34]
0x976650: fstp    [esp+58h+var_1C]
0x976654: call    sub_975DF0
0x976659: fmul    dword ptr [ebx+60h]
0x97665C: add     esp, 10h
0x97665F: pop     edi
0x976660: pop     esi
0x976661: fsub    qword ptr ds:0A2F928h
0x976667: pop     ebx
0x976668: fstp    [esp+3Ch+arg_0]
0x97666C: fld     [esp+3Ch+arg_0]
0x976670: add     esp, 3Ch
0x976673: retn    0Ch
