0x484420: mov     eax, [esp+arg_0]
0x484424: push    esi
0x484425: mov     esi, ecx
0x484427: push    8; Size
0x484429: mov     [esi+8], eax
0x48442C: call    FormHeapAlloc
0x484431: add     esp, 4
0x484434: test    eax, eax
0x484436: jz      short loc_484454
0x484438: mov     ecx, [esp+4+arg_4]
0x48443C: mov     dword ptr [eax], 0
0x484442: mov     dword ptr [eax+4], 0
0x484449: mov     [esi], eax
0x48444B: mov     [esi+4], ecx
0x48444E: mov     eax, esi
0x484450: pop     esi
0x484451: retn    8
0x484454: mov     ecx, [esp+4+arg_4]
0x484458: xor     eax, eax
0x48445A: mov     [esi], eax
0x48445C: mov     [esi+4], ecx
0x48445F: mov     eax, esi
0x484461: pop     esi
0x484462: retn    8
