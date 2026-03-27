0x41625A: mov     eax, [edi+254h]
0x416260: call    __alloca?
0x416265: mov     esi, esp
0x416267: push    200h; a4
0x41626C: push    esi; Dst
0x41626D: mov     ecx, edi; a1
0x41626F: call    TESFile_GetChunkData
0x416274: mov     edx, [ebx]
0x416276: mov     eax, [edx+0D8h]
0x41627C: push    esi
0x41627D: mov     ecx, ebx
0x41627F: call    eax
0x416281: jmp     EffectSetting_LoadForm___ChunkLoopContinue
