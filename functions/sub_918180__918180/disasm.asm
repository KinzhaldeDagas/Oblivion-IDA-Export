0x918180: push    esi
0x918181: mov     esi, ecx
0x918183: mov     ecx, [esi+8]
0x918186: mov     dword ptr [esi], offset off_A9D1B8
0x91818C: cmp     word ptr [ecx+4], 0
0x918191: jz      short loc_9181A4
0x918193: dec     word ptr [ecx+6]
0x918197: cmp     word ptr [ecx+6], 0
0x91819C: jnz     short loc_9181A4
0x91819E: mov     eax, [ecx]
0x9181A0: push    1
0x9181A2: call    dword ptr [eax]
0x9181A4: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9181AA: pop     esi
0x9181AB: retn
