0x4512A0: push    esi
0x4512A1: mov     esi, ecx
0x4512A3: mov     ecx, [esi+10h]
0x4512A6: test    ecx, ecx
0x4512A8: jz      short loc_4512BA
0x4512AA: mov     edx, ds:0A853D0h
0x4512B0: mov     eax, [ecx]
0x4512B2: mov     eax, [eax+0Ch]
0x4512B5: push    edx
0x4512B6: push    0
0x4512B8: call    eax
0x4512BA: xor     eax, eax
0x4512BC: cmp     [esp+4+arg_0], al
0x4512C0: mov     dword ptr [esi+25Ch], 0
0x4512CA: mov     dword ptr [esi+260h], 0
0x4512D4: mov     dword ptr [esi+264h], 0
0x4512DE: mov     [esi+23Ch], eax
0x4512E4: mov     [esi+240h], eax
0x4512EA: mov     [esi+244h], eax
0x4512F0: mov     [esi+248h], eax
0x4512F6: mov     [esi+24Ch], eax
0x4512FC: jz      short loc_451305
0x4512FE: mov     ecx, esi
0x451300: call    TESFile_GetRecordType
0x451305: pop     esi
0x451306: retn    4
