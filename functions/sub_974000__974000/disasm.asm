0x974000: sub     esp, 48h
0x974003: push    ebx
0x974004: mov     ebx, ecx
0x974006: mov     eax, [ebx+38h]
0x974009: mov     ecx, [eax+20h]
0x97400C: add     eax, 20h ; ' '
0x97400F: mov     [esp+4Ch+var_3C], ecx
0x974013: mov     edx, [eax+4]
0x974016: mov     [esp+4Ch+var_38], edx
0x97401A: mov     ecx, [eax+8]
0x97401D: mov     [esp+4Ch+var_34], ecx
0x974021: mov     edx, [eax+0Ch]
0x974024: mov     [esp+4Ch+var_30], edx
0x974028: mov     ecx, [eax+10h]
0x97402B: mov     [esp+4Ch+var_2C], ecx
0x97402F: mov     edx, [eax+14h]
0x974032: mov     eax, [esp+4Ch+arg_0]
0x974036: fld     dword ptr [eax]
0x974038: push    esi
0x974039: fld     [esp+50h+arg_8]
0x97403D: push    edi
0x97403E: fld     st
0x974040: lea     esi, [ebx+3Ch]
0x974043: fmulp   st(2), st
0x974045: mov     ecx, 9
0x97404A: fxch    st(1)
0x97404C: lea     edi, [esp+54h+var_24]
0x974050: rep movsd
0x974052: fstp    [esp+54h+var_48]
0x974056: fld     dword ptr [eax+4]
0x974059: fmul    st, st(1)
0x97405B: fstp    [esp+54h+var_44]
0x97405F: fld     dword ptr [eax+8]
0x974062: fmul    st, st(1)
0x974064: fstp    [esp+54h+var_40]
0x974068: mov     eax, [esp+54h+arg_4]
0x97406C: fld     [esp+54h+var_48]
0x974070: lea     ecx, [ebx+64h]
0x974073: fadd    [esp+54h+var_3C]
0x974077: mov     [esp+54h+var_28], edx
0x97407B: lea     edx, [esp+54h+arg_0]
0x97407F: fstp    [esp+54h+var_3C]
0x974083: fld     [esp+54h+var_38]
0x974087: fadd    [esp+54h+var_44]
0x97408B: fstp    [esp+54h+var_38]
0x97408F: fld     [esp+54h+var_34]
0x974093: fadd    [esp+54h+var_40]
0x974097: fstp    [esp+54h+var_34]
0x97409B: fld     dword ptr [eax]
0x97409D: fmul    st, st(1)
0x97409F: fstp    [esp+54h+var_48]
0x9740A3: fld     dword ptr [eax+4]
0x9740A6: fmul    st, st(1)
0x9740A8: fstp    [esp+54h+var_44]
0x9740AC: fmul    dword ptr [eax+8]
0x9740AF: lea     eax, [ebx+68h]
0x9740B2: push    eax
0x9740B3: push    ecx
0x9740B4: fstp    [esp+5Ch+var_40]
0x9740B8: push    edx
0x9740B9: fld     [esp+60h+var_48]
0x9740BD: lea     eax, [esp+60h+var_24]
0x9740C1: fadd    [esp+60h+var_24]
0x9740C5: push    eax
0x9740C6: lea     ecx, [esp+64h+var_3C]
0x9740CA: push    ecx
0x9740CB: fstp    [esp+68h+var_24]
0x9740CF: fld     [esp+68h+var_20]
0x9740D3: fadd    [esp+68h+var_44]
0x9740D7: fstp    [esp+68h+var_20]
0x9740DB: fld     [esp+68h+var_1C]
0x9740DF: fadd    [esp+68h+var_40]
0x9740E3: fstp    [esp+68h+var_1C]
0x9740E7: call    sub_9726E0
0x9740EC: fmul    dword ptr [ebx+60h]
0x9740EF: add     esp, 14h
0x9740F2: pop     edi
0x9740F3: pop     esi
0x9740F4: fsub    qword ptr ds:0A2F928h
0x9740FA: pop     ebx
0x9740FB: fstp    [esp+48h+arg_0]
0x9740FF: fld     [esp+48h+arg_0]
0x974103: add     esp, 48h
0x974106: retn    0Ch
