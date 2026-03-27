0x4A3C60: mov     eax, ds:0B35414h
0x4A3C65: test    eax, eax
0x4A3C67: push    esi
0x4A3C68: push    edi
0x4A3C69: mov     edi, ds:0A2807Ch
0x4A3C6F: jz      short loc_4A3C95
0x4A3C71: mov     esi, eax
0x4A3C73: add     eax, 4
0x4A3C76: push    eax; lpAddend
0x4A3C77: call    edi ; InterlockedDecrement
0x4A3C79: test    eax, eax
0x4A3C7B: jnz     short loc_4A3C8B
0x4A3C7D: test    esi, esi
0x4A3C7F: jz      short loc_4A3C8B
0x4A3C81: mov     eax, [esi]
0x4A3C83: mov     edx, [eax]
0x4A3C85: push    1
0x4A3C87: mov     ecx, esi
0x4A3C89: call    edx
0x4A3C8B: mov     dword ptr ds:0B35414h, 0
0x4A3C95: mov     esi, ds:0B35418h
0x4A3C9B: test    esi, esi
0x4A3C9D: jz      short loc_4A3CC1
0x4A3C9F: lea     eax, [esi+4]
0x4A3CA2: push    eax; lpAddend
0x4A3CA3: call    edi ; InterlockedDecrement
0x4A3CA5: test    eax, eax
0x4A3CA7: jnz     short loc_4A3CB7
0x4A3CA9: test    esi, esi
0x4A3CAB: jz      short loc_4A3CB7
0x4A3CAD: mov     edx, [esi]
0x4A3CAF: mov     eax, [edx]
0x4A3CB1: push    1
0x4A3CB3: mov     ecx, esi
0x4A3CB5: call    eax
0x4A3CB7: mov     dword ptr ds:0B35418h, 0
0x4A3CC1: pop     edi
0x4A3CC2: pop     esi
0x4A3CC3: retn
