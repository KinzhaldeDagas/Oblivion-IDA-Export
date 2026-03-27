0x88A540: test    byte ptr [esp+arg_0], 1
0x88A545: push    esi
0x88A546: mov     esi, ecx
0x88A548: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x88A54E: jz      short loc_88A565
0x88A550: movzx   edx, word ptr [esi+4]
0x88A554: mov     ecx, ds:0BA7D98h
0x88A55A: mov     eax, [ecx]
0x88A55C: mov     eax, [eax+14h]
0x88A55F: push    2Ch ; ','
0x88A561: push    edx
0x88A562: push    esi
0x88A563: call    eax
0x88A565: mov     eax, esi
0x88A567: pop     esi
0x88A568: retn    4
