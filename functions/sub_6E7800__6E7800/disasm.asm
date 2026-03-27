0x6E7800: push    ebx
0x6E7801: push    esi
0x6E7802: mov     esi, [esp+8+a2]
0x6E7806: push    edi
0x6E7807: push    esi; a2
0x6E7808: mov     ebx, ecx
0x6E780A: call    sub_7009A0
0x6E780F: mov     eax, ds:0B3E6F0h
0x6E7814: push    eax; ArgList
0x6E7815: call    TESOutput_PrintString
0x6E781A: movzx   edi, word ptr [esi+0Ah]
0x6E781E: movzx   ecx, word ptr [esi+8]
0x6E7822: add     esp, 4
0x6E7825: cmp     edi, ecx
0x6E7827: mov     [esp+0Ch+a2], eax
0x6E782B: jb      short loc_6E783B
0x6E782D: movzx   edx, word ptr [esi+0Eh]
0x6E7831: add     edx, edi
0x6E7833: push    edx
0x6E7834: mov     ecx, esi
0x6E7836: call    NiTArray_SetSize
0x6E783B: lea     eax, [esp+0Ch+a2]
0x6E783F: push    eax
0x6E7840: push    edi
0x6E7841: mov     ecx, esi
0x6E7843: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E7848: mov     ecx, [ebx+10h]
0x6E784B: push    ecx; int
0x6E784C: push    offset aM_uicontrolpoi; "m_uiControlPointCount"
0x6E7851: call    TESOutput_PrintLabeledUnsignedInt
0x6E7856: movzx   edi, word ptr [esi+0Ah]
0x6E785A: movzx   edx, word ptr [esi+8]
0x6E785E: add     esp, 8
0x6E7861: cmp     edi, edx
0x6E7863: mov     [esp+0Ch+a2], eax
0x6E7867: jb      short loc_6E7877
0x6E7869: movzx   eax, word ptr [esi+0Eh]
0x6E786D: add     eax, edi
0x6E786F: push    eax
0x6E7870: mov     ecx, esi
0x6E7872: call    NiTArray_SetSize
0x6E7877: lea     ecx, [esp+0Ch+a2]
0x6E787B: push    ecx
0x6E787C: push    edi
0x6E787D: mov     ecx, esi
0x6E787F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E7884: mov     edx, [ebx+14h]
0x6E7887: push    edx; int
0x6E7888: push    offset aM_uicompactcon; "m_uiCompactControlPointCount"
0x6E788D: call    TESOutput_PrintLabeledUnsignedInt
0x6E7892: movzx   edi, word ptr [esi+0Ah]
0x6E7896: mov     [esp+14h+a2], eax
0x6E789A: movzx   eax, word ptr [esi+8]
0x6E789E: add     esp, 8
0x6E78A1: cmp     edi, eax
0x6E78A3: jb      short loc_6E78B3
0x6E78A5: movzx   ecx, word ptr [esi+0Eh]
0x6E78A9: add     ecx, edi
0x6E78AB: push    ecx
0x6E78AC: mov     ecx, esi
0x6E78AE: call    NiTArray_SetSize
0x6E78B3: lea     edx, [esp+0Ch+a2]
0x6E78B7: push    edx
0x6E78B8: push    edi
0x6E78B9: mov     ecx, esi
0x6E78BB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E78C0: pop     edi
0x6E78C1: pop     esi
0x6E78C2: pop     ebx
0x6E78C3: retn    4
