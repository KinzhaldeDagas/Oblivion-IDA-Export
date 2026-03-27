0x437B60: push    esi
0x437B61: mov     esi, ecx
0x437B63: mov     eax, [esi+24h]
0x437B66: mov     eax, [eax+28h]
0x437B69: test    eax, eax
0x437B6B: jz      short loc_437B93
0x437B6D: cmp     dword ptr [esi+0Ch], 6
0x437B71: jz      short loc_437B93
0x437B73: cmp     dword ptr [esi+2Ch], 0
0x437B77: jz      short loc_437B93
0x437B79: add     eax, 4
0x437B7C: push    eax; lpAddend
0x437B7D: call    ds:InterlockedIncrement
0x437B83: mov     ecx, [esi+2Ch]
0x437B86: mov     edx, [esi+28h]
0x437B89: push    ecx
0x437B8A: mov     ecx, [esi+20h]
0x437B8D: push    edx
0x437B8E: call    sub_47B7D0
0x437B93: mov     eax, ModelLoaderPtr
0x437B98: mov     ecx, [eax+10h]
0x437B9B: mov     edx, [ecx]
0x437B9D: mov     eax, [esi+30h]
0x437BA0: mov     edx, [edx+10h]
0x437BA3: push    eax
0x437BA4: call    edx
0x437BA6: pop     esi
0x437BA7: retn
