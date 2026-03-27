0x7F23D0: push    esi
0x7F23D1: mov     esi, ecx
0x7F23D3: mov     eax, [esi+8]
0x7F23D6: test    eax, eax
0x7F23D8: mov     dword ptr [esi], offset ??_7STSPData@@6B@; const STSPData::`vftable'
0x7F23DE: jz      short loc_7F23F0
0x7F23E0: cmp     word ptr [esi+0Ch], 0
0x7F23E5: jbe     short loc_7F23F0
0x7F23E7: push    eax
0x7F23E8: call    FormHeapFree
0x7F23ED: add     esp, 4
0x7F23F0: push    offset NiRefObject_objcount; lpAddend
0x7F23F5: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7F23FB: call    dword ptr ds:0A2807Ch
0x7F2401: test    [esp+4+arg_0], 1
0x7F2406: jz      short loc_7F2411
0x7F2408: push    esi
0x7F2409: call    FormHeapFree
0x7F240E: add     esp, 4
0x7F2411: mov     eax, esi
0x7F2413: pop     esi
0x7F2414: retn    4
