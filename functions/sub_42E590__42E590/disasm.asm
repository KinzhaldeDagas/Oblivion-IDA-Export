0x42E590: push    ebx
0x42E591: push    esi
0x42E592: mov     esi, [esp+8+arg_0]
0x42E596: push    edi
0x42E597: push    esi
0x42E598: mov     edi, ecx
0x42E59A: call    BSFile_BuildFormattedStatusArray
0x42E59F: push    offset aArchive; "Archive"
0x42E5A4: call    TESOutput_PrintString
0x42E5A9: movzx   ebx, word ptr [esi+0Ah]
0x42E5AD: mov     [esp+10h+arg_0], eax
0x42E5B1: movzx   eax, word ptr [esi+8]
0x42E5B5: add     esp, 4
0x42E5B8: cmp     ebx, eax
0x42E5BA: jb      short loc_42E5CA
0x42E5BC: movzx   ecx, word ptr [esi+0Eh]
0x42E5C0: add     ecx, ebx
0x42E5C2: push    ecx
0x42E5C3: mov     ecx, esi
0x42E5C5: call    NiTArray_SetSize
0x42E5CA: lea     edx, [esp+0Ch+arg_0]
0x42E5CE: push    edx
0x42E5CF: push    ebx
0x42E5D0: mov     ecx, esi
0x42E5D2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E5D7: mov     eax, [edi+158h]
0x42E5DD: push    eax; int
0x42E5DE: push    offset aUiversion; "uiVersion"
0x42E5E3: call    TESOutput_PrintLabeledUnsignedInt
0x42E5E8: movzx   ebx, word ptr [esi+0Ah]
0x42E5EC: mov     [esp+14h+arg_0], eax
0x42E5F0: movzx   eax, word ptr [esi+8]
0x42E5F4: add     esp, 8
0x42E5F7: cmp     ebx, eax
0x42E5F9: jb      short loc_42E609
0x42E5FB: movzx   ecx, word ptr [esi+0Eh]
0x42E5FF: add     ecx, ebx
0x42E601: push    ecx
0x42E602: mov     ecx, esi
0x42E604: call    NiTArray_SetSize
0x42E609: lea     edx, [esp+0Ch+arg_0]
0x42E60D: push    edx
0x42E60E: push    ebx
0x42E60F: mov     ecx, esi
0x42E611: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E616: mov     eax, [edi+164h]
0x42E61C: push    eax; int
0x42E61D: push    offset aUidirectorycou; "uiDirectoryCount"
0x42E622: call    TESOutput_PrintLabeledUnsignedInt
0x42E627: movzx   ebx, word ptr [esi+0Ah]
0x42E62B: mov     [esp+14h+arg_0], eax
0x42E62F: movzx   eax, word ptr [esi+8]
0x42E633: add     esp, 8
0x42E636: cmp     ebx, eax
0x42E638: jb      short loc_42E648
0x42E63A: movzx   ecx, word ptr [esi+0Eh]
0x42E63E: add     ecx, ebx
0x42E640: push    ecx
0x42E641: mov     ecx, esi
0x42E643: call    NiTArray_SetSize
0x42E648: lea     edx, [esp+0Ch+arg_0]
0x42E64C: push    edx
0x42E64D: push    ebx
0x42E64E: mov     ecx, esi
0x42E650: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E655: mov     edi, [edi+168h]
0x42E65B: push    edi; int
0x42E65C: push    offset aUifilecount; "uiFileCount"
0x42E661: call    TESOutput_PrintLabeledUnsignedInt
0x42E666: movzx   edi, word ptr [esi+0Ah]
0x42E66A: mov     [esp+14h+arg_0], eax
0x42E66E: movzx   eax, word ptr [esi+8]
0x42E672: add     esp, 8
0x42E675: cmp     edi, eax
0x42E677: jb      short loc_42E687
0x42E679: movzx   ecx, word ptr [esi+0Eh]
0x42E67D: add     ecx, edi
0x42E67F: push    ecx
0x42E680: mov     ecx, esi
0x42E682: call    NiTArray_SetSize
0x42E687: lea     edx, [esp+0Ch+arg_0]
0x42E68B: push    edx
0x42E68C: push    edi
0x42E68D: mov     ecx, esi
0x42E68F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E694: pop     edi
0x42E695: pop     esi
0x42E696: pop     ebx
0x42E697: retn    4
