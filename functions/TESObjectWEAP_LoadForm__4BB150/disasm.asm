0x4BB150: push    ebp
0x4BB151: mov     ebp, esp
0x4BB153: sub     esp, 8
0x4BB156: mov     eax, ds:0B30AACh
0x4BB15B: xor     eax, ebp
0x4BB15D: mov     [ebp+var_4], eax
0x4BB160: push    ebx
0x4BB161: mov     ebx, [ebp+a2]
0x4BB164: push    esi
0x4BB165: mov     esi, ecx
0x4BB167: push    edi
0x4BB168: mov     ecx, ebx
0x4BB16A: call    TESFile_GetRecordType
0x4BB16F: cmp     al, 21h ; '!'
0x4BB171: jz      short loc_4BB17A
0x4BB173: xor     al, al
0x4BB175: jmp     loc_4BB330
0x4BB17A: push    esi
0x4BB17B: mov     ecx, ebx
0x4BB17D: call    TESFile_InitializeFormFromRecord
0x4BB182: xor     edi, edi
0x4BB184: push    edi; a2
0x4BB185: mov     ecx, esi; this
0x4BB187: call    TESForm_SetIsLinked
0x4BB18C: mov     ecx, ebx
0x4BB18E: call    TESFile_GetChunkType
0x4BB193: cmp     eax, edi
0x4BB195: jz      loc_4BB300
0x4BB19B: jmp     short loc_4BB1A0
0x4BB19D: align 10h
0x4BB1A0: cmp     eax, 4C4C5546h
0x4BB1A5: jg      loc_4BB26C
0x4BB1AB: jz      loc_4BB24E
0x4BB1B1: cmp     eax, 44494445h
0x4BB1B6: jg      short loc_4BB215
0x4BB1B8: jz      short loc_4BB1E7
0x4BB1BA: cmp     eax, 41544144h
0x4BB1BF: jz      short loc_4BB1D1
0x4BB1C1: cmp     eax, 42444F4Dh
0x4BB1C6: jz      loc_4BB2D1
0x4BB1CC: jmp     loc_4BB2E6
0x4BB1D1: push    10h; a4
0x4BB1D3: lea     eax, [esi+90h]
0x4BB1D9: push    eax; Dst
0x4BB1DA: push    ebx; a2
0x4BB1DB: mov     ecx, esi; this
0x4BB1DD: call    TESForm_LoadGenericComponents
0x4BB1E2: jmp     loc_4BB2E6
0x4BB1E7: mov     eax, [ebx+254h]
0x4BB1ED: call    __alloca?
0x4BB1F2: mov     edi, esp
0x4BB1F4: push    200h; a4
0x4BB1F9: push    edi; Dst
0x4BB1FA: mov     ecx, ebx; a1
0x4BB1FC: call    TESFile_GetChunkData
0x4BB201: mov     edx, [esi]
0x4BB203: mov     eax, [edx+0D8h]
0x4BB209: push    edi
0x4BB20A: mov     ecx, esi
0x4BB20C: call    eax
0x4BB20E: xor     edi, edi
0x4BB210: jmp     loc_4BB2E6
0x4BB215: cmp     eax, 49524353h
0x4BB21A: jz      short loc_4BB22C
0x4BB21C: cmp     eax, 4C444F4Dh
0x4BB221: jz      loc_4BB2D1
0x4BB227: jmp     loc_4BB2E6
0x4BB22C: lea     ecx, [ebp+var_8]
0x4BB22F: push    ecx
0x4BB230: mov     ecx, ebx
0x4BB232: mov     [ebp+var_8], edi
0x4BB235: call    TESFile_GetChunkData4
0x4BB23A: mov     edx, [ebp+var_8]
0x4BB23D: push    esi
0x4BB23E: lea     ecx, [esi+54h]
0x4BB241: mov     [esi+58h], edx
0x4BB244: call    TESScriptableForm_Link
0x4BB249: jmp     loc_4BB2E6
0x4BB24E: cmp     esi, edi
0x4BB250: jz      short loc_4BB261
0x4BB252: lea     eax, [esi+24h]
0x4BB255: push    ebx
0x4BB256: push    eax
0x4BB257: call    TESFullname_Load
0x4BB25C: jmp     loc_4BB2E3
0x4BB261: xor     eax, eax
0x4BB263: push    ebx
0x4BB264: push    eax
0x4BB265: call    TESFullname_Load
0x4BB26A: jmp     short loc_4BB2E3
0x4BB26C: cmp     eax, 4E4F4349h
0x4BB271: jg      short loc_4BB2CA
0x4BB273: jz      short loc_4BB2AF
0x4BB275: sub     eax, 4D414E41h
0x4BB27A: jz      short loc_4BB297
0x4BB27C: sub     eax, 4
0x4BB27F: jnz     short loc_4BB2E6
0x4BB281: lea     eax, [ebp+var_8]
0x4BB284: push    eax
0x4BB285: mov     ecx, ebx
0x4BB287: mov     [ebp+var_8], edi
0x4BB28A: call    TESFile_GetChunkData4
0x4BB28F: mov     ecx, [ebp+var_8]
0x4BB292: mov     [esi+64h], ecx
0x4BB295: jmp     short loc_4BB2E6
0x4BB297: lea     edx, [ebp+var_8]
0x4BB29A: push    edx
0x4BB29B: mov     ecx, ebx
0x4BB29D: mov     [ebp+var_8], edi
0x4BB2A0: call    TESFile_GetChunkData2
0x4BB2A5: mov     ax, word ptr [ebp+var_8]
0x4BB2A9: mov     [esi+68h], ax
0x4BB2AD: jmp     short loc_4BB2E6
0x4BB2AF: cmp     esi, edi
0x4BB2B1: jz      short loc_4BB2BF
0x4BB2B3: lea     eax, [esi+48h]
0x4BB2B6: push    ebx
0x4BB2B7: push    eax
0x4BB2B8: call    TESTexture_Load
0x4BB2BD: jmp     short loc_4BB2E3
0x4BB2BF: xor     eax, eax
0x4BB2C1: push    ebx
0x4BB2C2: push    eax
0x4BB2C3: call    TESTexture_Load
0x4BB2C8: jmp     short loc_4BB2E3
0x4BB2CA: cmp     eax, 54444F4Dh
0x4BB2CF: jnz     short loc_4BB2E6
0x4BB2D1: cmp     esi, edi
0x4BB2D3: jz      short loc_4BB2DA
0x4BB2D5: lea     eax, [esi+30h]
0x4BB2D8: jmp     short loc_4BB2DC
0x4BB2DA: xor     eax, eax
0x4BB2DC: push    ebx
0x4BB2DD: push    eax
0x4BB2DE: call    TESModel_Load
0x4BB2E3: add     esp, 8
0x4BB2E6: mov     ecx, ebx
0x4BB2E8: call    TESFile_GetNextChunk
0x4BB2ED: test    al, al
0x4BB2EF: jz      short loc_4BB300
0x4BB2F1: mov     ecx, ebx
0x4BB2F3: call    TESFile_GetChunkType
0x4BB2F8: cmp     eax, edi
0x4BB2FA: jnz     loc_4BB1A0
0x4BB300: cmp     byte ptr [esi+90h], 6
0x4BB307: jl      short loc_4BB32E
0x4BB309: mov     eax, [esi+0Ch]
0x4BB30C: mov     edx, [esi]
0x4BB30E: push    eax
0x4BB30F: mov     eax, [edx+0D4h]
0x4BB315: mov     ecx, esi
0x4BB317: call    eax
0x4BB319: push    eax; ArgList
0x4BB31A: push    offset aClearingInvali; "Clearing invalid type on weapon '%s' (%"...
0x4BB31F: call    PrintError
0x4BB324: add     esp, 0Ch
0x4BB327: mov     byte ptr [esi+90h], 0
0x4BB32E: mov     al, 1
0x4BB330: lea     esp, [ebp-14h]
0x4BB333: pop     edi
0x4BB334: pop     esi
0x4BB335: pop     ebx
0x4BB336: mov     ecx, [ebp+var_4]
0x4BB339: xor     ecx, ebp
0x4BB33B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BB340: mov     esp, ebp
0x4BB342: pop     ebp
0x4BB343: retn    4
