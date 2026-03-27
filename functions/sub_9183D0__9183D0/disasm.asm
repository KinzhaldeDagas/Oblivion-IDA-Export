0x9183D0: push    esi
0x9183D1: mov     esi, ecx
0x9183D3: mov     ecx, [esi+8]
0x9183D6: mov     dword ptr [esi], offset off_A9D1B8
0x9183DC: cmp     word ptr [ecx+4], 0
0x9183E1: jz      short loc_9183F4
0x9183E3: dec     word ptr [ecx+6]
0x9183E7: cmp     word ptr [ecx+6], 0
0x9183EC: jnz     short loc_9183F4
0x9183EE: mov     eax, [ecx]
0x9183F0: push    1
0x9183F2: call    dword ptr [eax]
0x9183F4: test    [esp+4+arg_0], 1
0x9183F9: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9183FF: jz      short loc_918414
0x918401: movzx   eax, word ptr [esi+4]
0x918405: mov     ecx, ds:0BA7D98h
0x91840B: mov     edx, [ecx]
0x91840D: push    17h
0x91840F: push    eax
0x918410: push    esi
0x918411: call    dword ptr [edx+14h]
0x918414: mov     eax, esi
0x918416: pop     esi
0x918417: retn    4
