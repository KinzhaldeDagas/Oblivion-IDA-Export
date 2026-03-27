0x68E9F0: mov     edx, [esi]
0x68E9F2: mov     eax, [edx+3Ch]
0x68E9F5: mov     ecx, esi
0x68E9F7: call    eax
0x68E9F9: mov     ecx, [esi+2Ch]
0x68E9FC: test    ecx, ecx
0x68E9FE: mov     byte ptr [esi+12h], 1
0x68EA02: jz      short ActiveEffect_Base_ProcessEffect___Done
0x68EA04: call    sub_6B7240
