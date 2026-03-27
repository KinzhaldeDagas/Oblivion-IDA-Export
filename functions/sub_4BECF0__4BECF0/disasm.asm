0x4BECF0: push    ebp
0x4BECF1: mov     ebp, esp
0x4BECF3: sub     esp, 8
0x4BECF6: mov     eax, ds:0B30AACh
0x4BECFB: xor     eax, ebp
0x4BECFD: mov     [ebp+var_4], eax
0x4BED00: push    ebx
0x4BED01: push    esi
0x4BED02: push    edi
0x4BED03: mov     edi, [ebp+a1]
0x4BED06: mov     esi, ecx
0x4BED08: mov     ecx, edi
0x4BED0A: call    TESFile_GetRecordType
0x4BED0F: cmp     al, 2Eh ; '.'
0x4BED11: jz      short loc_4BED1A
0x4BED13: xor     al, al
0x4BED15: jmp     loc_4BEE4B
0x4BED1A: push    esi
0x4BED1B: mov     ecx, edi
0x4BED1D: call    TESFile_InitializeFormFromRecord
0x4BED22: push    0; a2
0x4BED24: mov     ecx, esi; this
0x4BED26: call    TESForm_SetIsLinked
0x4BED2B: mov     ecx, edi
0x4BED2D: call    TESFile_GetChunkType
0x4BED32: test    eax, eax
0x4BED34: jz      loc_4BEE49
0x4BED3A: lea     ebx, [ebx+0]
0x4BED40: cmp     eax, 4D414E50h
0x4BED45: jg      short loc_4BEDC3
0x4BED47: cmp     eax, 4D414E46h
0x4BED4C: jge     short loc_4BED9E
0x4BED4E: cmp     eax, 44494445h
0x4BED53: jz      short loc_4BED72
0x4BED55: cmp     eax, 4C444F4Dh
0x4BED5A: jnz     loc_4BEE2F
0x4BED60: lea     eax, [esi+18h]
0x4BED63: push    edi
0x4BED64: push    eax
0x4BED65: call    TESModel_Load
0x4BED6A: add     esp, 8
0x4BED6D: jmp     loc_4BEE2F
0x4BED72: mov     eax, [edi+254h]
0x4BED78: call    __alloca?
0x4BED7D: mov     ebx, esp
0x4BED7F: push    200h; a4
0x4BED84: push    ebx; Dst
0x4BED85: mov     ecx, edi; a1
0x4BED87: call    TESFile_GetChunkData
0x4BED8C: mov     edx, [esi]
0x4BED8E: mov     eax, [edx+0D8h]
0x4BED94: push    ebx
0x4BED95: mov     ecx, esi
0x4BED97: call    eax
0x4BED99: jmp     loc_4BEE2F
0x4BED9E: lea     ecx, [eax-4D414E46h]
0x4BEDA4: cmp     ecx, 2
0x4BEDA7: jge     loc_4BEE2F
0x4BEDAD: lea     edx, [eax+eax*2+183C153Ch]
0x4BEDB4: lea     eax, [esi+edx*4]
0x4BEDB7: push    edi
0x4BEDB8: push    eax
0x4BEDB9: call    TESTexture_Load
0x4BEDBE: add     esp, 8
0x4BEDC1: jmp     short loc_4BEE2F
0x4BEDC3: cmp     eax, 4D414E54h
0x4BEDC8: jz      short loc_4BEE22
0x4BEDCA: cmp     eax, 54534C57h
0x4BEDCF: jnz     short loc_4BEE2F
0x4BEDD1: mov     ecx, ds:0B34D88h
0x4BEDD7: mov     bl, ds:0B06B18h
0x4BEDDD: push    esi
0x4BEDDE: lea     edx, [esi+30h]
0x4BEDE1: push    edi
0x4BEDE2: push    edx
0x4BEDE3: mov     [ebp+var_8], ecx
0x4BEDE6: mov     byte ptr ds:0B06B18h, 1
0x4BEDED: call    sub_4EEDD0
0x4BEDF2: mov     eax, [ebp+var_8]
0x4BEDF5: add     esp, 0Ch
0x4BEDF8: cmp     ds:0B34D88h, eax
0x4BEDFE: mov     ds:0B06B18h, bl
0x4BEE04: jle     short loc_4BEE2F
0x4BEE06: mov     edx, [esi]
0x4BEE08: mov     eax, [edx+0D4h]
0x4BEE0E: mov     ecx, esi
0x4BEE10: call    eax
0x4BEE12: push    eax; ArgList
0x4BEE13: push    offset aWarningsWereEn; "Warnings were encountered while loading"...
0x4BEE18: call    PrintError
0x4BEE1D: add     esp, 8
0x4BEE20: jmp     short loc_4BEE2F
0x4BEE22: push    6; a4
0x4BEE24: lea     ecx, [esi+50h]
0x4BEE27: push    ecx; Dst
0x4BEE28: mov     ecx, edi; a1
0x4BEE2A: call    TESFile_GetChunkData
0x4BEE2F: mov     ecx, edi
0x4BEE31: call    TESFile_GetNextChunk
0x4BEE36: test    al, al
0x4BEE38: jz      short loc_4BEE49
0x4BEE3A: mov     ecx, edi
0x4BEE3C: call    TESFile_GetChunkType
0x4BEE41: test    eax, eax
0x4BEE43: jnz     loc_4BED40
0x4BEE49: mov     al, 1
0x4BEE4B: lea     esp, [ebp-14h]
0x4BEE4E: pop     edi
0x4BEE4F: pop     esi
0x4BEE50: pop     ebx
0x4BEE51: mov     ecx, [ebp+var_4]
0x4BEE54: xor     ecx, ebp
0x4BEE56: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BEE5B: mov     esp, ebp
0x4BEE5D: pop     ebp
0x4BEE5E: retn    4
