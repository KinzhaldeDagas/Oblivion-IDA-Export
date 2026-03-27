0x73A780: push    ecx
0x73A781: push    ebx
0x73A782: push    ebp
0x73A783: push    esi
0x73A784: mov     esi, [esp+10h+a2]
0x73A788: push    edi
0x73A789: mov     edi, ecx
0x73A78B: push    esi; a2
0x73A78C: mov     [esp+18h+var_4], edi
0x73A790: call    sub_7009A0
0x73A795: mov     eax, ds:0B40148h
0x73A79A: push    eax; ArgList
0x73A79B: call    TESOutput_PrintString
0x73A7A0: movzx   ebx, word ptr [esi+0Ah]
0x73A7A4: movzx   ecx, word ptr [esi+8]
0x73A7A8: add     esp, 4
0x73A7AB: cmp     ebx, ecx
0x73A7AD: mov     [esp+14h+a2], eax
0x73A7B1: jb      short loc_73A7C1
0x73A7B3: movzx   edx, word ptr [esi+0Eh]
0x73A7B7: add     edx, ebx
0x73A7B9: push    edx
0x73A7BA: mov     ecx, esi
0x73A7BC: call    NiTArray_SetSize
0x73A7C1: lea     eax, [esp+14h+a2]
0x73A7C5: push    eax
0x73A7C6: push    ebx
0x73A7C7: mov     ecx, esi
0x73A7C9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A7CE: movzx   ecx, word ptr [edi+0Ch]
0x73A7D2: push    ecx; __int16
0x73A7D3: push    offset aM_usvertices; "m_usVertices"
0x73A7D8: call    TESOutput_PrintLabeledUnsignedShort
0x73A7DD: movzx   ebx, word ptr [esi+0Ah]
0x73A7E1: movzx   edx, word ptr [esi+8]
0x73A7E5: add     esp, 8
0x73A7E8: cmp     ebx, edx
0x73A7EA: mov     [esp+14h+a2], eax
0x73A7EE: jb      short loc_73A7FE
0x73A7F0: movzx   eax, word ptr [esi+0Eh]
0x73A7F4: add     eax, ebx
0x73A7F6: push    eax
0x73A7F7: mov     ecx, esi
0x73A7F9: call    NiTArray_SetSize
0x73A7FE: lea     ecx, [esp+14h+a2]
0x73A802: push    ecx
0x73A803: push    ebx
0x73A804: mov     ecx, esi
0x73A806: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A80B: mov     edx, [edi+10h]
0x73A80E: push    edx; int
0x73A80F: push    offset aM_pkvertex; "m_pkVertex"
0x73A814: call    TESOutput_PrintLabeledPointer
0x73A819: movzx   ebx, word ptr [esi+0Ah]
0x73A81D: mov     [esp+1Ch+a2], eax
0x73A821: movzx   eax, word ptr [esi+8]
0x73A825: add     esp, 8
0x73A828: cmp     ebx, eax
0x73A82A: jb      short loc_73A83A
0x73A82C: movzx   ecx, word ptr [esi+0Eh]
0x73A830: add     ecx, ebx
0x73A832: push    ecx
0x73A833: mov     ecx, esi
0x73A835: call    NiTArray_SetSize
0x73A83A: lea     edx, [esp+14h+a2]
0x73A83E: push    edx
0x73A83F: push    ebx
0x73A840: mov     ecx, esi
0x73A842: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A847: mov     eax, [edi+14h]
0x73A84A: push    eax; int
0x73A84B: push    offset aM_pktexture; "m_pkTexture"
0x73A850: call    TESOutput_PrintLabeledPointer
0x73A855: movzx   ebx, word ptr [esi+0Ah]
0x73A859: movzx   ecx, word ptr [esi+8]
0x73A85D: add     esp, 8
0x73A860: cmp     ebx, ecx
0x73A862: mov     [esp+14h+a2], eax
0x73A866: jb      short loc_73A876
0x73A868: movzx   edx, word ptr [esi+0Eh]
0x73A86C: add     edx, ebx
0x73A86E: push    edx
0x73A86F: mov     ecx, esi
0x73A871: call    NiTArray_SetSize
0x73A876: lea     eax, [esp+14h+a2]
0x73A87A: push    eax
0x73A87B: push    ebx
0x73A87C: mov     ecx, esi
0x73A87E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A883: mov     ecx, [edi+18h]
0x73A886: push    ecx; int
0x73A887: push    offset aM_pkcolor; "m_pkColor"
0x73A88C: call    TESOutput_PrintLabeledPointer
0x73A891: movzx   ebx, word ptr [esi+0Ah]
0x73A895: movzx   edx, word ptr [esi+8]
0x73A899: add     esp, 8
0x73A89C: cmp     ebx, edx
0x73A89E: mov     [esp+14h+a2], eax
0x73A8A2: jb      short loc_73A8B2
0x73A8A4: movzx   eax, word ptr [esi+0Eh]
0x73A8A8: add     eax, ebx
0x73A8AA: push    eax
0x73A8AB: mov     ecx, esi
0x73A8AD: call    NiTArray_SetSize
0x73A8B2: lea     ecx, [esp+14h+a2]
0x73A8B6: push    ecx
0x73A8B7: push    ebx
0x73A8B8: mov     ecx, esi
0x73A8BA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A8BF: mov     ebp, 8
0x73A8C4: jmp     short loc_73A8CA
0x73A8C6: mov     edi, [esp+14h+var_4]
0x73A8CA: mov     edx, [edi+8]
0x73A8CD: mov     edi, [edx+ebp]
0x73A8D0: mov     eax, [edi]
0x73A8D2: mov     edx, [eax+4]
0x73A8D5: mov     ecx, edi
0x73A8D7: call    edx
0x73A8D9: mov     eax, [eax]
0x73A8DB: push    edi; int
0x73A8DC: push    eax; ArgList
0x73A8DD: call    TESOutput_PrintLabeledPointer
0x73A8E2: movzx   edi, word ptr [esi+0Ah]
0x73A8E6: mov     ebx, eax
0x73A8E8: movzx   eax, word ptr [esi+8]
0x73A8EC: add     esp, 8
0x73A8EF: cmp     edi, eax
0x73A8F1: jb      short loc_73A901
0x73A8F3: movzx   ecx, word ptr [esi+0Eh]
0x73A8F7: add     ecx, edi
0x73A8F9: push    ecx
0x73A8FA: mov     ecx, esi
0x73A8FC: call    NiTArray_SetSize
0x73A901: movzx   edx, word ptr [esi+0Ah]
0x73A905: cmp     edi, edx
0x73A907: jb      short loc_73A91B
0x73A909: test    ebx, ebx
0x73A90B: lea     eax, [edi+1]
0x73A90E: mov     [esi+0Ah], ax
0x73A912: jz      short loc_73A93E
0x73A914: add     word ptr [esi+0Ch], 1
0x73A919: jmp     short loc_73A93E
0x73A91B: test    ebx, ebx
0x73A91D: jz      short loc_73A92F
0x73A91F: mov     ecx, [esi+4]
0x73A922: cmp     dword ptr [ecx+edi*4], 0
0x73A926: jnz     short loc_73A93E
0x73A928: add     word ptr [esi+0Ch], 1
0x73A92D: jmp     short loc_73A93E
0x73A92F: mov     edx, [esi+4]
0x73A932: cmp     dword ptr [edx+edi*4], 0
0x73A936: jz      short loc_73A93E
0x73A938: add     word ptr [esi+0Ch], 0FFFFh
0x73A93E: mov     eax, [esi+4]
0x73A941: add     ebp, 4
0x73A944: cmp     ebp, 30h ; '0'
0x73A947: mov     [eax+edi*4], ebx
0x73A94A: jb      loc_73A8C6
0x73A950: pop     edi
0x73A951: pop     esi
0x73A952: pop     ebp
0x73A953: pop     ebx
0x73A954: pop     ecx
0x73A955: retn    4
