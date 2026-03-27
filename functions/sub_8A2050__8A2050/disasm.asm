0x8A2050: sub     esp, 8
0x8A2053: push    esi
0x8A2054: push    edi
0x8A2055: mov     edi, [esp+10h+arg_0]
0x8A2059: push    edi
0x8A205A: mov     esi, ecx
0x8A205C: call    sub_8A1FB0
0x8A2061: fld     dword ptr [esi+34h]
0x8A2064: fstp    [esp+10h+arg_0]
0x8A2068: mov     eax, edi
0x8A206A: fld     dword ptr [esi+38h]
0x8A206D: fstp    [esp+10h+var_8]
0x8A2071: fld     dword ptr [esi+3Ch]
0x8A2074: fstp    [esp+10h+var_4]
0x8A2078: fld     dword ptr [esi+30h]
0x8A207B: fstp    dword ptr [edi+30h]
0x8A207E: fld     [esp+10h+arg_0]
0x8A2082: fstp    dword ptr [edi+34h]
0x8A2085: fld     [esp+10h+var_8]
0x8A2089: fstp    dword ptr [edi+38h]
0x8A208C: fld     [esp+10h+var_4]
0x8A2090: fstp    dword ptr [edi+3Ch]
0x8A2093: pop     edi
0x8A2094: pop     esi
0x8A2095: add     esp, 8
0x8A2098: retn    4
