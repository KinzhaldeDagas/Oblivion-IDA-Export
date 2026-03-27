0x75FB30: mov     eax, [esp+arg_0]
0x75FB34: test    eax, eax
0x75FB36: mov     ds:0B4203Ch, eax
0x75FB3B: jz      short loc_75FB7A
0x75FB3D: push    esi
0x75FB3E: mov     esi, [eax+280h]
0x75FB44: mov     eax, ds:0B42038h
0x75FB49: test    eax, eax
0x75FB4B: jz      short loc_75FB55
0x75FB4D: mov     ecx, [eax]
0x75FB4F: mov     edx, [ecx+8]
0x75FB52: push    eax
0x75FB53: call    edx
0x75FB55: test    esi, esi
0x75FB57: mov     ds:0B42038h, esi
0x75FB5D: jz      short loc_75FB67
0x75FB5F: mov     eax, [esi]
0x75FB61: mov     ecx, [eax+4]
0x75FB64: push    esi
0x75FB65: call    ecx
0x75FB67: mov     edx, ds:0B4203Ch
0x75FB6D: mov     eax, [edx+8ACh]
0x75FB73: mov     ds:0B42040h, eax
0x75FB78: pop     esi
0x75FB79: retn
0x75FB7A: mov     eax, ds:0B42038h
0x75FB7F: test    eax, eax
0x75FB81: jz      short loc_75FB8B
0x75FB83: mov     ecx, [eax]
0x75FB85: mov     edx, [ecx+8]
0x75FB88: push    eax
0x75FB89: call    edx
0x75FB8B: mov     dword ptr ds:0B42038h, 0
0x75FB95: mov     dword ptr ds:0B42040h, 0
0x75FB9F: retn
