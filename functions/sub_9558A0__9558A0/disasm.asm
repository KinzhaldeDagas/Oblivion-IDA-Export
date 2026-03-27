0x9558A0: test    [esp+arg_0], 1
0x9558A5: push    esi
0x9558A6: mov     esi, ecx
0x9558A8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9558AE: jz      short loc_9558C3
0x9558B0: movzx   edx, word ptr [esi+4]
0x9558B4: mov     ecx, ds:0BA7D98h
0x9558BA: mov     eax, [ecx]
0x9558BC: push    25h ; '%'
0x9558BE: push    edx
0x9558BF: push    esi
0x9558C0: call    dword ptr [eax+14h]
0x9558C3: mov     eax, esi
0x9558C5: pop     esi
0x9558C6: retn    4
