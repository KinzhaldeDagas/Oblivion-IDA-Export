0x8F0540: push    esi
0x8F0541: mov     esi, ecx
0x8F0543: mov     ecx, [esi+0Ch]
0x8F0546: mov     dword ptr [esi], offset off_A9B120
0x8F054C: cmp     word ptr [ecx+4], 0
0x8F0551: jz      short loc_8F0564
0x8F0553: dec     word ptr [ecx+6]
0x8F0557: cmp     word ptr [ecx+6], 0
0x8F055C: jnz     short loc_8F0564
0x8F055E: mov     eax, [ecx]
0x8F0560: push    1
0x8F0562: call    dword ptr [eax]
0x8F0564: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F056A: pop     esi
0x8F056B: retn
