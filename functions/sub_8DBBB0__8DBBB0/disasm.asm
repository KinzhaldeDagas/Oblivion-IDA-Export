0x8DBBB0: test    [esp+arg_0], 1
0x8DBBB5: push    esi
0x8DBBB6: mov     esi, ecx
0x8DBBB8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DBBBE: jz      short loc_8DBBD3
0x8DBBC0: movzx   edx, word ptr [esi+4]
0x8DBBC4: mov     ecx, ds:0BA7D98h
0x8DBBCA: mov     eax, [ecx]
0x8DBBCC: push    1Fh
0x8DBBCE: push    edx
0x8DBBCF: push    esi
0x8DBBD0: call    dword ptr [eax+14h]
0x8DBBD3: mov     eax, esi
0x8DBBD5: pop     esi
0x8DBBD6: retn    4
