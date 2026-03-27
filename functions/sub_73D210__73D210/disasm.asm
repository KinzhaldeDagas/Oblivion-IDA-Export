0x73D210: mov     eax, [esp+arg_4]
0x73D214: push    esi
0x73D215: push    edi
0x73D216: mov     edi, [esp+8+arg_0]
0x73D21A: push    eax
0x73D21B: push    edi
0x73D21C: mov     esi, ecx
0x73D21E: call    sub_725430
0x73D223: mov     ecx, [esi+114h]
0x73D229: mov     [edi+114h], ecx
0x73D22F: mov     edx, [esi+118h]
0x73D235: mov     [edi+118h], edx
0x73D23B: mov     eax, [esi+11Ch]
0x73D241: mov     [edi+11Ch], eax
0x73D247: fld     dword ptr [esi+120h]
0x73D24D: fstp    dword ptr [edi+120h]
0x73D253: fld     dword ptr [esi+124h]
0x73D259: fstp    dword ptr [edi+124h]
0x73D25F: pop     edi
0x73D260: pop     esi
0x73D261: retn    8
