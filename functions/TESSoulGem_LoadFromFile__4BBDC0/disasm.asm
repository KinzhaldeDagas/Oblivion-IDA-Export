0x4BBDC0: push    ebp
0x4BBDC1: mov     ebp, esp
0x4BBDC3: sub     esp, 8
0x4BBDC6: mov     eax, ds:0B30AACh
0x4BBDCB: xor     eax, ebp
0x4BBDCD: mov     [ebp+var_4], eax
0x4BBDD0: push    ebx
0x4BBDD1: push    esi
0x4BBDD2: push    edi
0x4BBDD3: mov     edi, [ebp+a2]
0x4BBDD6: mov     esi, ecx
0x4BBDD8: mov     ecx, edi
0x4BBDDA: call    TESFile_GetRecordType
0x4BBDDF: cmp     al, 26h ; '&'
0x4BBDE1: jz      short loc_4BBDEA
0x4BBDE3: xor     al, al
0x4BBDE5: jmp     loc_4BBF73
0x4BBDEA: push    esi
0x4BBDEB: mov     ecx, edi
0x4BBDED: call    TESFile_InitializeFormFromRecord
0x4BBDF2: push    0; a2
0x4BBDF4: mov     ecx, esi; this
0x4BBDF6: call    TESForm_SetIsLinked
0x4BBDFB: mov     ecx, edi
0x4BBDFD: call    TESFile_GetChunkType
0x4BBE02: test    eax, eax
0x4BBE04: jz      loc_4BBF71
0x4BBE0A: lea     ebx, [ebx+0]
0x4BBE10: cmp     eax, 4C4C5546h
0x4BBE15: jg      loc_4BBED9
0x4BBE1B: jz      loc_4BBEBB
0x4BBE21: cmp     eax, 44494445h
0x4BBE26: jg      short loc_4BBE7E
0x4BBE28: jz      short loc_4BBE52
0x4BBE2A: cmp     eax, 41544144h
0x4BBE2F: jz      short loc_4BBE41
0x4BBE31: cmp     eax, 42444F4Dh
0x4BBE36: jz      loc_4BBF42
0x4BBE3C: jmp     loc_4BBF57
0x4BBE41: push    0; a4
0x4BBE43: push    0; Dst
0x4BBE45: push    edi; a2
0x4BBE46: mov     ecx, esi; this
0x4BBE48: call    TESForm_LoadGenericComponents
0x4BBE4D: jmp     loc_4BBF57
0x4BBE52: mov     eax, [edi+254h]
0x4BBE58: call    __alloca?
0x4BBE5D: mov     ebx, esp
0x4BBE5F: push    200h; a4
0x4BBE64: push    ebx; Dst
0x4BBE65: mov     ecx, edi; a1
0x4BBE67: call    TESFile_GetChunkData
0x4BBE6C: mov     eax, [esi]
0x4BBE6E: mov     edx, [eax+0D8h]
0x4BBE74: push    ebx
0x4BBE75: mov     ecx, esi
0x4BBE77: call    edx
0x4BBE79: jmp     loc_4BBF57
0x4BBE7E: cmp     eax, 49524353h
0x4BBE83: jz      short loc_4BBE95
0x4BBE85: cmp     eax, 4C444F4Dh
0x4BBE8A: jz      loc_4BBF42
0x4BBE90: jmp     loc_4BBF57
0x4BBE95: lea     eax, [ebp+var_8]
0x4BBE98: push    eax
0x4BBE99: mov     ecx, edi
0x4BBE9B: mov     [ebp+var_8], 0
0x4BBEA2: call    TESFile_GetChunkData4
0x4BBEA7: mov     ecx, [ebp+var_8]
0x4BBEAA: mov     [esi+58h], ecx
0x4BBEAD: push    esi
0x4BBEAE: lea     ecx, [esi+54h]
0x4BBEB1: call    TESScriptableForm_Link
0x4BBEB6: jmp     loc_4BBF57
0x4BBEBB: test    esi, esi
0x4BBEBD: jz      short loc_4BBECE
0x4BBEBF: lea     eax, [esi+24h]
0x4BBEC2: push    edi
0x4BBEC3: push    eax
0x4BBEC4: call    TESFullname_Load
0x4BBEC9: jmp     loc_4BBF54
0x4BBECE: xor     eax, eax
0x4BBED0: push    edi
0x4BBED1: push    eax
0x4BBED2: call    TESFullname_Load
0x4BBED7: jmp     short loc_4BBF54
0x4BBED9: cmp     eax, 50434C53h
0x4BBEDE: jg      short loc_4BBF3B
0x4BBEE0: jz      short loc_4BBF23
0x4BBEE2: cmp     eax, 4C554F53h
0x4BBEE7: jz      short loc_4BBF0B
0x4BBEE9: cmp     eax, 4E4F4349h
0x4BBEEE: jnz     short loc_4BBF57
0x4BBEF0: test    esi, esi
0x4BBEF2: jz      short loc_4BBF00
0x4BBEF4: lea     eax, [esi+48h]
0x4BBEF7: push    edi
0x4BBEF8: push    eax
0x4BBEF9: call    TESTexture_Load
0x4BBEFE: jmp     short loc_4BBF54
0x4BBF00: xor     eax, eax
0x4BBF02: push    edi
0x4BBF03: push    eax
0x4BBF04: call    TESTexture_Load
0x4BBF09: jmp     short loc_4BBF54
0x4BBF0B: cmp     dword ptr [edi+254h], 1
0x4BBF12: jnz     short loc_4BBF57
0x4BBF14: push    1; a4
0x4BBF16: lea     edx, [esi+70h]
0x4BBF19: push    edx; Dst
0x4BBF1A: mov     ecx, edi; a1
0x4BBF1C: call    TESFile_GetChunkData
0x4BBF21: jmp     short loc_4BBF57
0x4BBF23: cmp     dword ptr [edi+254h], 1
0x4BBF2A: jnz     short loc_4BBF57
0x4BBF2C: push    1; a4
0x4BBF2E: lea     eax, [esi+71h]
0x4BBF31: push    eax; Dst
0x4BBF32: mov     ecx, edi; a1
0x4BBF34: call    TESFile_GetChunkData
0x4BBF39: jmp     short loc_4BBF57
0x4BBF3B: cmp     eax, 54444F4Dh
0x4BBF40: jnz     short loc_4BBF57
0x4BBF42: test    esi, esi
0x4BBF44: jz      short loc_4BBF4B
0x4BBF46: lea     eax, [esi+30h]
0x4BBF49: jmp     short loc_4BBF4D
0x4BBF4B: xor     eax, eax
0x4BBF4D: push    edi
0x4BBF4E: push    eax
0x4BBF4F: call    TESModel_Load
0x4BBF54: add     esp, 8
0x4BBF57: mov     ecx, edi
0x4BBF59: call    TESFile_GetNextChunk
0x4BBF5E: test    al, al
0x4BBF60: jz      short loc_4BBF71
0x4BBF62: mov     ecx, edi
0x4BBF64: call    TESFile_GetChunkType
0x4BBF69: test    eax, eax
0x4BBF6B: jnz     loc_4BBE10
0x4BBF71: mov     al, 1
0x4BBF73: lea     esp, [ebp-14h]
0x4BBF76: pop     edi
0x4BBF77: pop     esi
0x4BBF78: pop     ebx
0x4BBF79: mov     ecx, [ebp+var_4]
0x4BBF7C: xor     ecx, ebp
0x4BBF7E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BBF83: mov     esp, ebp
0x4BBF85: pop     ebp
0x4BBF86: retn    4
