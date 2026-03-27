0x77D490: push    ebx
0x77D491: push    ebp
0x77D492: push    edi
0x77D493: mov     edi, ecx
0x77D495: xor     ebp, ebp
0x77D497: xor     ebx, ebx
0x77D499: cmp     [edi+26h], bp
0x77D49D: jbe     loc_77D534
0x77D4A3: push    esi
0x77D4A4: movzx   eax, word ptr [edi+26h]
0x77D4A8: cmp     ebx, eax
0x77D4AA: jnb     short loc_77D524
0x77D4AC: mov     ecx, [edi+20h]
0x77D4AF: mov     esi, [ecx+ebx*4]
0x77D4B2: cmp     esi, ebp
0x77D4B4: lea     eax, [ecx+ebx*4]
0x77D4B7: mov     [eax], ebp
0x77D4B9: jz      short loc_77D4C1
0x77D4BB: add     word ptr [edi+28h], 0FFFFh
0x77D4C1: movzx   eax, word ptr [edi+26h]
0x77D4C5: movzx   edx, ax
0x77D4C8: sub     edx, 1
0x77D4CB: cmp     ebx, edx
0x77D4CD: jnz     short loc_77D4D6
0x77D4CF: add     eax, 0FFFFFFFFh
0x77D4D2: mov     [edi+26h], ax
0x77D4D6: cmp     esi, ebp
0x77D4D8: jz      short loc_77D524
0x77D4DA: mov     eax, [esi+8]
0x77D4DD: cmp     eax, ebp
0x77D4DF: jz      short loc_77D4EC
0x77D4E1: mov     ecx, [eax]
0x77D4E3: mov     edx, [ecx+8]
0x77D4E6: push    eax
0x77D4E7: call    edx
0x77D4E9: mov     [esi+8], ebp
0x77D4EC: mov     ecx, esi
0x77D4EE: call    sub_77D390
0x77D4F3: mov     eax, [esi+3Ch]
0x77D4F6: cmp     eax, ebp
0x77D4F8: mov     ecx, [esi+40h]
0x77D4FB: jz      short loc_77D500
0x77D4FD: mov     [eax+40h], ecx
0x77D500: cmp     ecx, ebp
0x77D502: jz      short loc_77D507
0x77D504: mov     [ecx+3Ch], eax
0x77D507: mov     eax, ds:0B4289Ch
0x77D50C: cmp     eax, ebp
0x77D50E: jz      short loc_77D518
0x77D510: mov     [eax+40h], esi
0x77D513: mov     eax, ds:0B4289Ch
0x77D518: mov     [esi+3Ch], eax
0x77D51B: mov     [esi+40h], ebp
0x77D51E: mov     ds:0B4289Ch, esi
0x77D524: movzx   eax, word ptr [edi+26h]
0x77D528: add     ebx, 1
0x77D52B: cmp     ebx, eax
0x77D52D: jb      loc_77D4A4
0x77D533: pop     esi
0x77D534: mov     eax, [edi+10h]
0x77D537: cmp     eax, ebp
0x77D539: jz      short loc_77D543
0x77D53B: mov     ecx, [eax]
0x77D53D: mov     edx, [ecx+8]
0x77D540: push    eax
0x77D541: call    edx
0x77D543: mov     [edi+10h], ebp
0x77D546: mov     eax, [edi+20h]
0x77D549: push    eax
0x77D54A: mov     dword ptr [edi+1Ch], offset ??_7?$NiTArray@PAVNiVBBlock@@@@6B@; const NiTArray<NiVBBlock *>::`vftable'
0x77D551: call    FormHeapFree
0x77D556: add     esp, 4
0x77D559: pop     edi
0x77D55A: pop     ebp
0x77D55B: pop     ebx
0x77D55C: retn
