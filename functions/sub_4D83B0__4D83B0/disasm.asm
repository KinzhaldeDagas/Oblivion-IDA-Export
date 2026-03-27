0x4D83B0: push    esi
0x4D83B1: mov     esi, ecx
0x4D83B3: mov     eax, [esi]
0x4D83B5: mov     edx, [eax+188h]
0x4D83BB: push    edi
0x4D83BC: call    edx
0x4D83BE: test    al, al
0x4D83C0: mov     edi, [esp+8+arg_0]
0x4D83C4: jz      short loc_4D8404
0x4D83C6: test    edi, edi
0x4D83C8: mov     eax, [esi]
0x4D83CA: push    2000000h
0x4D83CF: mov     ecx, esi
0x4D83D1: jz      short loc_4D83D8
0x4D83D3: mov     edx, [eax+48h]
0x4D83D6: jmp     short loc_4D83DB
0x4D83D8: mov     edx, [eax+44h]
0x4D83DB: call    edx
0x4D83DD: mov     ecx, [esi+58h]
0x4D83E0: test    ecx, ecx
0x4D83E2: jz      short loc_4D8404
0x4D83E4: mov     eax, [ecx]
0x4D83E6: mov     edx, [eax+8]
0x4D83E9: call    edx
0x4D83EB: cmp     eax, 1
0x4D83EE: ja      short loc_4D8404
0x4D83F0: mov     ecx, [esi+58h]
0x4D83F3: test    ecx, ecx
0x4D83F5: jz      short loc_4D8404
0x4D83F7: push    edi
0x4D83F8: call    sub_64FFF0
0x4D83FD: mov     eax, edi
0x4D83FF: pop     edi
0x4D8400: pop     esi
0x4D8401: retn    4
0x4D8404: add     esi, 44h ; 'D'
0x4D8407: mov     ecx, esi
0x4D8409: call    BaseExtraList_GetAnimExtraData?
0x4D840E: cmp     eax, edi
0x4D8410: jz      short loc_4D842A
0x4D8412: test    edi, edi
0x4D8414: mov     ecx, esi
0x4D8416: jz      short loc_4D8425
0x4D8418: push    edi
0x4D8419: call    sub_41E9C0
0x4D841E: mov     eax, edi
0x4D8420: pop     edi
0x4D8421: pop     esi
0x4D8422: retn    4
0x4D8425: call    sub_41F590
0x4D842A: mov     eax, edi
0x4D842C: pop     edi
0x4D842D: pop     esi
0x4D842E: retn    4
