0x75DF80: push    ebx
0x75DF81: mov     ebx, ds:0A2807Ch
0x75DF87: push    esi
0x75DF88: push    edi
0x75DF89: mov     edi, ecx
0x75DF8B: mov     dword ptr [edi], offset ??_7NiPSysUpdateTask@@6B@; const NiPSysUpdateTask::`vftable'
0x75DF91: mov     esi, [edi+0Ch]
0x75DF94: test    esi, esi
0x75DF96: jz      short loc_75DFB7
0x75DF98: lea     eax, [esi+4]
0x75DF9B: push    eax; lpAddend
0x75DF9C: call    ebx ; InterlockedDecrement
0x75DF9E: test    eax, eax
0x75DFA0: jnz     short loc_75DFB0
0x75DFA2: test    esi, esi
0x75DFA4: jz      short loc_75DFB0
0x75DFA6: mov     edx, [esi]
0x75DFA8: mov     eax, [edx]
0x75DFAA: push    1
0x75DFAC: mov     ecx, esi
0x75DFAE: call    eax
0x75DFB0: mov     dword ptr [edi+0Ch], 0
0x75DFB7: mov     esi, [edi+0Ch]
0x75DFBA: test    esi, esi
0x75DFBC: jz      short loc_75DFD6
0x75DFBE: lea     ecx, [esi+4]
0x75DFC1: push    ecx; lpAddend
0x75DFC2: call    ebx ; InterlockedDecrement
0x75DFC4: test    eax, eax
0x75DFC6: jnz     short loc_75DFD6
0x75DFC8: test    esi, esi
0x75DFCA: jz      short loc_75DFD6
0x75DFCC: mov     edx, [esi]
0x75DFCE: mov     eax, [edx]
0x75DFD0: push    1
0x75DFD2: mov     ecx, esi
0x75DFD4: call    eax
0x75DFD6: mov     dword ptr [edi], offset ??_7NiTask@@6B@; const NiTask::`vftable'
0x75DFDC: mov     ecx, edi
0x75DFDE: pop     edi
0x75DFDF: pop     esi
0x75DFE0: pop     ebx
0x75DFE1: jmp     NiRefObject_destr
