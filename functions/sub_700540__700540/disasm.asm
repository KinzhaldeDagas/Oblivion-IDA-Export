0x700540: push    ebx
0x700541: push    esi
0x700542: mov     esi, [esp+8+a2]
0x700546: push    edi
0x700547: push    esi; a2
0x700548: mov     ebx, ecx
0x70054A: call    sub_7009A0
0x70054F: mov     eax, ds:0B3F584h
0x700554: push    eax; ArgList
0x700555: call    TESOutput_PrintString
0x70055A: movzx   edi, word ptr [esi+0Ah]
0x70055E: movzx   ecx, word ptr [esi+8]
0x700562: add     esp, 4
0x700565: cmp     edi, ecx
0x700567: mov     [esp+0Ch+a2], eax
0x70056B: jb      short loc_70057B
0x70056D: movzx   edx, word ptr [esi+0Eh]
0x700571: add     edx, edi
0x700573: push    edx
0x700574: mov     ecx, esi
0x700576: call    NiTArray_SetSize
0x70057B: lea     eax, [esp+0Ch+a2]
0x70057F: push    eax
0x700580: push    edi
0x700581: mov     ecx, esi
0x700583: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x700588: mov     ecx, [ebx+8]
0x70058B: push    ecx; int
0x70058C: push    offset aM_pcname; "m_pcName"
0x700591: call    TESOutput_PrintLabeledString
0x700596: movzx   edi, word ptr [esi+0Ah]
0x70059A: movzx   edx, word ptr [esi+8]
0x70059E: add     esp, 8
0x7005A1: cmp     edi, edx
0x7005A3: mov     [esp+0Ch+a2], eax
0x7005A7: jb      short loc_7005B7
0x7005A9: movzx   eax, word ptr [esi+0Eh]
0x7005AD: add     eax, edi
0x7005AF: push    eax
0x7005B0: mov     ecx, esi
0x7005B2: call    NiTArray_SetSize
0x7005B7: lea     ecx, [esp+0Ch+a2]
0x7005BB: push    ecx
0x7005BC: push    edi
0x7005BD: mov     ecx, esi
0x7005BF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7005C4: pop     edi
0x7005C5: pop     esi
0x7005C6: pop     ebx
0x7005C7: retn    4
