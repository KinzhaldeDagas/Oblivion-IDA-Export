0x41E4F0: mov     al, [esi+4]
0x41E4F3: cmp     al, 12h
0x41E4F5: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E4F7: cmp     al, 27h ; '''
0x41E4F9: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E4FB: cmp     al, 2Ah ; '*'
0x41E4FD: jz      short ExtraDataList_CompareListForContainer___ExtraDataLoop_Next
0x41E4FF: mov     [esp+a2], al
0x41E503: mov     ecx, dword ptr [esp+a2]
0x41E507: push    ecx; a2
0x41E508: mov     ecx, edi; this
0x41E50A: call    BaseExtraList_GetExtraData
0x41E50F: test    eax, eax
0x41E511: jz      short ExtraDataList_CompareListForContainer___Return_1
0x41E513: mov     edx, [eax]
0x41E515: mov     ecx, eax
0x41E517: mov     eax, [edx+4]
0x41E51A: push    esi
0x41E51B: call    eax
0x41E51D: test    al, al
0x41E51F: jnz     short ExtraDataList_CompareListForContainer___Return_1
