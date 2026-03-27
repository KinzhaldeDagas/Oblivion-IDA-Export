0x8B0080: sub     esp, 4Ch
0x8B0083: mov     eax, ds:0B30AACh
0x8B0088: xor     eax, esp
0x8B008A: mov     [esp+4Ch+var_4], eax
0x8B008E: push    ebx
0x8B008F: push    esi
0x8B0090: mov     esi, [esp+54h+arg_0]
0x8B0094: push    edi
0x8B0095: push    esi
0x8B0096: mov     edi, ecx
0x8B0098: call    sub_89FB70
0x8B009D: mov     eax, ds:0BA7F90h
0x8B00A2: push    eax; ArgList
0x8B00A3: call    TESOutput_PrintString
0x8B00A8: movzx   ebx, word ptr [esi+0Ah]
0x8B00AC: movzx   ecx, word ptr [esi+8]
0x8B00B0: add     esp, 4
0x8B00B3: cmp     ebx, ecx
0x8B00B5: mov     dword ptr [esp+58h+var_48], eax
0x8B00B9: jb      short loc_8B00C9
0x8B00BB: movzx   edx, word ptr [esi+0Eh]
0x8B00BF: add     edx, ebx
0x8B00C1: push    edx
0x8B00C2: mov     ecx, esi
0x8B00C4: call    NiTArray_SetSize
0x8B00C9: lea     eax, [esp+58h+var_48]
0x8B00CD: push    eax
0x8B00CE: push    ebx
0x8B00CF: mov     ecx, esi
0x8B00D1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B00D6: xor     ebx, ebx
0x8B00D8: cmp     edi, ebx
0x8B00DA: jz      short loc_8B00EF
0x8B00DC: mov     ecx, [edi+8]
0x8B00DF: cmp     ecx, ebx
0x8B00E1: jz      short loc_8B00EF
0x8B00E3: lea     edx, [esp+58h+var_49]
0x8B00E7: push    edx
0x8B00E8: call    sub_8A63F0
0x8B00ED: jmp     short loc_8B00F7
0x8B00EF: mov     [esp+58h+var_49], bl
0x8B00F3: lea     eax, [esp+58h+var_49]
0x8B00F7: cmp     [eax], bl
0x8B00F9: push    ebp
0x8B00FA: setnz   al
0x8B00FD: mov     [esp+5Ch+var_48], al
0x8B0101: mov     ecx, dword ptr [esp+5Ch+var_48]
0x8B0105: push    ecx; char
0x8B0106: push    offset aActive; "Active"
0x8B010B: call    TESOutput_PrintLabeledBool
0x8B0110: movzx   ebp, word ptr [esi+0Ah]
0x8B0114: movzx   edx, word ptr [esi+8]
0x8B0118: add     esp, 8
0x8B011B: cmp     ebp, edx
0x8B011D: mov     dword ptr [esp+5Ch+var_48], eax
0x8B0121: jb      short loc_8B0131
0x8B0123: movzx   eax, word ptr [esi+0Eh]
0x8B0127: add     eax, ebp
0x8B0129: push    eax
0x8B012A: mov     ecx, esi
0x8B012C: call    NiTArray_SetSize
0x8B0131: lea     ecx, [esp+5Ch+var_48]
0x8B0135: push    ecx
0x8B0136: push    ebp
0x8B0137: mov     ecx, esi
0x8B0139: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B013E: cmp     edi, ebx
0x8B0140: jz      short loc_8B0155
0x8B0142: mov     eax, [edi+8]
0x8B0145: cmp     eax, ebx
0x8B0147: jz      short loc_8B0155
0x8B0149: mov     dl, [eax+91h]
0x8B014F: mov     [esp+5Ch+var_49], dl
0x8B0153: jmp     short loc_8B0159
0x8B0155: mov     [esp+5Ch+var_49], bl
0x8B0159: lea     eax, [esp+5Ch+var_49]
0x8B015D: cmp     [eax], bl
0x8B015F: setnz   al
0x8B0162: push    eax; char
0x8B0163: push    offset aFixed_0; "Fixed"
0x8B0168: call    TESOutput_PrintLabeledBool
0x8B016D: movzx   ebp, word ptr [esi+0Ah]
0x8B0171: movzx   ecx, word ptr [esi+8]
0x8B0175: add     esp, 8
0x8B0178: cmp     ebp, ecx
0x8B017A: mov     dword ptr [esp+5Ch+var_48], eax
0x8B017E: jb      short loc_8B018E
0x8B0180: movzx   edx, word ptr [esi+0Eh]
0x8B0184: add     edx, ebp
0x8B0186: push    edx
0x8B0187: mov     ecx, esi
0x8B0189: call    NiTArray_SetSize
0x8B018E: lea     eax, [esp+5Ch+var_48]
0x8B0192: push    eax
0x8B0193: push    ebp
0x8B0194: mov     ecx, esi
0x8B0196: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B019B: cmp     edi, ebx
0x8B019D: pop     ebp
0x8B019E: jz      short loc_8B01AC
0x8B01A0: mov     edi, [edi+8]
0x8B01A3: cmp     edi, ebx
0x8B01A5: jz      short loc_8B01AC
0x8B01A7: mov     edi, [edi+54h]
0x8B01AA: jmp     short loc_8B01AE
0x8B01AC: xor     edi, edi
0x8B01AE: push    edi
0x8B01AF: lea     ecx, [esp+5Ch+var_44]
0x8B01B3: push    offset a0x08x; "0x%08X"
0x8B01B8: push    ecx
0x8B01B9: call    __sprintf
0x8B01BE: lea     edx, [esp+64h+var_44]
0x8B01C2: push    edx; int
0x8B01C3: push    offset aSimisland; "SimIsland"
0x8B01C8: call    TESOutput_PrintLabeledString
0x8B01CD: movzx   edi, word ptr [esi+0Ah]
0x8B01D1: mov     dword ptr [esp+6Ch+var_48], eax
0x8B01D5: movzx   eax, word ptr [esi+8]
0x8B01D9: add     esp, 14h
0x8B01DC: cmp     edi, eax
0x8B01DE: jb      short loc_8B01EE
0x8B01E0: movzx   ecx, word ptr [esi+0Eh]
0x8B01E4: add     ecx, edi
0x8B01E6: push    ecx
0x8B01E7: mov     ecx, esi
0x8B01E9: call    NiTArray_SetSize
0x8B01EE: lea     edx, [esp+58h+var_48]
0x8B01F2: push    edx
0x8B01F3: push    edi
0x8B01F4: mov     ecx, esi
0x8B01F6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B01FB: mov     ecx, [esp+58h+var_4]
0x8B01FF: pop     edi
0x8B0200: pop     esi
0x8B0201: pop     ebx
0x8B0202: xor     ecx, esp
0x8B0204: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B0209: add     esp, 4Ch
0x8B020C: retn    4
