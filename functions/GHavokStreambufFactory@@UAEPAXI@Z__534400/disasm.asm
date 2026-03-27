0x534400: test    byte ptr [esp+arg_0], 1
0x534405: push    esi
0x534406: mov     esi, ecx
0x534408: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x53440E: jz      short loc_534425
0x534410: movzx   edx, word ptr [esi+4]
0x534414: mov     ecx, ds:0BA7D98h
0x53441A: mov     eax, [ecx]
0x53441C: mov     eax, [eax+14h]
0x53441F: push    15h
0x534421: push    edx
0x534422: push    esi
0x534423: call    eax
0x534425: mov     eax, esi
0x534427: pop     esi
0x534428: retn    4
