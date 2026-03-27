0x4E9CA0: push    ebp
0x4E9CA1: mov     ebp, esp
0x4E9CA3: push    0FFFFFFFFh
0x4E9CA5: push    offset SEH_4E9CA0
0x4E9CAA: mov     eax, large fs:0
0x4E9CB0: push    eax
0x4E9CB1: sub     esp, 24h
0x4E9CB4: mov     eax, ds:0B30AACh
0x4E9CB9: xor     eax, ebp
0x4E9CBB: mov     [ebp+var_10], eax
0x4E9CBE: push    ebx
0x4E9CBF: push    esi
0x4E9CC0: push    edi
0x4E9CC1: push    eax
0x4E9CC2: lea     eax, [ebp+var_C]
0x4E9CC5: mov     large fs:0, eax
0x4E9CCB: mov     edi, ecx
0x4E9CCD: mov     [ebp+var_18], edi
0x4E9CD0: mov     ebx, [ebp+a1]
0x4E9CD3: mov     ecx, ebx
0x4E9CD5: call    TESFile_GetRecordType
0x4E9CDA: cmp     al, 38h ; '8'
0x4E9CDC: jz      short loc_4E9CE5
0x4E9CDE: xor     al, al
0x4E9CE0: jmp     loc_4E9EFC
0x4E9CE5: push    edi
0x4E9CE6: mov     ecx, ebx
0x4E9CE8: call    TESFile_InitializeFormFromRecord
0x4E9CED: push    0; a2
0x4E9CEF: mov     ecx, edi; this
0x4E9CF1: call    TESForm_SetIsLinked
0x4E9CF6: mov     ecx, ebx
0x4E9CF8: call    TESFile_GetChunkType
0x4E9CFD: test    eax, eax
0x4E9CFF: jz      loc_4E9EFA
0x4E9D05: cmp     eax, 44494445h
0x4E9D0A: jz      loc_4E9EB9
0x4E9D10: cmp     eax, 50524750h
0x4E9D15: jnz     loc_4E9EE0
0x4E9D1B: mov     eax, [ebx+254h]
0x4E9D21: shr     eax, 4
0x4E9D24: xor     ecx, ecx
0x4E9D26: mov     esi, eax
0x4E9D28: mov     edx, 10h
0x4E9D2D: mul     edx
0x4E9D2F: seto    cl
0x4E9D32: mov     [ebp+var_2C], esi
0x4E9D35: neg     ecx
0x4E9D37: or      ecx, eax
0x4E9D39: push    ecx; Size
0x4E9D3A: call    FormHeapAlloc
0x4E9D3F: add     esp, 4
0x4E9D42: mov     ecx, esi
0x4E9D44: shl     ecx, 4
0x4E9D47: push    ecx; a4
0x4E9D48: push    eax; Dst
0x4E9D49: mov     ecx, ebx; a1
0x4E9D4B: mov     [ebp+var_20], eax
0x4E9D4E: call    TESFile_GetChunkData
0x4E9D53: xor     ecx, ecx
0x4E9D55: mov     eax, esi
0x4E9D57: mov     edx, 4
0x4E9D5C: mul     edx
0x4E9D5E: seto    cl
0x4E9D61: neg     ecx
0x4E9D63: or      ecx, eax
0x4E9D65: push    ecx; Size
0x4E9D66: call    FormHeapAlloc
0x4E9D6B: xor     edi, edi
0x4E9D6D: add     esp, 4
0x4E9D70: test    esi, esi
0x4E9D72: mov     [ebp+var_1C], eax
0x4E9D75: mov     [ebp+var_14], edi
0x4E9D78: jbe     loc_4E9E9F
0x4E9D7E: mov     ebx, [ebp+var_20]
0x4E9D81: push    28h ; '('; Size
0x4E9D83: call    FormHeapAlloc
0x4E9D88: add     esp, 4
0x4E9D8B: mov     [ebp+var_28], eax
0x4E9D8E: xor     esi, esi
0x4E9D90: cmp     eax, esi
0x4E9D92: mov     [ebp+var_4], esi
0x4E9D95: jz      short loc_4E9DA0
0x4E9D97: mov     ecx, eax
0x4E9D99: call    sub_4BEF70
0x4E9D9E: mov     esi, eax
0x4E9DA0: push    ebx
0x4E9DA1: mov     ecx, esi
0x4E9DA3: mov     [ebp+var_4], 0FFFFFFFFh
0x4E9DAA: call    sub_4BEF50
0x4E9DAF: mov     ecx, [ebp+var_18]
0x4E9DB2: push    esi
0x4E9DB3: call    sub_4E9060
0x4E9DB8: mov     eax, [ebp+var_1C]
0x4E9DBB: mov     [eax+edi*4], esi
0x4E9DBE: movzx   ecx, byte ptr [ebx+0Ch]
0x4E9DC2: add     [ebp+var_14], ecx
0x4E9DC5: add     edi, 1
0x4E9DC8: add     ebx, 10h
0x4E9DCB: cmp     edi, [ebp+var_2C]
0x4E9DCE: jb      short loc_4E9D81
0x4E9DD0: mov     esi, [ebp+var_14]
0x4E9DD3: test    esi, esi
0x4E9DD5: jz      loc_4E9E9C
0x4E9DDB: mov     ecx, [ebp+a1]
0x4E9DDE: call    TESFile_GetNextChunk
0x4E9DE3: test    al, al
0x4E9DE5: jz      loc_4E9E9C
0x4E9DEB: mov     ecx, [ebp+a1]
0x4E9DEE: call    TESFile_GetChunkType
0x4E9DF3: cmp     eax, 52524750h
0x4E9DF8: jnz     loc_4E9E9C
0x4E9DFE: xor     ecx, ecx
0x4E9E00: mov     eax, esi
0x4E9E02: mov     edx, 0Ch
0x4E9E07: mul     edx
0x4E9E09: seto    cl
0x4E9E0C: neg     ecx
0x4E9E0E: or      ecx, eax
0x4E9E10: push    ecx; Size
0x4E9E11: call    FormHeapAlloc
0x4E9E16: mov     ecx, [ebp+a1]; a1
0x4E9E19: mov     edi, eax
0x4E9E1B: lea     eax, [esi+esi*2]
0x4E9E1E: add     eax, eax
0x4E9E20: add     esp, 4
0x4E9E23: add     eax, eax
0x4E9E25: push    eax; a4
0x4E9E26: push    edi; Dst
0x4E9E27: mov     [ebp+var_28], edi
0x4E9E2A: call    TESFile_GetChunkData
0x4E9E2F: mov     ebx, [ebp+var_20]
0x4E9E32: xor     ecx, ecx
0x4E9E34: xor     eax, eax
0x4E9E36: mov     [ebp+var_14], ecx
0x4E9E39: mov     [ebp+var_24], eax
0x4E9E3C: add     ebx, 0Ch
0x4E9E3F: mov     edx, [ebp+var_1C]
0x4E9E42: mov     edx, [edx+eax*4]
0x4E9E45: xor     esi, esi
0x4E9E47: cmp     byte ptr [ebx], 0
0x4E9E4A: mov     [ebp+var_30], edx
0x4E9E4D: jbe     short loc_4E9E85
0x4E9E4F: lea     eax, [ecx+ecx*2]
0x4E9E52: lea     edi, [edi+eax*4]
0x4E9E55: mov     ecx, [ebp+var_18]
0x4E9E58: push    edi
0x4E9E59: call    sub_4E8D00
0x4E9E5E: test    eax, eax
0x4E9E60: jz      short loc_4E9E6B
0x4E9E62: mov     ecx, [ebp+var_30]
0x4E9E65: push    eax
0x4E9E66: call    sub_4BEFE0
0x4E9E6B: movzx   ecx, byte ptr [ebx]
0x4E9E6E: add     [ebp+var_14], 1
0x4E9E72: add     esi, 1
0x4E9E75: add     edi, 0Ch
0x4E9E78: cmp     esi, ecx
0x4E9E7A: jb      short loc_4E9E55
0x4E9E7C: mov     eax, [ebp+var_24]
0x4E9E7F: mov     ecx, [ebp+var_14]
0x4E9E82: mov     edi, [ebp+var_28]
0x4E9E85: add     eax, 1
0x4E9E88: add     ebx, 10h
0x4E9E8B: cmp     eax, [ebp+var_2C]
0x4E9E8E: mov     [ebp+var_24], eax
0x4E9E91: jb      short loc_4E9E3F
0x4E9E93: push    edi
0x4E9E94: call    FormHeapFree
0x4E9E99: add     esp, 4
0x4E9E9C: mov     ebx, [ebp+a1]
0x4E9E9F: mov     edx, [ebp+var_20]
0x4E9EA2: push    edx
0x4E9EA3: call    FormHeapFree
0x4E9EA8: mov     eax, [ebp+var_1C]
0x4E9EAB: push    eax
0x4E9EAC: call    FormHeapFree
0x4E9EB1: mov     edi, [ebp+var_18]
0x4E9EB4: add     esp, 8
0x4E9EB7: jmp     short loc_4E9EE0
0x4E9EB9: mov     eax, [ebx+254h]
0x4E9EBF: call    __alloca?
0x4E9EC4: mov     esi, esp
0x4E9EC6: push    200h; a4
0x4E9ECB: push    esi; Dst
0x4E9ECC: mov     ecx, ebx; a1
0x4E9ECE: call    TESFile_GetChunkData
0x4E9ED3: mov     edx, [edi]
0x4E9ED5: mov     eax, [edx+0D8h]
0x4E9EDB: push    esi
0x4E9EDC: mov     ecx, edi
0x4E9EDE: call    eax
0x4E9EE0: mov     ecx, ebx
0x4E9EE2: call    TESFile_GetNextChunk
0x4E9EE7: test    al, al
0x4E9EE9: jz      short loc_4E9EFA
0x4E9EEB: mov     ecx, ebx
0x4E9EED: call    TESFile_GetChunkType
0x4E9EF2: test    eax, eax
0x4E9EF4: jnz     loc_4E9D05
0x4E9EFA: mov     al, 1
0x4E9EFC: lea     esp, [ebp-40h]
0x4E9EFF: mov     ecx, [ebp+var_C]
0x4E9F02: mov     large fs:0, ecx
0x4E9F09: pop     ecx
0x4E9F0A: pop     edi
0x4E9F0B: pop     esi
0x4E9F0C: pop     ebx
0x4E9F0D: mov     ecx, [ebp+var_10]
0x4E9F10: xor     ecx, ebp
0x4E9F12: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4E9F17: mov     esp, ebp
0x4E9F19: pop     ebp
0x4E9F1A: retn    4
