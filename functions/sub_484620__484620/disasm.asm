0x484620: push    ebx
0x484621: push    esi
0x484622: mov     esi, [ecx]
0x484624: xor     ebx, ebx
0x484626: test    esi, esi
0x484628: jz      short loc_484657
0x48462A: push    edi
0x48462B: jmp     short loc_484630
0x48462D: align 10h
0x484630: mov     edi, [esi]
0x484632: test    edi, edi
0x484634: jz      short loc_484656
0x484636: push    0
0x484638: mov     ecx, edi
0x48463A: call    ExtraDataList_IsExtraDefaultForContainer
0x48463F: test    al, al
0x484641: jz      short loc_48464F
0x484643: mov     ecx, edi
0x484645: call    ExtraDataList_GetExtraCount
0x48464A: movsx   eax, ax
0x48464D: add     ebx, eax
0x48464F: mov     esi, [esi+4]
0x484652: test    esi, esi
0x484654: jnz     short loc_484630
0x484656: pop     edi
0x484657: pop     esi
0x484658: mov     eax, ebx
0x48465A: pop     ebx
0x48465B: retn
