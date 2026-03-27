0x7307B0: push    ebx
0x7307B1: push    esi
0x7307B2: mov     esi, [esp+8+arg_0]
0x7307B6: push    edi
0x7307B7: push    esi
0x7307B8: mov     ebx, ecx
0x7307BA: call    sub_721730
0x7307BF: mov     eax, ds:0B3FF98h
0x7307C4: push    eax; ArgList
0x7307C5: call    TESOutput_PrintString
0x7307CA: movzx   edi, word ptr [esi+0Ah]
0x7307CE: movzx   ecx, word ptr [esi+8]
0x7307D2: add     esp, 4
0x7307D5: cmp     edi, ecx
0x7307D7: mov     [esp+0Ch+arg_0], eax
0x7307DB: jb      short loc_7307EB
0x7307DD: movzx   edx, word ptr [esi+0Eh]
0x7307E1: add     edx, edi
0x7307E3: push    edx
0x7307E4: mov     ecx, esi
0x7307E6: call    NiTArray_SetSize
0x7307EB: lea     eax, [esp+0Ch+arg_0]
0x7307EF: push    eax
0x7307F0: push    edi
0x7307F1: mov     ecx, esi
0x7307F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7307F8: push    offset aColor_0; "Color = "
0x7307FD: lea     ecx, [ebx+0Ch]
0x730800: call    sub_7093D0
0x730805: movzx   edi, word ptr [esi+0Ah]
0x730809: movzx   ecx, word ptr [esi+8]
0x73080D: cmp     edi, ecx
0x73080F: mov     [esp+0Ch+arg_0], eax
0x730813: jb      short loc_730823
0x730815: movzx   edx, word ptr [esi+0Eh]
0x730819: add     edx, edi
0x73081B: push    edx
0x73081C: mov     ecx, esi
0x73081E: call    NiTArray_SetSize
0x730823: lea     eax, [esp+0Ch+arg_0]
0x730827: push    eax
0x730828: push    edi
0x730829: mov     ecx, esi
0x73082B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x730830: pop     edi
0x730831: pop     esi
0x730832: pop     ebx
0x730833: retn    4
