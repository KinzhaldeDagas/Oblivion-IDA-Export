0x4F1A80: sub     esp, 8
0x4F1A83: mov     eax, [esp+8+arg_0]
0x4F1A87: fld     dword ptr [eax]
0x4F1A89: fstp    [esp+8+arg_0]
0x4F1A8D: fld     [esp+8+arg_0]
0x4F1A91: fistp   [esp+8+var_8]
0x4F1A94: fld     dword ptr [eax+4]
0x4F1A97: fstp    [esp+8+var_4]
0x4F1A9B: fld     [esp+8+var_4]
0x4F1A9F: fistp   [esp+8+arg_0]
0x4F1AA3: mov     eax, [esp+8+arg_0]
0x4F1AA7: mov     edx, [esp+8+var_8]
0x4F1AAA: sar     eax, 0Ch
0x4F1AAD: push    eax; signed int
0x4F1AAE: sar     edx, 0Ch
0x4F1AB1: push    edx; signed int
0x4F1AB2: call    TESWorldSpace__GetCellAtCellCoord
0x4F1AB7: add     esp, 8
0x4F1ABA: retn    4
