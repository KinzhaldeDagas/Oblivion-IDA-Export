0x980D25: mov     edx, ds:0BA9C50h
0x980D2B: push    esi
0x980D2C: mov     eax, ecx
0x980D2E: mov     ecx, ds:0BA9C10h
0x980D34: mov     esi, offset dword_BA9C10
0x980D39: mov     ds:0BA9C54h, esi
0x980D3F: mov     ecx, [ecx+4]
0x980D42: mov     ds:dword_BA9C3C[ecx], edx
0x980D48: mov     ecx, ds:0BA9C10h
0x980D4E: mov     edx, [ecx+4]
0x980D51: add     edx, esi
0x980D53: or      dword ptr [edx+10h], 2
0x980D57: pop     esi
0x980D58: retn
