0x4B0160: push    ebp
0x4B0161: mov     ebp, esp
0x4B0163: sub     esp, 18h
0x4B0166: mov     eax, ds:0B30AACh
0x4B016B: xor     eax, ebp
0x4B016D: mov     [ebp+var_4], eax
0x4B0170: push    ebx
0x4B0171: push    esi
0x4B0172: push    edi
0x4B0173: mov     edi, [ebp+a2]
0x4B0176: mov     esi, ecx
0x4B0178: mov     ecx, edi
0x4B017A: call    TESFile_GetRecordType
0x4B017F: cmp     al, 2Bh ; '+'
0x4B0181: jz      short loc_4B018A
0x4B0183: xor     al, al
0x4B0185: jmp     loc_4B02AC
0x4B018A: push    esi
0x4B018B: mov     ecx, edi
0x4B018D: call    TESFile_InitializeFormFromRecord
0x4B0192: mov     ecx, edi
0x4B0194: call    TESFile_GetChunkType
0x4B0199: cmp     eax, 444C564Ch
0x4B019E: jg      loc_4B0243
0x4B01A4: jz      short loc_4B020B
0x4B01A6: cmp     eax, 41544144h
0x4B01AB: jz      short loc_4B01E4
0x4B01AD: cmp     eax, 44494445h
0x4B01B2: jnz     loc_4B0292
0x4B01B8: mov     eax, [edi+254h]
0x4B01BE: call    __alloca?
0x4B01C3: mov     ebx, esp
0x4B01C5: push    200h; a4
0x4B01CA: push    ebx; Dst
0x4B01CB: mov     ecx, edi; a1
0x4B01CD: call    TESFile_GetChunkData
0x4B01D2: mov     eax, [esi]
0x4B01D4: mov     edx, [eax+0D8h]
0x4B01DA: push    ebx
0x4B01DB: mov     ecx, esi
0x4B01DD: call    edx
0x4B01DF: jmp     loc_4B0292
0x4B01E4: push    1; a4
0x4B01E6: lea     eax, [ebp+Dst]
0x4B01E9: push    eax; Dst
0x4B01EA: push    edi; a2
0x4B01EB: mov     ecx, esi; this
0x4B01ED: mov     [ebp+Dst], 0
0x4B01F1: call    TESForm_LoadGenericComponents
0x4B01F6: cmp     [ebp+Dst], 0
0x4B01FA: setnz   cl
0x4B01FD: push    ecx
0x4B01FE: lea     ecx, [esi+24h]
0x4B0201: call    TESLeveledList_SetCalcEachInCount
0x4B0206: jmp     loc_4B0292
0x4B020B: push    0; a4
0x4B020D: lea     edx, [ebp+var_9]
0x4B0210: push    edx; Dst
0x4B0211: mov     ecx, edi; a1
0x4B0213: mov     [ebp+var_9], 0
0x4B0217: call    TESFile_GetChunkData
0x4B021C: test    [ebp+var_9], 80h
0x4B0220: lea     ebx, [esi+24h]
0x4B0223: mov     ecx, ebx
0x4B0225: jz      short loc_4B022B
0x4B0227: push    1
0x4B0229: jmp     short loc_4B022D
0x4B022B: push    0
0x4B022D: call    TESLeveledList_SetCalcAllLevels
0x4B0232: and     [ebp+var_9], 7Fh
0x4B0236: mov     eax, dword ptr [ebp+var_9]
0x4B0239: push    eax
0x4B023A: mov     ecx, ebx
0x4B023C: call    TESLeveledList_SetChanceNone
0x4B0241: jmp     short loc_4B0292
0x4B0243: cmp     eax, 464C564Ch
0x4B0248: jz      short loc_4B0285
0x4B024A: cmp     eax, 4F4C564Ch
0x4B024F: jnz     short loc_4B0292
0x4B0251: xor     eax, eax
0x4B0253: push    0Ch; a4
0x4B0255: lea     ecx, [ebp+var_18]
0x4B0258: push    ecx; Dst
0x4B0259: mov     [ebp+var_10], eax
0x4B025C: mov     ecx, edi; a1
0x4B025E: mov     dword ptr [ebp+var_18], eax
0x4B0261: mov     [ebp+var_14], eax
0x4B0264: mov     word ptr [ebp+var_10], 1
0x4B026A: call    TESFile_GetChunkData
0x4B026F: mov     edx, [ebp+var_14]
0x4B0272: mov     eax, [ebp+var_10]
0x4B0275: mov     ecx, dword ptr [ebp+var_18]
0x4B0278: push    edx
0x4B0279: push    eax
0x4B027A: push    ecx
0x4B027B: lea     ecx, [esi+24h]
0x4B027E: call    TESLeveledList_AddForm
0x4B0283: jmp     short loc_4B0292
0x4B0285: push    0; a4
0x4B0287: lea     edx, [esi+31h]
0x4B028A: push    edx; Dst
0x4B028B: mov     ecx, edi; a1
0x4B028D: call    TESFile_GetChunkData
0x4B0292: mov     ecx, edi
0x4B0294: call    TESFile_GetNextChunk
0x4B0299: test    al, al
0x4B029B: jnz     loc_4B0192
0x4B02A1: push    0; a2
0x4B02A3: mov     ecx, esi; this
0x4B02A5: call    TESForm_SetIsLinked
0x4B02AA: mov     al, 1
0x4B02AC: lea     esp, [ebp-24h]
0x4B02AF: pop     edi
0x4B02B0: pop     esi
0x4B02B1: pop     ebx
0x4B02B2: mov     ecx, [ebp+var_4]
0x4B02B5: xor     ecx, ebp
0x4B02B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B02BC: mov     esp, ebp
0x4B02BE: pop     ebp
0x4B02BF: retn    4
