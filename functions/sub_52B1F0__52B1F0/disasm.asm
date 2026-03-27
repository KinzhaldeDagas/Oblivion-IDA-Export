0x52B1F0: push    ebp
0x52B1F1: mov     ebp, esp
0x52B1F3: sub     esp, 8
0x52B1F6: mov     eax, ds:0B30AACh
0x52B1FB: xor     eax, ebp
0x52B1FD: mov     [ebp+var_4], eax
0x52B200: push    ebx
0x52B201: push    esi
0x52B202: mov     esi, [ebp+a1]
0x52B205: push    edi
0x52B206: xor     edi, edi
0x52B208: cmp     esi, edi
0x52B20A: mov     ebx, ecx
0x52B20C: mov     [ebp+var_8], ebx
0x52B20F: jnz     short loc_52B218
0x52B211: xor     al, al
0x52B213: jmp     loc_52B2E4
0x52B218: mov     ecx, esi
0x52B21A: call    TESFile_GetChunkType
0x52B21F: cmp     eax, 52484353h
0x52B224: jg      loc_52B2C8
0x52B22A: jz      loc_52B2B2
0x52B230: cmp     eax, 41444353h
0x52B235: jz      short loc_52B27E
0x52B237: cmp     eax, 4F524353h
0x52B23C: jnz     loc_52B2E2
0x52B242: push    10h; Size
0x52B244: call    FormHeapAlloc
0x52B249: add     esp, 4
0x52B24C: cmp     eax, edi
0x52B24E: jz      short loc_52B262
0x52B250: mov     [eax], edi
0x52B252: mov     [eax+4], di
0x52B256: mov     [eax+6], di
0x52B25A: mov     [eax+8], edi
0x52B25D: mov     [eax+0Ch], edi
0x52B260: mov     edi, eax
0x52B262: lea     eax, [ebp+var_8]
0x52B265: push    eax
0x52B266: mov     ecx, esi
0x52B268: call    TESFile_GetChunkData4
0x52B26D: mov     ecx, [ebp+var_8]
0x52B270: mov     [edi+8], ecx
0x52B273: push    edi
0x52B274: lea     ecx, [ebx+4Ch]
0x52B277: call    BSSimpleList_PushBack
0x52B27C: jmp     short loc_52B2E2
0x52B27E: mov     edi, [esi+254h]
0x52B284: mov     eax, edi
0x52B286: call    __alloca?
0x52B28B: mov     ebx, esp
0x52B28D: push    edi
0x52B28E: push    0
0x52B290: push    ebx
0x52B291: call    __memset
0x52B296: add     esp, 0Ch
0x52B299: push    0; a4
0x52B29B: push    ebx; Dst
0x52B29C: mov     ecx, esi; a1
0x52B29E: call    TESFile_GetChunkData
0x52B2A3: mov     ecx, [ebp+var_8]
0x52B2A6: push    ebx; Src
0x52B2A7: push    edi; int
0x52B2A8: add     ecx, 0Ch
0x52B2AB: call    sub_4F9DF0
0x52B2B0: jmp     short loc_52B2E2
0x52B2B2: push    0; a4
0x52B2B4: lea     edi, [ebx+24h]
0x52B2B7: push    edi; Dst
0x52B2B8: mov     ecx, esi; a1
0x52B2BA: call    TESFile_GetChunkData
0x52B2BF: mov     ecx, edi; void *
0x52B2C1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x52B2C6: jmp     short loc_52B2E2
0x52B2C8: cmp     eax, 54445351h
0x52B2CD: jnz     short loc_52B2E2
0x52B2CF: mov     edx, [esi+25Ch]
0x52B2D5: push    1; a4
0x52B2D7: push    ebx; Dst
0x52B2D8: mov     ecx, esi; a1
0x52B2DA: mov     [ebx+5Ch], edx
0x52B2DD: call    TESFile_GetChunkData
0x52B2E2: mov     al, 1
0x52B2E4: lea     esp, [ebp-14h]
0x52B2E7: pop     edi
0x52B2E8: pop     esi
0x52B2E9: pop     ebx
0x52B2EA: mov     ecx, [ebp+var_4]
0x52B2ED: xor     ecx, ebp
0x52B2EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52B2F4: mov     esp, ebp
0x52B2F6: pop     ebp
0x52B2F7: retn    4
