0x416286: mov     eax, [ebx+9Ch]
0x41628C: test    eax, eax
0x41628E: jz      short loc_41629B
0x416290: push    eax; void *
0x416291: mov     ecx, offset FormHeap
0x416296: call    MemoryHeap_Free_checked
0x41629B: movzx   eax, word ptr [ebx+6Ch]
0x41629F: test    ax, ax
0x4162A2: jz      EffectSetting_LoadForm___ChunkLoopContinue
0x4162A8: movsx   esi, ax
0x4162AB: add     esi, esi
0x4162AD: push    1
0x4162AF: add     esi, esi
0x4162B1: push    esi
0x4162B2: mov     ecx, offset FormHeap
0x4162B7: call    j_MemoryHeap_Alloc
0x4162BC: test    eax, eax
0x4162BE: mov     [ebx+9Ch], eax
0x4162C4: jz      short EffectSetting_LoadForm___ChunkLoopContinue
0x4162C6: push    esi; a4
0x4162C7: push    eax; Dst
0x4162C8: mov     ecx, edi; a1
0x4162CA: call    TESFile_GetChunkData
0x4162CF: jmp     short EffectSetting_LoadForm___ChunkLoopContinue
