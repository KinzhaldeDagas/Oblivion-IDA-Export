0x4A7D60: push    ebp
0x4A7D61: mov     ebp, esp
0x4A7D63: sub     esp, 8
0x4A7D66: mov     eax, ds:0B30AACh
0x4A7D6B: xor     eax, ebp
0x4A7D6D: mov     [ebp+var_4], eax
0x4A7D70: push    ebx
0x4A7D71: push    esi
0x4A7D72: mov     esi, [ecx+108h]
0x4A7D78: xor     bl, bl
0x4A7D7A: test    esi, esi
0x4A7D7C: push    edi
0x4A7D7D: jz      short loc_4A7DF1
0x4A7D7F: mov     ecx, esi
0x4A7D81: call    TESFile_GetNextChunk
0x4A7D86: mov     ecx, esi
0x4A7D88: call    TESFile_GetChunkType
0x4A7D8D: cmp     eax, 41544144h
0x4A7D92: jnz     short loc_4A7DF1
0x4A7D94: mov     ebx, [ebp+arg_0]
0x4A7D97: mov     eax, [ebx+4]
0x4A7D9A: push    eax
0x4A7D9B: call    Setting_GetTypeFromName
0x4A7DA0: add     esp, 4
0x4A7DA3: sub     eax, 3
0x4A7DA6: jz      short loc_4A7DE3
0x4A7DA8: sub     eax, 2
0x4A7DAB: jz      short loc_4A7DD9
0x4A7DAD: sub     eax, 1
0x4A7DB0: jnz     short loc_4A7DED
0x4A7DB2: mov     eax, [esi+254h]
0x4A7DB8: call    __alloca?
0x4A7DBD: mov     edi, esp
0x4A7DBF: push    0; a4
0x4A7DC1: push    edi; Dst
0x4A7DC2: mov     ecx, esi; a1
0x4A7DC4: call    TESFile_GetChunkData
0x4A7DC9: push    edi
0x4A7DCA: mov     ecx, ebx
0x4A7DCC: mov     [ebp+var_5], al
0x4A7DCF: call    Setting_SetStringValue
0x4A7DD4: mov     al, [ebp+var_5]
0x4A7DD7: jmp     short loc_4A7DF3
0x4A7DD9: push    ebx
0x4A7DDA: mov     ecx, esi
0x4A7DDC: call    TESFile_GetChunkData4
0x4A7DE1: jmp     short loc_4A7DF3
0x4A7DE3: push    ebx
0x4A7DE4: mov     ecx, esi
0x4A7DE6: call    TESFile_GetChunkData4
0x4A7DEB: jmp     short loc_4A7DF3
0x4A7DED: xor     al, al
0x4A7DEF: jmp     short loc_4A7DF3
0x4A7DF1: mov     al, bl
0x4A7DF3: lea     esp, [ebp-14h]
0x4A7DF6: pop     edi
0x4A7DF7: pop     esi
0x4A7DF8: pop     ebx
0x4A7DF9: mov     ecx, [ebp+var_4]
0x4A7DFC: xor     ecx, ebp
0x4A7DFE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A7E03: mov     esp, ebp
0x4A7E05: pop     ebp
0x4A7E06: retn    4
