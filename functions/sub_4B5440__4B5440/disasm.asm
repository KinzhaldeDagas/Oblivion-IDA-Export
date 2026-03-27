0x4B5440: push    ebp
0x4B5441: mov     ebp, esp
0x4B5443: sub     esp, 8
0x4B5446: mov     eax, ds:0B30AACh
0x4B544B: xor     eax, ebp
0x4B544D: mov     [ebp+var_4], eax
0x4B5450: push    ebx
0x4B5451: mov     ebx, [ebp+a2]
0x4B5454: push    esi
0x4B5455: mov     esi, ecx
0x4B5457: push    edi
0x4B5458: mov     ecx, ebx
0x4B545A: call    TESFile_GetRecordType
0x4B545F: cmp     al, 15h
0x4B5461: jz      short loc_4B546A
0x4B5463: xor     al, al
0x4B5465: jmp     loc_4B561B
0x4B546A: push    esi
0x4B546B: mov     ecx, ebx
0x4B546D: call    TESFile_InitializeFormFromRecord
0x4B5472: xor     edi, edi
0x4B5474: push    edi; a2
0x4B5475: mov     ecx, esi; this
0x4B5477: call    TESForm_SetIsLinked
0x4B547C: mov     ecx, ebx
0x4B547E: call    TESFile_GetChunkType
0x4B5483: cmp     eax, edi
0x4B5485: jz      loc_4B5619
0x4B548B: jmp     short loc_4B5490
0x4B548D: align 10h
0x4B5490: cmp     eax, 4C444F4Dh
0x4B5495: jg      loc_4B555D
0x4B549B: jz      loc_4B55CF
0x4B54A1: cmp     eax, 43534544h
0x4B54A6: jg      short loc_4B54FB
0x4B54A8: jz      short loc_4B54D7
0x4B54AA: cmp     eax, 41544144h
0x4B54AF: jz      short loc_4B54C1
0x4B54B1: cmp     eax, 42444F4Dh
0x4B54B6: jz      loc_4B55CF
0x4B54BC: jmp     loc_4B55FF
0x4B54C1: push    2; a4
0x4B54C3: lea     eax, [esi+88h]
0x4B54C9: push    eax; Dst
0x4B54CA: push    ebx; a2
0x4B54CB: mov     ecx, esi; this
0x4B54CD: call    TESForm_LoadGenericComponents
0x4B54D2: jmp     loc_4B55FF
0x4B54D7: cmp     esi, edi
0x4B54D9: jz      short loc_4B54ED
0x4B54DB: lea     eax, [esi+80h]
0x4B54E1: push    ebx
0x4B54E2: push    eax
0x4B54E3: call    TESDescription_Load
0x4B54E8: jmp     loc_4B55FC
0x4B54ED: xor     eax, eax
0x4B54EF: push    ebx
0x4B54F0: push    eax
0x4B54F1: call    TESDescription_Load
0x4B54F6: jmp     loc_4B55FC
0x4B54FB: cmp     eax, 44494445h
0x4B5500: jz      short loc_4B552F
0x4B5502: cmp     eax, 49524353h
0x4B5507: jnz     loc_4B55FF
0x4B550D: lea     ecx, [ebp+var_8]
0x4B5510: push    ecx
0x4B5511: mov     ecx, ebx
0x4B5513: mov     [ebp+var_8], edi
0x4B5516: call    TESFile_GetChunkData4
0x4B551B: mov     edx, [ebp+var_8]
0x4B551E: push    esi
0x4B551F: lea     ecx, [esi+54h]
0x4B5522: mov     [esi+58h], edx
0x4B5525: call    TESScriptableForm_Link
0x4B552A: jmp     loc_4B55FF
0x4B552F: mov     eax, [ebx+254h]
0x4B5535: call    __alloca?
0x4B553A: mov     edi, esp
0x4B553C: push    200h; a4
0x4B5541: push    edi; Dst
0x4B5542: mov     ecx, ebx; a1
0x4B5544: call    TESFile_GetChunkData
0x4B5549: mov     eax, [esi]
0x4B554B: mov     edx, [eax+0D8h]
0x4B5551: push    edi
0x4B5552: mov     ecx, esi
0x4B5554: call    edx
0x4B5556: xor     edi, edi
0x4B5558: jmp     loc_4B55FF
0x4B555D: cmp     eax, 4D414E45h
0x4B5562: jg      short loc_4B55C1
0x4B5564: jz      short loc_4B55AB
0x4B5566: cmp     eax, 4C4C5546h
0x4B556B: jz      short loc_4B5590
0x4B556D: cmp     eax, 4D414E41h
0x4B5572: jnz     loc_4B55FF
0x4B5578: lea     eax, [ebp+var_8]
0x4B557B: push    eax
0x4B557C: mov     ecx, ebx
0x4B557E: mov     [ebp+var_8], edi
0x4B5581: call    TESFile_GetChunkData2
0x4B5586: mov     cx, word ptr [ebp+var_8]
0x4B558A: mov     [esi+68h], cx
0x4B558E: jmp     short loc_4B55FF
0x4B5590: cmp     esi, edi
0x4B5592: jz      short loc_4B55A0
0x4B5594: lea     eax, [esi+24h]
0x4B5597: push    ebx
0x4B5598: push    eax
0x4B5599: call    TESFullname_Load
0x4B559E: jmp     short loc_4B55FC
0x4B55A0: xor     eax, eax
0x4B55A2: push    ebx
0x4B55A3: push    eax
0x4B55A4: call    TESFullname_Load
0x4B55A9: jmp     short loc_4B55FC
0x4B55AB: lea     edx, [ebp+var_8]
0x4B55AE: push    edx
0x4B55AF: mov     ecx, ebx
0x4B55B1: mov     [ebp+var_8], edi
0x4B55B4: call    TESFile_GetChunkData4
0x4B55B9: mov     eax, [ebp+var_8]
0x4B55BC: mov     [esi+64h], eax
0x4B55BF: jmp     short loc_4B55FF
0x4B55C1: cmp     eax, 4E4F4349h
0x4B55C6: jz      short loc_4B55EA
0x4B55C8: cmp     eax, 54444F4Dh
0x4B55CD: jnz     short loc_4B55FF
0x4B55CF: cmp     esi, edi
0x4B55D1: jz      short loc_4B55DF
0x4B55D3: lea     eax, [esi+30h]
0x4B55D6: push    ebx
0x4B55D7: push    eax
0x4B55D8: call    TESModel_Load
0x4B55DD: jmp     short loc_4B55FC
0x4B55DF: xor     eax, eax
0x4B55E1: push    ebx
0x4B55E2: push    eax
0x4B55E3: call    TESModel_Load
0x4B55E8: jmp     short loc_4B55FC
0x4B55EA: cmp     esi, edi
0x4B55EC: jz      short loc_4B55F3
0x4B55EE: lea     eax, [esi+48h]
0x4B55F1: jmp     short loc_4B55F5
0x4B55F3: xor     eax, eax
0x4B55F5: push    ebx
0x4B55F6: push    eax
0x4B55F7: call    TESTexture_Load
0x4B55FC: add     esp, 8
0x4B55FF: mov     ecx, ebx
0x4B5601: call    TESFile_GetNextChunk
0x4B5606: test    al, al
0x4B5608: jz      short loc_4B5619
0x4B560A: mov     ecx, ebx
0x4B560C: call    TESFile_GetChunkType
0x4B5611: cmp     eax, edi
0x4B5613: jnz     loc_4B5490
0x4B5619: mov     al, 1
0x4B561B: lea     esp, [ebp-14h]
0x4B561E: pop     edi
0x4B561F: pop     esi
0x4B5620: pop     ebx
0x4B5621: mov     ecx, [ebp+var_4]
0x4B5624: xor     ecx, ebp
0x4B5626: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B562B: mov     esp, ebp
0x4B562D: pop     ebp
0x4B562E: retn    4
