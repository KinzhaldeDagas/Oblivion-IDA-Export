0x41E4D0: push    esi; Asymmetric container-stack compatibility check (__thiscall, retn 4). Scans only 'other'. Returns true when the lists must remain distinct: other contains Script (0x12) or Ownership (0x27), this lacks a matching extra-data type, or that type's virtual CompareTo reports a difference. Count (0x2A) is deliberately ignored because callers merge counts separately. Returns false only when every relevant node in other is compatible.
0x41E4D1: push    edi
0x41E4D2: mov     edi, ecx
0x41E4D4: push    offset aExtradatalistC; "ExtraDataList::CompareListForContainer"
0x41E4D9: mov     ecx, 0B33800h
0x41E4DE: call    NiEnterCriticalSection
0x41E4E3: mov     eax, dword ptr [esp+8+a2]
0x41E4E7: mov     esi, [eax+4]
0x41E4EA: test    esi, esi
0x41E4EC: jz      short ExtraDataList_CompareListForContainer___Return_0
0x41E4EE: mov     edi, edi
0x41E4F0: mov     al, [esi+4]
0x41E4F3: cmp     al, 12h; Script (0x12) and Ownership (0x27) force a non-stackable/different result.
0x41E4F5: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E4F7: cmp     al, 27h ; '''
0x41E4F9: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E4FB: cmp     al, 2Ah ; '*'; Count extra data (0x2A) is excluded from comparison; the inventory callers add counts explicitly.
0x41E4FD: jz      short ExtraDataList_CompareListForContainer___ExtraDataLoop_Next
0x41E4FF: mov     [esp+8+a2], al
0x41E503: mov     ecx, dword ptr [esp+8+a2]
0x41E507: push    ecx; a2
0x41E508: mov     ecx, edi; this
0x41E50A: call    BaseExtraList_GetExtraData
0x41E50F: test    eax, eax
0x41E511: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E513: mov     edx, [eax]
0x41E515: mov     ecx, eax
0x41E517: mov     eax, [edx+4]
0x41E51A: push    esi
0x41E51B: call    eax; Virtual CompareTo returns nonzero for a mismatch; missing same-type data also yields the function's true/different result.
0x41E51D: test    al, al
0x41E51F: jnz     short ExtraDataList_CompareListForContainer___Return_1
0x41E521: mov     esi, [esi+8]
0x41E524: test    esi, esi
0x41E526: jnz     short ExtraDataList_CompareListForContainer___ExtraDataLoop
0x41E528: mov     ecx, 0B33800h; lpCriticalSection
0x41E52D: call    NiLeaveCriticalSection_0
0x41E532: pop     edi
0x41E533: xor     al, al
0x41E535: pop     esi
0x41E536: retn    4
0x41E539: mov     ecx, 0B33800h; lpCriticalSection
0x41E53E: call    NiLeaveCriticalSection_0
0x41E543: pop     edi
0x41E544: mov     al, 1
0x41E546: pop     esi
0x41E547: retn    4
