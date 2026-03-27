0x4B3DD0: push    ebp
0x4B3DD1: mov     ebp, esp
0x4B3DD3: sub     esp, 8
0x4B3DD6: mov     eax, ds:0B30AACh
0x4B3DDB: xor     eax, ebp
0x4B3DDD: mov     [ebp+var_4], eax
0x4B3DE0: push    ebx
0x4B3DE1: mov     ebx, [ebp+a1]
0x4B3DE4: push    esi
0x4B3DE5: mov     esi, ecx
0x4B3DE7: push    edi
0x4B3DE8: push    esi
0x4B3DE9: mov     ecx, ebx
0x4B3DEB: call    TESFile_InitializeFormFromRecord
0x4B3DF0: xor     edi, edi
0x4B3DF2: push    edi; a2
0x4B3DF3: mov     ecx, esi; this
0x4B3DF5: call    TESForm_SetIsLinked
0x4B3DFA: mov     ecx, ebx
0x4B3DFC: call    TESFile_GetChunkType
0x4B3E01: cmp     eax, edi
0x4B3E03: jz      loc_4B3EF4
0x4B3E09: lea     esp, [esp+0]
0x4B3E10: cmp     eax, 4C444F4Dh
0x4B3E15: jg      short loc_4B3E7F
0x4B3E17: jz      short loc_4B3E94
0x4B3E19: cmp     eax, 42444F4Dh
0x4B3E1E: jz      short loc_4B3E94
0x4B3E20: cmp     eax, 44494445h
0x4B3E25: jz      short loc_4B3E54
0x4B3E27: cmp     eax, 49524353h
0x4B3E2C: jnz     loc_4B3EDA
0x4B3E32: lea     eax, [ebp+var_8]
0x4B3E35: push    eax
0x4B3E36: mov     ecx, ebx
0x4B3E38: mov     [ebp+var_8], edi
0x4B3E3B: call    TESFile_GetChunkData4
0x4B3E40: mov     ecx, [ebp+var_8]
0x4B3E43: mov     [esi+4Ch], ecx
0x4B3E46: push    esi
0x4B3E47: lea     ecx, [esi+48h]
0x4B3E4A: call    TESScriptableForm_Link
0x4B3E4F: jmp     loc_4B3EDA
0x4B3E54: mov     eax, [ebx+254h]
0x4B3E5A: call    __alloca?
0x4B3E5F: mov     edi, esp
0x4B3E61: push    200h; a4
0x4B3E66: push    edi; Dst
0x4B3E67: mov     ecx, ebx; a1
0x4B3E69: call    TESFile_GetChunkData
0x4B3E6E: mov     edx, [esi]
0x4B3E70: mov     eax, [edx+0D8h]
0x4B3E76: push    edi
0x4B3E77: mov     ecx, esi
0x4B3E79: call    eax
0x4B3E7B: xor     edi, edi
0x4B3E7D: jmp     short loc_4B3EDA
0x4B3E7F: cmp     eax, 4C4C5546h
0x4B3E84: jz      short loc_4B3EC5
0x4B3E86: cmp     eax, 4D414E53h
0x4B3E8B: jz      short loc_4B3EAF
0x4B3E8D: cmp     eax, 54444F4Dh
0x4B3E92: jnz     short loc_4B3EDA
0x4B3E94: cmp     esi, edi
0x4B3E96: jz      short loc_4B3EA4
0x4B3E98: lea     eax, [esi+30h]
0x4B3E9B: push    ebx
0x4B3E9C: push    eax
0x4B3E9D: call    TESModel_Load
0x4B3EA2: jmp     short loc_4B3ED7
0x4B3EA4: xor     eax, eax
0x4B3EA6: push    ebx
0x4B3EA7: push    eax
0x4B3EA8: call    TESModel_Load
0x4B3EAD: jmp     short loc_4B3ED7
0x4B3EAF: lea     ecx, [ebp+var_8]
0x4B3EB2: push    ecx
0x4B3EB3: mov     ecx, ebx
0x4B3EB5: mov     [ebp+var_8], edi
0x4B3EB8: call    TESFile_GetChunkData4
0x4B3EBD: mov     edx, [ebp+var_8]
0x4B3EC0: mov     [esi+54h], edx
0x4B3EC3: jmp     short loc_4B3EDA
0x4B3EC5: cmp     esi, edi
0x4B3EC7: jz      short loc_4B3ECE
0x4B3EC9: lea     eax, [esi+24h]
0x4B3ECC: jmp     short loc_4B3ED0
0x4B3ECE: xor     eax, eax
0x4B3ED0: push    ebx
0x4B3ED1: push    eax
0x4B3ED2: call    TESFullname_Load
0x4B3ED7: add     esp, 8
0x4B3EDA: mov     ecx, ebx
0x4B3EDC: call    TESFile_GetNextChunk
0x4B3EE1: test    al, al
0x4B3EE3: jz      short loc_4B3EF4
0x4B3EE5: mov     ecx, ebx
0x4B3EE7: call    TESFile_GetChunkType
0x4B3EEC: cmp     eax, edi
0x4B3EEE: jnz     loc_4B3E10
0x4B3EF4: mov     al, 1
0x4B3EF6: lea     esp, [ebp-14h]
0x4B3EF9: pop     edi
0x4B3EFA: pop     esi
0x4B3EFB: pop     ebx
0x4B3EFC: mov     ecx, [ebp+var_4]
0x4B3EFF: xor     ecx, ebp
0x4B3F01: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B3F06: mov     esp, ebp
0x4B3F08: pop     ebp
0x4B3F09: retn    4
