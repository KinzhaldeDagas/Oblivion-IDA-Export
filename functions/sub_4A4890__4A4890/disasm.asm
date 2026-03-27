0x4A4890: sub     esp, 8
0x4A4893: push    ebx
0x4A4894: push    esi
0x4A4895: push    edi
0x4A4896: mov     edi, [esp+14h+a1]
0x4A489A: test    edi, edi
0x4A489C: mov     esi, ecx
0x4A489E: jz      loc_4A49D6
0x4A48A4: mov     ebx, [esp+14h+arg_4]
0x4A48A8: test    ebx, ebx
0x4A48AA: jz      loc_4A49D6
0x4A48B0: mov     ecx, edi
0x4A48B2: mov     [esi+4], ebx
0x4A48B5: call    TESFile_GetChunkType
0x4A48BA: cmp     eax, 504D4452h
0x4A48BF: jg      short loc_4A490E
0x4A48C1: jz      short loc_4A4904
0x4A48C3: cmp     eax, 4E4C4452h
0x4A48C8: jg      short loc_4A48EF
0x4A48CA: jz      short loc_4A48FA
0x4A48CC: cmp     eax, 444D4452h
0x4A48D1: jz      short loc_4A48DE
0x4A48D3: cmp     eax, 44534452h
0x4A48D8: jnz     loc_4A49CB
0x4A48DE: mov     eax, [esi]
0x4A48E0: mov     ecx, ds:0B3541Ch
0x4A48E6: mov     edx, [eax+1Ch]
0x4A48E9: push    ecx
0x4A48EA: jmp     loc_4A49B9
0x4A48EF: cmp     eax, 4E4F4349h
0x4A48F4: jnz     loc_4A49CB
0x4A48FA: mov     edx, [esi]
0x4A48FC: mov     edx, [edx+14h]
0x4A48FF: jmp     loc_4A49B3
0x4A4904: mov     edx, [esi]
0x4A4906: mov     edx, [edx+10h]
0x4A4909: jmp     loc_4A49B3
0x4A490E: cmp     eax, 53474452h
0x4A4913: jz      loc_4A49AE
0x4A4919: cmp     eax, 54414452h
0x4A491E: jz      short loc_4A4958
0x4A4920: cmp     eax, 54574452h
0x4A4925: jnz     loc_4A49CB
0x4A492B: mov     edx, [esi]
0x4A492D: mov     eax, ds:0B3541Ch
0x4A4932: mov     edx, [edx+0Ch]
0x4A4935: push    eax
0x4A4936: mov     ecx, esi
0x4A4938: call    edx
0x4A493A: test    eax, eax
0x4A493C: jz      loc_4A49CB
0x4A4942: mov     edx, [eax]
0x4A4944: push    ebx
0x4A4945: mov     ecx, eax
0x4A4947: mov     eax, [edx+20h]
0x4A494A: push    edi
0x4A494B: call    eax
0x4A494D: pop     edi
0x4A494E: pop     esi
0x4A494F: mov     al, 1
0x4A4951: pop     ebx
0x4A4952: add     esp, 8
0x4A4955: retn    8
0x4A4958: push    8; a4
0x4A495A: lea     ecx, [esp+18h+Dst]
0x4A495E: xor     eax, eax
0x4A4960: push    ecx; Dst
0x4A4961: mov     ecx, edi; a1
0x4A4963: mov     dword ptr [esp+1Ch+Dst], eax
0x4A4967: mov     [esp+1Ch+var_4], eax
0x4A496B: call    TESFile_GetChunkData
0x4A4970: mov     edx, [esi]
0x4A4972: mov     eax, dword ptr [esp+14h+Dst]
0x4A4976: mov     edx, [edx+4]
0x4A4979: push    eax
0x4A497A: mov     ecx, esi
0x4A497C: call    edx
0x4A497E: test    eax, eax
0x4A4980: mov     ds:0B3541Ch, eax
0x4A4985: jz      short loc_4A49CB
0x4A4987: mov     edx, [eax]
0x4A4989: mov     edx, [edx+8]
0x4A498C: lea     ecx, [esp+14h+Dst]
0x4A4990: push    ecx
0x4A4991: mov     ecx, eax
0x4A4993: call    edx
0x4A4995: mov     eax, ds:0B3541Ch
0x4A499A: mov     ecx, [ebx+18h]
0x4A499D: push    eax
0x4A499E: call    BSSimpleList_PushFront
0x4A49A3: pop     edi
0x4A49A4: pop     esi
0x4A49A5: mov     al, 1
0x4A49A7: pop     ebx
0x4A49A8: add     esp, 8
0x4A49AB: retn    8
0x4A49AE: mov     edx, [esi]
0x4A49B0: mov     edx, [edx+18h]
0x4A49B3: mov     eax, ds:0B3541Ch
0x4A49B8: push    eax
0x4A49B9: mov     ecx, esi
0x4A49BB: call    edx
0x4A49BD: test    eax, eax
0x4A49BF: jz      short loc_4A49CB
0x4A49C1: mov     edx, [eax]
0x4A49C3: mov     ecx, eax
0x4A49C5: mov     eax, [edx+20h]
0x4A49C8: push    edi
0x4A49C9: call    eax
0x4A49CB: pop     edi
0x4A49CC: pop     esi
0x4A49CD: mov     al, 1
0x4A49CF: pop     ebx
0x4A49D0: add     esp, 8
0x4A49D3: retn    8
0x4A49D6: pop     edi
0x4A49D7: pop     esi
0x4A49D8: xor     al, al
0x4A49DA: pop     ebx
0x4A49DB: add     esp, 8
0x4A49DE: retn    8
