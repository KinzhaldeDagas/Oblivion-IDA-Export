0x4B45C0: push    ebp
0x4B45C1: mov     ebp, esp
0x4B45C3: sub     esp, 8
0x4B45C6: mov     eax, ds:0B30AACh
0x4B45CB: xor     eax, ebp
0x4B45CD: mov     [ebp+var_4], eax
0x4B45D0: push    ebx
0x4B45D1: mov     ebx, [ebp+arg_0]
0x4B45D4: push    esi
0x4B45D5: mov     esi, ecx
0x4B45D7: push    edi
0x4B45D8: mov     ecx, ebx
0x4B45DA: call    TESFile_GetRecordType
0x4B45DF: cmp     al, 13h
0x4B45E1: jz      short loc_4B45EA
0x4B45E3: xor     al, al
0x4B45E5: jmp     loc_4B472A
0x4B45EA: push    esi
0x4B45EB: mov     ecx, ebx
0x4B45ED: call    TESFile_InitializeFormFromRecord
0x4B45F2: push    0; a2
0x4B45F4: mov     ecx, esi; this
0x4B45F6: call    TESForm_SetIsLinked
0x4B45FB: mov     ecx, ebx
0x4B45FD: call    TESFile_GetChunkType
0x4B4602: test    eax, eax
0x4B4604: jz      loc_4B4728
0x4B460A: lea     ebx, [ebx+0]
0x4B4610: cmp     eax, 4C444F4Dh
0x4B4615: jg      loc_4B46AE
0x4B461B: jz      loc_4B46C3
0x4B4621: cmp     eax, 44494445h
0x4B4626: jg      short loc_4B4680
0x4B4628: jz      short loc_4B4654
0x4B462A: cmp     eax, 41544144h
0x4B462F: jz      short loc_4B4641
0x4B4631: cmp     eax, 42444F4Dh
0x4B4636: jz      loc_4B46C3
0x4B463C: jmp     loc_4B470E
0x4B4641: push    1; a4
0x4B4643: lea     eax, [esi+78h]
0x4B4646: push    eax; Dst
0x4B4647: push    ebx; a2
0x4B4648: mov     ecx, esi; this
0x4B464A: call    TESForm_LoadGenericComponents
0x4B464F: jmp     loc_4B470E
0x4B4654: mov     eax, [ebx+254h]
0x4B465A: call    __alloca?
0x4B465F: mov     edi, esp
0x4B4661: push    200h; a4
0x4B4666: push    edi; Dst
0x4B4667: mov     ecx, ebx; a1
0x4B4669: call    TESFile_GetChunkData
0x4B466E: mov     edx, [esi]
0x4B4670: mov     eax, [edx+0D8h]
0x4B4676: push    edi
0x4B4677: mov     ecx, esi
0x4B4679: call    eax
0x4B467B: jmp     loc_4B470E
0x4B4680: cmp     eax, 49524353h
0x4B4685: jnz     loc_4B470E
0x4B468B: lea     ecx, [ebp+var_8]
0x4B468E: push    ecx
0x4B468F: mov     ecx, ebx
0x4B4691: mov     [ebp+var_8], 0
0x4B4698: call    TESFile_GetChunkData4
0x4B469D: mov     edx, [ebp+var_8]
0x4B46A0: push    esi
0x4B46A1: lea     ecx, [esi+54h]
0x4B46A4: mov     [esi+58h], edx
0x4B46A7: call    TESScriptableForm_Link
0x4B46AC: jmp     short loc_4B470E
0x4B46AE: cmp     eax, 4C4C5546h
0x4B46B3: jz      short loc_4B46F9
0x4B46B5: cmp     eax, 4E4F4349h
0x4B46BA: jz      short loc_4B46DE
0x4B46BC: cmp     eax, 54444F4Dh
0x4B46C1: jnz     short loc_4B470E
0x4B46C3: test    esi, esi
0x4B46C5: jz      short loc_4B46D3
0x4B46C7: lea     eax, [esi+30h]
0x4B46CA: push    ebx
0x4B46CB: push    eax
0x4B46CC: call    TESModel_Load
0x4B46D1: jmp     short loc_4B470B
0x4B46D3: xor     eax, eax
0x4B46D5: push    ebx
0x4B46D6: push    eax
0x4B46D7: call    TESModel_Load
0x4B46DC: jmp     short loc_4B470B
0x4B46DE: test    esi, esi
0x4B46E0: jz      short loc_4B46EE
0x4B46E2: lea     eax, [esi+48h]
0x4B46E5: push    ebx
0x4B46E6: push    eax
0x4B46E7: call    TESTexture_Load
0x4B46EC: jmp     short loc_4B470B
0x4B46EE: xor     eax, eax
0x4B46F0: push    ebx
0x4B46F1: push    eax
0x4B46F2: call    TESTexture_Load
0x4B46F7: jmp     short loc_4B470B
0x4B46F9: test    esi, esi
0x4B46FB: jz      short loc_4B4702
0x4B46FD: lea     eax, [esi+24h]
0x4B4700: jmp     short loc_4B4704
0x4B4702: xor     eax, eax
0x4B4704: push    ebx
0x4B4705: push    eax
0x4B4706: call    TESFullname_Load
0x4B470B: add     esp, 8
0x4B470E: mov     ecx, ebx
0x4B4710: call    TESFile_GetNextChunk
0x4B4715: test    al, al
0x4B4717: jz      short loc_4B4728
0x4B4719: mov     ecx, ebx
0x4B471B: call    TESFile_GetChunkType
0x4B4720: test    eax, eax
0x4B4722: jnz     loc_4B4610
0x4B4728: mov     al, 1
0x4B472A: lea     esp, [ebp-14h]
0x4B472D: pop     edi
0x4B472E: pop     esi
0x4B472F: pop     ebx
0x4B4730: mov     ecx, [ebp+var_4]
0x4B4733: xor     ecx, ebp
0x4B4735: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B473A: mov     esp, ebp
0x4B473C: pop     ebp
0x4B473D: retn    4
