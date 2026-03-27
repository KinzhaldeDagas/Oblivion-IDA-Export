0x41E4D0: push    esi
0x41E4D1: push    edi
0x41E4D2: mov     edi, ecx
0x41E4D4: push    offset aExtradatalistC; "ExtraDataList::CompareListForContainer"
0x41E4D9: mov     ecx, offset BSExtraDataCS
0x41E4DE: call    NiEnterCriticalSection
0x41E4E3: mov     eax, [esp+8+arg_0]
0x41E4E7: mov     esi, [eax+4]
0x41E4EA: test    esi, esi
0x41E4EC: jz      short ExtraDataList_CompareListForContainer___Return_0
0x41E4EE: mov     edi, edi
