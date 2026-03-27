0x9742C0: sub     esp, 60h
0x9742C3: mov     eax, [esp+60h+arg_0]
0x9742C7: fld     dword ptr [eax]
0x9742C9: push    ebx
0x9742CA: fld     [esp+64h+arg_8]
0x9742CE: mov     ebx, ecx
0x9742D0: fld     st
0x9742D2: push    esi
0x9742D3: fmulp   st(2), st
0x9742D5: mov     esi, [ebx+38h]
0x9742D8: fxch    st(1)
0x9742DA: push    edi
0x9742DB: add     esi, 4
0x9742DE: fstp    [esp+6Ch+var_60]
0x9742E2: mov     ecx, 0Fh
0x9742E7: fld     dword ptr [eax+4]
0x9742EA: lea     edi, [esp+6Ch+var_3C]
0x9742EE: fmul    st, st(1)
0x9742F0: rep movsd
0x9742F2: fstp    [esp+6Ch+var_5C]
0x9742F6: fld     dword ptr [eax+8]
0x9742F9: fmul    st, st(1)
0x9742FB: fstp    [esp+6Ch+var_58]
0x9742FF: fld     [esp+6Ch+var_60]
0x974303: fadd    [esp+6Ch+var_3C]
0x974307: mov     eax, [ebx+3Ch]
0x97430A: add     eax, 20h ; ' '
0x97430D: fstp    [esp+6Ch+var_3C]
0x974311: fld     [esp+6Ch+var_38]
0x974315: fadd    [esp+6Ch+var_5C]
0x974319: fstp    [esp+6Ch+var_38]
0x97431D: fld     [esp+6Ch+var_34]
0x974321: fadd    [esp+6Ch+var_58]
0x974325: fstp    [esp+6Ch+var_34]
0x974329: mov     ecx, [eax]
0x97432B: mov     [esp+6Ch+var_54], ecx
0x97432F: mov     edx, [eax+4]
0x974332: mov     [esp+6Ch+var_50], edx
0x974336: mov     ecx, [eax+8]
0x974339: mov     [esp+6Ch+var_4C], ecx
0x97433D: mov     edx, [eax+0Ch]
0x974340: mov     [esp+6Ch+var_48], edx
0x974344: mov     ecx, [eax+10h]
0x974347: mov     [esp+6Ch+var_44], ecx
0x97434B: mov     edx, [eax+14h]
0x97434E: mov     eax, [esp+6Ch+arg_4]
0x974352: fld     dword ptr [eax]
0x974354: mov     [esp+6Ch+var_40], edx
0x974358: fmul    st, st(1)
0x97435A: lea     ecx, [ebx+48h]
0x97435D: lea     edx, [ebx+44h]
0x974360: fstp    [esp+6Ch+var_60]
0x974364: fld     dword ptr [eax+4]
0x974367: fmul    st, st(1)
0x974369: fstp    [esp+6Ch+var_5C]
0x97436D: fmul    dword ptr [eax+8]
0x974370: lea     eax, [ebx+4Ch]
0x974373: push    eax
0x974374: push    ecx
0x974375: fstp    [esp+74h+var_58]
0x974379: push    edx
0x97437A: fld     [esp+78h+var_60]
0x97437E: lea     eax, [esp+78h+arg_0]
0x974382: fadd    [esp+78h+var_54]
0x974386: push    eax
0x974387: lea     ecx, [esp+7Ch+var_3C]
0x97438B: push    ecx
0x97438C: fstp    [esp+80h+var_54]
0x974390: lea     edx, [esp+80h+var_54]
0x974394: fld     [esp+80h+var_50]
0x974398: push    edx
0x974399: fadd    [esp+84h+var_5C]
0x97439D: fstp    [esp+84h+var_50]
0x9743A1: fld     [esp+84h+var_4C]
0x9743A5: fadd    [esp+84h+var_58]
0x9743A9: fstp    [esp+84h+var_4C]
0x9743AD: call    sub_975AA0
0x9743B2: fmul    dword ptr [ebx+40h]
0x9743B5: add     esp, 18h
0x9743B8: fsub    qword ptr ds:0A2F928h
0x9743BE: fstp    [esp+6Ch+arg_0]
0x9743C2: fld     [esp+6Ch+arg_0]
0x9743C6: pop     edi
0x9743C7: pop     esi
0x9743C8: pop     ebx
0x9743C9: add     esp, 60h
0x9743CC: retn    0Ch
