0x484740: push    ebx
0x484741: push    esi
0x484742: mov     esi, [ecx]
0x484744: xor     ebx, ebx
0x484746: test    esi, esi
0x484748: jz      short loc_484775
0x48474A: push    edi
0x48474B: jmp     short loc_484750
0x48474D: align 10h
0x484750: mov     edi, [esi]
0x484752: test    edi, edi
0x484754: jz      short loc_484774
0x484756: mov     ecx, edi
0x484758: call    sub_41DEF0
0x48475D: test    al, al
0x48475F: jz      short loc_48476D
0x484761: mov     ecx, edi
0x484763: call    ExtraDataList_GetExtraCount
0x484768: movsx   eax, ax
0x48476B: add     ebx, eax
0x48476D: mov     esi, [esi+4]
0x484770: test    esi, esi
0x484772: jnz     short loc_484750
0x484774: pop     edi
0x484775: pop     esi
0x484776: mov     eax, ebx
0x484778: pop     ebx
0x484779: retn
