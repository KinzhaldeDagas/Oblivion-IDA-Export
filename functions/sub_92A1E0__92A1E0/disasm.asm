0x92A1E0: push    esi
0x92A1E1: push    edi
0x92A1E2: mov     edi, [esp+8+arg_0]
0x92A1E6: mov     eax, [edi]
0x92A1E8: mov     esi, ecx
0x92A1EA: push    esi
0x92A1EB: push    1
0x92A1ED: push    offset aMeshshape; "MeshShape"
0x92A1F2: mov     ecx, edi
0x92A1F4: call    dword ptr [eax]
0x92A1F6: mov     eax, [esi+2Ch]
0x92A1F9: test    eax, eax
0x92A1FB: js      short loc_92A225
0x92A1FD: mov     edx, [edi]
0x92A1FF: and     eax, 3FFFFFFFh
0x92A204: lea     eax, [eax+eax*2]
0x92A207: shl     eax, 4
0x92A20A: push    eax
0x92A20B: mov     eax, [esi+28h]
0x92A20E: lea     ecx, [eax+eax*2]
0x92A211: mov     eax, [esi+24h]
0x92A214: shl     ecx, 4
0x92A217: push    ecx
0x92A218: push    eax
0x92A219: push    1
0x92A21B: push    offset aSubparts_0; "SubParts"
0x92A220: mov     ecx, edi
0x92A222: call    dword ptr [edx+4]
0x92A225: mov     edx, [edi]
0x92A227: mov     ecx, edi
0x92A229: call    dword ptr [edx+14h]
0x92A22C: pop     edi
0x92A22D: pop     esi
0x92A22E: retn    4
