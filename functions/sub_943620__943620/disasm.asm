0x943620: test    [esp+arg_0], 1
0x943625: push    esi
0x943626: mov     esi, ecx
0x943628: mov     dword ptr [esi+8], 0
0x94362F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x943635: jz      short loc_94364A
0x943637: movzx   edx, word ptr [esi+4]
0x94363B: mov     ecx, ds:0BA7D98h
0x943641: mov     eax, [ecx]
0x943643: push    25h ; '%'
0x943645: push    edx
0x943646: push    esi
0x943647: call    dword ptr [eax+14h]
0x94364A: mov     eax, esi
0x94364C: pop     esi
0x94364D: retn    4
