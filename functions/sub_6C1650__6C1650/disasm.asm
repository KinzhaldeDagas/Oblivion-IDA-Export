0x6C1650: push    ebx
0x6C1651: mov     ebx, [esp+4+arg_4]
0x6C1655: cmp     ebx, 2
0x6C1658: jb      loc_6C1732
0x6C165E: fld1
0x6C1660: mov     edx, [esp+4+arg_0]
0x6C1664: push    esi
0x6C1665: sub     esp, 10h
0x6C1668: fst     [esp+18h+var_C]; float
0x6C166C: fstp    [esp+18h+var_10]; float
0x6C1670: fld     dword ptr [edx+20h]
0x6C1673: fstp    [esp+18h+var_14]; float
0x6C1677: fld     dword ptr [edx+4]
0x6C167A: fadd    st, st
0x6C167C: fsub    dword ptr [edx+20h]
0x6C167F: fstp    [esp+18h+arg_4]
0x6C1683: fld     [esp+18h+arg_4]
0x6C1687: fstp    [esp+18h+var_18]; float
0x6C168A: push    edx; int
0x6C168B: call    sub_6C1550
0x6C1690: lea     esi, [ebx-1]
0x6C1693: add     esp, 14h
0x6C1696: cmp     esi, 1
0x6C1699: jbe     short loc_6C16E6
0x6C169B: push    edi
0x6C169C: mov     eax, edx
0x6C169E: lea     edi, [esi-1]
0x6C16A1: fld     dword ptr [eax+38h]
0x6C16A4: lea     ecx, [eax+1Ch]
0x6C16A7: fsub    dword ptr [ecx]
0x6C16A9: sub     esp, 10h
0x6C16AC: fstp    [esp+1Ch+arg_4]
0x6C16B0: fld     [esp+1Ch+arg_4]
0x6C16B4: fstp    [esp+1Ch+var_10]; float
0x6C16B8: fld     dword ptr [ecx]
0x6C16BA: fsub    dword ptr [eax]
0x6C16BC: fstp    [esp+1Ch+arg_4]
0x6C16C0: fld     [esp+1Ch+arg_4]
0x6C16C4: fstp    [esp+1Ch+var_14]; float
0x6C16C8: fld     dword ptr [eax+3Ch]
0x6C16CB: fstp    [esp+1Ch+var_18]; float
0x6C16CF: fld     dword ptr [eax+4]
0x6C16D2: fstp    [esp+1Ch+var_1C]; float
0x6C16D5: push    ecx; int
0x6C16D6: call    sub_6C1550
0x6C16DB: add     esp, 14h
0x6C16DE: sub     edi, 1
0x6C16E1: mov     eax, ecx
0x6C16E3: jnz     short loc_6C16A1
0x6C16E5: pop     edi
0x6C16E6: fld1
0x6C16E8: lea     ecx, ds:0[esi*8]
0x6C16EF: sub     esp, 10h
0x6C16F2: fst     [esp+18h+var_C]; float
0x6C16F6: fstp    [esp+18h+var_10]; float
0x6C16FA: sub     ecx, esi
0x6C16FC: fld     dword ptr [edx+ecx*4+4]
0x6C1700: lea     eax, [ebx-2]
0x6C1703: lea     ecx, [edx+ecx*4]
0x6C1706: fadd    st, st
0x6C1708: lea     esi, ds:0[eax*8]
0x6C170F: sub     esi, eax
0x6C1711: lea     eax, [edx+esi*4+4]
0x6C1715: fsub    dword ptr [eax]
0x6C1717: fstp    [esp+18h+arg_4]
0x6C171B: fld     [esp+18h+arg_4]
0x6C171F: fstp    [esp+18h+var_14]; float
0x6C1723: fld     dword ptr [eax]
0x6C1725: fstp    [esp+18h+var_18]; float
0x6C1728: push    ecx; int
0x6C1729: call    sub_6C1550
0x6C172E: add     esp, 14h
0x6C1731: pop     esi
0x6C1732: pop     ebx
0x6C1733: retn
