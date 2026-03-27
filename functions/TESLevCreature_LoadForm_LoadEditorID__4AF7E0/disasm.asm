0x4AF7E0: mov     eax, [edi+254h]
0x4AF7E6: call    __alloca?
0x4AF7EB: mov     ebx, esp
0x4AF7ED: push    200h; a4
0x4AF7F2: push    ebx; Dst
0x4AF7F3: mov     ecx, edi; a1
0x4AF7F5: call    TESFile_GetChunkData
0x4AF7FA: mov     eax, [esi]
0x4AF7FC: mov     edx, [eax+0D8h]
0x4AF802: push    ebx
0x4AF803: mov     ecx, esi
0x4AF805: call    edx
0x4AF807: jmp     short TESLevCreature_LoadForm___NextChunk
