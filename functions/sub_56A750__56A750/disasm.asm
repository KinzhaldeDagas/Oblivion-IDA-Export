0x56A750: push    esi
0x56A751: mov     esi, ecx
0x56A753: test    esi, esi
0x56A755: jz      short loc_56A79E
0x56A757: push    edi
0x56A758: mov     ecx, esi
0x56A75A: call    BSSimpleList_IsEmpty
0x56A75F: test    al, al
0x56A761: jnz     short loc_56A79D
0x56A763: mov     edi, [esi]
0x56A765: test    edi, edi
0x56A767: jz      short loc_56A779
0x56A769: mov     ecx, edi; void *
0x56A76B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x56A770: push    edi
0x56A771: call    FormHeapFree
0x56A776: add     esp, 4
0x56A779: mov     eax, [esi+4]
0x56A77C: test    eax, eax
0x56A77E: jz      short loc_56A795
0x56A780: mov     ecx, [eax+4]
0x56A783: mov     [esi+4], ecx
0x56A786: mov     edx, [eax]
0x56A788: push    eax
0x56A789: mov     [esi], edx
0x56A78B: call    FormHeapFree
0x56A790: add     esp, 4
0x56A793: jmp     short loc_56A758
0x56A795: mov     dword ptr [esi], 0
0x56A79B: jmp     short loc_56A758
0x56A79D: pop     edi
0x56A79E: pop     esi
0x56A79F: retn
