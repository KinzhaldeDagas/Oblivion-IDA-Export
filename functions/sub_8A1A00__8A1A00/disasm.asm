0x8A1A00: sub     esp, 28h
0x8A1A03: mov     eax, ds:0B30AACh
0x8A1A08: xor     eax, esp
0x8A1A0A: mov     [esp+28h+var_4], eax
0x8A1A0E: push    ebx
0x8A1A0F: push    esi
0x8A1A10: mov     esi, [esp+30h+arg_0]
0x8A1A14: push    edi
0x8A1A15: push    esi
0x8A1A16: mov     edi, ecx
0x8A1A18: call    sub_8CE640
0x8A1A1D: mov     eax, ds:0BA7D5Ch
0x8A1A22: push    eax; ArgList
0x8A1A23: call    TESOutput_PrintString
0x8A1A28: movzx   ebx, word ptr [esi+0Ah]
0x8A1A2C: movzx   ecx, word ptr [esi+8]
0x8A1A30: add     esp, 4
0x8A1A33: cmp     ebx, ecx
0x8A1A35: mov     [esp+34h+var_28], eax
0x8A1A39: jb      short loc_8A1A49
0x8A1A3B: movzx   edx, word ptr [esi+0Eh]
0x8A1A3F: add     edx, ebx
0x8A1A41: push    edx
0x8A1A42: mov     ecx, esi
0x8A1A44: call    NiTArray_SetSize
0x8A1A49: lea     eax, [esp+34h+var_28]
0x8A1A4D: push    eax
0x8A1A4E: push    ebx
0x8A1A4F: mov     ecx, esi
0x8A1A51: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A1A56: test    edi, edi
0x8A1A58: jz      short loc_8A1A6C
0x8A1A5A: mov     ecx, [edi+8]
0x8A1A5D: test    ecx, ecx
0x8A1A5F: jz      short loc_8A1A6C
0x8A1A61: mov     edx, [ecx]
0x8A1A63: mov     eax, [edx+1Ch]
0x8A1A66: call    eax
0x8A1A68: mov     edi, eax
0x8A1A6A: jmp     short loc_8A1A6E
0x8A1A6C: xor     edi, edi
0x8A1A6E: push    edi; int
0x8A1A6F: push    offset aShapes; "Shapes"
0x8A1A74: call    TESOutput_PrintLabeledSignedInt
0x8A1A79: movzx   ebx, word ptr [esi+0Ah]
0x8A1A7D: movzx   ecx, word ptr [esi+8]
0x8A1A81: add     esp, 8
0x8A1A84: cmp     ebx, ecx
0x8A1A86: mov     [esp+34h+var_28], eax
0x8A1A8A: jb      short loc_8A1A9A
0x8A1A8C: movzx   edx, word ptr [esi+0Eh]
0x8A1A90: add     edx, ebx
0x8A1A92: push    edx
0x8A1A93: mov     ecx, esi
0x8A1A95: call    NiTArray_SetSize
0x8A1A9A: lea     eax, [esp+34h+var_28]
0x8A1A9E: push    eax
0x8A1A9F: push    ebx
0x8A1AA0: mov     ecx, esi
0x8A1AA2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A1AA7: xor     esi, esi
0x8A1AA9: test    edi, edi
0x8A1AAB: jle     short loc_8A1ACA
0x8A1AAD: lea     ecx, [ecx+0]
0x8A1AB0: push    esi
0x8A1AB1: lea     ecx, [esp+38h+var_24]
0x8A1AB5: push    offset aShapeD; "Shape%d"
0x8A1ABA: push    ecx
0x8A1ABB: call    __sprintf
0x8A1AC0: add     esi, 1
0x8A1AC3: add     esp, 0Ch
0x8A1AC6: cmp     esi, edi
0x8A1AC8: jl      short loc_8A1AB0
0x8A1ACA: mov     ecx, [esp+34h+var_4]
0x8A1ACE: pop     edi
0x8A1ACF: pop     esi
0x8A1AD0: pop     ebx
0x8A1AD1: xor     ecx, esp
0x8A1AD3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A1AD8: add     esp, 28h
0x8A1ADB: retn    4
