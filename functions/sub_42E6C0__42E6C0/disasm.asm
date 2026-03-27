0x42E6C0: push    ebx
0x42E6C1: push    esi
0x42E6C2: mov     esi, [esp+8+arg_0]
0x42E6C6: push    edi
0x42E6C7: push    esi
0x42E6C8: mov     ebx, ecx
0x42E6CA: call    BSFile_BuildFormattedStatusArray
0x42E6CF: push    offset aArchivefile; "ArchiveFile"
0x42E6D4: call    TESOutput_PrintString
0x42E6D9: movzx   edi, word ptr [esi+0Ah]
0x42E6DD: mov     [esp+10h+arg_0], eax
0x42E6E1: movzx   eax, word ptr [esi+8]
0x42E6E5: add     esp, 4
0x42E6E8: cmp     edi, eax
0x42E6EA: jb      short loc_42E6FA
0x42E6EC: movzx   ecx, word ptr [esi+0Eh]
0x42E6F0: add     ecx, edi
0x42E6F2: push    ecx
0x42E6F3: mov     ecx, esi
0x42E6F5: call    NiTArray_SetSize
0x42E6FA: lea     edx, [esp+0Ch+arg_0]
0x42E6FE: push    edx
0x42E6FF: push    edi
0x42E700: mov     ecx, esi
0x42E702: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E707: mov     eax, [ebx+154h]
0x42E70D: add     eax, 3Ch ; '<'
0x42E710: push    eax; int
0x42E711: push    offset aFrom; "From"
0x42E716: call    TESOutput_PrintLabeledString
0x42E71B: movzx   edi, word ptr [esi+0Ah]
0x42E71F: mov     [esp+14h+arg_0], eax
0x42E723: movzx   eax, word ptr [esi+8]
0x42E727: add     esp, 8
0x42E72A: cmp     edi, eax
0x42E72C: jb      short loc_42E73C
0x42E72E: movzx   ecx, word ptr [esi+0Eh]
0x42E732: add     ecx, edi
0x42E734: push    ecx
0x42E735: mov     ecx, esi
0x42E737: call    NiTArray_SetSize
0x42E73C: lea     edx, [esp+0Ch+arg_0]
0x42E740: push    edx
0x42E741: push    edi
0x42E742: mov     ecx, esi
0x42E744: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E749: mov     eax, [ebx+158h]
0x42E74F: push    eax; int
0x42E750: push    offset aOffset; "Offset"
0x42E755: call    TESOutput_PrintLabeledUnsignedInt
0x42E75A: movzx   edi, word ptr [esi+0Ah]
0x42E75E: movzx   ecx, word ptr [esi+8]
0x42E762: add     esp, 8
0x42E765: cmp     edi, ecx
0x42E767: mov     [esp+0Ch+arg_0], eax
0x42E76B: jb      short loc_42E77B
0x42E76D: movzx   edx, word ptr [esi+0Eh]
0x42E771: add     edx, edi
0x42E773: push    edx
0x42E774: mov     ecx, esi
0x42E776: call    NiTArray_SetSize
0x42E77B: lea     eax, [esp+0Ch+arg_0]
0x42E77F: push    eax
0x42E780: push    edi
0x42E781: mov     ecx, esi
0x42E783: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42E788: pop     edi
0x42E789: pop     esi
0x42E78A: pop     ebx
0x42E78B: retn    4
