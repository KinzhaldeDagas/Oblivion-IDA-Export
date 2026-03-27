0x4F9470: push    ebp
0x4F9471: mov     ebp, esp
0x4F9473: push    ecx
0x4F9474: mov     eax, ds:0B30AACh
0x4F9479: xor     eax, ebp
0x4F947B: mov     [ebp+var_4], eax
0x4F947E: push    ebx
0x4F947F: push    esi
0x4F9480: mov     esi, [ebp+a1]
0x4F9483: mov     ebx, ecx
0x4F9485: push    edi
0x4F9486: mov     ecx, esi
0x4F9488: call    TESFile_GetRecordType
0x4F948D: cmp     eax, 4
0x4F9490: jz      short loc_4F9499
0x4F9492: xor     al, al
0x4F9494: jmp     loc_4F9520
0x4F9499: push    ebx
0x4F949A: mov     ecx, esi
0x4F949C: call    TESFile_InitializeFormFromRecord
0x4F94A1: mov     ecx, esi
0x4F94A3: call    TESFile_GetChunkType
0x4F94A8: test    eax, eax
0x4F94AA: jz      short loc_4F951E
0x4F94AC: lea     esp, [esp+0]
0x4F94B0: cmp     eax, 44494445h
0x4F94B5: jz      short loc_4F94E1
0x4F94B7: cmp     eax, 4D414E46h
0x4F94BC: jz      short loc_4F94D2
0x4F94BE: cmp     eax, 56544C46h
0x4F94C3: jnz     short loc_4F9508
0x4F94C5: lea     eax, [ebx+24h]
0x4F94C8: push    eax
0x4F94C9: mov     ecx, esi
0x4F94CB: call    TESFile_GetChunkData4
0x4F94D0: jmp     short loc_4F9508
0x4F94D2: push    1; a4
0x4F94D4: lea     ecx, [ebx+20h]
0x4F94D7: push    ecx; Dst
0x4F94D8: mov     ecx, esi; a1
0x4F94DA: call    TESFile_GetChunkData
0x4F94DF: jmp     short loc_4F9508
0x4F94E1: mov     eax, [esi+254h]
0x4F94E7: call    __alloca?
0x4F94EC: mov     edi, esp
0x4F94EE: push    200h; a4
0x4F94F3: push    edi; Dst
0x4F94F4: mov     ecx, esi; a1
0x4F94F6: call    TESFile_GetChunkData
0x4F94FB: mov     edx, [ebx]
0x4F94FD: mov     eax, [edx+0D8h]
0x4F9503: push    edi
0x4F9504: mov     ecx, ebx
0x4F9506: call    eax
0x4F9508: mov     ecx, esi
0x4F950A: call    TESFile_GetNextChunk
0x4F950F: test    al, al
0x4F9511: jz      short loc_4F951E
0x4F9513: mov     ecx, esi
0x4F9515: call    TESFile_GetChunkType
0x4F951A: test    eax, eax
0x4F951C: jnz     short loc_4F94B0
0x4F951E: mov     al, 1
0x4F9520: lea     esp, [ebp-10h]
0x4F9523: pop     edi
0x4F9524: pop     esi
0x4F9525: pop     ebx
0x4F9526: mov     ecx, [ebp+var_4]
0x4F9529: xor     ecx, ebp
0x4F952B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F9530: mov     esp, ebp
0x4F9532: pop     ebp
0x4F9533: retn    4
