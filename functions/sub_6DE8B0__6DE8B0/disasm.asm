0x6DE8B0: push    ecx
0x6DE8B1: push    ebx
0x6DE8B2: push    ebp
0x6DE8B3: push    esi
0x6DE8B4: mov     esi, [esp+10h+a2]
0x6DE8B8: push    edi
0x6DE8B9: mov     ebx, ecx
0x6DE8BB: push    esi; a2
0x6DE8BC: mov     [esp+18h+var_4], ebx
0x6DE8C0: call    sub_7009A0
0x6DE8C5: mov     eax, ds:0B3DE14h
0x6DE8CA: push    eax; ArgList
0x6DE8CB: call    TESOutput_PrintString
0x6DE8D0: movzx   edi, word ptr [esi+0Ah]
0x6DE8D4: movzx   ecx, word ptr [esi+8]
0x6DE8D8: add     esp, 4
0x6DE8DB: cmp     edi, ecx
0x6DE8DD: mov     [esp+14h+a2], eax
0x6DE8E1: jb      short loc_6DE8F1
0x6DE8E3: movzx   edx, word ptr [esi+0Eh]
0x6DE8E7: add     edx, edi
0x6DE8E9: push    edx
0x6DE8EA: mov     ecx, esi
0x6DE8EC: call    NiTArray_SetSize
0x6DE8F1: lea     eax, [esp+14h+a2]
0x6DE8F5: push    eax
0x6DE8F6: push    edi
0x6DE8F7: mov     ecx, esi
0x6DE8F9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DE8FE: mov     ecx, [ebx+8]
0x6DE901: push    ecx; int
0x6DE902: push    offset aM_uinumtargets; "m_uiNumTargets"
0x6DE907: call    TESOutput_PrintLabeledUnsignedInt
0x6DE90C: movzx   edi, word ptr [esi+0Ah]
0x6DE910: movzx   edx, word ptr [esi+8]
0x6DE914: add     esp, 8
0x6DE917: cmp     edi, edx
0x6DE919: mov     [esp+14h+a2], eax
0x6DE91D: jb      short loc_6DE92D
0x6DE91F: movzx   eax, word ptr [esi+0Eh]
0x6DE923: add     eax, edi
0x6DE925: push    eax
0x6DE926: mov     ecx, esi
0x6DE928: call    NiTArray_SetSize
0x6DE92D: lea     ecx, [esp+14h+a2]
0x6DE931: push    ecx
0x6DE932: push    edi
0x6DE933: mov     ecx, esi
0x6DE935: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DE93A: mov     edx, [ebx+0Ch]
0x6DE93D: push    edx; int
0x6DE93E: push    offset aM_uinumvertspe; "m_uiNumVertsPerTarget"
0x6DE943: call    TESOutput_PrintLabeledUnsignedInt
0x6DE948: movzx   edi, word ptr [esi+0Ah]
0x6DE94C: mov     [esp+1Ch+a2], eax
0x6DE950: movzx   eax, word ptr [esi+8]
0x6DE954: add     esp, 8
0x6DE957: cmp     edi, eax
0x6DE959: jb      short loc_6DE969
0x6DE95B: movzx   ecx, word ptr [esi+0Eh]
0x6DE95F: add     ecx, edi
0x6DE961: push    ecx
0x6DE962: mov     ecx, esi
0x6DE964: call    NiTArray_SetSize
0x6DE969: lea     edx, [esp+14h+a2]
0x6DE96D: push    edx
0x6DE96E: push    edi
0x6DE96F: mov     ecx, esi
0x6DE971: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DE976: push    offset aMorphtargets; "MorphTargets"
0x6DE97B: call    TESOutput_PrintString
0x6DE980: movzx   edi, word ptr [esi+0Ah]
0x6DE984: mov     [esp+18h+a2], eax
0x6DE988: movzx   eax, word ptr [esi+8]
0x6DE98C: add     esp, 4
0x6DE98F: cmp     edi, eax
0x6DE991: jb      short loc_6DE9A1
0x6DE993: movzx   ecx, word ptr [esi+0Eh]
0x6DE997: add     ecx, edi
0x6DE999: push    ecx
0x6DE99A: mov     ecx, esi
0x6DE99C: call    NiTArray_SetSize
0x6DE9A1: lea     edx, [esp+14h+a2]
0x6DE9A5: push    edx
0x6DE9A6: push    edi
0x6DE9A7: mov     ecx, esi
0x6DE9A9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DE9AE: mov     eax, [ebx+8]
0x6DE9B1: xor     ebp, ebp
0x6DE9B3: cmp     eax, ebp
0x6DE9B5: jbe     loc_6DEA59
0x6DE9BB: mov     [esp+14h+a2], ebp
0x6DE9BF: jmp     short loc_6DE9C3
0x6DE9C1: mov     ebx, ecx
0x6DE9C3: cmp     ebp, eax
0x6DE9C5: jnb     short loc_6DE9D0
0x6DE9C7: mov     eax, [ebx+10h]
0x6DE9CA: add     eax, [esp+14h+a2]
0x6DE9CE: jmp     short loc_6DE9D2
0x6DE9D0: xor     eax, eax
0x6DE9D2: mov     eax, [eax+4]
0x6DE9D5: push    eax; int
0x6DE9D6: push    offset aM_pcname; "m_pcName"
0x6DE9DB: call    TESOutput_PrintLabeledString
0x6DE9E0: movzx   edi, word ptr [esi+0Ah]
0x6DE9E4: mov     ebx, eax
0x6DE9E6: movzx   eax, word ptr [esi+8]
0x6DE9EA: add     esp, 8
0x6DE9ED: cmp     edi, eax
0x6DE9EF: jb      short loc_6DE9FF
0x6DE9F1: movzx   ecx, word ptr [esi+0Eh]
0x6DE9F5: add     ecx, edi
0x6DE9F7: push    ecx
0x6DE9F8: mov     ecx, esi
0x6DE9FA: call    NiTArray_SetSize
0x6DE9FF: movzx   edx, word ptr [esi+0Ah]
0x6DEA03: cmp     edi, edx
0x6DEA05: jb      short loc_6DEA19
0x6DEA07: test    ebx, ebx
0x6DEA09: lea     eax, [edi+1]
0x6DEA0C: mov     [esi+0Ah], ax
0x6DEA10: jz      short loc_6DEA3C
0x6DEA12: add     word ptr [esi+0Ch], 1
0x6DEA17: jmp     short loc_6DEA3C
0x6DEA19: test    ebx, ebx
0x6DEA1B: jz      short loc_6DEA2D
0x6DEA1D: mov     ecx, [esi+4]
0x6DEA20: cmp     dword ptr [ecx+edi*4], 0
0x6DEA24: jnz     short loc_6DEA3C
0x6DEA26: add     word ptr [esi+0Ch], 1
0x6DEA2B: jmp     short loc_6DEA3C
0x6DEA2D: mov     edx, [esi+4]
0x6DEA30: cmp     dword ptr [edx+edi*4], 0
0x6DEA34: jz      short loc_6DEA3C
0x6DEA36: add     word ptr [esi+0Ch], 0FFFFh
0x6DEA3C: mov     eax, [esi+4]
0x6DEA3F: mov     ecx, [esp+14h+var_4]
0x6DEA43: add     [esp+14h+a2], 0Ch
0x6DEA48: mov     [eax+edi*4], ebx
0x6DEA4B: mov     eax, [ecx+8]
0x6DEA4E: add     ebp, 1
0x6DEA51: cmp     ebp, eax
0x6DEA53: jb      loc_6DE9C1
0x6DEA59: pop     edi
0x6DEA5A: pop     esi
0x6DEA5B: pop     ebp
0x6DEA5C: pop     ebx
0x6DEA5D: pop     ecx
0x6DEA5E: retn    4
