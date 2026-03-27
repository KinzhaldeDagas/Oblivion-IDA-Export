0x41612B: push    ebx
0x41612C: mov     ecx, edi
0x41612E: call    TESFile_InitializeFormFromRecord
0x416133: mov     ecx, edi
0x416135: call    TESFile_GetChunkType
0x41613A: test    eax, eax
0x41613C: jz      EffectSetting_LoadForm___Return_1
