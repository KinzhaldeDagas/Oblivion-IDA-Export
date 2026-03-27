0x899300: test    [esp+arg_0], 1
0x899305: push    esi
0x899306: mov     esi, ecx
0x899308: mov     dword ptr [esi+8], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x89930F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x899315: jz      short loc_89932A
0x899317: movzx   edx, word ptr [esi+4]
0x89931B: mov     ecx, ds:0BA7D98h
0x899321: mov     eax, [ecx]
0x899323: push    4
0x899325: push    edx
0x899326: push    esi
0x899327: call    dword ptr [eax+14h]
0x89932A: mov     eax, esi
0x89932C: pop     esi
0x89932D: retn    4
