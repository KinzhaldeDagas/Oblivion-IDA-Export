0x5E8A20: push    esi
0x5E8A21: mov     esi, ecx
0x5E8A23: mov     eax, [esi+58h]
0x5E8A26: push    edi
0x5E8A27: mov     edi, [eax+8]
0x5E8A2A: test    edi, edi
0x5E8A2C: jz      short loc_5E8A85
0x5E8A2E: mov     ecx, edi
0x5E8A30: call    sub_567770
0x5E8A35: test    al, al
0x5E8A37: jz      short loc_5E8A43
0x5E8A39: lea     ecx, [esi+44h]
0x5E8A3C: call    ExtraDataList__GetExtraPackage
0x5E8A41: mov     edi, eax
0x5E8A43: test    edi, edi
0x5E8A45: jz      short loc_5E8A85
0x5E8A47: test    byte ptr [edi+1Ch], 1
0x5E8A4B: jz      short loc_5E8A85
0x5E8A4D: mov     edx, [esi]
0x5E8A4F: mov     eax, [edx+170h]
0x5E8A55: push    ebx
0x5E8A56: mov     ecx, esi
0x5E8A58: xor     ebx, ebx
0x5E8A5A: call    eax
0x5E8A5C: mov     edi, eax
0x5E8A5E: test    edi, edi
0x5E8A60: jz      short loc_5E8A74
0x5E8A62: mov     edx, [esi]
0x5E8A64: mov     eax, [edx+190h]
0x5E8A6A: mov     ecx, esi
0x5E8A6C: call    eax
0x5E8A6E: test    al, al
0x5E8A70: jz      short loc_5E8A74
0x5E8A72: mov     ebx, edi
0x5E8A74: push    20000h
0x5E8A79: lea     ecx, [ebx+68h]
0x5E8A7C: call    TESAIForm_OffersService
0x5E8A81: pop     ebx
0x5E8A82: pop     edi
0x5E8A83: pop     esi
0x5E8A84: retn
0x5E8A85: pop     edi
0x5E8A86: xor     al, al
0x5E8A88: pop     esi
0x5E8A89: retn
