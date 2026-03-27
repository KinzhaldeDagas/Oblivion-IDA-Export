0x706F40: sub     esp, 20h
0x706F43: push    ebx
0x706F44: push    esi
0x706F45: mov     esi, dword ptr [esp+28h+arg_0]
0x706F49: push    edi
0x706F4A: push    esi
0x706F4B: mov     edi, ecx
0x706F4D: call    sub_700B10
0x706F52: mov     eax, ds:0B3F990h
0x706F57: push    eax; ArgList
0x706F58: call    TESOutput_PrintString
0x706F5D: movzx   ebx, word ptr [esi+0Ah]
0x706F61: movzx   ecx, word ptr [esi+8]
0x706F65: add     esp, 4
0x706F68: cmp     ebx, ecx
0x706F6A: mov     dword ptr [esp+2Ch+arg_0], eax
0x706F6E: jb      short loc_706F7E
0x706F70: movzx   edx, word ptr [esi+0Eh]
0x706F74: add     edx, ebx
0x706F76: push    edx
0x706F77: mov     ecx, esi
0x706F79: call    NiTArray_SetSize
0x706F7E: lea     eax, [esp+2Ch+arg_0]
0x706F82: push    eax
0x706F83: push    ebx
0x706F84: mov     ecx, esi
0x706F86: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x706F8B: mov     cl, [edi+18h]
0x706F8E: and     cl, 1
0x706F91: mov     [esp+2Ch+arg_0], cl
0x706F95: mov     edx, dword ptr [esp+2Ch+arg_0]
0x706F99: push    edx; char
0x706F9A: push    offset aM_bztest; "m_bZTest"
0x706F9F: call    TESOutput_PrintLabeledBool
0x706FA4: movzx   ebx, word ptr [esi+0Ah]
0x706FA8: mov     dword ptr [esp+34h+arg_0], eax
0x706FAC: movzx   eax, word ptr [esi+8]
0x706FB0: add     esp, 8
0x706FB3: cmp     ebx, eax
0x706FB5: jb      short loc_706FC5
0x706FB7: movzx   ecx, word ptr [esi+0Eh]
0x706FBB: add     ecx, ebx
0x706FBD: push    ecx
0x706FBE: mov     ecx, esi
0x706FC0: call    NiTArray_SetSize
0x706FC5: lea     edx, [esp+2Ch+arg_0]
0x706FC9: push    edx
0x706FCA: push    ebx
0x706FCB: mov     ecx, esi
0x706FCD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x706FD2: mov     al, [edi+18h]
0x706FD5: shr     al, 1
0x706FD7: and     al, 1
0x706FD9: mov     [esp+2Ch+arg_0], al
0x706FDD: mov     ecx, dword ptr [esp+2Ch+arg_0]
0x706FE1: push    ecx; char
0x706FE2: push    offset aM_bzwrite; "m_bZWrite"
0x706FE7: call    TESOutput_PrintLabeledBool
0x706FEC: movzx   ebx, word ptr [esi+0Ah]
0x706FF0: movzx   edx, word ptr [esi+8]
0x706FF4: add     esp, 8
0x706FF7: cmp     ebx, edx
0x706FF9: mov     dword ptr [esp+2Ch+arg_0], eax
0x706FFD: jb      short loc_70700D
0x706FFF: movzx   eax, word ptr [esi+0Eh]
0x707003: add     eax, ebx
0x707005: push    eax
0x707006: mov     ecx, esi
0x707008: call    NiTArray_SetSize
0x70700D: lea     ecx, [esp+2Ch+arg_0]
0x707011: push    ecx
0x707012: push    ebx
0x707013: mov     ecx, esi
0x707015: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70701A: movzx   eax, byte ptr [edi+18h]
0x70701E: shr     eax, 2
0x707021: and     eax, 0Fh
0x707024: mov     [esp+2Ch+var_20], offset aTest_always; "TEST_ALWAYS"
0x70702C: mov     [esp+2Ch+var_1C], offset aTest_less; "TEST_LESS"
0x707034: mov     [esp+2Ch+var_18], offset aTest_equal; "TEST_EQUAL"
0x70703C: mov     [esp+2Ch+var_14], offset aTest_lessequal; "TEST_LESSEQUAL"
0x707044: mov     [esp+2Ch+var_10], offset aTest_greater; "TEST_GREATER"
0x70704C: mov     [esp+2Ch+var_C], offset aTest_notequal; "TEST_NOTEQUAL"
0x707054: mov     [esp+2Ch+var_8], offset aTest_greatereq; "TEST_GREATEREQUAL"
0x70705C: mov     [esp+2Ch+var_4], offset aTest_never; "TEST_NEVER"
0x707064: mov     edx, [esp+eax*4+2Ch+var_20]
0x707068: push    edx; int
0x707069: push    offset aTestFunction; "Test Function"
0x70706E: call    TESOutput_PrintLabeledString
0x707073: movzx   edi, word ptr [esi+0Ah]
0x707077: mov     dword ptr [esp+34h+arg_0], eax
0x70707B: movzx   eax, word ptr [esi+8]
0x70707F: add     esp, 8
0x707082: cmp     edi, eax
0x707084: jb      short loc_707094
0x707086: movzx   ecx, word ptr [esi+0Eh]
0x70708A: add     ecx, edi
0x70708C: push    ecx
0x70708D: mov     ecx, esi
0x70708F: call    NiTArray_SetSize
0x707094: lea     edx, [esp+2Ch+arg_0]
0x707098: push    edx
0x707099: push    edi
0x70709A: mov     ecx, esi
0x70709C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7070A1: pop     edi
0x7070A2: pop     esi
0x7070A3: pop     ebx
0x7070A4: add     esp, 20h
0x7070A7: retn    4
