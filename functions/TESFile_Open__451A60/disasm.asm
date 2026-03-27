0x451A60: push    ebp
0x451A61: mov     ebp, esp
0x451A63: push    ecx
0x451A64: mov     eax, ds:0B30AACh
0x451A69: xor     eax, ebp
0x451A6B: mov     [ebp+var_4], eax
0x451A6E: push    esi
0x451A6F: push    edi
0x451A70: mov     esi, ecx
0x451A72: call    TESFile_ClearMasters
0x451A77: mov     ecx, [esi+10h]
0x451A7A: xor     edi, edi
0x451A7C: cmp     ecx, edi
0x451A7E: jnz     short loc_451AB0
0x451A80: push    edi; char
0x451A81: push    edi; int
0x451A82: lea     eax, [esi+1Ch]
0x451A85: push    eax; int
0x451A86: lea     ecx, [esi+120h]
0x451A8C: push    ecx; lpString2
0x451A8D: mov     ecx, esi
0x451A8F: call    TESFile_OpenBSFile?
0x451A94: test    al, al
0x451A96: jnz     short loc_451AF7
0x451A98: mov     eax, 2
0x451A9D: lea     esp, [ebp-0Ch]
0x451AA0: pop     edi
0x451AA1: pop     esi
0x451AA2: mov     ecx, [ebp+var_4]
0x451AA5: xor     ecx, ebp
0x451AA7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x451AAC: mov     esp, ebp
0x451AAE: pop     ebp
0x451AAF: retn
0x451AB0: mov     eax, ds:0A853D0h
0x451AB5: mov     edx, [ecx]
0x451AB7: mov     edx, [edx+0Ch]
0x451ABA: push    eax
0x451ABB: push    edi
0x451ABC: call    edx
0x451ABE: xor     eax, eax
0x451AC0: mov     [esi+25Ch], edi
0x451AC6: mov     [esi+260h], edi
0x451ACC: mov     [esi+264h], edi
0x451AD2: mov     [esi+23Ch], eax
0x451AD8: mov     [esi+240h], eax
0x451ADE: mov     [esi+244h], eax
0x451AE4: mov     [esi+248h], eax
0x451AEA: mov     ecx, esi
0x451AEC: mov     [esi+24Ch], eax
0x451AF2: call    TESFile_GetRecordType
0x451AF7: mov     ecx, [esi+10h]
0x451AFA: mov     eax, [ecx]
0x451AFC: mov     edx, [eax+1Ch]
0x451AFF: call    edx
0x451B01: mov     [esi+258h], eax
0x451B07: mov     eax, [esi+23Ch]
0x451B0D: cmp     eax, ds:0B05E14h
0x451B13: jz      short loc_451B30
0x451B15: mov     eax, 0Bh
0x451B1A: lea     esp, [ebp-0Ch]
0x451B1D: pop     edi
0x451B1E: pop     esi
0x451B1F: mov     ecx, [ebp+var_4]
0x451B22: xor     ecx, ebp
0x451B24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x451B29: mov     esp, ebp
0x451B2B: pop     ebp
0x451B2C: retn
0x451B2D: align 10h
0x451B30: mov     eax, [esi+250h]
0x451B36: cmp     eax, 4D414E53h
0x451B3B: jg      loc_451BDC
0x451B41: jz      short loc_451BAD
0x451B43: cmp     eax, 41544144h
0x451B48: jz      short loc_451B84
0x451B4A: cmp     eax, 4D414E43h
0x451B4F: jnz     loc_451C5F
0x451B55: mov     eax, [esi+254h]
0x451B5B: call    __alloca?
0x451B60: mov     edi, esp
0x451B62: push    200h; a4
0x451B67: push    edi; Dst
0x451B68: mov     ecx, esi; a1
0x451B6A: call    TESFile_GetChunkData
0x451B6F: push    0; a3
0x451B71: push    edi; a2
0x451B72: lea     ecx, [esi+404h]; this
0x451B78: call    BSStringT_Set
0x451B7D: xor     edi, edi
0x451B7F: jmp     loc_451C5F
0x451B84: push    8; Size
0x451B86: call    FormHeapAlloc
0x451B8B: add     esp, 4
0x451B8E: mov     edi, eax
0x451B90: push    8; a4
0x451B92: push    edi; Dst
0x451B93: mov     ecx, esi; a1
0x451B95: call    TESFile_GetChunkData
0x451B9A: push    edi
0x451B9B: lea     ecx, [esi+3E8h]
0x451BA1: call    BSSimpleList_PushBack
0x451BA6: xor     edi, edi
0x451BA8: jmp     loc_451C5F
0x451BAD: mov     eax, [esi+254h]
0x451BB3: call    __alloca?
0x451BB8: mov     edi, esp
0x451BBA: push    200h; a4
0x451BBF: push    edi; Dst
0x451BC0: mov     ecx, esi; a1
0x451BC2: call    TESFile_GetChunkData
0x451BC7: push    0; a3
0x451BC9: push    edi; a2
0x451BCA: lea     ecx, [esi+40Ch]; this
0x451BD0: call    BSStringT_Set
0x451BD5: xor     edi, edi
0x451BD7: jmp     loc_451C5F
0x451BDC: cmp     eax, 52444548h
0x451BE1: jz      short loc_451C1C
0x451BE3: cmp     eax, 5453414Dh
0x451BE8: jnz     short loc_451C5F
0x451BEA: mov     eax, [esi+254h]
0x451BF0: push    eax; Size
0x451BF1: call    FormHeapAlloc
0x451BF6: add     esp, 4
0x451BF9: mov     edi, eax
0x451BFB: push    0; a4
0x451BFD: push    edi; Dst
0x451BFE: mov     ecx, esi; a1
0x451C00: call    TESFile_GetChunkData
0x451C05: push    edi
0x451C06: lea     ecx, [esi+3E0h]
0x451C0C: call    BSSimpleList_PushBack
0x451C11: add     dword ptr [esi+3F0h], 1
0x451C18: xor     edi, edi
0x451C1A: jmp     short loc_451C5F
0x451C1C: push    0Ch; a4
0x451C1E: lea     ecx, [esi+3D0h]
0x451C24: push    ecx; Dst
0x451C25: mov     ecx, esi; a1
0x451C27: call    TESFile_GetChunkData
0x451C2C: cmp     dword ptr [esi+3D8h], 7FFh
0x451C36: ja      short loc_451C42
0x451C38: mov     dword ptr [esi+3D8h], 800h
0x451C42: movzx   edx, byte ptr [esi+400h]
0x451C49: mov     eax, [esi+3D8h]
0x451C4F: shl     edx, 18h
0x451C52: and     eax, 0FFFFFFh
0x451C57: or      edx, eax
0x451C59: mov     [esi+3D8h], edx
0x451C5F: mov     ecx, esi
0x451C61: call    TESFile_GetNextChunk
0x451C66: test    al, al
0x451C68: jnz     loc_451B30
0x451C6E: mov     eax, [esi+244h]
0x451C74: test    al, 1
0x451C76: jz      short loc_451C81
0x451C78: or      dword ptr [esi+3DCh], 1
0x451C7F: jmp     short loc_451C88
0x451C81: and     dword ptr [esi+3DCh], 0FFFFFFFEh
0x451C88: test    al, 10h
0x451C8A: jz      short loc_451C95
0x451C8C: or      dword ptr [esi+3DCh], 10h
0x451C93: jmp     short loc_451C9C
0x451C95: and     dword ptr [esi+3DCh], 0FFFFFFEFh
0x451C9C: test    al, al
0x451C9E: jns     short loc_451CAC
0x451CA0: or      dword ptr [esi+3DCh], 80h
0x451CAA: jmp     short loc_451CB6
0x451CAC: and     dword ptr [esi+3DCh], 0FFFFFF7Fh
0x451CB6: movzx   eax, byte ptr [esi+3DFh]
0x451CBD: shl     eax, 18h
0x451CC0: mov     byte ptr [esi+3DFh], 0
0x451CC7: or      [esi+3DCh], eax
0x451CCD: lea     ecx, [ecx+0]
0x451CD0: cmp     [esi+23Ch], edi
0x451CD6: jnz     short loc_451CF6
0x451CD8: mov     ecx, esi
0x451CDA: call    TESFile_LoadRecordHeader
0x451CDF: test    al, al
0x451CE1: jz      short loc_451D14
0x451CE3: mov     ecx, esi; this
0x451CE5: mov     [esi+250h], edi
0x451CEB: mov     [esi+254h], edi
0x451CF1: call    TESFile_LoadChunkHeader
0x451CF6: mov     ecx, [esi+23Ch]
0x451CFC: push    ecx
0x451CFD: call    TESForm_GetFormTypeFromChunkType
0x451D02: add     esp, 4
0x451D05: cmp     eax, 1
0x451D08: jnz     short loc_451D14
0x451D0A: push    eax
0x451D0B: mov     ecx, esi
0x451D0D: call    TESFile_NextRecordEx; NextForm?
0x451D12: jmp     short loc_451CD0
0x451D14: mov     ecx, esi
0x451D16: call    TESFile_GetRecordType
0x451D1B: cmp     al, 2
0x451D1D: jz      short loc_451D27
0x451D1F: test    al, al
0x451D21: jz      short loc_451D27
0x451D23: xor     al, al
0x451D25: jmp     short loc_451D29
0x451D27: mov     al, 1
0x451D29: mov     ecx, [esi+10h]
0x451D2C: cmp     ecx, edi
0x451D2E: mov     [esi+28Ch], al
0x451D34: jz      short loc_451D44
0x451D36: mov     eax, ds:0A853D0h
0x451D3B: mov     edx, [ecx]
0x451D3D: mov     edx, [edx+0Ch]
0x451D40: push    eax
0x451D41: push    edi
0x451D42: call    edx
0x451D44: xor     eax, eax
0x451D46: mov     [esi+25Ch], edi
0x451D4C: mov     [esi+260h], edi
0x451D52: mov     [esi+264h], edi
0x451D58: mov     [esi+23Ch], eax
0x451D5E: mov     [esi+240h], eax
0x451D64: mov     [esi+244h], eax
0x451D6A: mov     [esi+248h], eax
0x451D70: mov     ecx, esi
0x451D72: mov     [esi+24Ch], eax
0x451D78: call    TESFile_GetRecordType
0x451D7D: xor     eax, eax
0x451D7F: lea     esp, [ebp-0Ch]
0x451D82: pop     edi
0x451D83: pop     esi
0x451D84: mov     ecx, [ebp+var_4]
0x451D87: xor     ecx, ebp
0x451D89: call    @__security_check_cookie@4; __security_check_cookie(x)
0x451D8E: mov     esp, ebp
0x451D90: pop     ebp
0x451D91: retn
