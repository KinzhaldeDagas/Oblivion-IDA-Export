0x4AF7A5: push    0; a4
0x4AF7A7: lea     ecx, [ebp-0Ch]
0x4AF7AA: push    ecx; Dst
0x4AF7AB: mov     ecx, edi; a1
0x4AF7AD: mov     byte ptr [ebp-0Ch], 0
0x4AF7B1: call    TESFile_GetChunkData
0x4AF7B6: test    byte ptr [ebp-0Ch], 80h
0x4AF7BA: lea     ebx, [esi+24h]
0x4AF7BD: mov     ecx, ebx
0x4AF7BF: jz      short loc_4AF7C5
0x4AF7C1: push    1
0x4AF7C3: jmp     short loc_4AF7C7
0x4AF7C5: push    0
0x4AF7C7: call    TESLeveledList_SetCalcAllLevels
0x4AF7CC: and     byte ptr [ebp-0Ch], 7Fh
0x4AF7D0: mov     edx, [ebp-0Ch]
0x4AF7D3: push    edx
0x4AF7D4: mov     ecx, ebx
0x4AF7D6: call    TESLeveledList_SetChanceNone
0x4AF7DB: jmp     TESLevCreature_LoadForm___NextChunk
