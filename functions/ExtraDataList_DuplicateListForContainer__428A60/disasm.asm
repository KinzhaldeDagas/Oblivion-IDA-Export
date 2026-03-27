0x428A60: push    esi
0x428A61: push    edi
0x428A62: mov     edi, ecx
0x428A64: push    offset aExtradatalistD; lpCriticalSection
0x428A69: mov     ecx, offset BSExtraDataCS
0x428A6E: call    NiEnterCriticalSection
0x428A73: mov     eax, [esp+8+arg_0]
0x428A77: mov     esi, [eax+4]
0x428A7A: test    esi, esi
0x428A7C: jz      short loc_428AA9
0x428A7E: mov     edi, edi
0x428A80: movzx   eax, byte ptr [esi+4]
0x428A84: add     eax, 0FFFFFFEEh; switch 68 cases
0x428A87: cmp     eax, 43h
0x428A8A: ja      short ExtraDataList_DuplicateListForContainer___def_428A93; jumptable 00428A93 default case, cases 19-26,29-33,35-38,48-53,56-71,73-79,81-84
0x428A8C: movzx   ecx, ds:byte_428AC0[eax]
0x428A93: jmp     ds:jpt_428A93[ecx*4]; switch jump
0x428A9A: push    esi; jumptable 00428A93 cases 18,27,28,34,39-47,54,55,72,80,85
0x428A9B: mov     ecx, edi
0x428A9D: call    ExtraDataList_CopyBSExtraData
0x428AA2: mov     esi, [esi+8]; jumptable 00428A93 default case, cases 19-26,29-33,35-38,48-53,56-71,73-79,81-84
0x428AA5: test    esi, esi
0x428AA7: jnz     short loc_428A80
0x428AA9: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x428AAE: call    NiLeaveCriticalSection_0
0x428AB3: pop     edi
0x428AB4: pop     esi
0x428AB5: retn    4
