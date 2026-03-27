0x5E8890: push    esi
0x5E8891: mov     esi, ecx
0x5E8893: mov     eax, [esi+58h]
0x5E8896: push    edi
0x5E8897: mov     edi, [eax+8]
0x5E889A: test    edi, edi
0x5E889C: jz      short loc_5E88F5
0x5E889E: mov     ecx, edi
0x5E88A0: call    sub_567770
0x5E88A5: test    al, al
0x5E88A7: jz      short loc_5E88B3
0x5E88A9: lea     ecx, [esi+44h]
0x5E88AC: call    ExtraDataList__GetExtraPackage
0x5E88B1: mov     edi, eax
0x5E88B3: test    edi, edi
0x5E88B5: jz      short loc_5E88F5
0x5E88B7: test    byte ptr [edi+1Ch], 1
0x5E88BB: jz      short loc_5E88F5
0x5E88BD: mov     edx, [esi]
0x5E88BF: mov     eax, [edx+170h]
0x5E88C5: push    ebx
0x5E88C6: mov     ecx, esi
0x5E88C8: xor     ebx, ebx
0x5E88CA: call    eax
0x5E88CC: mov     edi, eax
0x5E88CE: test    edi, edi
0x5E88D0: jz      short loc_5E88E4
0x5E88D2: mov     edx, [esi]
0x5E88D4: mov     eax, [edx+190h]
0x5E88DA: mov     ecx, esi
0x5E88DC: call    eax
0x5E88DE: test    al, al
0x5E88E0: jz      short loc_5E88E4
0x5E88E2: mov     ebx, edi
0x5E88E4: push    10000h
0x5E88E9: lea     ecx, [ebx+68h]
0x5E88EC: call    TESAIForm_OffersService
0x5E88F1: pop     ebx
0x5E88F2: pop     edi
0x5E88F3: pop     esi
0x5E88F4: retn
0x5E88F5: pop     edi
0x5E88F6: xor     al, al
0x5E88F8: pop     esi
0x5E88F9: retn
