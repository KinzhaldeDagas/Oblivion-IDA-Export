0x4E74E0: push    ebp
0x4E74E1: mov     ebp, esp
0x4E74E3: sub     esp, 0Ch
0x4E74E6: mov     eax, ds:0B30AACh
0x4E74EB: xor     eax, ebp
0x4E74ED: mov     [ebp+var_4], eax
0x4E74F0: push    ebx
0x4E74F1: push    esi
0x4E74F2: mov     esi, [ebp+a1]
0x4E74F5: mov     ebx, ecx
0x4E74F7: push    edi
0x4E74F8: mov     ecx, esi
0x4E74FA: call    TESFile_GetRecordType
0x4E74FF: cmp     al, 34h ; '4'
0x4E7501: jz      short loc_4E750A
0x4E7503: xor     al, al
0x4E7505: jmp     loc_4E75FA
0x4E750A: mov     edi, [ebx+0Ch]
0x4E750D: push    ebx
0x4E750E: mov     ecx, esi
0x4E7510: call    TESFile_InitializeFormFromRecord
0x4E7515: test    edi, edi
0x4E7517: jz      short loc_4E7532
0x4E7519: mov     eax, [ebx+0Ch]
0x4E751C: cmp     edi, eax
0x4E751E: jz      short loc_4E7532
0x4E7520: lea     ecx, [esi+1Ch]
0x4E7523: push    ecx
0x4E7524: push    eax; ArgList
0x4E7525: push    offset aPotentiallyDup; "Potentially duplicate PathGrid (%08x) e"...
0x4E752A: call    PrintError
0x4E752F: add     esp, 0Ch
0x4E7532: mov     ecx, esi
0x4E7534: mov     [ebp+var_6], 0
0x4E7538: call    TESFile_IsActive
0x4E753D: test    al, al
0x4E753F: jnz     short loc_4E754A
0x4E7541: call    sub_4C9FF0
0x4E7546: test    al, al
0x4E7548: jz      short loc_4E754E
0x4E754A: mov     [ebp+var_6], 1
0x4E754E: mov     [ebp+var_5], 1
0x4E7552: mov     ecx, esi
0x4E7554: call    TESFile_GetChunkType
0x4E7559: cmp     eax, 4C524750h
0x4E755E: jg      short loc_4E75B9
0x4E7560: jz      short loc_4E75C7
0x4E7562: cmp     eax, 41544144h
0x4E7567: jz      short loc_4E75A2
0x4E7569: cmp     eax, 44494445h
0x4E756E: jz      short loc_4E7579
0x4E7570: cmp     eax, 49524750h
0x4E7575: jz      short loc_4E75C7
0x4E7577: jmp     short loc_4E75D8
0x4E7579: mov     eax, [esi+254h]
0x4E757F: call    __alloca?
0x4E7584: mov     edi, esp
0x4E7586: push    200h; a4
0x4E758B: push    edi; Dst
0x4E758C: mov     ecx, esi; a1
0x4E758E: call    TESFile_GetChunkData
0x4E7593: mov     edx, [ebx]
0x4E7595: mov     eax, [edx+0D8h]
0x4E759B: push    edi
0x4E759C: mov     ecx, ebx
0x4E759E: call    eax
0x4E75A0: jmp     short loc_4E75D8
0x4E75A2: push    2; a4
0x4E75A4: lea     ecx, [ebp+Dst]
0x4E75A7: push    ecx; Dst
0x4E75A8: mov     ecx, esi; a1
0x4E75AA: call    TESFile_GetChunkData
0x4E75AF: mov     dx, word ptr [ebp+Dst]
0x4E75B3: mov     [ebx+30h], dx
0x4E75B7: jmp     short loc_4E75D8
0x4E75B9: cmp     eax, 50524750h
0x4E75BE: jz      short loc_4E75C7
0x4E75C0: cmp     eax, 52524750h
0x4E75C5: jnz     short loc_4E75D8
0x4E75C7: cmp     [ebp+var_6], 0
0x4E75CB: jz      short loc_4E75D8
0x4E75CD: push    esi
0x4E75CE: mov     ecx, ebx
0x4E75D0: call    sub_4E65B0
0x4E75D5: mov     [ebp+var_5], al
0x4E75D8: mov     ecx, esi
0x4E75DA: call    TESFile_GetNextChunk
0x4E75DF: test    al, al
0x4E75E1: jnz     loc_4E7552
0x4E75E7: mov     eax, [ebx+8]
0x4E75EA: shr     eax, 5
0x4E75ED: test    al, 1
0x4E75EF: jz      short loc_4E75F7
0x4E75F1: mov     word ptr [ebx+30h], 0
0x4E75F7: mov     al, [ebp+var_5]
0x4E75FA: lea     esp, [ebp-18h]
0x4E75FD: pop     edi
0x4E75FE: pop     esi
0x4E75FF: pop     ebx
0x4E7600: mov     ecx, [ebp+var_4]
0x4E7603: xor     ecx, ebp
0x4E7605: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4E760A: mov     esp, ebp
0x4E760C: pop     ebp
0x4E760D: retn    4
