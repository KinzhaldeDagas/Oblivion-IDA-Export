0x6E8620: push    ebx
0x6E8621: push    esi
0x6E8622: mov     esi, [esp+8+arg_0]
0x6E8626: push    edi
0x6E8627: push    esi
0x6E8628: mov     ebx, ecx
0x6E862A: call    sub_6EC460
0x6E862F: mov     eax, ds:0B3E7E8h
0x6E8634: push    eax; ArgList
0x6E8635: call    TESOutput_PrintString
0x6E863A: movzx   edi, word ptr [esi+0Ah]
0x6E863E: movzx   ecx, word ptr [esi+8]
0x6E8642: add     esp, 4
0x6E8645: cmp     edi, ecx
0x6E8647: mov     [esp+0Ch+arg_0], eax
0x6E864B: jb      short loc_6E865B
0x6E864D: movzx   edx, word ptr [esi+0Eh]
0x6E8651: add     edx, edi
0x6E8653: push    edx
0x6E8654: mov     ecx, esi
0x6E8656: call    NiTArray_SetSize
0x6E865B: lea     eax, [esp+0Ch+arg_0]
0x6E865F: push    eax
0x6E8660: push    edi
0x6E8661: mov     ecx, esi
0x6E8663: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E8668: movzx   ecx, byte ptr [ebx+0Ch]
0x6E866C: push    ecx; char
0x6E866D: push    offset aM_bboolvalue; "m_bBoolValue"
0x6E8672: call    sub_70FA00
0x6E8677: movzx   edi, word ptr [esi+0Ah]
0x6E867B: movzx   edx, word ptr [esi+8]
0x6E867F: add     esp, 8
0x6E8682: cmp     edi, edx
0x6E8684: mov     [esp+0Ch+arg_0], eax
0x6E8688: jb      short loc_6E8698
0x6E868A: movzx   eax, word ptr [esi+0Eh]
0x6E868E: add     eax, edi
0x6E8690: push    eax
0x6E8691: mov     ecx, esi
0x6E8693: call    NiTArray_SetSize
0x6E8698: lea     ecx, [esp+0Ch+arg_0]
0x6E869C: push    ecx
0x6E869D: push    edi
0x6E869E: mov     ecx, esi
0x6E86A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E86A5: mov     ebx, [ebx+10h]
0x6E86A8: push    ebx; int
0x6E86A9: push    offset aM_spbooldata; "m_spBoolData"
0x6E86AE: call    TESOutput_PrintLabeledPointer
0x6E86B3: movzx   edi, word ptr [esi+0Ah]
0x6E86B7: movzx   edx, word ptr [esi+8]
0x6E86BB: add     esp, 8
0x6E86BE: cmp     edi, edx
0x6E86C0: mov     [esp+0Ch+arg_0], eax
0x6E86C4: jb      short loc_6E86D4
0x6E86C6: movzx   eax, word ptr [esi+0Eh]
0x6E86CA: add     eax, edi
0x6E86CC: push    eax
0x6E86CD: mov     ecx, esi
0x6E86CF: call    NiTArray_SetSize
0x6E86D4: lea     ecx, [esp+0Ch+arg_0]
0x6E86D8: push    ecx
0x6E86D9: push    edi
0x6E86DA: mov     ecx, esi
0x6E86DC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E86E1: pop     edi
0x6E86E2: pop     esi
0x6E86E3: pop     ebx
0x6E86E4: retn    4
