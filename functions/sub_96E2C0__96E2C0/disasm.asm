0x96E2C0: push    ebx
0x96E2C1: push    esi
0x96E2C2: mov     esi, [esp+8+arg_0]
0x96E2C6: push    edi
0x96E2C7: push    esi
0x96E2C8: mov     edi, ecx
0x96E2CA: call    sub_711E00
0x96E2CF: mov     eax, ds:0BA9AC8h
0x96E2D4: push    eax; ArgList
0x96E2D5: call    TESOutput_PrintString
0x96E2DA: movzx   ebx, word ptr [esi+0Ah]
0x96E2DE: movzx   ecx, word ptr [esi+8]
0x96E2E2: add     esp, 4
0x96E2E5: cmp     ebx, ecx
0x96E2E7: mov     [esp+0Ch+arg_0], eax
0x96E2EB: jb      short loc_96E2FB
0x96E2ED: movzx   edx, word ptr [esi+0Eh]
0x96E2F1: add     edx, ebx
0x96E2F3: push    edx
0x96E2F4: mov     ecx, esi
0x96E2F6: call    NiTArray_SetSize
0x96E2FB: lea     eax, [esp+0Ch+arg_0]
0x96E2FF: push    eax
0x96E300: push    ebx
0x96E301: mov     ecx, esi
0x96E303: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E308: mov     edx, [edi]
0x96E30A: mov     eax, [edx+34h]
0x96E30D: push    esi
0x96E30E: mov     ecx, edi
0x96E310: call    eax
0x96E312: pop     edi
0x96E313: pop     esi
0x96E314: pop     ebx
0x96E315: retn    4
