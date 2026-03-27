0x98A17B: test    edi, edi
0x98A17D: jz      short loc_98A1B6
0x98A17F: test    eax, eax
0x98A181: jz      short loc_98A1B6
0x98A183: push    esi
0x98A184: mov     esi, [eax]
0x98A186: cmp     esi, edi
0x98A188: jz      short loc_98A1B2
0x98A18A: push    edi; lpAddend
0x98A18B: mov     [eax], edi
0x98A18D: call    ___addlocaleref
0x98A192: test    esi, esi
0x98A194: pop     ecx
0x98A195: jz      short loc_98A1B2
0x98A197: push    esi; lpAddend
0x98A198: call    ___removelocaleref
0x98A19D: cmp     dword ptr [esi], 0
0x98A1A0: pop     ecx
0x98A1A1: jnz     short loc_98A1B2
0x98A1A3: cmp     esi, offset unk_B318C0
0x98A1A9: jz      short loc_98A1B2
0x98A1AB: push    esi; Memory
0x98A1AC: call    ___freetlocinfo
0x98A1B1: pop     ecx
0x98A1B2: mov     eax, edi
0x98A1B4: pop     esi
0x98A1B5: retn
0x98A1B6: xor     eax, eax
0x98A1B8: retn
