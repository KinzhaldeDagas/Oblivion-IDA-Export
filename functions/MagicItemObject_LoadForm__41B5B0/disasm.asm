0x41B5B0: push    ebp
0x41B5B1: mov     ebp, esp
0x41B5B3: sub     esp, 0Ch
0x41B5B6: mov     eax, ___security_cookie
0x41B5BB: xor     eax, ebp
0x41B5BD: mov     [ebp+var_4], eax
0x41B5C0: push    ebx
0x41B5C1: mov     ebx, [ebp+arg_0]
0x41B5C4: push    esi
0x41B5C5: push    edi
0x41B5C6: mov     edi, ecx
0x41B5C8: push    edi
0x41B5C9: mov     ecx, ebx; this
0x41B5CB: call    TESFile_InitializeFormFromRecord
0x41B5D0: mov     ecx, ebx
0x41B5D2: call    TESFile_GetChunkType
0x41B5D7: test    eax, eax
0x41B5D9: mov     [ebp+var_8], eax
0x41B5DC: jz      MagicItemObject_LoadForm___ChunkLoopExit
0x41B5E2: lea     esi, [edi+24h]
0x41B5E5: jmp     short MagicItemObject_LoadForm___SwitchChunkType
