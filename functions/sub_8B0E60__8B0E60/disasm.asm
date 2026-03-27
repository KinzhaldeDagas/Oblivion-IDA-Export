0x8B0E60: push    esi
0x8B0E61: mov     eax, ecx
0x8B0E63: mov     esi, [eax+8]
0x8B0E66: mov     ecx, ds:0BA7D98h
0x8B0E6C: mov     eax, [eax]
0x8B0E6E: mov     edx, [ecx]
0x8B0E70: push    14h
0x8B0E72: lea     esi, ds:8[esi*8]
0x8B0E79: push    esi
0x8B0E7A: push    eax
0x8B0E7B: call    dword ptr [edx+14h]
0x8B0E7E: pop     esi
0x8B0E7F: retn
