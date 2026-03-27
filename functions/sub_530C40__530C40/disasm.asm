0x530C40: push    ebp
0x530C41: mov     ebp, esp
0x530C43: push    0FFFFFFFFh
0x530C45: push    offset SEH_530C40
0x530C4A: mov     eax, large fs:0
0x530C50: push    eax
0x530C51: sub     esp, 0Ch
0x530C54: mov     eax, ds:0B30AACh
0x530C59: xor     eax, ebp
0x530C5B: mov     [ebp+var_10], eax
0x530C5E: push    ebx
0x530C5F: push    esi
0x530C60: push    edi
0x530C61: push    eax
0x530C62: lea     eax, [ebp+var_C]
0x530C65: mov     large fs:0, eax
0x530C6B: mov     ebx, ecx
0x530C6D: mov     [ebp+var_18], ebx
0x530C70: cmp     ebx, ds:0B36528h
0x530C76: jz      loc_530D84
0x530C7C: mov     ds:0B36528h, ebx
0x530C82: call    sub_530620
0x530C87: push    0FFFFFFFFh; a2
0x530C89: mov     ecx, ebx; this
0x530C8B: call    TESForm_GetOverrideFile
0x530C90: xor     esi, esi
0x530C92: cmp     eax, esi
0x530C94: jz      loc_530D84
0x530C9A: cmp     [ebx+34h], esi
0x530C9D: jz      loc_530D84
0x530CA3: mov     ecx, eax
0x530CA5: call    sub_4520F0
0x530CAA: mov     edi, eax
0x530CAC: mov     eax, [ebx+34h]
0x530CAF: push    eax; Buffer
0x530CB0: mov     ecx, edi
0x530CB2: call    TESFIle_JumpToRecord
0x530CB7: test    al, al
0x530CB9: jz      loc_530D84
0x530CBF: mov     ecx, edi
0x530CC1: call    TESFile_GetRecordType
0x530CC6: movzx   ecx, byte ptr [ebx+4]
0x530CCA: lea     ecx, [ecx+ecx*2]
0x530CCD: cmp     al, ds:0B05E00h[ecx*4]
0x530CD4: jnz     loc_530D84
0x530CDA: mov     ecx, edi
0x530CDC: mov     [ebp+var_14], esi
0x530CDF: call    TESFile_GetChunkType
0x530CE4: cmp     eax, esi
0x530CE6: jz      loc_530D84
0x530CEC: cmp     eax, 314D414Eh
0x530CF1: jz      short loc_530D3A
0x530CF3: cmp     eax, 54445254h
0x530CF8: jnz     short loc_530D68
0x530CFA: push    18h; Size
0x530CFC: call    FormHeapAlloc
0x530D01: add     esp, 4
0x530D04: mov     [ebp+var_14], eax
0x530D07: cmp     eax, esi
0x530D09: mov     [ebp+var_4], esi
0x530D0C: jz      short loc_530D17
0x530D0E: mov     ecx, eax
0x530D10: call    sub_52E150
0x530D15: mov     esi, eax
0x530D17: push    edi
0x530D18: mov     ecx, esi
0x530D1A: mov     [ebp+var_4], 0FFFFFFFFh
0x530D21: mov     [ebp+var_14], esi
0x530D24: call    sub_52E0D0
0x530D29: push    esi
0x530D2A: mov     ecx, ebx
0x530D2C: call    sub_530C40
0x530D31: mov     ecx, eax
0x530D33: call    BSSimpleList_PushBack
0x530D38: jmp     short loc_530D68
0x530D3A: cmp     [ebp+var_14], esi
0x530D3D: jz      short loc_530D68
0x530D3F: mov     esi, [edi+254h]
0x530D45: mov     eax, esi
0x530D47: call    __alloca?
0x530D4C: mov     ebx, esp
0x530D4E: push    esi; a4
0x530D4F: push    ebx; Dst
0x530D50: mov     ecx, edi; a1
0x530D52: call    TESFile_GetChunkData
0x530D57: mov     ecx, [ebp+var_14]
0x530D5A: push    0; a3
0x530D5C: push    ebx; a2
0x530D5D: add     ecx, 10h; this
0x530D60: call    BSStringT_Set
0x530D65: mov     ebx, [ebp+var_18]
0x530D68: mov     ecx, edi
0x530D6A: call    TESFile_GetNextChunk
0x530D6F: test    al, al
0x530D71: jz      short loc_530D84
0x530D73: mov     ecx, edi
0x530D75: call    TESFile_GetChunkType
0x530D7A: xor     esi, esi
0x530D7C: cmp     eax, esi
0x530D7E: jnz     loc_530CEC
0x530D84: mov     eax, offset dword_B36580
0x530D89: lea     esp, [ebp-28h]
0x530D8C: mov     ecx, [ebp+var_C]
0x530D8F: mov     large fs:0, ecx
0x530D96: pop     ecx
0x530D97: pop     edi
0x530D98: pop     esi
0x530D99: pop     ebx
0x530D9A: mov     ecx, [ebp+var_10]
0x530D9D: xor     ecx, ebp
0x530D9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x530DA4: mov     esp, ebp
0x530DA6: pop     ebp
0x530DA7: retn
