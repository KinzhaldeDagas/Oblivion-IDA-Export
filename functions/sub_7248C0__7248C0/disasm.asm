0x7248C0: push    ebx
0x7248C1: push    esi
0x7248C2: mov     esi, dword ptr [esp+8+arg_0]
0x7248C6: push    edi
0x7248C7: push    esi
0x7248C8: mov     ebx, ecx
0x7248CA: call    sub_70BAE0
0x7248CF: mov     eax, ds:0B3FD70h
0x7248D4: push    eax; ArgList
0x7248D5: call    TESOutput_PrintString
0x7248DA: movzx   edi, word ptr [esi+0Ah]
0x7248DE: movzx   ecx, word ptr [esi+8]
0x7248E2: add     esp, 4
0x7248E5: cmp     edi, ecx
0x7248E7: mov     dword ptr [esp+0Ch+arg_0], eax
0x7248EB: jb      short loc_7248FB
0x7248ED: movzx   edx, word ptr [esi+0Eh]
0x7248F1: add     edx, edi
0x7248F3: push    edx
0x7248F4: mov     ecx, esi
0x7248F6: call    NiTArray_SetSize
0x7248FB: lea     eax, [esp+0Ch+arg_0]
0x7248FF: push    eax
0x724900: push    edi
0x724901: mov     ecx, esi
0x724903: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x724908: mov     ecx, [ebx+0E0h]
0x72490E: push    ecx; int
0x72490F: push    offset aM_iindex; "m_iIndex"
0x724914: call    TESOutput_PrintLabeledSignedInt
0x724919: movzx   edi, word ptr [esi+0Ah]
0x72491D: movzx   edx, word ptr [esi+8]
0x724921: add     esp, 8
0x724924: cmp     edi, edx
0x724926: mov     dword ptr [esp+0Ch+arg_0], eax
0x72492A: jb      short loc_72493A
0x72492C: movzx   eax, word ptr [esi+0Eh]
0x724930: add     eax, edi
0x724932: push    eax
0x724933: mov     ecx, esi
0x724935: call    NiTArray_SetSize
0x72493A: lea     ecx, [esp+0Ch+arg_0]
0x72493E: push    ecx
0x72493F: push    edi
0x724940: mov     ecx, esi
0x724942: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x724947: mov     dl, [ebx+0DCh]
0x72494D: and     dl, 1
0x724950: mov     [esp+0Ch+arg_0], dl
0x724954: mov     eax, dword ptr [esp+0Ch+arg_0]
0x724958: push    eax; char
0x724959: push    offset aM_bupdateonlya; "m_bUpdateOnlyActive"
0x72495E: call    TESOutput_PrintLabeledBool
0x724963: movzx   edi, word ptr [esi+0Ah]
0x724967: movzx   ecx, word ptr [esi+8]
0x72496B: add     esp, 8
0x72496E: cmp     edi, ecx
0x724970: mov     dword ptr [esp+0Ch+arg_0], eax
0x724974: jb      short loc_724984
0x724976: movzx   edx, word ptr [esi+0Eh]
0x72497A: add     edx, edi
0x72497C: push    edx
0x72497D: mov     ecx, esi
0x72497F: call    NiTArray_SetSize
0x724984: lea     eax, [esp+0Ch+arg_0]
0x724988: push    eax
0x724989: push    edi
0x72498A: mov     ecx, esi
0x72498C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x724991: pop     edi
0x724992: pop     esi
0x724993: pop     ebx
0x724994: retn    4
