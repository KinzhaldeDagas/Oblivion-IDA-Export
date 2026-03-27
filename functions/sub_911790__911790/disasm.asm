0x911790: push    esi
0x911791: mov     esi, ecx
0x911793: mov     ecx, [esi+0Ch]
0x911796: test    ecx, ecx
0x911798: mov     dword ptr [esi], offset off_A9CCFC
0x91179E: jz      short loc_9117B8
0x9117A0: cmp     word ptr [ecx+4], 0
0x9117A5: jz      short loc_9117B8
0x9117A7: dec     word ptr [ecx+6]
0x9117AB: cmp     word ptr [ecx+6], 0
0x9117B0: jnz     short loc_9117B8
0x9117B2: mov     eax, [ecx]
0x9117B4: push    1
0x9117B6: call    dword ptr [eax]
0x9117B8: test    [esp+4+arg_0], 1
0x9117BD: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9117C3: jz      short loc_9117D8
0x9117C5: movzx   eax, word ptr [esi+4]
0x9117C9: mov     ecx, ds:0BA7D98h
0x9117CF: mov     edx, [ecx]
0x9117D1: push    29h ; ')'
0x9117D3: push    eax
0x9117D4: push    esi
0x9117D5: call    dword ptr [edx+14h]
0x9117D8: mov     eax, esi
0x9117DA: pop     esi
0x9117DB: retn    4
