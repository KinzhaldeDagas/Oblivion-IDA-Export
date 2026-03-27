0x74D090: push    ebx
0x74D091: push    esi
0x74D092: mov     esi, [esp+8+arg_0]
0x74D096: push    edi
0x74D097: push    esi
0x74D098: mov     ebx, ecx
0x74D09A: call    sub_7531E0
0x74D09F: mov     eax, ds:0B40968h
0x74D0A4: push    eax; ArgList
0x74D0A5: call    TESOutput_PrintString
0x74D0AA: movzx   edi, word ptr [esi+0Ah]
0x74D0AE: movzx   ecx, word ptr [esi+8]
0x74D0B2: add     esp, 4
0x74D0B5: cmp     edi, ecx
0x74D0B7: mov     [esp+0Ch+arg_0], eax
0x74D0BB: jb      short loc_74D0CB
0x74D0BD: movzx   edx, word ptr [esi+0Eh]
0x74D0C1: add     edx, edi
0x74D0C3: push    edx
0x74D0C4: mov     ecx, esi
0x74D0C6: call    NiTArray_SetSize
0x74D0CB: lea     eax, [esp+0Ch+arg_0]
0x74D0CF: push    eax
0x74D0D0: push    edi
0x74D0D1: mov     ecx, esi
0x74D0D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D0D8: fld     dword ptr [ebx+54h]
0x74D0DB: push    ecx
0x74D0DC: fstp    [esp+10h+var_10]; float
0x74D0DF: push    offset aRadius; "Radius"
0x74D0E4: call    TESOutput_PrintLabeledFloat
0x74D0E9: movzx   edi, word ptr [esi+0Ah]
0x74D0ED: movzx   ecx, word ptr [esi+8]
0x74D0F1: add     esp, 8
0x74D0F4: cmp     edi, ecx
0x74D0F6: mov     [esp+0Ch+arg_0], eax
0x74D0FA: jb      short loc_74D10A
0x74D0FC: movzx   edx, word ptr [esi+0Eh]
0x74D100: add     edx, edi
0x74D102: push    edx
0x74D103: mov     ecx, esi
0x74D105: call    NiTArray_SetSize
0x74D10A: lea     eax, [esp+0Ch+arg_0]
0x74D10E: push    eax
0x74D10F: push    edi
0x74D110: mov     ecx, esi
0x74D112: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D117: pop     edi
0x74D118: pop     esi
0x74D119: pop     ebx
0x74D11A: retn    4
