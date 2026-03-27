0x51ED90: push    ebp
0x51ED91: mov     ebp, esp
0x51ED93: push    ecx
0x51ED94: mov     eax, ds:0B30AACh
0x51ED99: xor     eax, ebp
0x51ED9B: mov     [ebp+var_4], eax
0x51ED9E: push    ebx
0x51ED9F: push    esi
0x51EDA0: push    edi
0x51EDA1: mov     edi, [ebp+a2]
0x51EDA4: mov     esi, ecx
0x51EDA6: mov     ecx, edi
0x51EDA8: call    TESFile_GetRecordType
0x51EDAD: cmp     eax, 8
0x51EDB0: jz      short loc_51EDB9
0x51EDB2: xor     al, al
0x51EDB4: jmp     loc_51EE73
0x51EDB9: push    esi
0x51EDBA: mov     ecx, edi
0x51EDBC: call    TESFile_InitializeFormFromRecord
0x51EDC1: mov     ecx, edi
0x51EDC3: call    TESFile_GetChunkType
0x51EDC8: test    eax, eax
0x51EDCA: jz      loc_51EE71
0x51EDD0: cmp     eax, 4C4C5546h
0x51EDD5: jg      short loc_51EE3B
0x51EDD7: jz      short loc_51EE20
0x51EDD9: cmp     eax, 41544144h
0x51EDDE: jz      short loc_51EE10
0x51EDE0: cmp     eax, 44494445h
0x51EDE5: jnz     short loc_51EE57
0x51EDE7: mov     eax, [edi+254h]
0x51EDED: call    __alloca?
0x51EDF2: mov     ebx, esp
0x51EDF4: push    200h; a4
0x51EDF9: push    ebx; Dst
0x51EDFA: mov     ecx, edi; a1
0x51EDFC: call    TESFile_GetChunkData
0x51EE01: mov     eax, [esi]
0x51EE03: mov     edx, [eax+0D8h]
0x51EE09: push    ebx
0x51EE0A: mov     ecx, esi
0x51EE0C: call    edx
0x51EE0E: jmp     short loc_51EE57
0x51EE10: push    1; a4
0x51EE12: lea     eax, [esi+30h]
0x51EE15: push    eax; Dst
0x51EE16: push    edi; a2
0x51EE17: mov     ecx, esi; this
0x51EE19: call    TESForm_LoadGenericComponents
0x51EE1E: jmp     short loc_51EE57
0x51EE20: test    esi, esi
0x51EE22: jz      short loc_51EE30
0x51EE24: lea     eax, [esi+18h]
0x51EE27: push    edi
0x51EE28: push    eax
0x51EE29: call    TESFullname_Load
0x51EE2E: jmp     short loc_51EE54
0x51EE30: xor     eax, eax
0x51EE32: push    edi
0x51EE33: push    eax
0x51EE34: call    TESFullname_Load
0x51EE39: jmp     short loc_51EE54
0x51EE3B: cmp     eax, 4E4F4349h
0x51EE40: jnz     short loc_51EE57
0x51EE42: test    esi, esi
0x51EE44: jz      short loc_51EE4B
0x51EE46: lea     eax, [esi+24h]
0x51EE49: jmp     short loc_51EE4D
0x51EE4B: xor     eax, eax
0x51EE4D: push    edi
0x51EE4E: push    eax
0x51EE4F: call    TESTexture_Load
0x51EE54: add     esp, 8
0x51EE57: mov     ecx, edi
0x51EE59: call    TESFile_GetNextChunk
0x51EE5E: test    al, al
0x51EE60: jz      short loc_51EE71
0x51EE62: mov     ecx, edi
0x51EE64: call    TESFile_GetChunkType
0x51EE69: test    eax, eax
0x51EE6B: jnz     loc_51EDD0
0x51EE71: mov     al, 1
0x51EE73: lea     esp, [ebp-10h]
0x51EE76: pop     edi
0x51EE77: pop     esi
0x51EE78: pop     ebx
0x51EE79: mov     ecx, [ebp+var_4]
0x51EE7C: xor     ecx, ebp
0x51EE7E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51EE83: mov     esp, ebp
0x51EE85: pop     ebp
0x51EE86: retn    4
