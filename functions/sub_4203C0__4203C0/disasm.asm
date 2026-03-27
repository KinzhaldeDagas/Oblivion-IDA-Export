0x4203C0: push    esi
0x4203C1: push    41h ; 'A'; a2
0x4203C3: xor     esi, esi
0x4203C5: call    BaseExtraList_GetExtraData
0x4203CA: test    eax, eax
0x4203CC: jz      short loc_4203D3
0x4203CE: mov     eax, [eax+0Ch]
0x4203D1: pop     esi
0x4203D2: retn
0x4203D3: mov     eax, esi
0x4203D5: pop     esi
0x4203D6: retn
