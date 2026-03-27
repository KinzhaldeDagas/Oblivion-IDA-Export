0x88EA90: mov     eax, [esp+arg_4]
0x88EA94: push    esi
0x88EA95: push    edi
0x88EA96: mov     edi, [esp+8+arg_0]
0x88EA9A: push    eax
0x88EA9B: push    edi
0x88EA9C: mov     esi, ecx
0x88EA9E: call    sub_89E930
0x88EAA3: fld     dword ptr [esi+18h]
0x88EAA6: fstp    dword ptr [edi+18h]
0x88EAA9: fld     dword ptr [esi+14h]
0x88EAAC: fstp    dword ptr [edi+14h]
0x88EAAF: mov     ecx, [esi+20h]
0x88EAB2: mov     [edi+20h], ecx
0x88EAB5: pop     edi
0x88EAB6: pop     esi
0x88EAB7: retn    8
