0x88D380: push    esi
0x88D381: mov     esi, ecx
0x88D383: mov     ecx, [esi+8]
0x88D386: mov     dword ptr [esi], offset off_A96248
0x88D38C: cmp     word ptr [ecx+4], 0
0x88D391: jz      short loc_88D3A4
0x88D393: dec     word ptr [ecx+6]
0x88D397: cmp     word ptr [ecx+6], 0
0x88D39C: jnz     short loc_88D3A4
0x88D39E: mov     eax, [ecx]
0x88D3A0: push    1
0x88D3A2: call    dword ptr [eax]
0x88D3A4: test    [esp+4+arg_0], 1
0x88D3A9: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x88D3AF: jz      short loc_88D3C4
0x88D3B1: movzx   eax, word ptr [esi+4]
0x88D3B5: mov     ecx, ds:0BA7D98h
0x88D3BB: mov     edx, [ecx]
0x88D3BD: push    31h ; '1'
0x88D3BF: push    eax
0x88D3C0: push    esi
0x88D3C1: call    dword ptr [edx+14h]
0x88D3C4: mov     eax, esi
0x88D3C6: pop     esi
0x88D3C7: retn    4
