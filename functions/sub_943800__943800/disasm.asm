0x943800: push    esi
0x943801: push    edi
0x943802: mov     edi, [esp+8+arg_0]
0x943806: mov     esi, ecx
0x943808: push    edi
0x943809: lea     ecx, [esi+4]
0x94380C: call    sub_943890
0x943811: push    edi
0x943812: lea     ecx, [esi+18h]
0x943815: call    sub_9438E0
0x94381A: mov     eax, 3E4CCCCDh
0x94381F: mov     [esi+34h], eax
0x943822: mov     dword ptr [esi+30h], 3F000000h
0x943829: mov     dword ptr [esi+38h], 3F800000h
0x943830: mov     dword ptr [esi+50h], 4
0x943837: mov     [esi+40h], eax
0x94383A: mov     [esi+44h], eax
0x94383D: mov     dword ptr [esi+48h], 3D4CCCCDh
0x943844: pop     edi
0x943845: mov     dword ptr [esi+4Ch], 0
0x94384C: mov     eax, esi
0x94384E: pop     esi
0x94384F: retn    4
