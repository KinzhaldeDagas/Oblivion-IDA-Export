0x42C970: push    ecx
0x42C971: mov     eax, ArchiveList
0x42C976: push    ebx
0x42C977: xor     ebx, ebx
0x42C979: cmp     eax, ebx
0x42C97B: jz      loc_42CA51
0x42C981: push    edi
0x42C982: mov     edi, eax
0x42C984: cmp     edi, ebx
0x42C986: jz      loc_42CA50
0x42C98C: push    esi
0x42C98D: lea     ecx, [ecx+0]
0x42C990: mov     eax, iRetainDirectoryStringTable_Archive
0x42C995: cmp     eax, 1
0x42C998: mov     esi, [edi]
0x42C99A: jnz     short loc_42C9A9
0x42C99C: mov     eax, [esi+160h]
0x42C9A2: shr     eax, 3
0x42C9A5: and     al, 1
0x42C9A7: jmp     short loc_42C9AE
0x42C9A9: cmp     eax, ebx
0x42C9AB: setnz   al
0x42C9AE: cmp     al, bl
0x42C9B0: jnz     short loc_42C9F4
0x42C9B2: test    byte ptr [esi+194h], 4
0x42C9B9: jnz     short loc_42C9ED
0x42C9BB: mov     eax, [esi+198h]
0x42C9C1: cmp     eax, ebx
0x42C9C3: jz      short loc_42C9CE
0x42C9C5: push    eax
0x42C9C6: call    FormHeapFree
0x42C9CB: add     esp, 4
0x42C9CE: mov     eax, [esi+19Ch]
0x42C9D4: cmp     eax, ebx
0x42C9D6: jz      short loc_42C9E1
0x42C9D8: push    eax
0x42C9D9: call    FormHeapFree
0x42C9DE: add     esp, 4
0x42C9E1: mov     [esi+198h], ebx
0x42C9E7: mov     [esi+19Ch], ebx
0x42C9ED: and     byte ptr [esi+194h], 0EFh
0x42C9F4: mov     eax, iRetainFilenameStringTable_Archive
0x42C9F9: cmp     eax, 1
0x42C9FC: jnz     short loc_42CA0B
0x42C9FE: mov     eax, [esi+160h]
0x42CA04: shr     eax, 4
0x42CA07: and     al, 1
0x42CA09: jmp     short loc_42CA10
0x42CA0B: cmp     eax, ebx
0x42CA0D: setnz   al
0x42CA10: cmp     al, bl
0x42CA12: jnz     short loc_42CA44
0x42CA14: mov     eax, iRetainFilenameOffsetTable_Archive
0x42CA19: cmp     eax, 1
0x42CA1C: jnz     short loc_42CA2F
0x42CA1E: mov     eax, [esi+160h]
0x42CA24: shr     eax, 5
0x42CA27: and     al, 1
0x42CA29: mov     byte ptr [esp+10h+var_4], al
0x42CA2D: jmp     short loc_42CA38
0x42CA2F: cmp     eax, ebx
0x42CA31: setnz   cl
0x42CA34: mov     byte ptr [esp+10h+var_4], cl
0x42CA38: mov     edx, [esp+10h+var_4]
0x42CA3C: push    edx
0x42CA3D: mov     ecx, esi
0x42CA3F: call    Archive_DiscardRetainedFilenames
0x42CA44: mov     edi, [edi+4]
0x42CA47: cmp     edi, ebx
0x42CA49: jnz     loc_42C990
0x42CA4F: pop     esi
0x42CA50: pop     edi
0x42CA51: pop     ebx
0x42CA52: pop     ecx
0x42CA53: retn
