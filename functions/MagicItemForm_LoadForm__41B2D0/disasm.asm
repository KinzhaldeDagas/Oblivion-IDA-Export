0x41B2D0: push    ebp
0x41B2D1: mov     ebp, esp
0x41B2D3: sub     esp, 0Ch
0x41B2D6: mov     eax, ___security_cookie
0x41B2DB: xor     eax, ebp
0x41B2DD: mov     [ebp+var_4], eax
0x41B2E0: push    ebx
0x41B2E1: mov     ebx, [ebp+arg_0]
0x41B2E4: push    esi
0x41B2E5: push    edi
0x41B2E6: mov     edi, ecx
0x41B2E8: push    edi
0x41B2E9: mov     ecx, ebx; this
0x41B2EB: call    TESFile_InitializeFormFromRecord
0x41B2F0: mov     ecx, ebx
0x41B2F2: call    TESFile_GetChunkType
0x41B2F7: test    eax, eax
0x41B2F9: mov     [ebp+var_8], eax
0x41B2FC: jz      MagicItemForm_LoadForm___ChunkLoopExit
0x41B302: lea     esi, [edi+18h]
0x41B305: jmp     short MagicItemForm_LoadForm___SwitchChunkType
