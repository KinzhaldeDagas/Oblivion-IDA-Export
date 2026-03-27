0x6C14C0: mov     eax, [esp+arg_8]
0x6C14C4: mov     ecx, [esp+arg_4]
0x6C14C8: fld     dword ptr [eax+4]
0x6C14CB: fstp    [esp+arg_8]
0x6C14CF: sub     esp, 14h
0x6C14D2: fld     dword ptr [ecx+4]
0x6C14D5: fstp    [esp+14h+arg_4]
0x6C14D9: fld     dword ptr [eax+14h]
0x6C14DC: fstp    [esp+14h+var_4]; float
0x6C14E0: fld     [esp+14h+arg_8]
0x6C14E4: fstp    [esp+14h+var_8]; float
0x6C14E8: fld     dword ptr [ecx+18h]
0x6C14EB: fstp    [esp+14h+var_C]; float
0x6C14EF: fld     [esp+14h+arg_4]
0x6C14F3: fstp    [esp+14h+var_10]; float
0x6C14F7: fld     [esp+14h+arg_0]
0x6C14FB: fstp    [esp+14h+var_14]; float
0x6C14FE: call    sub_6D36B0
0x6C1503: mov     eax, [esp+14h+arg_C]
0x6C1507: fstp    dword ptr [eax]
0x6C1509: add     esp, 14h
0x6C150C: retn
