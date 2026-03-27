0x70EE40: push    ebx
0x70EE41: push    esi
0x70EE42: mov     esi, [esp+8+a2]
0x70EE46: push    edi
0x70EE47: push    esi; a2
0x70EE48: mov     edi, ecx
0x70EE4A: call    sub_7009A0
0x70EE4F: mov     eax, ds:0B3FAD4h
0x70EE54: push    eax; ArgList
0x70EE55: call    TESOutput_PrintString
0x70EE5A: movzx   ebx, word ptr [esi+0Ah]
0x70EE5E: movzx   ecx, word ptr [esi+8]
0x70EE62: add     esp, 4
0x70EE65: cmp     ebx, ecx
0x70EE67: mov     [esp+0Ch+a2], eax
0x70EE6B: jb      short loc_70EE7B
0x70EE6D: movzx   edx, word ptr [esi+0Eh]
0x70EE71: add     edx, ebx
0x70EE73: push    edx
0x70EE74: mov     ecx, esi
0x70EE76: call    NiTArray_SetSize
0x70EE7B: lea     eax, [esp+0Ch+a2]
0x70EE7F: push    eax
0x70EE80: push    ebx
0x70EE81: mov     ecx, esi
0x70EE83: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EE88: mov     ecx, [edi+54h]
0x70EE8B: mov     eax, [ecx]
0x70EE8D: push    eax; int
0x70EE8E: push    offset aWidth_1; "Width"
0x70EE93: call    TESOutput_PrintLabeledUnsignedInt
0x70EE98: movzx   ebx, word ptr [esi+0Ah]
0x70EE9C: movzx   edx, word ptr [esi+8]
0x70EEA0: add     esp, 8
0x70EEA3: cmp     ebx, edx
0x70EEA5: mov     [esp+0Ch+a2], eax
0x70EEA9: jb      short loc_70EEB9
0x70EEAB: movzx   eax, word ptr [esi+0Eh]
0x70EEAF: add     eax, ebx
0x70EEB1: push    eax
0x70EEB2: mov     ecx, esi
0x70EEB4: call    NiTArray_SetSize
0x70EEB9: lea     ecx, [esp+0Ch+a2]
0x70EEBD: push    ecx
0x70EEBE: push    ebx
0x70EEBF: mov     ecx, esi
0x70EEC1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EEC6: mov     edx, [edi+58h]
0x70EEC9: mov     eax, [edx]
0x70EECB: push    eax; int
0x70EECC: push    offset aHeight_1; "Height"
0x70EED1: call    TESOutput_PrintLabeledUnsignedInt
0x70EED6: movzx   ebx, word ptr [esi+0Ah]
0x70EEDA: mov     [esp+14h+a2], eax
0x70EEDE: movzx   eax, word ptr [esi+8]
0x70EEE2: add     esp, 8
0x70EEE5: cmp     ebx, eax
0x70EEE7: jb      short loc_70EEF7
0x70EEE9: movzx   ecx, word ptr [esi+0Eh]
0x70EEED: add     ecx, ebx
0x70EEEF: push    ecx
0x70EEF0: mov     ecx, esi
0x70EEF2: call    NiTArray_SetSize
0x70EEF7: lea     edx, [esp+0Ch+a2]
0x70EEFB: push    edx
0x70EEFC: push    ebx
0x70EEFD: mov     ecx, esi
0x70EEFF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EF04: mov     eax, [edi+60h]
0x70EF07: push    eax; int
0x70EF08: push    offset aM_uimipmapleve; "m_uiMipmapLevels"
0x70EF0D: call    TESOutput_PrintLabeledUnsignedInt
0x70EF12: movzx   ebx, word ptr [esi+0Ah]
0x70EF16: movzx   ecx, word ptr [esi+8]
0x70EF1A: add     esp, 8
0x70EF1D: cmp     ebx, ecx
0x70EF1F: mov     [esp+0Ch+a2], eax
0x70EF23: jb      short loc_70EF33
0x70EF25: movzx   edx, word ptr [esi+0Eh]
0x70EF29: add     edx, ebx
0x70EF2B: push    edx
0x70EF2C: mov     ecx, esi
0x70EF2E: call    NiTArray_SetSize
0x70EF33: lea     eax, [esp+0Ch+a2]
0x70EF37: push    eax
0x70EF38: push    ebx
0x70EF39: mov     ecx, esi
0x70EF3B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EF40: mov     ecx, [edi+6Ch]
0x70EF43: push    ecx; int
0x70EF44: push    offset aM_uifaces; "m_uiFaces"
0x70EF49: call    TESOutput_PrintLabeledUnsignedInt
0x70EF4E: movzx   ebx, word ptr [esi+0Ah]
0x70EF52: movzx   edx, word ptr [esi+8]
0x70EF56: add     esp, 8
0x70EF59: cmp     ebx, edx
0x70EF5B: mov     [esp+0Ch+a2], eax
0x70EF5F: jb      short loc_70EF6F
0x70EF61: movzx   eax, word ptr [esi+0Eh]
0x70EF65: add     eax, ebx
0x70EF67: push    eax
0x70EF68: mov     ecx, esi
0x70EF6A: call    NiTArray_SetSize
0x70EF6F: lea     ecx, [esp+0Ch+a2]
0x70EF73: push    ecx
0x70EF74: push    ebx
0x70EF75: mov     ecx, esi
0x70EF77: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EF7C: mov     edx, [edi+60h]
0x70EF7F: mov     eax, [edi+5Ch]
0x70EF82: mov     eax, [eax+edx*4]
0x70EF85: imul    eax, [edi+6Ch]
0x70EF89: push    eax; int
0x70EF8A: push    offset aTotalsizeinbyt; "TotalSizeInBytes"
0x70EF8F: call    TESOutput_PrintLabeledUnsignedInt
0x70EF94: movzx   ebx, word ptr [esi+0Ah]
0x70EF98: movzx   ecx, word ptr [esi+8]
0x70EF9C: add     esp, 8
0x70EF9F: cmp     ebx, ecx
0x70EFA1: mov     [esp+0Ch+a2], eax
0x70EFA5: jb      short loc_70EFB5
0x70EFA7: movzx   edx, word ptr [esi+0Eh]
0x70EFAB: add     edx, ebx
0x70EFAD: push    edx
0x70EFAE: mov     ecx, esi
0x70EFB0: call    NiTArray_SetSize
0x70EFB5: lea     eax, [esp+0Ch+a2]
0x70EFB9: push    eax
0x70EFBA: push    ebx
0x70EFBB: mov     ecx, esi
0x70EFBD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70EFC2: mov     ecx, [edi+60h]
0x70EFC5: mov     edx, [edi+5Ch]
0x70EFC8: mov     eax, [edx+ecx*4]
0x70EFCB: push    eax; int
0x70EFCC: push    offset aFacesizeinbyte; "FaceSizeInBytes"
0x70EFD1: call    TESOutput_PrintLabeledUnsignedInt
0x70EFD6: movzx   edi, word ptr [esi+0Ah]
0x70EFDA: mov     [esp+14h+a2], eax
0x70EFDE: movzx   eax, word ptr [esi+8]
0x70EFE2: add     esp, 8
0x70EFE5: cmp     edi, eax
0x70EFE7: jb      short loc_70EFF7
0x70EFE9: movzx   ecx, word ptr [esi+0Eh]
0x70EFED: add     ecx, edi
0x70EFEF: push    ecx
0x70EFF0: mov     ecx, esi
0x70EFF2: call    NiTArray_SetSize
0x70EFF7: lea     edx, [esp+0Ch+a2]
0x70EFFB: push    edx
0x70EFFC: push    edi
0x70EFFD: mov     ecx, esi
0x70EFFF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70F004: pop     edi
0x70F005: pop     esi
0x70F006: pop     ebx
0x70F007: retn    4
