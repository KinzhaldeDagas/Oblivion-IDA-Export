0x918690: push    esi
0x918691: mov     esi, ecx
0x918693: lea     ecx, [esi+8]
0x918696: call    sub_8B0E60
0x91869B: test    [esp+4+arg_0], 1
0x9186A0: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9186A6: jz      short loc_9186BB
0x9186A8: movzx   edx, word ptr [esi+4]
0x9186AC: mov     ecx, ds:0BA7D98h
0x9186B2: mov     eax, [ecx]
0x9186B4: push    32h ; '2'
0x9186B6: push    edx
0x9186B7: push    esi
0x9186B8: call    dword ptr [eax+14h]
0x9186BB: mov     eax, esi
0x9186BD: pop     esi
0x9186BE: retn    4
