0x96F530: sub     esp, 34h
0x96F533: push    esi
0x96F534: mov     esi, ecx
0x96F536: fld     dword ptr [esi+44h]
0x96F539: push    ecx
0x96F53A: mov     ecx, [esi+38h]
0x96F53D: fstp    [esp+3Ch+var_3C]; float
0x96F540: lea     eax, [esp+3Ch+var_30]
0x96F544: push    eax; int
0x96F545: add     ecx, 20h ; ' '
0x96F548: call    sub_976A50
0x96F54D: mov     eax, [esi+3Ch]
0x96F550: mov     ecx, [eax+4]
0x96F553: mov     edx, [eax+8]
0x96F556: add     eax, 4
0x96F559: cmp     dword ptr [esi+18h], 2
0x96F55D: mov     eax, [eax+8]
0x96F560: mov     [esp+38h+var_24], ecx
0x96F564: mov     [esp+38h+var_20], edx
0x96F568: mov     [esp+38h+var_1C], eax
0x96F56C: jnz     loc_96F6C0
0x96F572: mov     eax, [esp+38h+arg_0]
0x96F576: fld     dword ptr [esi+1Ch]
0x96F579: fstp    [esp+38h+var_34]
0x96F57D: push    edi
0x96F57E: fld     dword ptr [eax]
0x96F580: lea     edi, [esi+2Ch]
0x96F583: fld     [esp+3Ch+var_34]
0x96F587: fld     st
0x96F589: fmulp   st(2), st
0x96F58B: fxch    st(1)
0x96F58D: fstp    [esp+3Ch+var_18]
0x96F591: fld     dword ptr [eax+4]
0x96F594: fmul    st, st(1)
0x96F596: fstp    [esp+3Ch+var_14]
0x96F59A: fmul    dword ptr [eax+8]
0x96F59D: mov     eax, [esp+3Ch+arg_4]
0x96F5A1: fstp    [esp+3Ch+var_10]
0x96F5A5: fld     [esp+3Ch+var_18]
0x96F5A9: fadd    [esp+3Ch+var_30]
0x96F5AD: fstp    [esp+3Ch+var_30]
0x96F5B1: fld     [esp+3Ch+var_2C]
0x96F5B5: fadd    [esp+3Ch+var_14]
0x96F5B9: fstp    [esp+3Ch+var_2C]
0x96F5BD: fld     [esp+3Ch+var_28]
0x96F5C1: fadd    [esp+3Ch+var_10]
0x96F5C5: fstp    [esp+3Ch+var_28]
0x96F5C9: fld     dword ptr [esi+1Ch]
0x96F5CC: fstp    [esp+3Ch+arg_0]
0x96F5D0: fld     dword ptr [eax]
0x96F5D2: fld     [esp+3Ch+arg_0]
0x96F5D6: fld     st
0x96F5D8: fmulp   st(2), st
0x96F5DA: fxch    st(1)
0x96F5DC: fstp    [esp+3Ch+var_18]
0x96F5E0: fld     dword ptr [eax+4]
0x96F5E3: fmul    st, st(1)
0x96F5E5: fstp    [esp+3Ch+var_14]
0x96F5E9: fmul    dword ptr [eax+8]
0x96F5EC: fstp    [esp+3Ch+var_10]
0x96F5F0: fld     [esp+3Ch+var_18]
0x96F5F4: fadd    [esp+3Ch+var_24]
0x96F5F8: fstp    [esp+3Ch+var_24]
0x96F5FC: fld     [esp+3Ch+var_20]
0x96F600: fadd    [esp+3Ch+var_14]
0x96F604: fstp    [esp+3Ch+var_20]
0x96F608: fld     [esp+3Ch+var_1C]
0x96F60C: fadd    [esp+3Ch+var_10]
0x96F610: fstp    [esp+3Ch+var_1C]
0x96F614: fld     [esp+3Ch+var_24]
0x96F618: fsub    [esp+3Ch+var_30]
0x96F61C: fstp    [esp+3Ch+var_18]
0x96F620: mov     ecx, [esp+3Ch+var_18]
0x96F624: fld     [esp+3Ch+var_20]
0x96F628: mov     [edi], ecx
0x96F62A: fsub    [esp+3Ch+var_2C]
0x96F62E: mov     ecx, edi
0x96F630: fstp    [esp+3Ch+var_14]
0x96F634: mov     edx, [esp+3Ch+var_14]
0x96F638: fld     [esp+3Ch+var_1C]
0x96F63C: mov     [edi+4], edx
0x96F63F: fsub    [esp+3Ch+var_28]
0x96F643: fstp    [esp+3Ch+var_10]
0x96F647: mov     eax, [esp+3Ch+var_10]
0x96F64B: mov     [edi+8], eax
0x96F64E: call    sub_43F350
0x96F653: fstp    st
0x96F655: mov     ecx, [esi+38h]
0x96F658: fld     dword ptr [ecx+38h]
0x96F65B: fstp    [esp+3Ch+arg_0]
0x96F65F: fld     dword ptr [edi]
0x96F661: fld     [esp+3Ch+arg_0]
0x96F665: fld     st
0x96F667: fmulp   st(2), st
0x96F669: fxch    st(1)
0x96F66B: fstp    [esp+3Ch+var_18]
0x96F66F: fld     dword ptr [edi+4]
0x96F672: fmul    st, st(1)
0x96F674: fstp    [esp+3Ch+var_14]
0x96F678: fmul    dword ptr [edi+8]
0x96F67B: fstp    [esp+3Ch+var_10]
0x96F67F: fld     [esp+3Ch+var_18]
0x96F683: fadd    [esp+3Ch+var_30]
0x96F687: pop     edi
0x96F688: fstp    [esp+38h+var_24]
0x96F68C: mov     edx, [esp+38h+var_24]
0x96F690: fld     [esp+38h+var_14]
0x96F694: mov     [esi+20h], edx
0x96F697: fadd    [esp+38h+var_2C]
0x96F69B: fstp    [esp+38h+var_20]
0x96F69F: mov     eax, [esp+38h+var_20]
0x96F6A3: fld     [esp+38h+var_10]
0x96F6A7: mov     [esi+24h], eax
0x96F6AA: fadd    [esp+38h+var_28]
0x96F6AE: fstp    [esp+38h+var_1C]
0x96F6B2: mov     ecx, [esp+38h+var_1C]
0x96F6B6: mov     [esi+28h], ecx
0x96F6B9: pop     esi
0x96F6BA: add     esp, 34h
0x96F6BD: retn    8
0x96F6C0: fld     [esp+38h+var_24]
0x96F6C4: fadd    [esp+38h+var_30]
0x96F6C8: fstp    [esp+38h+var_18]
0x96F6CC: fld     [esp+38h+var_20]
0x96F6D0: fadd    [esp+38h+var_2C]
0x96F6D4: fstp    [esp+38h+var_14]
0x96F6D8: fld     [esp+38h+var_1C]
0x96F6DC: fadd    [esp+38h+var_28]
0x96F6E0: fstp    [esp+38h+var_10]
0x96F6E4: fld     [esp+38h+var_18]
0x96F6E8: fld     qword ptr ds:0A2FAA0h
0x96F6EE: fmul    st(1), st
0x96F6F0: fxch    st(1)
0x96F6F2: fstp    [esp+38h+var_C]
0x96F6F6: mov     edx, [esp+38h+var_C]
0x96F6FA: fld     [esp+38h+var_14]
0x96F6FE: mov     [esi+20h], edx
0x96F701: fmul    st, st(1)
0x96F703: lea     edx, [esp+38h+var_24]
0x96F707: push    edx
0x96F708: fstp    [esp+3Ch+var_8]
0x96F70C: mov     eax, [esp+3Ch+var_8]
0x96F710: mov     [esi+24h], eax
0x96F713: fmul    [esp+3Ch+var_10]
0x96F717: fstp    [esp+3Ch+var_4]
0x96F71B: mov     ecx, [esp+3Ch+var_4]
0x96F71F: mov     [esi+28h], ecx
0x96F722: lea     ecx, [esp+3Ch+var_30]
0x96F726: call    sub_8AA390
0x96F72B: test    al, al
0x96F72D: jz      short loc_96F778
0x96F72F: fld     [esp+38h+var_24]
0x96F733: lea     ecx, [esi+2Ch]
0x96F736: fsub    [esp+38h+var_30]
0x96F73A: fstp    [esp+38h+var_C]
0x96F73E: mov     eax, [esp+38h+var_C]
0x96F742: fld     [esp+38h+var_20]
0x96F746: mov     [ecx], eax
0x96F748: fsub    [esp+38h+var_2C]
0x96F74C: fstp    [esp+38h+var_8]
0x96F750: mov     edx, [esp+38h+var_8]
0x96F754: fld     [esp+38h+var_1C]
0x96F758: mov     [ecx+4], edx
0x96F75B: fsub    [esp+38h+var_28]
0x96F75F: fstp    [esp+38h+var_4]
0x96F763: mov     eax, [esp+38h+var_4]
0x96F767: mov     [ecx+8], eax
0x96F76A: call    sub_43F350
0x96F76F: fstp    st
0x96F771: pop     esi
0x96F772: add     esp, 34h
0x96F775: retn    8
0x96F778: mov     ecx, ds:0B258E8h
0x96F77E: mov     [esi+2Ch], ecx
0x96F781: mov     edx, ds:0B258ECh
0x96F787: mov     [esi+30h], edx
0x96F78A: mov     eax, ds:0B258F0h
0x96F78F: mov     [esi+34h], eax
0x96F792: pop     esi
0x96F793: add     esp, 34h
0x96F796: retn    8
