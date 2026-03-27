0x5E2D50: push    ebx
0x5E2D51: push    esi
0x5E2D52: mov     esi, ecx
0x5E2D54: mov     eax, [esi]
0x5E2D56: mov     edx, [eax+170h]
0x5E2D5C: push    edi
0x5E2D5D: xor     edi, edi
0x5E2D5F: call    edx
0x5E2D61: mov     ebx, eax
0x5E2D63: test    ebx, ebx
0x5E2D65: jz      short loc_5E2D79
0x5E2D67: mov     eax, [esi]
0x5E2D69: mov     edx, [eax+190h]
0x5E2D6F: mov     ecx, esi
0x5E2D71: call    edx
0x5E2D73: test    al, al
0x5E2D75: jz      short loc_5E2D79
0x5E2D77: mov     edi, ebx
0x5E2D79: mov     eax, [edi]
0x5E2D7B: fld     [esp+0Ch+arg_4]
0x5E2D7F: mov     ebx, [esp+0Ch+arg_0]
0x5E2D83: mov     edx, [eax+138h]
0x5E2D89: push    ecx
0x5E2D8A: fstp    [esp+10h+var_10]
0x5E2D8D: push    ebx
0x5E2D8E: mov     ecx, edi
0x5E2D90: call    edx
0x5E2D92: lea     eax, [ebx-0Ch]
0x5E2D95: cmp     eax, 14h
0x5E2D98: ja      short loc_5E2DC3
0x5E2D9A: cmp     ebx, 12h
0x5E2D9D: jz      short loc_5E2DA4
0x5E2D9F: cmp     ebx, 1Bh
0x5E2DA2: jnz     short loc_5E2DC3
0x5E2DA4: lea     ecx, [esi+44h]; this
0x5E2DA7: call    ExtraDataList_GetContainerChanges
0x5E2DAC: test    eax, eax
0x5E2DAE: jz      short loc_5E2DB7
0x5E2DB0: mov     ecx, eax
0x5E2DB2: call    sub_484310
0x5E2DB7: mov     edx, [esi]
0x5E2DB9: mov     eax, [edx+2C0h]
0x5E2DBF: mov     ecx, esi
0x5E2DC1: call    eax
0x5E2DC3: pop     edi
0x5E2DC4: pop     esi
0x5E2DC5: pop     ebx
0x5E2DC6: retn    8
