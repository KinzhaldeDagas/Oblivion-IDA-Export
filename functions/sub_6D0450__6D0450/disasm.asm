0x6D0450: push    ebx
0x6D0451: push    esi
0x6D0452: mov     esi, [esp+8+arg_0]
0x6D0456: push    edi
0x6D0457: push    esi
0x6D0458: mov     ebx, ecx
0x6D045A: call    sub_6D05C0
0x6D045F: mov     eax, ds:0B3CD7Ch
0x6D0464: push    eax; ArgList
0x6D0465: call    TESOutput_PrintString
0x6D046A: movzx   edi, word ptr [esi+0Ah]
0x6D046E: movzx   ecx, word ptr [esi+8]
0x6D0472: add     esp, 4
0x6D0475: cmp     edi, ecx
0x6D0477: mov     [esp+0Ch+arg_0], eax
0x6D047B: jb      short loc_6D048B
0x6D047D: movzx   edx, word ptr [esi+0Eh]
0x6D0481: add     edx, edi
0x6D0483: push    edx
0x6D0484: mov     ecx, esi
0x6D0486: call    NiTArray_SetSize
0x6D048B: lea     eax, [esp+0Ch+arg_0]
0x6D048F: push    eax
0x6D0490: push    edi
0x6D0491: mov     ecx, esi
0x6D0493: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D0498: movzx   ecx, word ptr [ebx+44h]
0x6D049C: push    ecx; __int16
0x6D049D: push    offset aM_usnuminterps; "m_usNumInterps"
0x6D04A2: call    TESOutput_PrintLabeledUnsignedShort
0x6D04A7: movzx   edi, word ptr [esi+0Ah]
0x6D04AB: movzx   edx, word ptr [esi+8]
0x6D04AF: add     esp, 8
0x6D04B2: cmp     edi, edx
0x6D04B4: mov     [esp+0Ch+arg_0], eax
0x6D04B8: jb      short loc_6D04C8
0x6D04BA: movzx   eax, word ptr [esi+0Eh]
0x6D04BE: add     eax, edi
0x6D04C0: push    eax
0x6D04C1: mov     ecx, esi
0x6D04C3: call    NiTArray_SetSize
0x6D04C8: lea     ecx, [esp+0Ch+arg_0]
0x6D04CC: push    ecx
0x6D04CD: push    edi
0x6D04CE: mov     ecx, esi
0x6D04D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D04D5: pop     edi
0x6D04D6: pop     esi
0x6D04D7: pop     ebx
0x6D04D8: retn    4
