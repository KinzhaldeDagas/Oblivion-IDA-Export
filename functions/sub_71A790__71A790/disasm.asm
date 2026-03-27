0x71A790: push    ebx
0x71A791: push    esi
0x71A792: mov     esi, [esp+8+arg_0]
0x71A796: push    edi
0x71A797: push    esi
0x71A798: mov     edi, ecx
0x71A79A: call    sub_709160
0x71A79F: mov     eax, ds:0B3FD14h
0x71A7A4: push    eax; ArgList
0x71A7A5: call    TESOutput_PrintString
0x71A7AA: movzx   ebx, word ptr [esi+0Ah]
0x71A7AE: movzx   ecx, word ptr [esi+8]
0x71A7B2: add     esp, 4
0x71A7B5: cmp     ebx, ecx
0x71A7B7: mov     [esp+0Ch+arg_0], eax
0x71A7BB: jb      short loc_71A7CB
0x71A7BD: movzx   edx, word ptr [esi+0Eh]
0x71A7C1: add     edx, ebx
0x71A7C3: push    edx
0x71A7C4: mov     ecx, esi
0x71A7C6: call    NiTArray_SetSize
0x71A7CB: lea     eax, [esp+0Ch+arg_0]
0x71A7CF: push    eax
0x71A7D0: push    ebx
0x71A7D1: mov     ecx, esi
0x71A7D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A7D8: fld     dword ptr [edi+0DCh]
0x71A7DE: push    ecx
0x71A7DF: fstp    [esp+10h+var_10]; float
0x71A7E2: push    offset aM_fdimmer; "m_fDimmer"
0x71A7E7: call    TESOutput_PrintLabeledFloat
0x71A7EC: movzx   ebx, word ptr [esi+0Ah]
0x71A7F0: movzx   ecx, word ptr [esi+8]
0x71A7F4: add     esp, 8
0x71A7F7: cmp     ebx, ecx
0x71A7F9: mov     [esp+0Ch+arg_0], eax
0x71A7FD: jb      short loc_71A80D
0x71A7FF: movzx   edx, word ptr [esi+0Eh]
0x71A803: add     edx, ebx
0x71A805: push    edx
0x71A806: mov     ecx, esi
0x71A808: call    NiTArray_SetSize
0x71A80D: lea     eax, [esp+0Ch+arg_0]
0x71A811: push    eax
0x71A812: push    ebx
0x71A813: mov     ecx, esi
0x71A815: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A81A: push    offset aM_kamb; "m_kAmb"
0x71A81F: lea     ecx, [edi+0E0h]
0x71A825: call    sub_709370
0x71A82A: movzx   ebx, word ptr [esi+0Ah]
0x71A82E: movzx   ecx, word ptr [esi+8]
0x71A832: cmp     ebx, ecx
0x71A834: mov     [esp+0Ch+arg_0], eax
0x71A838: jb      short loc_71A848
0x71A83A: movzx   edx, word ptr [esi+0Eh]
0x71A83E: add     edx, ebx
0x71A840: push    edx
0x71A841: mov     ecx, esi
0x71A843: call    NiTArray_SetSize
0x71A848: lea     eax, [esp+0Ch+arg_0]
0x71A84C: push    eax
0x71A84D: push    ebx
0x71A84E: mov     ecx, esi
0x71A850: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A855: push    offset aM_kdiff; "m_kDiff"
0x71A85A: lea     ecx, [edi+0ECh]
0x71A860: call    sub_709370
0x71A865: movzx   ebx, word ptr [esi+0Ah]
0x71A869: movzx   ecx, word ptr [esi+8]
0x71A86D: cmp     ebx, ecx
0x71A86F: mov     [esp+0Ch+arg_0], eax
0x71A873: jb      short loc_71A883
0x71A875: movzx   edx, word ptr [esi+0Eh]
0x71A879: add     edx, ebx
0x71A87B: push    edx
0x71A87C: mov     ecx, esi
0x71A87E: call    NiTArray_SetSize
0x71A883: lea     eax, [esp+0Ch+arg_0]
0x71A887: push    eax
0x71A888: push    ebx
0x71A889: mov     ecx, esi
0x71A88B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A890: push    offset aM_kspec; "m_kSpec"
0x71A895: lea     ecx, [edi+0F8h]
0x71A89B: call    sub_709370
0x71A8A0: movzx   edi, word ptr [esi+0Ah]
0x71A8A4: movzx   ecx, word ptr [esi+8]
0x71A8A8: cmp     edi, ecx
0x71A8AA: mov     [esp+0Ch+arg_0], eax
0x71A8AE: jb      short loc_71A8BE
0x71A8B0: movzx   edx, word ptr [esi+0Eh]
0x71A8B4: add     edx, edi
0x71A8B6: push    edx
0x71A8B7: mov     ecx, esi
0x71A8B9: call    NiTArray_SetSize
0x71A8BE: lea     eax, [esp+0Ch+arg_0]
0x71A8C2: push    eax
0x71A8C3: push    edi
0x71A8C4: mov     ecx, esi
0x71A8C6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71A8CB: pop     edi
0x71A8CC: pop     esi
0x71A8CD: pop     ebx
0x71A8CE: retn    4
