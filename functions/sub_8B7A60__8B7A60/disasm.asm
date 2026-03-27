0x8B7A60: push    ebp
0x8B7A61: mov     ebp, esp
0x8B7A63: and     esp, 0FFFFFFF0h
0x8B7A66: sub     esp, 54h
0x8B7A69: mov     eax, ds:0B30AACh
0x8B7A6E: xor     eax, esp
0x8B7A70: mov     [esp+54h+var_4], eax
0x8B7A74: push    ebx
0x8B7A75: push    esi
0x8B7A76: mov     esi, [ebp+arg_0]
0x8B7A79: push    edi
0x8B7A7A: push    esi
0x8B7A7B: mov     edi, ecx
0x8B7A7D: call    sub_8AE9A0
0x8B7A82: mov     eax, ds:0BA7FECh
0x8B7A87: push    eax; ArgList
0x8B7A88: call    TESOutput_PrintString
0x8B7A8D: movzx   ebx, word ptr [esi+0Ah]
0x8B7A91: movzx   ecx, word ptr [esi+8]
0x8B7A95: add     esp, 4
0x8B7A98: cmp     ebx, ecx
0x8B7A9A: mov     [esp+60h+var_50], eax
0x8B7A9E: jb      short loc_8B7AAE
0x8B7AA0: movzx   edx, word ptr [esi+0Eh]
0x8B7AA4: add     edx, ebx
0x8B7AA6: push    edx
0x8B7AA7: mov     ecx, esi
0x8B7AA9: call    NiTArray_SetSize
0x8B7AAE: lea     eax, [esp+60h+var_50]
0x8B7AB2: push    eax
0x8B7AB3: push    ebx
0x8B7AB4: mov     ecx, esi
0x8B7AB6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B7ABB: test    edi, edi
0x8B7ABD: jz      short loc_8B7ACF
0x8B7ABF: mov     eax, [edi+8]
0x8B7AC2: test    eax, eax
0x8B7AC4: jz      short loc_8B7ACF
0x8B7AC6: mov     ecx, [eax+0Ch]
0x8B7AC9: mov     [esp+60h+var_4C], ecx
0x8B7ACD: jmp     short loc_8B7AD7
0x8B7ACF: mov     [esp+60h+var_4C], 0
0x8B7AD7: mov     edx, [esp+60h+var_4C]
0x8B7ADB: push    edx; int
0x8B7ADC: push    offset aNumSpheres; "Num Spheres"
0x8B7AE1: call    TESOutput_PrintLabeledSignedInt
0x8B7AE6: movzx   ebx, word ptr [esi+0Ah]
0x8B7AEA: mov     [esp+68h+var_50], eax
0x8B7AEE: movzx   eax, word ptr [esi+8]
0x8B7AF2: add     esp, 8
0x8B7AF5: cmp     ebx, eax
0x8B7AF7: jb      short loc_8B7B07
0x8B7AF9: movzx   ecx, word ptr [esi+0Eh]
0x8B7AFD: add     ecx, ebx
0x8B7AFF: push    ecx
0x8B7B00: mov     ecx, esi
0x8B7B02: call    NiTArray_SetSize
0x8B7B07: lea     edx, [esp+60h+var_50]
0x8B7B0B: push    edx
0x8B7B0C: push    ebx
0x8B7B0D: mov     ecx, esi
0x8B7B0F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B7B14: test    edi, edi
0x8B7B16: jz      loc_8B7C4D
0x8B7B1C: mov     edi, [edi+8]
0x8B7B1F: test    edi, edi
0x8B7B21: jz      loc_8B7C4D
0x8B7B27: lea     eax, [edi+10h]
0x8B7B2A: test    eax, eax
0x8B7B2C: mov     [esp+60h+var_50], eax
0x8B7B30: jz      loc_8B7C4D
0x8B7B36: xor     edi, edi
0x8B7B38: cmp     [esp+60h+var_4C], edi
0x8B7B3C: jle     loc_8B7C4D
0x8B7B42: jmp     short loc_8B7B54
0x8B7B44: jmp     short loc_8B7B50
0x8B7B46: align 10h
0x8B7B50: mov     eax, [esp+60h+var_50]
0x8B7B54: movaps  xmm0, xmmword ptr [eax]
0x8B7B57: fld     qword ptr ds:0A372E0h
0x8B7B5D: fld     dword ptr [eax+0Ch]
0x8B7B60: movss   [esp+60h+var_40], xmm0
0x8B7B66: fstp    [esp+60h+var_48]
0x8B7B6A: movaps  xmm1, xmm0
0x8B7B6D: fld     [esp+60h+var_40]
0x8B7B71: shufps  xmm1, xmm0, 55h ; 'U'
0x8B7B75: fmul    st, st(1)
0x8B7B77: movss   [esp+60h+var_40], xmm1
0x8B7B7D: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8B7B81: push    edi
0x8B7B82: fstp    [esp+64h+var_30]
0x8B7B86: lea     eax, [esp+64h+ArgList]
0x8B7B8A: fld     [esp+64h+var_40]
0x8B7B8E: movss   [esp+64h+var_40], xmm0
0x8B7B94: fmul    st, st(1)
0x8B7B96: push    offset aPosD; "Pos %d"
0x8B7B9B: push    eax
0x8B7B9C: fstp    [esp+6Ch+var_2C]
0x8B7BA0: fmul    [esp+6Ch+var_40]
0x8B7BA4: fstp    [esp+6Ch+var_28]
0x8B7BA8: call    __sprintf
0x8B7BAD: add     esp, 0Ch
0x8B7BB0: lea     ecx, [esp+60h+ArgList]
0x8B7BB4: push    ecx; ArgList
0x8B7BB5: lea     ecx, [esp+64h+var_30]
0x8B7BB9: call    sub_707280
0x8B7BBE: movzx   ebx, word ptr [esi+0Ah]
0x8B7BC2: movzx   edx, word ptr [esi+8]
0x8B7BC6: cmp     ebx, edx
0x8B7BC8: mov     [esp+60h+var_44], eax
0x8B7BCC: jb      short loc_8B7BDC
0x8B7BCE: movzx   eax, word ptr [esi+0Eh]
0x8B7BD2: add     eax, ebx
0x8B7BD4: push    eax
0x8B7BD5: mov     ecx, esi
0x8B7BD7: call    NiTArray_SetSize
0x8B7BDC: lea     ecx, [esp+60h+var_44]
0x8B7BE0: push    ecx
0x8B7BE1: push    ebx
0x8B7BE2: mov     ecx, esi
0x8B7BE4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B7BE9: push    edi
0x8B7BEA: lea     edx, [esp+64h+ArgList]
0x8B7BEE: push    offset aRadiusD; "Radius %d"
0x8B7BF3: push    edx
0x8B7BF4: call    __sprintf
0x8B7BF9: fld     [esp+6Ch+var_48]
0x8B7BFD: add     esp, 8
0x8B7C00: lea     eax, [esp+64h+ArgList]
0x8B7C04: fstp    [esp+64h+var_64]; float
0x8B7C07: push    eax; ArgList
0x8B7C08: call    TESOutput_PrintLabeledFloat
0x8B7C0D: movzx   ebx, word ptr [esi+0Ah]
0x8B7C11: movzx   ecx, word ptr [esi+8]
0x8B7C15: add     esp, 8
0x8B7C18: cmp     ebx, ecx
0x8B7C1A: mov     [esp+60h+var_48], eax
0x8B7C1E: jb      short loc_8B7C2E
0x8B7C20: movzx   edx, word ptr [esi+0Eh]
0x8B7C24: add     edx, ebx
0x8B7C26: push    edx
0x8B7C27: mov     ecx, esi
0x8B7C29: call    NiTArray_SetSize
0x8B7C2E: lea     eax, [esp+60h+var_48]
0x8B7C32: push    eax
0x8B7C33: push    ebx
0x8B7C34: mov     ecx, esi
0x8B7C36: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B7C3B: add     [esp+60h+var_50], 10h
0x8B7C40: add     edi, 1
0x8B7C43: cmp     edi, [esp+60h+var_4C]
0x8B7C47: jl      loc_8B7B50
0x8B7C4D: mov     ecx, [esp+60h+var_4]
0x8B7C51: pop     edi
0x8B7C52: pop     esi
0x8B7C53: pop     ebx
0x8B7C54: xor     ecx, esp
0x8B7C56: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B7C5B: mov     esp, ebp
0x8B7C5D: pop     ebp
0x8B7C5E: retn    4
