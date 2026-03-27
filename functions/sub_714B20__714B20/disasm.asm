0x714B20: push    esi
0x714B21: mov     esi, ecx
0x714B23: mov     eax, [esi]
0x714B25: mov     edx, [eax+44h]
0x714B28: push    edi
0x714B29: call    edx
0x714B2B: mov     eax, [esi]
0x714B2D: mov     edx, [eax+38h]
0x714B30: mov     ecx, esi
0x714B32: call    edx
0x714B34: mov     ecx, esi
0x714B36: call    ??0?$NiTStringTemplateMap@V?$NiTPointerMap@PBDG@@G@@QAE@XZ; NiTStringTemplateMap<NiTPointerMap<char const *,ushort>,ushort>::NiTStringTemplateMap<NiTPointerMap<char const *,ushort>,ushort>(void)
0x714B3B: mov     ecx, esi
0x714B3D: call    sub_713400
0x714B42: mov     ecx, esi
0x714B44: call    sub_713520
0x714B49: xor     edi, edi
0x714B4B: cmp     [esi+1F8h], edi
0x714B51: jbe     short loc_714B6F
0x714B53: mov     eax, [esi+1F0h]
0x714B59: mov     ecx, [eax+edi*4]
0x714B5C: mov     edx, [ecx]
0x714B5E: mov     eax, [edx+28h]
0x714B61: push    esi
0x714B62: call    eax
0x714B64: add     edi, 1
0x714B67: cmp     edi, [esi+1F8h]
0x714B6D: jb      short loc_714B53
0x714B6F: mov     edx, [esi]
0x714B71: mov     eax, [edx+4Ch]
0x714B74: mov     ecx, esi
0x714B76: call    eax
0x714B78: lea     ecx, [esi+1ECh]
0x714B7E: call    sub_8BCC50
0x714B83: lea     ecx, [esi+244h]
0x714B89: call    NiTMap_Clear
0x714B8E: pop     edi
0x714B8F: mov     al, 1
0x714B91: pop     esi
0x714B92: retn
