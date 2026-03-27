0x5E2CAB: lea     ecx, [esi+44h]; this
0x5E2CAE: call    ExtraDataList_GetContainerChanges
0x5E2CB3: test    eax, eax
0x5E2CB5: jz      short loc_5E2CBE
0x5E2CB7: mov     ecx, eax
0x5E2CB9: call    sub_484310
0x5E2CBE: mov     edx, [esi]
0x5E2CC0: mov     eax, [edx+2C0h]
0x5E2CC6: mov     ecx, esi
0x5E2CC8: call    eax
