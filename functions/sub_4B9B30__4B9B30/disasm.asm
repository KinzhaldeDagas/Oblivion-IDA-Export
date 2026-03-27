0x4B9B30: push    ebp
0x4B9B31: mov     ebp, esp
0x4B9B33: push    ecx
0x4B9B34: mov     eax, ds:0B30AACh
0x4B9B39: xor     eax, ebp
0x4B9B3B: mov     [ebp+var_4], eax
0x4B9B3E: push    ebx
0x4B9B3F: push    esi
0x4B9B40: push    edi
0x4B9B41: mov     edi, [ebp+a1]
0x4B9B44: mov     ebx, ecx
0x4B9B46: mov     ecx, edi
0x4B9B48: call    TESFile_GetRecordType
0x4B9B4D: cmp     al, 1Ch
0x4B9B4F: jz      short loc_4B9B58
0x4B9B51: xor     al, al
0x4B9B53: jmp     loc_4B9C03
0x4B9B58: push    ebx
0x4B9B59: mov     ecx, edi
0x4B9B5B: call    TESFile_InitializeFormFromRecord
0x4B9B60: mov     ecx, edi
0x4B9B62: call    TESFile_GetChunkType
0x4B9B67: test    eax, eax
0x4B9B69: jz      loc_4B9C01
0x4B9B6F: nop
0x4B9B70: cmp     eax, 4C444F4Dh
0x4B9B75: jg      short loc_4B9BB0
0x4B9B77: jz      short loc_4B9BBE
0x4B9B79: cmp     eax, 42444F4Dh
0x4B9B7E: jz      short loc_4B9BBE
0x4B9B80: cmp     eax, 44494445h
0x4B9B85: jnz     short loc_4B9BE7
0x4B9B87: mov     eax, [edi+254h]
0x4B9B8D: call    __alloca?
0x4B9B92: mov     esi, esp
0x4B9B94: push    200h; a4
0x4B9B99: push    esi; Dst
0x4B9B9A: mov     ecx, edi; a1
0x4B9B9C: call    TESFile_GetChunkData
0x4B9BA1: mov     eax, [ebx]
0x4B9BA3: mov     edx, [eax+0D8h]
0x4B9BA9: push    esi
0x4B9BAA: mov     ecx, ebx
0x4B9BAC: call    edx
0x4B9BAE: jmp     short loc_4B9BE7
0x4B9BB0: cmp     eax, 4C544D44h
0x4B9BB5: jz      short loc_4B9BDF
0x4B9BB7: cmp     eax, 54444F4Dh
0x4B9BBC: jnz     short loc_4B9BE7
0x4B9BBE: test    ebx, ebx
0x4B9BC0: jz      short loc_4B9BD1
0x4B9BC2: lea     eax, [ebx+24h]
0x4B9BC5: push    edi
0x4B9BC6: push    eax
0x4B9BC7: call    TESModel_Load
0x4B9BCC: add     esp, 8
0x4B9BCF: jmp     short loc_4B9BE7
0x4B9BD1: xor     eax, eax
0x4B9BD3: push    edi
0x4B9BD4: push    eax
0x4B9BD5: call    TESModel_Load
0x4B9BDA: add     esp, 8
0x4B9BDD: jmp     short loc_4B9BE7
0x4B9BDF: push    edi; int
0x4B9BE0: mov     ecx, ebx; int
0x4B9BE2: call    sub_4B3460
0x4B9BE7: mov     ecx, edi
0x4B9BE9: call    TESFile_GetNextChunk
0x4B9BEE: test    al, al
0x4B9BF0: jz      short loc_4B9C01
0x4B9BF2: mov     ecx, edi
0x4B9BF4: call    TESFile_GetChunkType
0x4B9BF9: test    eax, eax
0x4B9BFB: jnz     loc_4B9B70
0x4B9C01: mov     al, 1
0x4B9C03: lea     esp, [ebp-10h]
0x4B9C06: pop     edi
0x4B9C07: pop     esi
0x4B9C08: pop     ebx
0x4B9C09: mov     ecx, [ebp+var_4]
0x4B9C0C: xor     ecx, ebp
0x4B9C0E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B9C13: mov     esp, ebp
0x4B9C15: pop     ebp
0x4B9C16: retn    4
