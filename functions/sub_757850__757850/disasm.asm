0x757850: push    ebx
0x757851: push    esi
0x757852: mov     esi, [esp+8+arg_0]
0x757856: push    edi
0x757857: push    esi
0x757858: mov     ebx, ecx
0x75785A: call    sub_75EAA0
0x75785F: mov     eax, ds:0B41334h
0x757864: push    eax; ArgList
0x757865: call    TESOutput_PrintString
0x75786A: movzx   edi, word ptr [esi+0Ah]
0x75786E: movzx   ecx, word ptr [esi+8]
0x757872: add     esp, 4
0x757875: cmp     edi, ecx
0x757877: mov     [esp+0Ch+arg_0], eax
0x75787B: jb      short loc_75788B
0x75787D: movzx   edx, word ptr [esi+0Eh]
0x757881: add     edx, edi
0x757883: push    edx
0x757884: mov     ecx, esi
0x757886: call    NiTArray_SetSize
0x75788B: lea     eax, [esp+0Ch+arg_0]
0x75788F: push    eax
0x757890: push    edi
0x757891: mov     ecx, esi
0x757893: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757898: push    offset aDirection_0; "Direction"
0x75789D: lea     ecx, [ebx+30h]
0x7578A0: call    sub_707280
0x7578A5: movzx   edi, word ptr [esi+0Ah]
0x7578A9: movzx   ecx, word ptr [esi+8]
0x7578AD: cmp     edi, ecx
0x7578AF: mov     [esp+0Ch+arg_0], eax
0x7578B3: jb      short loc_7578C3
0x7578B5: movzx   edx, word ptr [esi+0Eh]
0x7578B9: add     edx, edi
0x7578BB: push    edx
0x7578BC: mov     ecx, esi
0x7578BE: call    NiTArray_SetSize
0x7578C3: lea     eax, [esp+0Ch+arg_0]
0x7578C7: push    eax
0x7578C8: push    edi
0x7578C9: mov     ecx, esi
0x7578CB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7578D0: pop     edi
0x7578D1: pop     esi
0x7578D2: pop     ebx
0x7578D3: retn    4
