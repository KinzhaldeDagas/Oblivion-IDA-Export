0x4BBA30: push    ebp
0x4BBA31: mov     ebp, esp
0x4BBA33: sub     esp, 8
0x4BBA36: mov     eax, ds:0B30AACh
0x4BBA3B: xor     eax, ebp
0x4BBA3D: mov     [ebp+var_4], eax
0x4BBA40: push    ebx
0x4BBA41: mov     ebx, [ebp+arg_0]
0x4BBA44: push    esi
0x4BBA45: mov     esi, ecx
0x4BBA47: push    edi
0x4BBA48: mov     ecx, ebx
0x4BBA4A: call    TESFile_GetRecordType
0x4BBA4F: cmp     al, 2Ah ; '*'
0x4BBA51: jz      short loc_4BBA5A
0x4BBA53: xor     al, al
0x4BBA55: jmp     TESSigilStone_LoadForm___Done
0x4BBA5A: push    esi
0x4BBA5B: mov     ecx, ebx; this
0x4BBA5D: call    TESFile_InitializeFormFromRecord
0x4BBA62: push    0; a2
0x4BBA64: mov     ecx, esi; this
0x4BBA66: call    TESForm_SetIsLinked
0x4BBA6B: mov     ecx, ebx
0x4BBA6D: call    TESFile_GetChunkType
0x4BBA72: test    eax, eax
0x4BBA74: jz      TESSigilStone_LoadForm___Return_1
0x4BBA7A: lea     ebx, [ebx+0]
