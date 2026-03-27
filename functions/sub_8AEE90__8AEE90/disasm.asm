0x8AEE90: push    ebp
0x8AEE91: mov     ebp, esp
0x8AEE93: and     esp, 0FFFFFFF0h
0x8AEE96: sub     esp, 94h
0x8AEE9C: mov     eax, ds:0B30AACh
0x8AEEA1: xor     eax, esp
0x8AEEA3: mov     [esp+94h+var_4], eax
0x8AEEAA: push    ebx
0x8AEEAB: push    esi
0x8AEEAC: mov     esi, [ebp+arg_0]
0x8AEEAF: push    edi
0x8AEEB0: push    esi
0x8AEEB1: mov     ebx, ecx
0x8AEEB3: call    sub_8AED00
0x8AEEB8: mov     eax, ds:0BA7F6Ch
0x8AEEBD: push    eax; ArgList
0x8AEEBE: call    TESOutput_PrintString
0x8AEEC3: movzx   edi, word ptr [esi+0Ah]
0x8AEEC7: movzx   ecx, word ptr [esi+8]
0x8AEECB: add     esp, 4
0x8AEECE: cmp     edi, ecx
0x8AEED0: mov     [esp+0A0h+var_88], eax
0x8AEED4: jb      short loc_8AEEE4
0x8AEED6: movzx   edx, word ptr [esi+0Eh]
0x8AEEDA: add     edx, edi
0x8AEEDC: push    edx
0x8AEEDD: mov     ecx, esi
0x8AEEDF: call    NiTArray_SetSize
0x8AEEE4: lea     eax, [esp+0A0h+var_88]
0x8AEEE8: push    eax
0x8AEEE9: push    edi
0x8AEEEA: mov     ecx, esi
0x8AEEEC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AEEF1: lea     ecx, [esp+0A0h+var_50]
0x8AEEF5: push    ecx
0x8AEEF6: mov     ecx, ebx
0x8AEEF8: call    sub_6848D0
0x8AEEFD: lea     edx, [esp+0A0h+var_50]
0x8AEF01: push    edx
0x8AEF02: lea     eax, [esp+0A4h+var_84]
0x8AEF06: push    eax
0x8AEF07: call    sub_607740
0x8AEF0C: lea     ecx, [esp+0A8h+var_20]
0x8AEF13: push    ecx
0x8AEF14: lea     edx, [esp+0ACh+var_60]
0x8AEF18: push    edx
0x8AEF19: call    sub_43F3E0
0x8AEF1E: add     esp, 10h
0x8AEF21: push    offset off_A97270; ArgList
0x8AEF26: lea     ecx, [esp+0A4h+var_84]
0x8AEF2A: call    sub_711A50
0x8AEF2F: movzx   edi, word ptr [esi+0Ah]
0x8AEF33: mov     [esp+0A0h+var_88], eax
0x8AEF37: movzx   eax, word ptr [esi+8]
0x8AEF3B: cmp     edi, eax
0x8AEF3D: jb      short loc_8AEF4D
0x8AEF3F: movzx   ecx, word ptr [esi+0Eh]
0x8AEF43: add     ecx, edi
0x8AEF45: push    ecx
0x8AEF46: mov     ecx, esi
0x8AEF48: call    NiTArray_SetSize
0x8AEF4D: lea     edx, [esp+0A0h+var_88]
0x8AEF51: push    edx
0x8AEF52: push    edi
0x8AEF53: mov     ecx, esi
0x8AEF55: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AEF5A: push    offset aTrans; "Trans"
0x8AEF5F: lea     ecx, [esp+0A4h+var_60]
0x8AEF63: call    sub_707280
0x8AEF68: movzx   edi, word ptr [esi+0Ah]
0x8AEF6C: mov     [esp+0A0h+var_88], eax
0x8AEF70: movzx   eax, word ptr [esi+8]
0x8AEF74: cmp     edi, eax
0x8AEF76: jb      short loc_8AEF86
0x8AEF78: movzx   ecx, word ptr [esi+0Eh]
0x8AEF7C: add     ecx, edi
0x8AEF7E: push    ecx
0x8AEF7F: mov     ecx, esi
0x8AEF81: call    NiTArray_SetSize
0x8AEF86: lea     edx, [esp+0A0h+var_88]
0x8AEF8A: push    edx
0x8AEF8B: push    edi
0x8AEF8C: mov     ecx, esi
0x8AEF8E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AEF93: mov     ecx, [esp+0A0h+var_4]
0x8AEF9A: pop     edi
0x8AEF9B: pop     esi
0x8AEF9C: pop     ebx
0x8AEF9D: xor     ecx, esp
0x8AEF9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AEFA4: mov     esp, ebp
0x8AEFA6: pop     ebp
0x8AEFA7: retn    4
