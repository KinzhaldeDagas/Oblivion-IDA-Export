0x53D7A0: sub     esp, 3Ch
0x53D7A3: mov     eax, [esp+3Ch+arg_4]
0x53D7A7: fld     dword ptr [eax+30h]
0x53D7AA: push    ebx
0x53D7AB: push    ebp
0x53D7AC: mov     ebp, [esp+44h+arg_0]
0x53D7B0: push    esi
0x53D7B1: push    edi
0x53D7B2: mov     ebx, ecx
0x53D7B4: fmul    dword ptr [ebx+30h]
0x53D7B7: push    eax
0x53D7B8: lea     eax, [esp+50h+var_24]
0x53D7BC: push    eax
0x53D7BD: fstp    dword ptr [ebp+30h]
0x53D7C0: call    NiMAtrix33_Multiply
0x53D7C5: mov     esi, eax
0x53D7C7: mov     ecx, 9
0x53D7CC: mov     edi, ebp
0x53D7CE: rep movsd
0x53D7D0: mov     ecx, [esp+4Ch+arg_4]
0x53D7D4: add     ecx, 24h ; '$'
0x53D7D7: push    ecx
0x53D7D8: lea     edx, [esp+50h+var_30]
0x53D7DC: push    edx
0x53D7DD: mov     ecx, ebx
0x53D7DF: call    sub_7101F0
0x53D7E4: pop     edi
0x53D7E5: fld     dword ptr [ebx+30h]
0x53D7E8: pop     esi
0x53D7E9: fstp    [esp+44h+arg_4]
0x53D7ED: fld     dword ptr [eax]
0x53D7EF: fld     [esp+44h+arg_4]
0x53D7F3: fld     st
0x53D7F5: fmulp   st(2), st
0x53D7F7: fxch    st(1)
0x53D7F9: fstp    [esp+44h+var_3C]
0x53D7FD: fld     dword ptr [eax+4]
0x53D800: fmul    st, st(1)
0x53D802: fstp    [esp+44h+var_38]
0x53D806: fmul    dword ptr [eax+8]
0x53D809: fstp    [esp+44h+var_34]
0x53D80D: fld     [esp+44h+var_3C]
0x53D811: fadd    dword ptr [ebx+24h]
0x53D814: fstp    [esp+44h+var_30]
0x53D818: mov     eax, [esp+44h+var_30]
0x53D81C: fld     dword ptr [ebx+28h]
0x53D81F: fadd    [esp+44h+var_38]
0x53D823: fstp    [esp+44h+var_2C]
0x53D827: mov     ecx, [esp+44h+var_2C]
0x53D82B: fld     dword ptr [ebx+2Ch]
0x53D82E: mov     [ebp+24h], eax
0x53D831: fadd    [esp+44h+var_34]
0x53D835: mov     [ebp+28h], ecx
0x53D838: mov     eax, ebp
0x53D83A: fstp    [esp+44h+var_28]
0x53D83E: mov     edx, [esp+44h+var_28]
0x53D842: mov     [ebp+2Ch], edx
0x53D845: pop     ebp
0x53D846: pop     ebx
0x53D847: add     esp, 3Ch
0x53D84A: retn    8
