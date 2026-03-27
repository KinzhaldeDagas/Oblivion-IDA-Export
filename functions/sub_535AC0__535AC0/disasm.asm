0x535AC0: push    ecx
0x535AC1: push    esi
0x535AC2: mov     esi, ecx
0x535AC4: test    esi, esi
0x535AC6: jz      short loc_535B04
0x535AC8: mov     ecx, [esi+8]
0x535ACB: test    ecx, ecx
0x535ACD: jz      short loc_535AEA
0x535ACF: call    sub_8A98D0
0x535AD4: test    eax, eax
0x535AD6: jz      short loc_535AEA
0x535AD8: mov     ecx, eax
0x535ADA: call    sub_89DA90
0x535ADF: fstp    [esp+8+var_4]
0x535AE3: fld     [esp+8+var_4]
0x535AE7: pop     esi
0x535AE8: pop     ecx
0x535AE9: retn
0x535AEA: mov     esi, [esi+8]
0x535AED: test    esi, esi
0x535AEF: jz      short loc_535B04
0x535AF1: mov     ecx, [esi+50h]
0x535AF4: call    sub_89DA90
0x535AF9: fstp    [esp+8+var_4]
0x535AFD: fld     [esp+8+var_4]
0x535B01: pop     esi
0x535B02: pop     ecx
0x535B03: retn
0x535B04: fldz
0x535B06: pop     esi
0x535B07: fstp    [esp+4+var_4]
0x535B0A: fld     [esp+4+var_4]
0x535B0D: pop     ecx
0x535B0E: retn
