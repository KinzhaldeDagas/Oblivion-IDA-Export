0x4B43A0: push    ebp
0x4B43A1: mov     ebp, esp
0x4B43A3: sub     esp, 8
0x4B43A6: mov     eax, ds:0B30AACh
0x4B43AB: xor     eax, ebp
0x4B43AD: mov     [ebp+var_4], eax
0x4B43B0: push    ebx
0x4B43B1: push    esi
0x4B43B2: mov     esi, [ebp+a2]
0x4B43B5: mov     ebx, ecx
0x4B43B7: push    edi
0x4B43B8: mov     ecx, esi
0x4B43BA: call    TESFile_GetRecordType
0x4B43BF: cmp     al, 41h ; 'A'
0x4B43C1: jz      short loc_4B43CA
0x4B43C3: xor     al, al
0x4B43C5: jmp     loc_4B447F
0x4B43CA: push    ebx
0x4B43CB: mov     ecx, esi
0x4B43CD: call    TESFile_InitializeFormFromRecord
0x4B43D2: mov     ecx, esi
0x4B43D4: call    TESFile_GetChunkType
0x4B43D9: test    eax, eax
0x4B43DB: jz      loc_4B447D
0x4B43E1: cmp     eax, 44494445h
0x4B43E6: jg      short loc_4B4440
0x4B43E8: jz      short loc_4B4417
0x4B43EA: cmp     eax, 41544144h
0x4B43EF: jz      short loc_4B43FA
0x4B43F1: cmp     eax, 42444F4Dh
0x4B43F6: jz      short loc_4B444E
0x4B43F8: jmp     short loc_4B4463
0x4B43FA: push    4; a4
0x4B43FC: lea     eax, [ebp+Dst]
0x4B43FF: push    eax; Dst
0x4B4400: push    esi; a2
0x4B4401: mov     ecx, ebx; this
0x4B4403: mov     [ebp+Dst], 0
0x4B440A: call    TESForm_LoadGenericComponents
0x4B440F: mov     ecx, [ebp+Dst]
0x4B4412: mov     [ebx+30h], ecx
0x4B4415: jmp     short loc_4B4463
0x4B4417: mov     eax, [esi+254h]
0x4B441D: call    __alloca?
0x4B4422: mov     edi, esp
0x4B4424: push    200h; a4
0x4B4429: push    edi; Dst
0x4B442A: mov     ecx, esi; a1
0x4B442C: call    TESFile_GetChunkData
0x4B4431: mov     edx, [ebx]
0x4B4433: mov     eax, [edx+0D8h]
0x4B4439: push    edi
0x4B443A: mov     ecx, ebx
0x4B443C: call    eax
0x4B443E: jmp     short loc_4B4463
0x4B4440: cmp     eax, 4C444F4Dh
0x4B4445: jz      short loc_4B444E
0x4B4447: cmp     eax, 54444F4Dh
0x4B444C: jnz     short loc_4B4463
0x4B444E: test    ebx, ebx
0x4B4450: jz      short loc_4B4457
0x4B4452: lea     eax, [ebx+18h]
0x4B4455: jmp     short loc_4B4459
0x4B4457: xor     eax, eax
0x4B4459: push    esi
0x4B445A: push    eax
0x4B445B: call    TESModel_Load
0x4B4460: add     esp, 8
0x4B4463: mov     ecx, esi
0x4B4465: call    TESFile_GetNextChunk
0x4B446A: test    al, al
0x4B446C: jz      short loc_4B447D
0x4B446E: mov     ecx, esi
0x4B4470: call    TESFile_GetChunkType
0x4B4475: test    eax, eax
0x4B4477: jnz     loc_4B43E1
0x4B447D: mov     al, 1
0x4B447F: lea     esp, [ebp-14h]
0x4B4482: pop     edi
0x4B4483: pop     esi
0x4B4484: pop     ebx
0x4B4485: mov     ecx, [ebp+var_4]
0x4B4488: xor     ecx, ebp
0x4B448A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B448F: mov     esp, ebp
0x4B4491: pop     ebp
0x4B4492: retn    4
