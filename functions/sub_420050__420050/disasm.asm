0x420050: push    edi
0x420051: push    21h ; '!'; a2
0x420053: call    BaseExtraList_GetExtraData
0x420058: mov     edi, eax
0x42005A: test    edi, edi
0x42005C: jz      short loc_4200B9
0x42005E: mov     ecx, [edi+0Ch]
0x420061: mov     edx, ecx
0x420063: test    edx, edx
0x420065: jz      short loc_4200B9
0x420067: push    ebx
0x420068: push    ebp
0x420069: push    esi
0x42006A: lea     ebx, [ebx+0]
0x420070: mov     esi, [edx]
0x420072: test    esi, esi
0x420074: jz      short loc_4200B6
0x420076: mov     eax, [esi]
0x420078: xor     bl, bl
0x42007A: test    eax, eax
0x42007C: jz      short loc_42008C
0x42007E: movsx   ebp, byte ptr [eax+2Fh]
0x420082: add     ebp, [eax+30h]
0x420085: cmp     ebp, 15h
0x420088: jl      short loc_42008C
0x42008A: mov     bl, 1
0x42008C: mov     al, [esp+10h+arg_0]
0x420090: cmp     [esi+4], al
0x420093: jnz     short loc_42009E
0x420095: test    bl, bl
0x420097: jnz     short loc_42009E
0x420099: mov     edx, [edx+4]
0x42009C: jmp     short loc_4200B2
0x42009E: push    esi
0x42009F: call    BSSimpleList_Remove
0x4200A4: push    esi
0x4200A5: call    FormHeapFree
0x4200AA: mov     ecx, [edi+0Ch]
0x4200AD: add     esp, 4
0x4200B0: mov     edx, ecx
0x4200B2: test    edx, edx
0x4200B4: jnz     short loc_420070
0x4200B6: pop     esi
0x4200B7: pop     ebp
0x4200B8: pop     ebx
0x4200B9: pop     edi
0x4200BA: retn    4
