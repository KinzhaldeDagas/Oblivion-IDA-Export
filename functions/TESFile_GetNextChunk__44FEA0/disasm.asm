0x44FEA0: push    esi
0x44FEA1: mov     esi, ecx
0x44FEA3: mov     ecx, [esi+23Ch]
0x44FEA9: cmp     ecx, ds:0B05E20h
0x44FEAF: mov     edx, [esi+240h]
0x44FEB5: push    edi
0x44FEB6: mov     edi, 40000h
0x44FEBB: jz      short TESFile_GetNextChunk___AdvanceChunkOffset
0x44FEBD: test    [esi+244h], edi
0x44FEC3: jz      short TESFile_GetNextChunk___AdvanceChunkOffset
0x44FEC5: mov     edx, [esi+418h]
0x44FECB: mov     eax, [esi+254h]
0x44FED1: add     eax, 6
0x44FED4: add     [esi+260h], eax
0x44FEDA: mov     eax, [esi+260h]
0x44FEE0: cmp     eax, edx
0x44FEE2: jb      short loc_44FEF7
0x44FEE4: xor     eax, eax
0x44FEE6: mov     [esi+250h], eax
0x44FEEC: mov     [esi+254h], eax
0x44FEF2: pop     edi
0x44FEF3: xor     al, al
0x44FEF5: pop     esi
0x44FEF6: retn
0x44FEF7: cmp     ecx, ds:0B05E20h
0x44FEFD: mov     edx, [esi+25Ch]
0x44FF03: lea     eax, [edx+eax+14h]
0x44FF07: jz      short loc_44FF11
0x44FF09: test    [esi+244h], edi
0x44FF0F: jnz     short loc_44FF23
0x44FF11: mov     edi, ds:0A853D0h
0x44FF17: mov     ecx, [esi+10h]
0x44FF1A: mov     edx, [ecx]
0x44FF1C: push    edi
0x44FF1D: push    eax
0x44FF1E: mov     eax, [edx+0Ch]
0x44FF21: call    eax
0x44FF23: xor     eax, eax
0x44FF25: mov     ecx, esi; this
0x44FF27: mov     [esi+264h], eax
0x44FF2D: mov     [esi+250h], eax
0x44FF33: mov     [esi+254h], eax
0x44FF39: call    TESFile_LoadChunkHeader
0x44FF3E: pop     edi
0x44FF3F: mov     al, 1
0x44FF41: pop     esi
0x44FF42: retn
