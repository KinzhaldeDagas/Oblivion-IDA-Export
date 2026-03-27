0x721730: push    ecx
0x721731: mov     eax, ds:0B3FD44h
0x721736: push    ebx
0x721737: push    esi
0x721738: push    edi
0x721739: push    eax; ArgList
0x72173A: mov     ebx, ecx
0x72173C: call    TESOutput_PrintString
0x721741: mov     esi, [esp+14h+arg_0]
0x721745: movzx   edi, word ptr [esi+0Ah]
0x721749: movzx   ecx, word ptr [esi+8]
0x72174D: add     esp, 4
0x721750: cmp     edi, ecx
0x721752: mov     [esp+10h+var_4], eax
0x721756: jb      short loc_721766
0x721758: movzx   edx, word ptr [esi+0Eh]
0x72175C: add     edx, edi
0x72175E: push    edx
0x72175F: mov     ecx, esi
0x721761: call    NiTArray_SetSize
0x721766: lea     eax, [esp+10h+var_4]
0x72176A: push    eax
0x72176B: push    edi
0x72176C: mov     ecx, esi
0x72176E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x721773: mov     eax, [ebx+8]
0x721776: push    eax; int
0x721777: push    offset aM_pcname; "m_pcName"
0x72177C: call    TESOutput_PrintLabeledString
0x721781: movzx   edi, word ptr [esi+0Ah]
0x721785: movzx   ecx, word ptr [esi+8]
0x721789: add     esp, 8
0x72178C: cmp     edi, ecx
0x72178E: mov     [esp+10h+arg_0], eax
0x721792: jb      short loc_7217A2
0x721794: movzx   edx, word ptr [esi+0Eh]
0x721798: add     edx, edi
0x72179A: push    edx
0x72179B: mov     ecx, esi
0x72179D: call    NiTArray_SetSize
0x7217A2: lea     eax, [esp+10h+arg_0]
0x7217A6: push    eax
0x7217A7: push    edi
0x7217A8: mov     ecx, esi
0x7217AA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7217AF: pop     edi
0x7217B0: pop     esi
0x7217B1: pop     ebx
0x7217B2: pop     ecx
0x7217B3: retn    4
