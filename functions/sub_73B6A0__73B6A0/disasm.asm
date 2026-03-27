0x73B6A0: push    ebx
0x73B6A1: push    esi
0x73B6A2: mov     esi, [esp+8+arg_0]
0x73B6A6: push    edi
0x73B6A7: push    esi
0x73B6A8: mov     ebx, ecx
0x73B6AA: call    sub_71A380
0x73B6AF: mov     eax, ds:0B40170h
0x73B6B4: push    eax; ArgList
0x73B6B5: call    TESOutput_PrintString
0x73B6BA: movzx   edi, word ptr [esi+0Ah]
0x73B6BE: movzx   ecx, word ptr [esi+8]
0x73B6C2: add     esp, 4
0x73B6C5: cmp     edi, ecx
0x73B6C7: mov     [esp+0Ch+arg_0], eax
0x73B6CB: jb      short loc_73B6DB
0x73B6CD: movzx   edx, word ptr [esi+0Eh]
0x73B6D1: add     edx, edi
0x73B6D3: push    edx
0x73B6D4: mov     ecx, esi
0x73B6D6: call    NiTArray_SetSize
0x73B6DB: lea     eax, [esp+0Ch+arg_0]
0x73B6DF: push    eax
0x73B6E0: push    edi
0x73B6E1: mov     ecx, esi
0x73B6E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B6E8: movzx   ecx, word ptr [ebx+50h]
0x73B6EC: push    ecx; __int16
0x73B6ED: push    offset aM_usactivevert; "m_usActiveVertices"
0x73B6F2: call    TESOutput_PrintLabeledUnsignedShort
0x73B6F7: movzx   edi, word ptr [esi+0Ah]
0x73B6FB: movzx   edx, word ptr [esi+8]
0x73B6FF: add     esp, 8
0x73B702: cmp     edi, edx
0x73B704: mov     [esp+0Ch+arg_0], eax
0x73B708: jb      short loc_73B718
0x73B70A: movzx   eax, word ptr [esi+0Eh]
0x73B70E: add     eax, edi
0x73B710: push    eax
0x73B711: mov     ecx, esi
0x73B713: call    NiTArray_SetSize
0x73B718: lea     ecx, [esp+0Ch+arg_0]
0x73B71C: push    ecx
0x73B71D: push    edi
0x73B71E: mov     ecx, esi
0x73B720: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B725: movzx   edx, word ptr [ebx+52h]
0x73B729: push    edx; __int16
0x73B72A: push    offset aM_usactivetria; "m_usActiveTriangles"
0x73B72F: call    TESOutput_PrintLabeledUnsignedShort
0x73B734: movzx   edi, word ptr [esi+0Ah]
0x73B738: mov     [esp+14h+arg_0], eax
0x73B73C: movzx   eax, word ptr [esi+8]
0x73B740: add     esp, 8
0x73B743: cmp     edi, eax
0x73B745: jb      short loc_73B755
0x73B747: movzx   ecx, word ptr [esi+0Eh]
0x73B74B: add     ecx, edi
0x73B74D: push    ecx
0x73B74E: mov     ecx, esi
0x73B750: call    NiTArray_SetSize
0x73B755: lea     edx, [esp+0Ch+arg_0]
0x73B759: push    edx
0x73B75A: push    edi
0x73B75B: mov     ecx, esi
0x73B75D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B762: pop     edi
0x73B763: pop     esi
0x73B764: pop     ebx
0x73B765: retn    4
