0x4B04A0: push    ebp
0x4B04A1: mov     ebp, esp
0x4B04A3: sub     esp, 14h
0x4B04A6: mov     eax, ds:0B30AACh
0x4B04AB: xor     eax, ebp
0x4B04AD: mov     [ebp+var_4], eax
0x4B04B0: push    ebx
0x4B04B1: mov     ebx, [ebp+a1]
0x4B04B4: push    esi
0x4B04B5: push    edi
0x4B04B6: mov     edi, ecx
0x4B04B8: mov     ecx, ebx
0x4B04BA: call    TESFile_GetRecordType
0x4B04BF: cmp     al, 40h ; '@'
0x4B04C1: jz      short loc_4B04CA
0x4B04C3: xor     al, al
0x4B04C5: jmp     loc_4B05BB
0x4B04CA: push    edi
0x4B04CB: mov     ecx, ebx
0x4B04CD: call    TESFile_InitializeFormFromRecord
0x4B04D2: mov     ecx, ebx
0x4B04D4: call    TESFile_GetChunkType
0x4B04D9: cmp     eax, 464C564Ch
0x4B04DE: jg      loc_4B0568
0x4B04E4: jz      short loc_4B0559
0x4B04E6: cmp     eax, 44494445h
0x4B04EB: jz      short loc_4B0530
0x4B04ED: cmp     eax, 444C564Ch
0x4B04F2: jnz     loc_4B05A1
0x4B04F8: push    0; a4
0x4B04FA: lea     eax, [ebp+Dst]
0x4B04FD: push    eax; Dst
0x4B04FE: mov     ecx, ebx; a1
0x4B0500: mov     [ebp+Dst], 0
0x4B0504: call    TESFile_GetChunkData
0x4B0509: test    [ebp+Dst], 80h
0x4B050D: lea     esi, [edi+24h]
0x4B0510: mov     ecx, esi
0x4B0512: jz      short loc_4B0518
0x4B0514: push    1
0x4B0516: jmp     short loc_4B051A
0x4B0518: push    0
0x4B051A: call    TESLeveledList_SetCalcAllLevels
0x4B051F: and     [ebp+Dst], 7Fh
0x4B0523: mov     ecx, dword ptr [ebp+Dst]
0x4B0526: push    ecx
0x4B0527: mov     ecx, esi
0x4B0529: call    TESLeveledList_SetChanceNone
0x4B052E: jmp     short loc_4B05A1
0x4B0530: mov     eax, [ebx+254h]
0x4B0536: call    __alloca?
0x4B053B: mov     esi, esp
0x4B053D: push    200h; a4
0x4B0542: push    esi; Dst
0x4B0543: mov     ecx, ebx; a1
0x4B0545: call    TESFile_GetChunkData
0x4B054A: mov     edx, [edi]
0x4B054C: mov     eax, [edx+0D8h]
0x4B0552: push    esi
0x4B0553: mov     ecx, edi
0x4B0555: call    eax
0x4B0557: jmp     short loc_4B05A1
0x4B0559: push    0; a4
0x4B055B: lea     ecx, [edi+31h]
0x4B055E: push    ecx; Dst
0x4B055F: mov     ecx, ebx; a1
0x4B0561: call    TESFile_GetChunkData
0x4B0566: jmp     short loc_4B05A1
0x4B0568: cmp     eax, 4F4C564Ch
0x4B056D: jnz     short loc_4B05A1
0x4B056F: xor     eax, eax
0x4B0571: push    0Ch; a4
0x4B0573: lea     edx, [ebp+var_14]
0x4B0576: mov     [ebp+var_C], eax
0x4B0579: push    edx; Dst
0x4B057A: mov     ecx, ebx; a1
0x4B057C: mov     dword ptr [ebp+var_14], eax
0x4B057F: mov     [ebp+var_10], eax
0x4B0582: mov     word ptr [ebp+var_C], 1
0x4B0588: call    TESFile_GetChunkData
0x4B058D: mov     eax, [ebp+var_10]
0x4B0590: mov     ecx, [ebp+var_C]
0x4B0593: mov     edx, dword ptr [ebp+var_14]
0x4B0596: push    eax
0x4B0597: push    ecx
0x4B0598: push    edx
0x4B0599: lea     ecx, [edi+24h]
0x4B059C: call    TESLeveledList_AddForm
0x4B05A1: mov     ecx, ebx
0x4B05A3: call    TESFile_GetNextChunk
0x4B05A8: test    al, al
0x4B05AA: jnz     loc_4B04D2
0x4B05B0: push    0; a2
0x4B05B2: mov     ecx, edi; this
0x4B05B4: call    TESForm_SetIsLinked
0x4B05B9: mov     al, 1
0x4B05BB: lea     esp, [ebp-20h]
0x4B05BE: pop     edi
0x4B05BF: pop     esi
0x4B05C0: pop     ebx
0x4B05C1: mov     ecx, [ebp+var_4]
0x4B05C4: xor     ecx, ebp
0x4B05C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B05CB: mov     esp, ebp
0x4B05CD: pop     ebp
0x4B05CE: retn    4
