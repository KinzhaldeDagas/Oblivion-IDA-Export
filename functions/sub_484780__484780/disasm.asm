0x484780: push    ebx
0x484781: push    esi
0x484782: mov     esi, [ecx]
0x484784: xor     ebx, ebx
0x484786: test    esi, esi
0x484788: jz      short loc_4847B5
0x48478A: push    edi
0x48478B: jmp     short loc_484790
0x48478D: align 10h
0x484790: mov     edi, [esi]
0x484792: test    edi, edi
0x484794: jz      short loc_4847B4
0x484796: mov     ecx, edi
0x484798: call    ExtraDataList_IsExtraDefaultForContainer_all
0x48479D: test    al, al
0x48479F: jz      short loc_4847AD
0x4847A1: mov     ecx, edi
0x4847A3: call    ExtraDataList_GetExtraCount
0x4847A8: movsx   eax, ax
0x4847AB: add     ebx, eax
0x4847AD: mov     esi, [esi+4]
0x4847B0: test    esi, esi
0x4847B2: jnz     short loc_484790
0x4847B4: pop     edi
0x4847B5: pop     esi
0x4847B6: mov     eax, ebx
0x4847B8: pop     ebx
0x4847B9: retn
