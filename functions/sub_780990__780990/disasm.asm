0x780990: mov     edx, ds:0B3FAA4h
0x780996: test    edx, edx
0x780998: jz      short locret_7809B9
0x78099A: mov     eax, [edx+58h]
0x78099D: test    eax, eax
0x78099F: jz      short locret_7809B9
0x7809A1: mov     dword ptr [edx+58h], 0
0x7809A8: cmp     eax, [ecx]
0x7809AA: jnz     short loc_7809B2
0x7809AC: mov     dword ptr [ecx], 0
0x7809B2: push    eax
0x7809B3: call    FormHeapFree
0x7809B8: pop     ecx
0x7809B9: retn
