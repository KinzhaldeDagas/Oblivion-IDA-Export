0x6E37C0: push    ebx
0x6E37C1: push    esi
0x6E37C2: mov     esi, [esp+8+a2]
0x6E37C6: push    edi
0x6E37C7: push    esi; a2
0x6E37C8: mov     ebx, ecx
0x6E37CA: call    sub_7009A0
0x6E37CF: mov     eax, ds:0B3E238h
0x6E37D4: push    eax; ArgList
0x6E37D5: call    TESOutput_PrintString
0x6E37DA: movzx   edi, word ptr [esi+0Ah]
0x6E37DE: movzx   ecx, word ptr [esi+8]
0x6E37E2: add     esp, 4
0x6E37E5: cmp     edi, ecx
0x6E37E7: mov     [esp+0Ch+a2], eax
0x6E37EB: jb      short loc_6E37FB
0x6E37ED: movzx   edx, word ptr [esi+0Eh]
0x6E37F1: add     edx, edi
0x6E37F3: push    edx
0x6E37F4: mov     ecx, esi
0x6E37F6: call    NiTArray_SetSize
0x6E37FB: lea     eax, [esp+0Ch+a2]
0x6E37FF: push    eax
0x6E3800: push    edi
0x6E3801: mov     ecx, esi
0x6E3803: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3808: mov     ecx, [ebx+8]
0x6E380B: push    ecx; int
0x6E380C: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6E3811: call    TESOutput_PrintLabeledUnsignedInt
0x6E3816: movzx   edi, word ptr [esi+0Ah]
0x6E381A: movzx   edx, word ptr [esi+8]
0x6E381E: add     esp, 8
0x6E3821: cmp     edi, edx
0x6E3823: mov     [esp+0Ch+a2], eax
0x6E3827: jb      short loc_6E3837
0x6E3829: movzx   eax, word ptr [esi+0Eh]
0x6E382D: add     eax, edi
0x6E382F: push    eax
0x6E3830: mov     ecx, esi
0x6E3832: call    NiTArray_SetSize
0x6E3837: lea     ecx, [esp+0Ch+a2]
0x6E383B: push    ecx
0x6E383C: push    edi
0x6E383D: mov     ecx, esi
0x6E383F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3844: pop     edi
0x6E3845: pop     esi
0x6E3846: pop     ebx
0x6E3847: retn    4
