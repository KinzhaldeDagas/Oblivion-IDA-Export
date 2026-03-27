0x95DB70: sub     esp, 14h
0x95DB73: mov     eax, [esp+14h+arg_0]
0x95DB77: mov     edx, [eax+4]
0x95DB7A: fld     dword ptr [eax+0Ch]
0x95DB7D: push    esi
0x95DB7E: fstp    [esp+18h+var_14]
0x95DB82: mov     esi, ecx
0x95DB84: mov     ecx, [eax]
0x95DB86: mov     [esp+18h+var_C], ecx
0x95DB8A: mov     ecx, [eax+8]
0x95DB8D: mov     [esp+18h+var_4], ecx
0x95DB91: lea     ecx, [esp+18h+var_C]
0x95DB95: mov     [esp+18h+var_8], edx
0x95DB99: call    sub_43F350
0x95DB9E: fdivr   [esp+18h+var_14]
0x95DBA2: mov     edx, [esp+18h+var_C]
0x95DBA6: mov     eax, [esp+18h+var_8]
0x95DBAA: mov     ecx, [esp+18h+var_4]
0x95DBAE: mov     [esi+4], edx
0x95DBB1: mov     [esi+8], eax
0x95DBB4: mov     [esi+0Ch], ecx
0x95DBB7: fstp    [esp+18h+arg_0]
0x95DBBB: fld     [esp+18h+arg_0]
0x95DBBF: fstp    dword ptr [esi+10h]
0x95DBC2: pop     esi
0x95DBC3: add     esp, 14h
0x95DBC6: retn    4
