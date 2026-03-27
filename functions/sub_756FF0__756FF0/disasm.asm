0x756FF0: push    ebx
0x756FF1: push    esi
0x756FF2: mov     esi, [esp+8+arg_0]
0x756FF6: push    edi
0x756FF7: push    esi
0x756FF8: mov     edi, ecx
0x756FFA: call    sub_752EC0
0x756FFF: mov     eax, ds:0B4128Ch
0x757004: push    eax; ArgList
0x757005: call    TESOutput_PrintString
0x75700A: movzx   ebx, word ptr [esi+0Ah]
0x75700E: movzx   ecx, word ptr [esi+8]
0x757012: add     esp, 4
0x757015: cmp     ebx, ecx
0x757017: mov     [esp+0Ch+arg_0], eax
0x75701B: jb      short loc_75702B
0x75701D: movzx   edx, word ptr [esi+0Eh]
0x757021: add     edx, ebx
0x757023: push    edx
0x757024: mov     ecx, esi
0x757026: call    NiTArray_SetSize
0x75702B: lea     eax, [esp+0Ch+arg_0]
0x75702F: push    eax
0x757030: push    ebx
0x757031: mov     ecx, esi
0x757033: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757038: fld     dword ptr [edi+18h]
0x75703B: push    ecx
0x75703C: fstp    [esp+10h+var_10]; float
0x75703F: push    offset aGrowTime; "Grow Time"
0x757044: call    TESOutput_PrintLabeledFloat
0x757049: movzx   ebx, word ptr [esi+0Ah]
0x75704D: movzx   ecx, word ptr [esi+8]
0x757051: add     esp, 8
0x757054: cmp     ebx, ecx
0x757056: mov     [esp+0Ch+arg_0], eax
0x75705A: jb      short loc_75706A
0x75705C: movzx   edx, word ptr [esi+0Eh]
0x757060: add     edx, ebx
0x757062: push    edx
0x757063: mov     ecx, esi
0x757065: call    NiTArray_SetSize
0x75706A: lea     eax, [esp+0Ch+arg_0]
0x75706E: push    eax
0x75706F: push    ebx
0x757070: mov     ecx, esi
0x757072: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757077: movzx   ecx, word ptr [edi+1Ch]
0x75707B: push    ecx; __int16
0x75707C: push    offset aGrowGeneration; "Grow Generation"
0x757081: call    TESOutput_PrintLabeledUnsignedShort
0x757086: movzx   ebx, word ptr [esi+0Ah]
0x75708A: movzx   edx, word ptr [esi+8]
0x75708E: add     esp, 8
0x757091: cmp     ebx, edx
0x757093: mov     [esp+0Ch+arg_0], eax
0x757097: jb      short loc_7570A7
0x757099: movzx   eax, word ptr [esi+0Eh]
0x75709D: add     eax, ebx
0x75709F: push    eax
0x7570A0: mov     ecx, esi
0x7570A2: call    NiTArray_SetSize
0x7570A7: lea     ecx, [esp+0Ch+arg_0]
0x7570AB: push    ecx
0x7570AC: push    ebx
0x7570AD: mov     ecx, esi
0x7570AF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7570B4: fld     dword ptr [edi+20h]
0x7570B7: push    ecx
0x7570B8: fstp    [esp+10h+var_10]; float
0x7570BB: push    offset aFadeTime; "Fade Time"
0x7570C0: call    TESOutput_PrintLabeledFloat
0x7570C5: movzx   ebx, word ptr [esi+0Ah]
0x7570C9: movzx   edx, word ptr [esi+8]
0x7570CD: add     esp, 8
0x7570D0: cmp     ebx, edx
0x7570D2: mov     [esp+0Ch+arg_0], eax
0x7570D6: jb      short loc_7570E6
0x7570D8: movzx   eax, word ptr [esi+0Eh]
0x7570DC: add     eax, ebx
0x7570DE: push    eax
0x7570DF: mov     ecx, esi
0x7570E1: call    NiTArray_SetSize
0x7570E6: lea     ecx, [esp+0Ch+arg_0]
0x7570EA: push    ecx
0x7570EB: push    ebx
0x7570EC: mov     ecx, esi
0x7570EE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7570F3: movzx   edx, word ptr [edi+24h]
0x7570F7: push    edx; __int16
0x7570F8: push    offset aFadeGeneration; "Fade Generation"
0x7570FD: call    TESOutput_PrintLabeledUnsignedShort
0x757102: movzx   edi, word ptr [esi+0Ah]
0x757106: mov     [esp+14h+arg_0], eax
0x75710A: movzx   eax, word ptr [esi+8]
0x75710E: add     esp, 8
0x757111: cmp     edi, eax
0x757113: jb      short loc_757123
0x757115: movzx   ecx, word ptr [esi+0Eh]
0x757119: add     ecx, edi
0x75711B: push    ecx
0x75711C: mov     ecx, esi
0x75711E: call    NiTArray_SetSize
0x757123: lea     edx, [esp+0Ch+arg_0]
0x757127: push    edx
0x757128: push    edi
0x757129: mov     ecx, esi
0x75712B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757130: pop     edi
0x757131: pop     esi
0x757132: pop     ebx
0x757133: retn    4
