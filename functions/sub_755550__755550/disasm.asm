0x755550: push    ebx
0x755551: push    esi
0x755552: mov     esi, [esp+8+arg_0]
0x755556: push    edi
0x755557: push    esi
0x755558: mov     ebx, ecx
0x75555A: call    sub_75EAA0
0x75555F: mov     eax, ds:0B40F84h
0x755564: push    eax; ArgList
0x755565: call    TESOutput_PrintString
0x75556A: movzx   edi, word ptr [esi+0Ah]
0x75556E: movzx   ecx, word ptr [esi+8]
0x755572: add     esp, 4
0x755575: cmp     edi, ecx
0x755577: mov     [esp+0Ch+arg_0], eax
0x75557B: jb      short loc_75558B
0x75557D: movzx   edx, word ptr [esi+0Eh]
0x755581: add     edx, edi
0x755583: push    edx
0x755584: mov     ecx, esi
0x755586: call    NiTArray_SetSize
0x75558B: lea     eax, [esp+0Ch+arg_0]
0x75558F: push    eax
0x755590: push    edi
0x755591: mov     ecx, esi
0x755593: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x755598: fld     dword ptr [ebx+30h]
0x75559B: push    ecx
0x75559C: fstp    [esp+10h+var_10]; float
0x75559F: push    offset aRadialtype; "RadialType"
0x7555A4: call    TESOutput_PrintLabeledFloat
0x7555A9: movzx   edi, word ptr [esi+0Ah]
0x7555AD: movzx   ecx, word ptr [esi+8]
0x7555B1: add     esp, 8
0x7555B4: cmp     edi, ecx
0x7555B6: mov     [esp+0Ch+arg_0], eax
0x7555BA: jb      short loc_7555CA
0x7555BC: movzx   edx, word ptr [esi+0Eh]
0x7555C0: add     edx, edi
0x7555C2: push    edx
0x7555C3: mov     ecx, esi
0x7555C5: call    NiTArray_SetSize
0x7555CA: lea     eax, [esp+0Ch+arg_0]
0x7555CE: push    eax
0x7555CF: push    edi
0x7555D0: mov     ecx, esi
0x7555D2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7555D7: pop     edi
0x7555D8: pop     esi
0x7555D9: pop     ebx
0x7555DA: retn    4
