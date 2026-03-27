0x5193E0: push    ebp
0x5193E1: mov     ebp, esp
0x5193E3: sub     esp, 8
0x5193E6: mov     eax, ds:0B30AACh
0x5193EB: xor     eax, ebp
0x5193ED: mov     [ebp+var_4], eax
0x5193F0: push    ebx
0x5193F1: mov     ebx, [ebp+a1]
0x5193F4: push    esi
0x5193F5: push    edi
0x5193F6: mov     edi, ecx
0x5193F8: push    edi
0x5193F9: mov     ecx, ebx
0x5193FB: call    TESFile_InitializeFormFromRecord
0x519400: mov     ecx, ebx
0x519402: call    TESFile_GetChunkType
0x519407: cmp     eax, 4C4C5546h
0x51940C: jg      short loc_519481
0x51940E: jz      short loc_519466
0x519410: cmp     eax, 43534544h
0x519415: jz      short loc_51944B
0x519417: cmp     eax, 44494445h
0x51941C: jnz     loc_5194C4
0x519422: mov     eax, [ebx+254h]
0x519428: call    __alloca?
0x51942D: mov     esi, esp
0x51942F: push    200h; a4
0x519434: push    esi; Dst
0x519435: mov     ecx, ebx; a1
0x519437: call    TESFile_GetChunkData
0x51943C: mov     eax, [edi]
0x51943E: mov     edx, [eax+0D8h]
0x519444: push    esi
0x519445: mov     ecx, edi
0x519447: call    edx
0x519449: jmp     short loc_5194C4
0x51944B: test    edi, edi
0x51944D: jz      short loc_51945B
0x51944F: lea     eax, [edi+30h]
0x519452: push    ebx
0x519453: push    eax
0x519454: call    TESDescription_Load
0x519459: jmp     short loc_5194C1
0x51945B: xor     eax, eax
0x51945D: push    ebx
0x51945E: push    eax
0x51945F: call    TESDescription_Load
0x519464: jmp     short loc_5194C1
0x519466: test    edi, edi
0x519468: jz      short loc_519476
0x51946A: lea     eax, [edi+18h]
0x51946D: push    ebx
0x51946E: push    eax
0x51946F: call    TESFullname_Load
0x519474: jmp     short loc_5194C1
0x519476: xor     eax, eax
0x519478: push    ebx
0x519479: push    eax
0x51947A: call    TESFullname_Load
0x51947F: jmp     short loc_5194C1
0x519481: cmp     eax, 4E4F4349h
0x519486: jz      short loc_5194AF
0x519488: cmp     eax, 4F4C5053h
0x51948D: jnz     short loc_5194C4
0x51948F: lea     eax, [ebp+var_8]
0x519492: push    eax
0x519493: mov     ecx, ebx
0x519495: mov     [ebp+var_8], 0
0x51949C: call    TESFile_GetChunkData4
0x5194A1: mov     ecx, [ebp+var_8]
0x5194A4: push    ecx
0x5194A5: lea     ecx, [edi+38h]
0x5194A8: call    TESSpellList_AddFormToSpellList
0x5194AD: jmp     short loc_5194C4
0x5194AF: test    edi, edi
0x5194B1: jz      short loc_5194B8
0x5194B3: lea     eax, [edi+24h]
0x5194B6: jmp     short loc_5194BA
0x5194B8: xor     eax, eax
0x5194BA: push    ebx
0x5194BB: push    eax
0x5194BC: call    TESTexture_Load
0x5194C1: add     esp, 8
0x5194C4: mov     ecx, ebx
0x5194C6: call    TESFile_GetNextChunk
0x5194CB: test    al, al
0x5194CD: jnz     loc_519400
0x5194D3: push    0; a2
0x5194D5: mov     ecx, edi; this
0x5194D7: call    TESForm_SetIsLinked
0x5194DC: mov     al, 1
0x5194DE: lea     esp, [ebp-14h]
0x5194E1: pop     edi
0x5194E2: pop     esi
0x5194E3: pop     ebx
0x5194E4: mov     ecx, [ebp+var_4]
0x5194E7: xor     ecx, ebp
0x5194E9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5194EE: mov     esp, ebp
0x5194F0: pop     ebp
0x5194F1: retn    4
