0x8C8660: push    ebp
0x8C8661: mov     ebp, esp
0x8C8663: and     esp, 0FFFFFFF0h
0x8C8666: sub     esp, 74h
0x8C8669: mov     eax, ds:0B30AACh
0x8C866E: xor     eax, esp
0x8C8670: mov     [esp+74h+var_4], eax
0x8C8674: push    ebx
0x8C8675: push    esi
0x8C8676: mov     esi, [ebp+arg_0]
0x8C8679: push    edi
0x8C867A: push    esi
0x8C867B: mov     ebx, ecx
0x8C867D: call    sub_8AEAC0
0x8C8682: mov     eax, ds:0BA8144h
0x8C8687: push    eax; ArgList
0x8C8688: call    TESOutput_PrintString
0x8C868D: movzx   edi, word ptr [esi+0Ah]
0x8C8691: movzx   ecx, word ptr [esi+8]
0x8C8695: add     esp, 4
0x8C8698: cmp     edi, ecx
0x8C869A: mov     [esp+80h+var_70], eax
0x8C869E: jb      short loc_8C86AE
0x8C86A0: movzx   edx, word ptr [esi+0Eh]
0x8C86A4: add     edx, edi
0x8C86A6: push    edx
0x8C86A7: mov     ecx, esi
0x8C86A9: call    NiTArray_SetSize
0x8C86AE: lea     eax, [esp+80h+var_70]
0x8C86B2: push    eax
0x8C86B3: push    edi
0x8C86B4: mov     ecx, esi
0x8C86B6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C86BB: fld     dword ptr ds:0B2EFC4h
0x8C86C1: fstp    [esp+80h+var_5C]
0x8C86C5: lea     ecx, [esp+80h+var_60]
0x8C86C9: fldz
0x8C86CB: push    ecx
0x8C86CC: fst     [esp+84h+var_30]
0x8C86D0: mov     ecx, ebx
0x8C86D2: fst     [esp+84h+var_50]
0x8C86D6: mov     [esp+84h+var_60], 0
0x8C86DE: fst     [esp+84h+var_4C]
0x8C86E2: fst     [esp+84h+var_48]
0x8C86E6: fst     [esp+84h+var_44]
0x8C86EA: fld1
0x8C86EC: fstp    [esp+84h+var_40]
0x8C86F0: fst     [esp+84h+var_3C]
0x8C86F4: fst     [esp+84h+var_38]
0x8C86F8: fstp    [esp+84h+var_34]
0x8C86FC: call    sub_8C8080
0x8C8701: fld     [esp+80h+var_30]
0x8C8705: push    ecx
0x8C8706: fstp    [esp+84h+var_84]; float
0x8C8709: push    offset off_A996C8; ArgList
0x8C870E: call    TESOutput_PrintLabeledFloat
0x8C8713: movzx   edi, word ptr [esi+0Ah]
0x8C8717: movzx   edx, word ptr [esi+8]
0x8C871B: add     esp, 8
0x8C871E: cmp     edi, edx
0x8C8720: mov     [esp+80h+var_70], eax
0x8C8724: jb      short loc_8C8734
0x8C8726: movzx   eax, word ptr [esi+0Eh]
0x8C872A: add     eax, edi
0x8C872C: push    eax
0x8C872D: mov     ecx, esi
0x8C872F: call    NiTArray_SetSize
0x8C8734: lea     ecx, [esp+80h+var_70]
0x8C8738: push    ecx
0x8C8739: push    edi
0x8C873A: mov     ecx, esi
0x8C873C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C8741: fld     [esp+80h+var_50]
0x8C8745: fstp    [esp+80h+var_20]
0x8C8749: lea     edx, [esp+80h+var_20]
0x8C874D: fld     [esp+80h+var_4C]
0x8C8751: push    edx
0x8C8752: fstp    [esp+84h+var_1C]
0x8C8756: lea     eax, [esp+84h+var_6C]
0x8C875A: fld     [esp+84h+var_48]
0x8C875E: push    eax
0x8C875F: fstp    [esp+88h+var_18]
0x8C8763: fld     [esp+88h+var_44]
0x8C8767: fstp    [esp+88h+var_14]
0x8C876B: call    sub_4D68A0
0x8C8770: add     esp, 8
0x8C8773: push    offset unk_A996C4; ArgList
0x8C8778: lea     ecx, [esp+84h+var_6C]
0x8C877C: call    sub_707280
0x8C8781: movzx   edi, word ptr [esi+0Ah]
0x8C8785: movzx   ecx, word ptr [esi+8]
0x8C8789: cmp     edi, ecx
0x8C878B: mov     [esp+80h+var_70], eax
0x8C878F: jb      short loc_8C879F
0x8C8791: movzx   edx, word ptr [esi+0Eh]
0x8C8795: add     edx, edi
0x8C8797: push    edx
0x8C8798: mov     ecx, esi
0x8C879A: call    NiTArray_SetSize
0x8C879F: lea     eax, [esp+80h+var_70]
0x8C87A3: push    eax
0x8C87A4: push    edi
0x8C87A5: mov     ecx, esi
0x8C87A7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C87AC: fld     [esp+80h+var_40]
0x8C87B0: fstp    [esp+80h+var_20]
0x8C87B4: lea     ecx, [esp+80h+var_20]
0x8C87B8: fld     [esp+80h+var_3C]
0x8C87BC: push    ecx
0x8C87BD: fstp    [esp+84h+var_1C]
0x8C87C1: lea     edx, [esp+84h+var_6C]
0x8C87C5: fld     [esp+84h+var_38]
0x8C87C9: push    edx
0x8C87CA: fstp    [esp+88h+var_18]
0x8C87CE: fld     [esp+88h+var_34]
0x8C87D2: fstp    [esp+88h+var_14]
0x8C87D6: call    sub_4D68A0
0x8C87DB: add     esp, 8
0x8C87DE: push    offset unk_A996C0; ArgList
0x8C87E3: lea     ecx, [esp+84h+var_6C]
0x8C87E7: call    sub_707280
0x8C87EC: movzx   edi, word ptr [esi+0Ah]
0x8C87F0: mov     [esp+80h+var_70], eax
0x8C87F4: movzx   eax, word ptr [esi+8]
0x8C87F8: cmp     edi, eax
0x8C87FA: jb      short loc_8C880A
0x8C87FC: movzx   ecx, word ptr [esi+0Eh]
0x8C8800: add     ecx, edi
0x8C8802: push    ecx
0x8C8803: mov     ecx, esi
0x8C8805: call    NiTArray_SetSize
0x8C880A: lea     edx, [esp+80h+var_70]
0x8C880E: push    edx
0x8C880F: push    edi
0x8C8810: mov     ecx, esi
0x8C8812: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C8817: mov     ecx, [esp+80h+var_4]
0x8C881B: pop     edi
0x8C881C: pop     esi
0x8C881D: pop     ebx
0x8C881E: xor     ecx, esp
0x8C8820: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C8825: mov     esp, ebp
0x8C8827: pop     ebp
0x8C8828: retn    4
