0x8BC220: push    esi
0x8BC221: mov     esi, ecx
0x8BC223: mov     ecx, [esi+8]
0x8BC226: test    ecx, ecx
0x8BC228: mov     dword ptr [esi], offset off_A98328
0x8BC22E: jz      short loc_8BC248
0x8BC230: cmp     word ptr [ecx+4], 0
0x8BC235: jz      short loc_8BC248
0x8BC237: dec     word ptr [ecx+6]
0x8BC23B: cmp     word ptr [ecx+6], 0
0x8BC240: jnz     short loc_8BC248
0x8BC242: mov     eax, [ecx]
0x8BC244: push    1
0x8BC246: call    dword ptr [eax]
0x8BC248: test    [esp+4+arg_0], 1
0x8BC24D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BC253: jz      short loc_8BC268
0x8BC255: movzx   eax, word ptr [esi+4]
0x8BC259: mov     ecx, ds:0BA7D98h
0x8BC25F: mov     edx, [ecx]
0x8BC261: push    17h
0x8BC263: push    eax
0x8BC264: push    esi
0x8BC265: call    dword ptr [edx+14h]
0x8BC268: mov     eax, esi
0x8BC26A: pop     esi
0x8BC26B: retn    4
