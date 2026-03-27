0x517CB0: push    ebp
0x517CB1: mov     ebp, esp
0x517CB3: sub     esp, 0Ch
0x517CB6: mov     eax, ds:0B30AACh
0x517CBB: xor     eax, ebp
0x517CBD: mov     [ebp+var_4], eax
0x517CC0: push    ebx
0x517CC1: push    esi
0x517CC2: push    edi
0x517CC3: mov     edi, [ebp+a2]
0x517CC6: mov     esi, ecx
0x517CC8: mov     ecx, edi
0x517CCA: call    TESFile_GetRecordType
0x517CCF: cmp     eax, 0Ah
0x517CD2: jz      short loc_517CDB
0x517CD4: xor     al, al
0x517CD6: jmp     loc_517DB8
0x517CDB: push    esi
0x517CDC: mov     ecx, edi
0x517CDE: call    TESFile_InitializeFormFromRecord
0x517CE3: mov     ecx, edi
0x517CE5: call    TESFile_GetChunkType
0x517CEA: test    eax, eax
0x517CEC: jz      loc_517DB6
0x517CF2: cmp     eax, 4D414E46h
0x517CF7: jg      loc_517D87
0x517CFD: jz      short loc_517D62
0x517CFF: cmp     eax, 44444E53h
0x517D04: jz      short loc_517D3A
0x517D06: cmp     eax, 44494445h
0x517D0B: jnz     loc_517D9C
0x517D11: mov     eax, [edi+254h]
0x517D17: call    __alloca?
0x517D1C: mov     ebx, esp
0x517D1E: push    200h; a4
0x517D23: push    ebx; Dst
0x517D24: mov     ecx, edi; a1
0x517D26: call    TESFile_GetChunkData
0x517D2B: mov     eax, [esi]
0x517D2D: mov     edx, [eax+0D8h]
0x517D33: push    ebx
0x517D34: mov     ecx, esi
0x517D36: call    edx
0x517D38: jmp     short loc_517D9C
0x517D3A: push    8; a4
0x517D3C: lea     eax, [ebp+Dst]
0x517D3F: push    eax; Dst
0x517D40: push    edi; a2
0x517D41: mov     ecx, esi; this
0x517D43: call    TESForm_LoadGenericComponents
0x517D48: mov     cl, [ebp+Dst]
0x517D4B: mov     dl, [ebp+var_B]
0x517D4E: mov     al, [ebp+var_A]
0x517D51: mov     [esi+38h], cl
0x517D54: mov     ecx, [ebp+var_8]
0x517D57: mov     [esi+39h], dl
0x517D5A: mov     [esi+3Ah], al
0x517D5D: mov     [esi+3Ch], ecx
0x517D60: jmp     short loc_517D9C
0x517D62: mov     eax, [edi+254h]
0x517D68: call    __alloca?
0x517D6D: mov     ebx, esp
0x517D6F: push    0; a4
0x517D71: push    ebx; Dst
0x517D72: mov     ecx, edi; a1
0x517D74: call    TESFile_GetChunkData
0x517D79: mov     edx, [esi+24h]
0x517D7C: mov     eax, [edx+10h]
0x517D7F: lea     ecx, [esi+24h]
0x517D82: push    ebx
0x517D83: call    eax
0x517D85: jmp     short loc_517D9C
0x517D87: cmp     eax, 58444E53h
0x517D8C: jnz     short loc_517D9C
0x517D8E: push    0Ch; a4
0x517D90: lea     ecx, [esi+38h]
0x517D93: push    ecx; Dst
0x517D94: push    edi; a2
0x517D95: mov     ecx, esi; this
0x517D97: call    TESForm_LoadGenericComponents
0x517D9C: mov     ecx, edi
0x517D9E: call    TESFile_GetNextChunk
0x517DA3: test    al, al
0x517DA5: jz      short loc_517DB6
0x517DA7: mov     ecx, edi
0x517DA9: call    TESFile_GetChunkType
0x517DAE: test    eax, eax
0x517DB0: jnz     loc_517CF2
0x517DB6: mov     al, 1
0x517DB8: lea     esp, [ebp-18h]
0x517DBB: pop     edi
0x517DBC: pop     esi
0x517DBD: pop     ebx
0x517DBE: mov     ecx, [ebp+var_4]
0x517DC1: xor     ecx, ebp
0x517DC3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x517DC8: mov     esp, ebp
0x517DCA: pop     ebp
0x517DCB: retn    4
