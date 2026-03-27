0x74BAD0: push    ebx
0x74BAD1: mov     ebx, ds:0A2807Ch
0x74BAD7: push    esi
0x74BAD8: push    edi
0x74BAD9: mov     edi, ecx
0x74BADB: mov     esi, [edi+8]
0x74BADE: test    esi, esi
0x74BAE0: jz      short loc_74BAFA
0x74BAE2: lea     eax, [esi+4]
0x74BAE5: push    eax; lpAddend
0x74BAE6: call    ebx ; InterlockedDecrement
0x74BAE8: test    eax, eax
0x74BAEA: jnz     short loc_74BAFA
0x74BAEC: test    esi, esi
0x74BAEE: jz      short loc_74BAFA
0x74BAF0: mov     edx, [esi]
0x74BAF2: mov     eax, [edx]
0x74BAF4: push    1
0x74BAF6: mov     ecx, esi
0x74BAF8: call    eax
0x74BAFA: push    offset NiRefObject_objcount; lpAddend
0x74BAFF: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x74BB05: call    ebx ; InterlockedDecrement
0x74BB07: test    [esp+0Ch+arg_0], 1
0x74BB0C: jz      short loc_74BB17
0x74BB0E: push    edi
0x74BB0F: call    FormHeapFree
0x74BB14: add     esp, 4
0x74BB17: mov     eax, edi
0x74BB19: pop     edi
0x74BB1A: pop     esi
0x74BB1B: pop     ebx
0x74BB1C: retn    4
