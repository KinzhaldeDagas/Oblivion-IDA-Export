0x7281F0: push    ebx
0x7281F1: push    esi
0x7281F2: mov     esi, [esp+8+arg_0]
0x7281F6: push    edi
0x7281F7: push    esi
0x7281F8: mov     ebx, ecx
0x7281FA: call    sub_721730
0x7281FF: mov     eax, ds:0B3FDA0h
0x728204: push    eax; ArgList
0x728205: call    TESOutput_PrintString
0x72820A: movzx   edi, word ptr [esi+0Ah]
0x72820E: movzx   ecx, word ptr [esi+8]
0x728212: add     esp, 4
0x728215: cmp     edi, ecx
0x728217: mov     [esp+0Ch+arg_0], eax
0x72821B: jb      short loc_72822B
0x72821D: movzx   edx, word ptr [esi+0Eh]
0x728221: add     edx, edi
0x728223: push    edx
0x728224: mov     ecx, esi
0x728226: call    NiTArray_SetSize
0x72822B: lea     eax, [esp+0Ch+arg_0]
0x72822F: push    eax
0x728230: push    edi
0x728231: mov     ecx, esi
0x728233: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x728238: mov     ecx, [ebx+10h]
0x72823B: push    ecx; int
0x72823C: push    offset aM_uisize; "m_uiSize"
0x728241: call    TESOutput_PrintLabeledUnsignedInt
0x728246: movzx   edi, word ptr [esi+0Ah]
0x72824A: movzx   edx, word ptr [esi+8]
0x72824E: add     esp, 8
0x728251: cmp     edi, edx
0x728253: mov     [esp+0Ch+arg_0], eax
0x728257: jb      short loc_728267
0x728259: movzx   eax, word ptr [esi+0Eh]
0x72825D: add     eax, edi
0x72825F: push    eax
0x728260: mov     ecx, esi
0x728262: call    NiTArray_SetSize
0x728267: lea     ecx, [esp+0Ch+arg_0]
0x72826B: push    ecx
0x72826C: push    edi
0x72826D: mov     ecx, esi
0x72826F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x728274: pop     edi
0x728275: pop     esi
0x728276: pop     ebx
0x728277: retn    4
