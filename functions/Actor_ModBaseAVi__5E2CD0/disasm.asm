0x5E2CD0: push    ebx
0x5E2CD1: push    esi
0x5E2CD2: mov     esi, ecx
0x5E2CD4: mov     eax, [esi]
0x5E2CD6: mov     edx, [eax+170h]
0x5E2CDC: push    edi
0x5E2CDD: xor     edi, edi
0x5E2CDF: call    edx
0x5E2CE1: mov     ebx, eax
0x5E2CE3: test    ebx, ebx
0x5E2CE5: jz      short loc_5E2CF9
0x5E2CE7: mov     eax, [esi]
0x5E2CE9: mov     edx, [eax+190h]
0x5E2CEF: mov     ecx, esi
0x5E2CF1: call    edx
0x5E2CF3: test    al, al
0x5E2CF5: jz      short loc_5E2CF9
0x5E2CF7: mov     edi, ebx
0x5E2CF9: mov     ecx, [esp+0Ch+arg_4]
0x5E2CFD: mov     eax, [edi]
0x5E2CFF: mov     ebx, [esp+0Ch+arg_0]
0x5E2D03: mov     edx, [eax+13Ch]
0x5E2D09: push    ecx
0x5E2D0A: push    ebx
0x5E2D0B: mov     ecx, edi
0x5E2D0D: call    edx
0x5E2D0F: lea     eax, [ebx-0Ch]
0x5E2D12: cmp     eax, 14h
0x5E2D15: ja      short loc_5E2D40
0x5E2D17: cmp     ebx, 12h
0x5E2D1A: jz      short loc_5E2D21
0x5E2D1C: cmp     ebx, 1Bh
0x5E2D1F: jnz     short loc_5E2D40
0x5E2D21: lea     ecx, [esi+44h]; this
0x5E2D24: call    ExtraDataList_GetContainerChanges
0x5E2D29: test    eax, eax
0x5E2D2B: jz      short loc_5E2D34
0x5E2D2D: mov     ecx, eax
0x5E2D2F: call    sub_484310
0x5E2D34: mov     edx, [esi]
0x5E2D36: mov     eax, [edx+2C0h]
0x5E2D3C: mov     ecx, esi
0x5E2D3E: call    eax
0x5E2D40: pop     edi
0x5E2D41: pop     esi
0x5E2D42: pop     ebx
0x5E2D43: retn    8
