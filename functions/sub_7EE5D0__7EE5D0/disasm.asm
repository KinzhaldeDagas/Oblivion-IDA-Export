0x7EE5D0: push    ebx
0x7EE5D1: push    esi
0x7EE5D2: mov     esi, [esp+8+arg_0]
0x7EE5D6: push    edi
0x7EE5D7: push    esi
0x7EE5D8: mov     edi, ecx
0x7EE5DA: call    sub_7E28E0
0x7EE5DF: mov     eax, ds:0B4618Ch
0x7EE5E4: push    eax; ArgList
0x7EE5E5: call    TESOutput_PrintString
0x7EE5EA: movzx   ebx, word ptr [esi+0Ah]
0x7EE5EE: movzx   ecx, word ptr [esi+8]
0x7EE5F2: add     esp, 4
0x7EE5F5: cmp     ebx, ecx
0x7EE5F7: mov     [esp+0Ch+arg_0], eax
0x7EE5FB: jb      short loc_7EE60B
0x7EE5FD: movzx   edx, word ptr [esi+0Eh]
0x7EE601: add     edx, ebx
0x7EE603: push    edx
0x7EE604: mov     ecx, esi
0x7EE606: call    NiTArray_SetSize
0x7EE60B: lea     eax, [esp+0Ch+arg_0]
0x7EE60F: push    eax
0x7EE610: push    ebx
0x7EE611: mov     ecx, esi
0x7EE613: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EE618: mov     eax, [edi+78h]
0x7EE61B: push    eax; __int16
0x7EE61C: push    offset aNumberOfLights; "number of lights"
0x7EE621: call    TESOutput_PrintLabeledUnsignedShort
0x7EE626: movzx   ebx, word ptr [esi+0Ah]
0x7EE62A: movzx   ecx, word ptr [esi+8]
0x7EE62E: add     esp, 8
0x7EE631: cmp     ebx, ecx
0x7EE633: mov     [esp+0Ch+arg_0], eax
0x7EE637: jb      short loc_7EE647
0x7EE639: movzx   edx, word ptr [esi+0Eh]
0x7EE63D: add     edx, ebx
0x7EE63F: push    edx
0x7EE640: mov     ecx, esi
0x7EE642: call    NiTArray_SetSize
0x7EE647: lea     eax, [esp+0Ch+arg_0]
0x7EE64B: push    eax
0x7EE64C: push    ebx
0x7EE64D: mov     ecx, esi
0x7EE64F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EE654: mov     ecx, edi
0x7EE656: call    sub_7ED5D0
0x7EE65B: push    eax; __int16
0x7EE65C: push    offset aActiveLights; "active lights"
0x7EE661: call    TESOutput_PrintLabeledUnsignedShort
0x7EE666: movzx   ebx, word ptr [esi+0Ah]
0x7EE66A: movzx   ecx, word ptr [esi+8]
0x7EE66E: add     esp, 8
0x7EE671: cmp     ebx, ecx
0x7EE673: mov     [esp+0Ch+arg_0], eax
0x7EE677: jb      short loc_7EE687
0x7EE679: movzx   edx, word ptr [esi+0Eh]
0x7EE67D: add     edx, ebx
0x7EE67F: push    edx
0x7EE680: mov     ecx, esi
0x7EE682: call    NiTArray_SetSize
0x7EE687: lea     eax, [esp+0Ch+arg_0]
0x7EE68B: push    eax
0x7EE68C: push    ebx
0x7EE68D: mov     ecx, esi
0x7EE68F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EE694: mov     eax, [edi+8Ch]
0x7EE69A: test    eax, eax
0x7EE69C: jbe     short loc_7EE6D7
0x7EE69E: push    eax; int
0x7EE69F: push    offset aNumberOfDecals; "number of decals"
0x7EE6A4: call    TESOutput_PrintLabeledUnsignedInt
0x7EE6A9: movzx   ebx, word ptr [esi+0Ah]
0x7EE6AD: movzx   ecx, word ptr [esi+8]
0x7EE6B1: add     esp, 8
0x7EE6B4: cmp     ebx, ecx
0x7EE6B6: mov     [esp+0Ch+arg_0], eax
0x7EE6BA: jb      short loc_7EE6CA
0x7EE6BC: movzx   edx, word ptr [esi+0Eh]
0x7EE6C0: add     edx, ebx
0x7EE6C2: push    edx
0x7EE6C3: mov     ecx, esi
0x7EE6C5: call    NiTArray_SetSize
0x7EE6CA: lea     eax, [esp+0Ch+arg_0]
0x7EE6CE: push    eax
0x7EE6CF: push    ebx
0x7EE6D0: mov     ecx, esi
0x7EE6D2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EE6D7: mov     edi, [edi+98h]
0x7EE6DD: push    edi; int
0x7EE6DE: push    offset aReferenceId; "Reference ID"
0x7EE6E3: call    TESOutput_PrintLabeledUnsignedInt
0x7EE6E8: movzx   edi, word ptr [esi+0Ah]
0x7EE6EC: movzx   ecx, word ptr [esi+8]
0x7EE6F0: add     esp, 8
0x7EE6F3: cmp     edi, ecx
0x7EE6F5: mov     [esp+0Ch+arg_0], eax
0x7EE6F9: jb      short loc_7EE709
0x7EE6FB: movzx   edx, word ptr [esi+0Eh]
0x7EE6FF: add     edx, edi
0x7EE701: push    edx
0x7EE702: mov     ecx, esi
0x7EE704: call    NiTArray_SetSize
0x7EE709: lea     eax, [esp+0Ch+arg_0]
0x7EE70D: push    eax
0x7EE70E: push    edi
0x7EE70F: mov     ecx, esi
0x7EE711: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EE716: pop     edi
0x7EE717: pop     esi
0x7EE718: pop     ebx
0x7EE719: retn    4
