0x41B3CC: mov     edx, [esi]
0x41B3CE: mov     eax, [edx+24h]
0x41B3D1: mov     ecx, esi
0x41B3D3: call    eax
0x41B3D5: cmp     [ebp-8], eax
0x41B3D8: jnz     short MagicItemForm_LoadForm___ChunkLoopContinue
0x41B3DA: mov     edx, [esi]
0x41B3DC: mov     eax, [edx+2Ch]
0x41B3DF: mov     ecx, esi
0x41B3E1: call    eax
0x41B3E3: mov     edx, [esi]
0x41B3E5: push    eax
0x41B3E6: mov     eax, [edx+28h]
0x41B3E9: push    0
0x41B3EB: mov     ecx, esi
0x41B3ED: call    eax
0x41B3EF: push    eax
0x41B3F0: call    __memset
0x41B3F5: mov     edx, [esi]
0x41B3F7: mov     eax, [edx+2Ch]
0x41B3FA: add     esp, 0Ch
0x41B3FD: mov     ecx, esi
0x41B3FF: call    eax
0x41B401: mov     edx, [esi]
0x41B403: push    eax; a4
0x41B404: mov     eax, [edx+28h]
0x41B407: mov     ecx, esi
0x41B409: call    eax
0x41B40B: push    eax; Dst
0x41B40C: mov     ecx, ebx; a1
0x41B40E: call    TESFile_GetChunkData
