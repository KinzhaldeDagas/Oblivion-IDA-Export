0x428920: push    edi
0x428921: push    1
0x428923: mov     edi, ecx
0x428925: call    ExtraDataList_RemoveAllCopyableExtraData
0x42892A: push    offset aExtradatalis_2; lpCriticalSection
0x42892F: mov     ecx, offset BSExtraDataCS
0x428934: call    NiEnterCriticalSection
0x428939: mov     eax, [esp+4+arg_0]
0x42893D: test    eax, eax
0x42893F: jz      short loc_428960
0x428941: push    esi
0x428942: mov     esi, [eax+4]
0x428945: test    esi, esi
0x428947: jz      short loc_42895F
0x428949: lea     esp, [esp+0]
0x428950: push    esi
0x428951: mov     ecx, edi
0x428953: call    ExtraDataList_CopyBSExtraData
0x428958: mov     esi, [esi+8]
0x42895B: test    esi, esi
0x42895D: jnz     short loc_428950
0x42895F: pop     esi
0x428960: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x428965: call    NiLeaveCriticalSection_0
0x42896A: pop     edi
0x42896B: retn    4
