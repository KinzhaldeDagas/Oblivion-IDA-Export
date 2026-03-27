0x41B6B5: cmp     [ebp-8], eax
0x41B6B8: jnz     short MagicItemObject_LoadForm___ChunkLoopContinue
0x41B6BA: mov     edx, [esi]
0x41B6BC: mov     eax, [edx+2Ch]
0x41B6BF: mov     ecx, esi
0x41B6C1: call    eax
0x41B6C3: mov     edx, [esi]
0x41B6C5: push    eax
0x41B6C6: mov     eax, [edx+28h]
0x41B6C9: push    0
0x41B6CB: mov     ecx, esi
0x41B6CD: call    eax
0x41B6CF: push    eax
0x41B6D0: call    __memset
0x41B6D5: mov     edx, [esi]
0x41B6D7: mov     eax, [edx+2Ch]
0x41B6DA: add     esp, 0Ch
0x41B6DD: mov     ecx, esi
0x41B6DF: call    eax
0x41B6E1: mov     edx, [esi]
0x41B6E3: push    eax; a4
0x41B6E4: mov     eax, [edx+28h]
0x41B6E7: mov     ecx, esi
0x41B6E9: call    eax
0x41B6EB: push    eax; Dst
0x41B6EC: mov     ecx, ebx; a1
0x41B6EE: call    TESFile_GetChunkData
