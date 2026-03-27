0x7544B0: push    ebx
0x7544B1: push    esi
0x7544B2: mov     esi, [esp+8+arg_0]
0x7544B6: push    edi
0x7544B7: push    esi
0x7544B8: mov     ebx, ecx
0x7544BA: call    sub_75EAA0
0x7544BF: mov     eax, ds:0B40E5Ch
0x7544C4: push    eax; ArgList
0x7544C5: call    TESOutput_PrintString
0x7544CA: movzx   edi, word ptr [esi+0Ah]
0x7544CE: movzx   ecx, word ptr [esi+8]
0x7544D2: add     esp, 4
0x7544D5: cmp     edi, ecx
0x7544D7: mov     [esp+0Ch+arg_0], eax
0x7544DB: jb      short loc_7544EB
0x7544DD: movzx   edx, word ptr [esi+0Eh]
0x7544E1: add     edx, edi
0x7544E3: push    edx
0x7544E4: mov     ecx, esi
0x7544E6: call    NiTArray_SetSize
0x7544EB: lea     eax, [esp+0Ch+arg_0]
0x7544EF: push    eax
0x7544F0: push    edi
0x7544F1: mov     ecx, esi
0x7544F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7544F8: fld     dword ptr [ebx+30h]
0x7544FB: push    ecx
0x7544FC: fstp    [esp+10h+var_10]; float
0x7544FF: push    offset aFrequency_0; "Frequency"
0x754504: call    TESOutput_PrintLabeledFloat
0x754509: movzx   edi, word ptr [esi+0Ah]
0x75450D: movzx   ecx, word ptr [esi+8]
0x754511: add     esp, 8
0x754514: cmp     edi, ecx
0x754516: mov     [esp+0Ch+arg_0], eax
0x75451A: jb      short loc_75452A
0x75451C: movzx   edx, word ptr [esi+0Eh]
0x754520: add     edx, edi
0x754522: push    edx
0x754523: mov     ecx, esi
0x754525: call    NiTArray_SetSize
0x75452A: lea     eax, [esp+0Ch+arg_0]
0x75452E: push    eax
0x75452F: push    edi
0x754530: mov     ecx, esi
0x754532: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x754537: pop     edi
0x754538: pop     esi
0x754539: pop     ebx
0x75453A: retn    4
