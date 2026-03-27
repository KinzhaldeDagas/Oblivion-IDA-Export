0x8FA150: test    [esp+arg_0], 1
0x8FA155: push    esi
0x8FA156: mov     esi, ecx
0x8FA158: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8FA15E: jz      short loc_8FA173
0x8FA160: movzx   edx, word ptr [esi+4]
0x8FA164: mov     ecx, ds:0BA7D98h
0x8FA16A: mov     eax, [ecx]
0x8FA16C: push    1Ch
0x8FA16E: push    edx
0x8FA16F: push    esi
0x8FA170: call    dword ptr [eax+14h]
0x8FA173: mov     eax, esi
0x8FA175: pop     esi
0x8FA176: retn    4
