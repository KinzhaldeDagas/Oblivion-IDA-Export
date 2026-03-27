0x8B9F80: sub     esp, 0Ch
0x8B9F83: push    ebx
0x8B9F84: push    esi
0x8B9F85: mov     esi, [esp+14h+arg_0]
0x8B9F89: push    edi
0x8B9F8A: push    esi
0x8B9F8B: mov     edi, ecx
0x8B9F8D: call    sub_89D820
0x8B9F92: mov     eax, ds:0BA8024h
0x8B9F97: push    eax; ArgList
0x8B9F98: call    TESOutput_PrintString
0x8B9F9D: movzx   ebx, word ptr [esi+0Ah]
0x8B9FA1: movzx   ecx, word ptr [esi+8]
0x8B9FA5: add     esp, 4
0x8B9FA8: cmp     ebx, ecx
0x8B9FAA: mov     [esp+18h+arg_0], eax
0x8B9FAE: jb      short loc_8B9FBE
0x8B9FB0: movzx   edx, word ptr [esi+0Eh]
0x8B9FB4: add     edx, ebx
0x8B9FB6: push    edx
0x8B9FB7: mov     ecx, esi
0x8B9FB9: call    NiTArray_SetSize
0x8B9FBE: lea     eax, [esp+18h+arg_0]
0x8B9FC2: push    eax
0x8B9FC3: push    ebx
0x8B9FC4: mov     ecx, esi
0x8B9FC6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B9FCB: test    edi, edi
0x8B9FCD: jz      short loc_8B9FDD
0x8B9FCF: mov     ecx, [edi+8]
0x8B9FD2: test    ecx, ecx
0x8B9FD4: jz      short loc_8B9FDD
0x8B9FD6: call    sub_8AC070
0x8B9FDB: jmp     short loc_8B9FE2
0x8B9FDD: mov     eax, offset stru_BA7A40
0x8B9FE2: push    eax
0x8B9FE3: lea     ecx, [esp+1Ch+var_C]
0x8B9FE7: push    ecx
0x8B9FE8: call    sub_43F3E0
0x8B9FED: add     esp, 8
0x8B9FF0: push    offset off_A981C4; ArgList
0x8B9FF5: lea     ecx, [esp+1Ch+var_C]
0x8B9FF9: call    sub_707280
0x8B9FFE: movzx   ebx, word ptr [esi+0Ah]
0x8BA002: movzx   edx, word ptr [esi+8]
0x8BA006: cmp     ebx, edx
0x8BA008: mov     [esp+18h+arg_0], eax
0x8BA00C: jb      short loc_8BA01C
0x8BA00E: movzx   eax, word ptr [esi+0Eh]
0x8BA012: add     eax, ebx
0x8BA014: push    eax
0x8BA015: mov     ecx, esi
0x8BA017: call    NiTArray_SetSize
0x8BA01C: lea     ecx, [esp+18h+arg_0]
0x8BA020: push    ecx
0x8BA021: push    ebx
0x8BA022: mov     ecx, esi
0x8BA024: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BA029: test    edi, edi
0x8BA02B: jz      short loc_8BA047
0x8BA02D: mov     ecx, [edi+8]
0x8BA030: test    ecx, ecx
0x8BA032: jz      short loc_8BA047
0x8BA034: call    sub_8AC0A0
0x8BA039: push    eax
0x8BA03A: lea     edx, [esp+1Ch+var_C]
0x8BA03E: push    edx
0x8BA03F: call    sub_43F3E0
0x8BA044: add     esp, 8
0x8BA047: push    offset off_A981C0; ArgList
0x8BA04C: lea     ecx, [esp+1Ch+var_C]
0x8BA050: call    sub_707280
0x8BA055: movzx   edi, word ptr [esi+0Ah]
0x8BA059: mov     [esp+18h+arg_0], eax
0x8BA05D: movzx   eax, word ptr [esi+8]
0x8BA061: cmp     edi, eax
0x8BA063: jb      short loc_8BA073
0x8BA065: movzx   ecx, word ptr [esi+0Eh]
0x8BA069: add     ecx, edi
0x8BA06B: push    ecx
0x8BA06C: mov     ecx, esi
0x8BA06E: call    NiTArray_SetSize
0x8BA073: lea     edx, [esp+18h+arg_0]
0x8BA077: push    edx
0x8BA078: push    edi
0x8BA079: mov     ecx, esi
0x8BA07B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BA080: pop     edi
0x8BA081: pop     esi
0x8BA082: pop     ebx
0x8BA083: add     esp, 0Ch
0x8BA086: retn    4
