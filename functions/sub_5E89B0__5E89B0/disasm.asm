0x5E89B0: push    esi
0x5E89B1: mov     esi, ecx
0x5E89B3: mov     eax, [esi+58h]
0x5E89B6: push    edi
0x5E89B7: mov     edi, [eax+8]
0x5E89BA: test    edi, edi
0x5E89BC: jz      short loc_5E8A15
0x5E89BE: mov     ecx, edi
0x5E89C0: call    sub_567770
0x5E89C5: test    al, al
0x5E89C7: jz      short loc_5E89D3
0x5E89C9: lea     ecx, [esi+44h]
0x5E89CC: call    ExtraDataList__GetExtraPackage
0x5E89D1: mov     edi, eax
0x5E89D3: test    edi, edi
0x5E89D5: jz      short loc_5E8A15
0x5E89D7: test    byte ptr [edi+1Ch], 1
0x5E89DB: jz      short loc_5E8A15
0x5E89DD: mov     edx, [esi]
0x5E89DF: mov     eax, [edx+170h]
0x5E89E5: push    ebx
0x5E89E6: mov     ecx, esi
0x5E89E8: xor     ebx, ebx
0x5E89EA: call    eax
0x5E89EC: mov     edi, eax
0x5E89EE: test    edi, edi
0x5E89F0: jz      short loc_5E8A04
0x5E89F2: mov     edx, [esi]
0x5E89F4: mov     eax, [edx+190h]
0x5E89FA: mov     ecx, esi
0x5E89FC: call    eax
0x5E89FE: test    al, al
0x5E8A00: jz      short loc_5E8A04
0x5E8A02: mov     ebx, edi
0x5E8A04: push    4000h
0x5E8A09: lea     ecx, [ebx+68h]
0x5E8A0C: call    TESAIForm_OffersService
0x5E8A11: pop     ebx
0x5E8A12: pop     edi
0x5E8A13: pop     esi
0x5E8A14: retn
0x5E8A15: pop     edi
0x5E8A16: xor     al, al
0x5E8A18: pop     esi
0x5E8A19: retn
