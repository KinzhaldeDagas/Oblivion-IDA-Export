0x926030: push    esi
0x926031: mov     esi, ecx
0x926033: call    sub_8A7720
0x926038: mov     ecx, [esi+68h]
0x92603B: dec     ecx
0x92603C: push    esi; lpCriticalSection
0x92603D: mov     [esi+68h], ecx
0x926040: call    dword ptr ds:0A28074h
0x926046: pop     esi
0x926047: retn
