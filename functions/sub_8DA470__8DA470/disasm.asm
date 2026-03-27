0x8DA470: push    esi
0x8DA471: mov     esi, [esp+4+arg_0]
0x8DA475: mov     eax, [esi]
0x8DA477: push    edi
0x8DA478: mov     edi, ecx
0x8DA47A: push    edi
0x8DA47B: push    2
0x8DA47D: push    0
0x8DA47F: mov     ecx, esi
0x8DA481: call    dword ptr [eax]
0x8DA483: mov     eax, [edi+1C10h]
0x8DA489: test    eax, eax
0x8DA48B: jz      short loc_8DA4F7
0x8DA48D: mov     edx, [esi]
0x8DA48F: push    0
0x8DA491: push    0C00h
0x8DA496: push    eax
0x8DA497: push    4
0x8DA499: push    offset aDebugtable; "DebugTable"
0x8DA49E: mov     ecx, esi
0x8DA4A0: call    dword ptr [edx+4]
0x8DA4A3: mov     ecx, [edi+1C14h]
0x8DA4A9: mov     eax, [esi]
0x8DA4AB: push    0
0x8DA4AD: push    0C00h
0x8DA4B2: push    ecx
0x8DA4B3: push    4
0x8DA4B5: push    offset aDebugtable; "DebugTable"
0x8DA4BA: mov     ecx, esi
0x8DA4BC: call    dword ptr [eax+4]
0x8DA4BF: mov     eax, [edi+1C18h]
0x8DA4C5: mov     edx, [esi]
0x8DA4C7: push    0
0x8DA4C9: push    0C00h
0x8DA4CE: push    eax
0x8DA4CF: push    4
0x8DA4D1: push    offset aDebugtable; "DebugTable"
0x8DA4D6: mov     ecx, esi
0x8DA4D8: call    dword ptr [edx+4]
0x8DA4DB: mov     eax, [edi+1C1Ch]
0x8DA4E1: mov     edx, [esi]
0x8DA4E3: push    0
0x8DA4E5: push    0C00h
0x8DA4EA: push    eax
0x8DA4EB: push    4
0x8DA4ED: push    offset aDebugtable; "DebugTable"
0x8DA4F2: mov     ecx, esi
0x8DA4F4: call    dword ptr [edx+4]
0x8DA4F7: mov     edx, [esi]
0x8DA4F9: mov     ecx, esi
0x8DA4FB: call    dword ptr [edx+14h]
0x8DA4FE: pop     edi
0x8DA4FF: pop     esi
0x8DA500: retn    4
