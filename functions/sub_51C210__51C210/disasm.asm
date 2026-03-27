0x51C210: push    ebp
0x51C211: mov     ebp, esp
0x51C213: push    ecx
0x51C214: mov     eax, ds:0B30AACh
0x51C219: xor     eax, ebp
0x51C21B: mov     [ebp+var_4], eax
0x51C21E: push    ebx
0x51C21F: mov     ebx, [ebp+a2]
0x51C222: push    esi
0x51C223: mov     esi, ecx
0x51C225: push    edi
0x51C226: mov     ecx, ebx
0x51C228: call    TESFile_GetRecordType
0x51C22D: cmp     eax, 5
0x51C230: jz      short loc_51C239
0x51C232: xor     al, al
0x51C234: jmp     loc_51C341
0x51C239: push    esi
0x51C23A: mov     ecx, ebx
0x51C23C: call    TESFile_InitializeFormFromRecord
0x51C241: mov     ecx, ebx
0x51C243: call    TESFile_GetChunkType
0x51C248: test    eax, eax
0x51C24A: jz      loc_51C31A
0x51C250: cmp     eax, 44494445h
0x51C255: jg      short loc_51C2C2
0x51C257: jz      short loc_51C299
0x51C259: cmp     eax, 41544144h
0x51C25E: jz      short loc_51C289
0x51C260: cmp     eax, 43534544h
0x51C265: jnz     loc_51C300
0x51C26B: test    esi, esi
0x51C26D: jz      short loc_51C27E
0x51C26F: lea     eax, [esi+24h]
0x51C272: push    ebx
0x51C273: push    eax
0x51C274: call    TESDescription_Load
0x51C279: jmp     loc_51C2FD
0x51C27E: xor     eax, eax
0x51C280: push    ebx
0x51C281: push    eax
0x51C282: call    TESDescription_Load
0x51C287: jmp     short loc_51C2FD
0x51C289: push    34h ; '4'; a4
0x51C28B: lea     eax, [esi+38h]
0x51C28E: push    eax; Dst
0x51C28F: push    ebx; a2
0x51C290: mov     ecx, esi; this
0x51C292: call    TESForm_LoadGenericComponents
0x51C297: jmp     short loc_51C300
0x51C299: mov     eax, [ebx+254h]
0x51C29F: call    __alloca?
0x51C2A4: mov     edi, esp
0x51C2A6: push    200h; a4
0x51C2AB: push    edi; Dst
0x51C2AC: mov     ecx, ebx; a1
0x51C2AE: call    TESFile_GetChunkData
0x51C2B3: mov     edx, [esi]
0x51C2B5: mov     eax, [edx+0D8h]
0x51C2BB: push    edi
0x51C2BC: mov     ecx, esi
0x51C2BE: call    eax
0x51C2C0: jmp     short loc_51C300
0x51C2C2: cmp     eax, 4C4C5546h
0x51C2C7: jz      short loc_51C2EB
0x51C2C9: cmp     eax, 4E4F4349h
0x51C2CE: jnz     short loc_51C300
0x51C2D0: test    esi, esi
0x51C2D2: jz      short loc_51C2E0
0x51C2D4: lea     eax, [esi+2Ch]
0x51C2D7: push    ebx
0x51C2D8: push    eax
0x51C2D9: call    TESTexture_Load
0x51C2DE: jmp     short loc_51C2FD
0x51C2E0: xor     eax, eax
0x51C2E2: push    ebx
0x51C2E3: push    eax
0x51C2E4: call    TESTexture_Load
0x51C2E9: jmp     short loc_51C2FD
0x51C2EB: test    esi, esi
0x51C2ED: jz      short loc_51C2F4
0x51C2EF: lea     eax, [esi+18h]
0x51C2F2: jmp     short loc_51C2F6
0x51C2F4: xor     eax, eax
0x51C2F6: push    ebx
0x51C2F7: push    eax
0x51C2F8: call    TESFullname_Load
0x51C2FD: add     esp, 8
0x51C300: mov     ecx, ebx
0x51C302: call    TESFile_GetNextChunk
0x51C307: test    al, al
0x51C309: jz      short loc_51C31A
0x51C30B: mov     ecx, ebx
0x51C30D: call    TESFile_GetChunkType
0x51C312: test    eax, eax
0x51C314: jnz     loc_51C250
0x51C31A: mov     ecx, esi
0x51C31C: call    sub_51C030
0x51C321: test    al, al
0x51C323: jnz     short loc_51C33F
0x51C325: mov     edx, [esi]
0x51C327: mov     eax, [edx+0D4h]
0x51C32D: mov     ecx, esi
0x51C32F: call    eax
0x51C331: push    eax; ArgList
0x51C332: push    offset aClassSContains; "Class %s contains invalid data. Make su"...
0x51C337: call    PrintError
0x51C33C: add     esp, 8
0x51C33F: mov     al, 1
0x51C341: lea     esp, [ebp-10h]
0x51C344: pop     edi
0x51C345: pop     esi
0x51C346: pop     ebx
0x51C347: mov     ecx, [ebp+var_4]
0x51C34A: xor     ecx, ebp
0x51C34C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51C351: mov     esp, ebp
0x51C353: pop     ebp
0x51C354: retn    4
