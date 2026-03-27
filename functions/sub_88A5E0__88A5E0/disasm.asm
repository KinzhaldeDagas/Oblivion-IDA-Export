0x88A5E0: push    esi
0x88A5E1: mov     esi, ecx
0x88A5E3: test    esi, esi
0x88A5E5: jz      short loc_88A5EC
0x88A5E7: lea     eax, [esi+10h]
0x88A5EA: jmp     short loc_88A5EE
0x88A5EC: xor     eax, eax
0x88A5EE: test    esi, esi
0x88A5F0: mov     dword ptr [eax], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x88A5F6: jz      short loc_88A5FD
0x88A5F8: lea     eax, [esi+0Ch]
0x88A5FB: jmp     short loc_88A5FF
0x88A5FD: xor     eax, eax
0x88A5FF: test    [esp+4+arg_0], 1
0x88A604: mov     dword ptr [eax], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x88A60A: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x88A610: jz      short loc_88A627
0x88A612: movzx   edx, word ptr [esi+4]
0x88A616: mov     ecx, ds:0BA7D98h
0x88A61C: mov     eax, [ecx]
0x88A61E: mov     eax, [eax+14h]
0x88A621: push    24h ; '$'
0x88A623: push    edx
0x88A624: push    esi
0x88A625: call    eax
0x88A627: mov     eax, esi
0x88A629: pop     esi
0x88A62A: retn    4
