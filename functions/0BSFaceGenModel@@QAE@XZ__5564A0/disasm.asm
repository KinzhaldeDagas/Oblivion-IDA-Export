0x5564A0: push    esi
0x5564A1: push    edi
0x5564A2: mov     esi, ecx
0x5564A4: xor     edi, edi
0x5564A6: push    offset NiRefObject_objcount; lpAddend
0x5564AB: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5564B1: mov     [esi+4], edi
0x5564B4: call    dword ptr ds:0A28078h
0x5564BA: mov     [esi+14h], edi
0x5564BD: mov     [esi+18h], edi
0x5564C0: mov     [esi+8], edi
0x5564C3: mov     [esi+0Ch], edi
0x5564C6: mov     [esi+10h], edi
0x5564C9: pop     edi
0x5564CA: mov     dword ptr [esi], offset ??_7BSFaceGenModel@@6B@; const BSFaceGenModel::`vftable'
0x5564D0: mov     eax, esi
0x5564D2: pop     esi
0x5564D3: retn
