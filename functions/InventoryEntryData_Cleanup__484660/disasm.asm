0x484660: push    ebx
0x484661: push    ebp
0x484662: mov     ebp, ecx
0x484664: push    edi
0x484665: mov     edi, [ebp+0]
0x484668: xor     ebx, ebx
0x48466A: test    edi, edi
0x48466C: jz      short loc_4846CA
0x48466E: push    esi
0x48466F: nop
0x484670: mov     esi, [edi]
0x484672: test    esi, esi
0x484674: jz      short loc_4846C9
0x484676: push    0
0x484678: mov     ecx, esi
0x48467A: call    ExtraDataList_IsExtraDefaultForContainer
0x48467F: test    al, al
0x484681: jnz     short loc_484686
0x484683: add     ebx, 1
0x484686: mov     edi, [edi+4]
0x484689: mov     ecx, esi
0x48468B: call    BaseExtraList_Count
0x484690: cmp     eax, 1
0x484693: jnz     short loc_4846C5
0x484695: mov     ecx, esi
0x484697: call    ExtraDataList_GetExtraCount
0x48469C: cmp     ax, 1
0x4846A0: jle     short loc_4846C5
0x4846A2: mov     ecx, esi
0x4846A4: call    sub_41F620
0x4846A9: mov     ecx, [ebp+0]
0x4846AC: push    esi
0x4846AD: call    BSSimpleList_Remove
0x4846B2: test    esi, esi
0x4846B4: jz      short loc_4846C0
0x4846B6: mov     eax, [esi]
0x4846B8: mov     edx, [eax]
0x4846BA: push    1
0x4846BC: mov     ecx, esi
0x4846BE: call    edx
0x4846C0: mov     edi, [ebp+0]
0x4846C3: xor     ebx, ebx
0x4846C5: test    edi, edi
0x4846C7: jnz     short loc_484670
0x4846C9: pop     esi
0x4846CA: pop     edi
0x4846CB: pop     ebp
0x4846CC: mov     eax, ebx
0x4846CE: pop     ebx
0x4846CF: retn
