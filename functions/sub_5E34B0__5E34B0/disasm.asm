0x5E34B0: push    ebx
0x5E34B1: push    edi
0x5E34B2: mov     edi, ecx
0x5E34B4: mov     eax, [edi+58h]
0x5E34B7: xor     bl, bl
0x5E34B9: test    eax, eax
0x5E34BB: jz      short loc_5E34F4
0x5E34BD: push    esi
0x5E34BE: mov     esi, [eax+8]
0x5E34C1: test    esi, esi
0x5E34C3: jz      short loc_5E34D0
0x5E34C5: mov     ecx, esi
0x5E34C7: call    sub_567770
0x5E34CC: test    al, al
0x5E34CE: jz      short loc_5E34DA
0x5E34D0: lea     ecx, [edi+44h]
0x5E34D3: call    ExtraDataList__GetExtraPackage
0x5E34D8: mov     esi, eax
0x5E34DA: test    esi, esi
0x5E34DC: jz      short loc_5E34EE
0x5E34DE: mov     eax, [esi+1Ch]
0x5E34E1: shr     eax, 13h
0x5E34E4: test    al, 1
0x5E34E6: jz      short loc_5E34EE
0x5E34E8: pop     esi
0x5E34E9: pop     edi
0x5E34EA: mov     al, 1
0x5E34EC: pop     ebx
0x5E34ED: retn
0x5E34EE: pop     esi
0x5E34EF: pop     edi
0x5E34F0: mov     al, bl
0x5E34F2: pop     ebx
0x5E34F3: retn
0x5E34F4: pop     edi
0x5E34F5: mov     al, bl
0x5E34F7: pop     ebx
0x5E34F8: retn
