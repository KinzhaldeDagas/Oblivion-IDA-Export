0x4845D0: push    ebx
0x4845D1: push    edi
0x4845D2: mov     edi, [ecx]
0x4845D4: xor     ebx, ebx
0x4845D6: test    edi, edi
0x4845D8: jz      short loc_484614
0x4845DA: push    esi
0x4845DB: jmp     short loc_4845E0
0x4845DD: align 10h
0x4845E0: mov     esi, [edi]
0x4845E2: test    esi, esi
0x4845E4: jz      short loc_484613
0x4845E6: push    0
0x4845E8: mov     ecx, esi
0x4845EA: call    ExtraDataList_IsExtraDefaultForContainer
0x4845EF: test    al, al
0x4845F1: jnz     short loc_48460C
0x4845F3: push    0
0x4845F5: mov     ecx, esi
0x4845F7: call    ExtraDataList_HasWorn
0x4845FC: test    al, al
0x4845FE: jnz     short loc_48460C
0x484600: mov     ecx, esi
0x484602: call    ExtraDataList_GetExtraCount
0x484607: movsx   eax, ax
0x48460A: add     ebx, eax
0x48460C: mov     edi, [edi+4]
0x48460F: test    edi, edi
0x484611: jnz     short loc_4845E0
0x484613: pop     esi
0x484614: pop     edi
0x484615: mov     eax, ebx
0x484617: pop     ebx
0x484618: retn
