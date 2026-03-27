0x89D510: sub     esp, 28h
0x89D513: mov     eax, ds:0B30AACh
0x89D518: xor     eax, esp
0x89D51A: mov     [esp+28h+var_4], eax
0x89D51E: push    ebx
0x89D51F: push    esi
0x89D520: mov     esi, [esp+30h+a2]
0x89D524: push    edi
0x89D525: push    esi; a2
0x89D526: mov     ebx, ecx
0x89D528: call    sub_7009A0
0x89D52D: mov     eax, ds:0BA7BA4h
0x89D532: push    eax; ArgList
0x89D533: call    TESOutput_PrintString
0x89D538: movzx   edi, word ptr [esi+0Ah]
0x89D53C: movzx   ecx, word ptr [esi+8]
0x89D540: add     esp, 4
0x89D543: cmp     edi, ecx
0x89D545: mov     [esp+34h+var_28], eax
0x89D549: jb      short loc_89D559
0x89D54B: movzx   edx, word ptr [esi+0Eh]
0x89D54F: add     edx, edi
0x89D551: push    edx
0x89D552: mov     ecx, esi
0x89D554: call    NiTArray_SetSize
0x89D559: lea     eax, [esp+34h+var_28]
0x89D55D: push    eax
0x89D55E: push    edi
0x89D55F: mov     ecx, esi
0x89D561: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89D566: mov     ecx, [ebx+8]
0x89D569: push    ecx
0x89D56A: lea     edx, [esp+38h+var_24]
0x89D56E: push    offset a0x08x; "0x%08X"
0x89D573: push    edx
0x89D574: call    __sprintf
0x89D579: lea     eax, [esp+40h+var_24]
0x89D57D: push    eax; int
0x89D57E: push    offset aHkobject; "hkObject"
0x89D583: call    TESOutput_PrintLabeledString
0x89D588: movzx   edi, word ptr [esi+0Ah]
0x89D58C: movzx   ecx, word ptr [esi+8]
0x89D590: add     esp, 14h
0x89D593: cmp     edi, ecx
0x89D595: mov     [esp+34h+var_28], eax
0x89D599: jb      short loc_89D5A9
0x89D59B: movzx   edx, word ptr [esi+0Eh]
0x89D59F: add     edx, edi
0x89D5A1: push    edx
0x89D5A2: mov     ecx, esi
0x89D5A4: call    NiTArray_SetSize
0x89D5A9: lea     eax, [esp+34h+var_28]
0x89D5AD: push    eax
0x89D5AE: push    edi
0x89D5AF: mov     ecx, esi
0x89D5B1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89D5B6: mov     ebx, [ebx+8]
0x89D5B9: test    ebx, ebx
0x89D5BB: jz      short loc_89D5FA
0x89D5BD: movsx   ecx, word ptr [ebx+6]
0x89D5C1: push    ecx; int
0x89D5C2: push    offset aHkrefcount; "hkRefcount"
0x89D5C7: call    TESOutput_PrintLabeledSignedInt
0x89D5CC: movzx   edi, word ptr [esi+0Ah]
0x89D5D0: movzx   edx, word ptr [esi+8]
0x89D5D4: add     esp, 8
0x89D5D7: cmp     edi, edx
0x89D5D9: mov     [esp+34h+var_28], eax
0x89D5DD: jb      short loc_89D5ED
0x89D5DF: movzx   eax, word ptr [esi+0Eh]
0x89D5E3: add     eax, edi
0x89D5E5: push    eax
0x89D5E6: mov     ecx, esi
0x89D5E8: call    NiTArray_SetSize
0x89D5ED: lea     ecx, [esp+34h+var_28]
0x89D5F1: push    ecx
0x89D5F2: push    edi
0x89D5F3: mov     ecx, esi
0x89D5F5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89D5FA: mov     ecx, [esp+34h+var_4]
0x89D5FE: pop     edi
0x89D5FF: pop     esi
0x89D600: pop     ebx
0x89D601: xor     ecx, esp
0x89D603: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89D608: add     esp, 28h
0x89D60B: retn    4
