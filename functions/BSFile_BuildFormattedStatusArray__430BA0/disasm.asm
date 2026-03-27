0x430BA0: push    ecx
0x430BA1: push    ebx
0x430BA2: push    esi
0x430BA3: push    edi
0x430BA4: push    offset aBsfile; "BSFile"
0x430BA9: mov     edi, ecx
0x430BAB: call    TESOutput_PrintString
0x430BB0: mov     esi, dword ptr [esp+14h+arg_0]
0x430BB4: movzx   ebx, word ptr [esi+0Ah]
0x430BB8: mov     [esp+14h+var_4], eax
0x430BBC: movzx   eax, word ptr [esi+8]
0x430BC0: add     esp, 4
0x430BC3: cmp     ebx, eax
0x430BC5: jb      short loc_430BD5
0x430BC7: movzx   ecx, word ptr [esi+0Eh]
0x430BCB: add     ecx, ebx
0x430BCD: push    ecx
0x430BCE: mov     ecx, esi
0x430BD0: call    NiTArray_SetSize
0x430BD5: lea     edx, [esp+10h+var_4]
0x430BD9: push    edx
0x430BDA: push    ebx
0x430BDB: mov     ecx, esi
0x430BDD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430BE2: lea     eax, [edi+3Ch]
0x430BE5: push    eax; int
0x430BE6: push    offset aName; "Name"
0x430BEB: call    TESOutput_PrintLabeledString
0x430BF0: movzx   ebx, word ptr [esi+0Ah]
0x430BF4: movzx   ecx, word ptr [esi+8]
0x430BF8: add     esp, 8
0x430BFB: cmp     ebx, ecx
0x430BFD: mov     dword ptr [esp+10h+arg_0], eax
0x430C01: jb      short loc_430C11
0x430C03: movzx   edx, word ptr [esi+0Eh]
0x430C07: add     edx, ebx
0x430C09: push    edx
0x430C0A: mov     ecx, esi
0x430C0C: call    NiTArray_SetSize
0x430C11: lea     eax, [esp+10h+arg_0]
0x430C15: push    eax
0x430C16: push    ebx
0x430C17: mov     ecx, esi
0x430C19: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430C1E: mov     cl, [edi+24h]
0x430C21: mov     [esp+10h+arg_0], cl
0x430C25: mov     edx, dword ptr [esp+10h+arg_0]
0x430C29: push    edx; char
0x430C2A: push    offset aGood; "Good"
0x430C2F: call    TESOutput_PrintLabeledBool
0x430C34: movzx   ebx, word ptr [esi+0Ah]
0x430C38: mov     dword ptr [esp+18h+arg_0], eax
0x430C3C: movzx   eax, word ptr [esi+8]
0x430C40: add     esp, 8
0x430C43: cmp     ebx, eax
0x430C45: jb      short loc_430C55
0x430C47: movzx   ecx, word ptr [esi+0Eh]
0x430C4B: add     ecx, ebx
0x430C4D: push    ecx
0x430C4E: mov     ecx, esi
0x430C50: call    NiTArray_SetSize
0x430C55: lea     edx, [esp+10h+arg_0]
0x430C59: push    edx
0x430C5A: push    ebx
0x430C5B: mov     ecx, esi
0x430C5D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430C62: mov     eax, [edi+30h]
0x430C65: cmp     eax, 0FFFFFFFFh
0x430C68: jnz     short loc_430C70
0x430C6A: mov     eax, [edi+148h]
0x430C70: push    eax; int
0x430C71: push    offset aPosition; "Position"
0x430C76: call    TESOutput_PrintLabeledUnsignedInt
0x430C7B: movzx   ebx, word ptr [esi+0Ah]
0x430C7F: mov     dword ptr [esp+18h+arg_0], eax
0x430C83: movzx   eax, word ptr [esi+8]
0x430C87: add     esp, 8
0x430C8A: cmp     ebx, eax
0x430C8C: jb      short loc_430C9C
0x430C8E: movzx   ecx, word ptr [esi+0Eh]
0x430C92: add     ecx, ebx
0x430C94: push    ecx
0x430C95: mov     ecx, esi
0x430C97: call    NiTArray_SetSize
0x430C9C: lea     edx, [esp+10h+arg_0]
0x430CA0: push    edx
0x430CA1: push    ebx
0x430CA2: mov     ecx, esi
0x430CA4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430CA9: mov     eax, [edi]
0x430CAB: mov     edx, [eax+1Ch]
0x430CAE: mov     ecx, edi
0x430CB0: call    edx
0x430CB2: push    eax; int
0x430CB3: push    offset aSize; "Size"
0x430CB8: call    TESOutput_PrintLabeledUnsignedInt
0x430CBD: movzx   ebx, word ptr [esi+0Ah]
0x430CC1: mov     dword ptr [esp+18h+arg_0], eax
0x430CC5: movzx   eax, word ptr [esi+8]
0x430CC9: add     esp, 8
0x430CCC: cmp     ebx, eax
0x430CCE: jb      short loc_430CDE
0x430CD0: movzx   ecx, word ptr [esi+0Eh]
0x430CD4: add     ecx, ebx
0x430CD6: push    ecx
0x430CD7: mov     ecx, esi
0x430CD9: call    NiTArray_SetSize
0x430CDE: lea     edx, [esp+10h+arg_0]
0x430CE2: push    edx
0x430CE3: push    ebx
0x430CE4: mov     ecx, esi
0x430CE6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430CEB: mov     eax, [edi+0Ch]
0x430CEE: push    eax; int
0x430CEF: push    offset aBuffersize; "BufferSize"
0x430CF4: call    TESOutput_PrintLabeledUnsignedInt
0x430CF9: movzx   edi, word ptr [esi+0Ah]
0x430CFD: movzx   ecx, word ptr [esi+8]
0x430D01: add     esp, 8
0x430D04: cmp     edi, ecx
0x430D06: mov     dword ptr [esp+10h+arg_0], eax
0x430D0A: jb      short loc_430D1A
0x430D0C: movzx   edx, word ptr [esi+0Eh]
0x430D10: add     edx, edi
0x430D12: push    edx
0x430D13: mov     ecx, esi
0x430D15: call    NiTArray_SetSize
0x430D1A: lea     eax, [esp+10h+arg_0]
0x430D1E: push    eax
0x430D1F: push    edi
0x430D20: mov     ecx, esi
0x430D22: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x430D27: pop     edi
0x430D28: pop     esi
0x430D29: pop     ebx
0x430D2A: pop     ecx
0x430D2B: retn    4
