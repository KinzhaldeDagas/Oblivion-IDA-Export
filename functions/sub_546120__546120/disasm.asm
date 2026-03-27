0x546120: push    esi
0x546121: mov     esi, ecx
0x546123: cmp     dword ptr [esi+10h], 0
0x546127: jz      short loc_54616C
0x546129: cmp     byte ptr [esi+24h], 0
0x54612D: jz      short loc_54616C
0x54612F: call    InitBSShaderAccumulator
0x546134: test    eax, eax
0x546136: jz      short loc_54616C
0x546138: mov     esi, [esi+10h]
0x54613B: fld     dword ptr [esi+94h]
0x546141: mov     ecx, [esp+4+arg_0]
0x546145: fdiv    qword ptr ds:0A492B0h
0x54614B: push    ecx
0x54614C: push    esi
0x54614D: mov     ecx, eax
0x54614F: fstp    dword ptr [esi+94h]
0x546155: call    sub_7AA130
0x54615A: fld     dword ptr [esi+94h]
0x546160: fmul    qword ptr ds:0A492B0h
0x546166: fstp    dword ptr [esi+94h]
0x54616C: pop     esi
0x54616D: retn    4
