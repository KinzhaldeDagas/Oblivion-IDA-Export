0x51FEA0: push    ebp
0x51FEA1: mov     ebp, esp
0x51FEA3: push    ecx
0x51FEA4: mov     eax, ds:0B30AACh
0x51FEA9: xor     eax, ebp
0x51FEAB: mov     [ebp+var_4], eax
0x51FEAE: push    ebx
0x51FEAF: mov     ebx, [ebp+a2]
0x51FEB2: push    esi
0x51FEB3: push    edi
0x51FEB4: mov     edi, ecx
0x51FEB6: mov     ecx, ebx
0x51FEB8: call    TESFile_GetRecordType
0x51FEBD: cmp     eax, 7
0x51FEC0: jz      short loc_51FEC9
0x51FEC2: xor     al, al
0x51FEC4: jmp     loc_51FFB7
0x51FEC9: push    edi
0x51FECA: mov     ecx, ebx
0x51FECC: call    TESFile_InitializeFormFromRecord
0x51FED1: mov     ecx, ebx
0x51FED3: call    TESFile_GetChunkType
0x51FED8: test    eax, eax
0x51FEDA: jz      loc_51FFB5
0x51FEE0: cmp     eax, 4C444F4Dh
0x51FEE5: jg      short loc_51FF3B
0x51FEE7: jz      short loc_51FF50
0x51FEE9: cmp     eax, 41544144h
0x51FEEE: jz      short loc_51FF2B
0x51FEF0: cmp     eax, 42444F4Dh
0x51FEF5: jz      short loc_51FF50
0x51FEF7: cmp     eax, 44494445h
0x51FEFC: jnz     loc_51FF9B
0x51FF02: mov     eax, [ebx+254h]
0x51FF08: call    __alloca?
0x51FF0D: mov     esi, esp
0x51FF0F: push    200h; a4
0x51FF14: push    esi; Dst
0x51FF15: mov     ecx, ebx; a1
0x51FF17: call    TESFile_GetChunkData
0x51FF1C: mov     eax, [edi]
0x51FF1E: mov     edx, [eax+0D8h]
0x51FF24: push    esi
0x51FF25: mov     ecx, edi
0x51FF27: call    edx
0x51FF29: jmp     short loc_51FF9B
0x51FF2B: push    1; a4
0x51FF2D: lea     eax, [edi+48h]
0x51FF30: push    eax; Dst
0x51FF31: push    ebx; a2
0x51FF32: mov     ecx, edi; this
0x51FF34: call    TESForm_LoadGenericComponents
0x51FF39: jmp     short loc_51FF9B
0x51FF3B: cmp     eax, 4C4C5546h
0x51FF40: jz      short loc_51FF86
0x51FF42: cmp     eax, 4E4F4349h
0x51FF47: jz      short loc_51FF6B
0x51FF49: cmp     eax, 54444F4Dh
0x51FF4E: jnz     short loc_51FF9B
0x51FF50: test    edi, edi
0x51FF52: jz      short loc_51FF60
0x51FF54: lea     eax, [edi+24h]
0x51FF57: push    ebx
0x51FF58: push    eax
0x51FF59: call    TESModel_Load
0x51FF5E: jmp     short loc_51FF98
0x51FF60: xor     eax, eax
0x51FF62: push    ebx
0x51FF63: push    eax
0x51FF64: call    TESModel_Load
0x51FF69: jmp     short loc_51FF98
0x51FF6B: test    edi, edi
0x51FF6D: jz      short loc_51FF7B
0x51FF6F: lea     eax, [edi+3Ch]
0x51FF72: push    ebx
0x51FF73: push    eax
0x51FF74: call    TESTexture_Load
0x51FF79: jmp     short loc_51FF98
0x51FF7B: xor     eax, eax
0x51FF7D: push    ebx
0x51FF7E: push    eax
0x51FF7F: call    TESTexture_Load
0x51FF84: jmp     short loc_51FF98
0x51FF86: test    edi, edi
0x51FF88: jz      short loc_51FF8F
0x51FF8A: lea     eax, [edi+18h]
0x51FF8D: jmp     short loc_51FF91
0x51FF8F: xor     eax, eax
0x51FF91: push    ebx
0x51FF92: push    eax
0x51FF93: call    TESFullname_Load
0x51FF98: add     esp, 8
0x51FF9B: mov     ecx, ebx
0x51FF9D: call    TESFile_GetNextChunk
0x51FFA2: test    al, al
0x51FFA4: jz      short loc_51FFB5
0x51FFA6: mov     ecx, ebx
0x51FFA8: call    TESFile_GetChunkType
0x51FFAD: test    eax, eax
0x51FFAF: jnz     loc_51FEE0
0x51FFB5: mov     al, 1
0x51FFB7: lea     esp, [ebp-10h]
0x51FFBA: pop     edi
0x51FFBB: pop     esi
0x51FFBC: pop     ebx
0x51FFBD: mov     ecx, [ebp+var_4]
0x51FFC0: xor     ecx, ebp
0x51FFC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51FFC7: mov     esp, ebp
0x51FFC9: pop     ebp
0x51FFCA: retn    4
