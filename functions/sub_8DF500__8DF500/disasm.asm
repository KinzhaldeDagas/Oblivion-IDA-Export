0x8DF500: test    [esp+arg_0], 1
0x8DF505: push    esi
0x8DF506: mov     esi, ecx
0x8DF508: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DF50E: jz      short loc_8DF523
0x8DF510: movzx   edx, word ptr [esi+4]
0x8DF514: mov     ecx, ds:0BA7D98h
0x8DF51A: mov     eax, [ecx]
0x8DF51C: push    1Eh
0x8DF51E: push    edx
0x8DF51F: push    esi
0x8DF520: call    dword ptr [eax+14h]
0x8DF523: mov     eax, esi
0x8DF525: pop     esi
0x8DF526: retn    4
