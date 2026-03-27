0x8F0670: push    esi
0x8F0671: mov     esi, ecx
0x8F0673: mov     ecx, [esi+0Ch]
0x8F0676: mov     dword ptr [esi], offset off_A9B120
0x8F067C: cmp     word ptr [ecx+4], 0
0x8F0681: jz      short loc_8F0694
0x8F0683: dec     word ptr [ecx+6]
0x8F0687: cmp     word ptr [ecx+6], 0
0x8F068C: jnz     short loc_8F0694
0x8F068E: mov     eax, [ecx]
0x8F0690: push    1
0x8F0692: call    dword ptr [eax]
0x8F0694: test    [esp+4+arg_0], 1
0x8F0699: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F069F: jz      short loc_8F06B4
0x8F06A1: movzx   eax, word ptr [esi+4]
0x8F06A5: mov     ecx, ds:0BA7D98h
0x8F06AB: mov     edx, [ecx]
0x8F06AD: push    24h ; '$'
0x8F06AF: push    eax
0x8F06B0: push    esi
0x8F06B1: call    dword ptr [edx+14h]
0x8F06B4: mov     eax, esi
0x8F06B6: pop     esi
0x8F06B7: retn    4
