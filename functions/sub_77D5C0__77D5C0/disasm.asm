0x77D5C0: push    ebx
0x77D5C1: push    edi
0x77D5C2: xor     edi, edi
0x77D5C4: xor     ebx, ebx
0x77D5C6: cmp     ds:0B2AD48h, edi
0x77D5CC: jbe     short loc_77D644
0x77D5CE: push    esi
0x77D5CF: nop
0x77D5D0: push    44h ; 'D'; Size
0x77D5D2: call    FormHeapAlloc
0x77D5D7: mov     esi, eax
0x77D5D9: add     esp, 4
0x77D5DC: cmp     esi, edi
0x77D5DE: jz      short loc_77D605
0x77D5E0: mov     ecx, esi
0x77D5E2: mov     dword ptr [esi+2Ch], offset ??_7?$NiTArray@PAVNiVBChip@@@@6B@; const NiTArray<NiVBChip *>::`vftable'
0x77D5E9: mov     [esi+34h], di
0x77D5ED: mov     word ptr [esi+3Ah], 1
0x77D5F3: mov     [esi+36h], di
0x77D5F7: mov     [esi+38h], di
0x77D5FB: mov     [esi+30h], edi
0x77D5FE: call    sub_77D390
0x77D603: jmp     short loc_77D607
0x77D605: xor     esi, esi
0x77D607: mov     eax, [esi+3Ch]
0x77D60A: cmp     eax, edi
0x77D60C: mov     ecx, [esi+40h]
0x77D60F: jz      short loc_77D614
0x77D611: mov     [eax+40h], ecx
0x77D614: cmp     ecx, edi
0x77D616: jz      short loc_77D61B
0x77D618: mov     [ecx+3Ch], eax
0x77D61B: mov     eax, ds:0B4289Ch
0x77D620: cmp     eax, edi
0x77D622: jz      short loc_77D62C
0x77D624: mov     [eax+40h], esi
0x77D627: mov     eax, ds:0B4289Ch
0x77D62C: mov     [esi+3Ch], eax
0x77D62F: mov     [esi+40h], edi
0x77D632: add     ebx, 1
0x77D635: cmp     ebx, ds:0B2AD48h
0x77D63B: mov     ds:0B4289Ch, esi
0x77D641: jb      short loc_77D5D0
0x77D643: pop     esi
0x77D644: pop     edi
0x77D645: pop     ebx
0x77D646: retn
