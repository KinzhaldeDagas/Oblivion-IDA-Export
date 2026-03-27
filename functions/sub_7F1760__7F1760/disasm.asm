0x7F1760: sub     esp, 40h
0x7F1763: push    edi
0x7F1764: mov     edi, [esp+44h+arg_0]
0x7F1768: cmp     edi, 4
0x7F176B: jb      short loc_7F1774
0x7F176D: xor     al, al
0x7F176F: pop     edi
0x7F1770: add     esp, 40h
0x7F1773: retn
0x7F1774: fldz
0x7F1776: push    esi
0x7F1777: fst     [esp+48h+var_8]
0x7F177B: sub     esp, 0Ch
0x7F177E: fst     [esp+54h+var_C]
0x7F1782: lea     eax, [esp+54h+var_40]
0x7F1786: fst     [esp+54h+var_10]
0x7F178A: fst     [esp+54h+var_14]
0x7F178E: fst     [esp+54h+var_1C]
0x7F1792: fst     [esp+54h+var_20]
0x7F1796: fst     [esp+54h+var_24]
0x7F179A: fst     [esp+54h+var_28]
0x7F179E: fst     [esp+54h+var_30]
0x7F17A2: fst     [esp+54h+var_34]
0x7F17A6: fst     [esp+54h+var_38]
0x7F17AA: fst     [esp+54h+var_3C]
0x7F17AE: fld1
0x7F17B0: fst     [esp+54h+var_4]
0x7F17B4: fst     [esp+54h+var_18]
0x7F17B8: fst     [esp+54h+var_2C]
0x7F17BC: fstp    [esp+54h+var_40]
0x7F17C0: fstp    [esp+54h+var_4C]
0x7F17C4: fld     [esp+54h+arg_8]
0x7F17C8: fstp    [esp+54h+var_50]
0x7F17CC: fld     [esp+54h+arg_4]
0x7F17D0: fstp    [esp+54h+var_54]
0x7F17D3: push    eax
0x7F17D4: call    D3DXMatrixRotationYawPitchRoll_0
0x7F17D9: lea     ecx, [esp+48h+var_40]
0x7F17DD: push    ecx
0x7F17DE: mov     edx, ecx
0x7F17E0: push    edx
0x7F17E1: call    D3DXMatrixTranspose_0
0x7F17E6: shl     edi, 6
0x7F17E9: add     edi, offset WindMatrixes
0x7F17EF: mov     ecx, 10h
0x7F17F4: lea     esi, [esp+48h+var_40]
0x7F17F8: rep movsd
0x7F17FA: pop     esi
0x7F17FB: mov     al, 1
0x7F17FD: pop     edi
0x7F17FE: add     esp, 40h
0x7F1801: retn
