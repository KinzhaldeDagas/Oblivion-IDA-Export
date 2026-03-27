0x77DE00: mov     eax, ds:0B428A0h
0x77DE05: test    eax, eax
0x77DE07: jnz     short locret_77DE38
0x77DE09: push    esi
0x77DE0A: push    0Ch; Size
0x77DE0C: call    FormHeapAlloc
0x77DE11: mov     esi, eax
0x77DE13: add     esp, 4
0x77DE16: test    esi, esi
0x77DE18: jz      short loc_77DE30
0x77DE1A: mov     ecx, esi
0x77DE1C: call    sub_7828D0
0x77DE21: mov     eax, esi
0x77DE23: mov     dword ptr [esi], offset ??_7NiUnsharedGeometryGroup@@6B@; const NiUnsharedGeometryGroup::`vftable'
0x77DE29: mov     ds:0B428A0h, eax
0x77DE2E: pop     esi
0x77DE2F: retn
0x77DE30: xor     eax, eax
0x77DE32: mov     ds:0B428A0h, eax
0x77DE37: pop     esi
0x77DE38: retn
