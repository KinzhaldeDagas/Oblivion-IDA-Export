0x8DC1C0: push    esi
0x8DC1C1: mov     esi, [esp+4+arg_0]
0x8DC1C5: push    edi
0x8DC1C6: mov     edi, [esi+0B0h]
0x8DC1CC: dec     edi
0x8DC1CD: js      short loc_8DC1E6
0x8DC1CF: nop
0x8DC1D0: mov     eax, [esi+0ACh]
0x8DC1D6: mov     ecx, [eax+edi*4]
0x8DC1D9: test    ecx, ecx
0x8DC1DB: jz      short loc_8DC1E3
0x8DC1DD: mov     edx, [ecx]
0x8DC1DF: push    esi
0x8DC1E0: call    dword ptr [edx+8]
0x8DC1E3: dec     edi
0x8DC1E4: jns     short loc_8DC1D0
0x8DC1E6: mov     eax, [esi+6Ch]
0x8DC1E9: test    eax, eax
0x8DC1EB: jz      short loc_8DC202
0x8DC1ED: lea     ecx, [ecx+0]
0x8DC1F0: mov     eax, [esi+68h]
0x8DC1F3: mov     ecx, [eax]
0x8DC1F5: mov     edx, [ecx]
0x8DC1F7: push    esi
0x8DC1F8: call    dword ptr [edx+0Ch]
0x8DC1FB: mov     eax, [esi+6Ch]
0x8DC1FE: test    eax, eax
0x8DC200: jnz     short loc_8DC1F0
0x8DC202: mov     eax, [esi+78h]
0x8DC205: test    eax, eax
0x8DC207: jz      short loc_8DC222
0x8DC209: lea     esp, [esp+0]
0x8DC210: mov     eax, [esi+74h]
0x8DC213: mov     ecx, [eax]
0x8DC215: mov     edx, [ecx]
0x8DC217: push    esi
0x8DC218: call    dword ptr [edx+0Ch]
0x8DC21B: mov     eax, [esi+78h]
0x8DC21E: test    eax, eax
0x8DC220: jnz     short loc_8DC210
0x8DC222: mov     eax, [esi+0BCh]
0x8DC228: xor     edi, edi
0x8DC22A: test    eax, eax
0x8DC22C: jle     short loc_8DC24E
0x8DC22E: mov     edi, edi
0x8DC230: mov     eax, [esi+0B8h]
0x8DC236: mov     ecx, [eax+edi*4]
0x8DC239: test    ecx, ecx
0x8DC23B: jz      short loc_8DC243
0x8DC23D: mov     edx, [ecx]
0x8DC23F: push    esi
0x8DC240: call    dword ptr [edx+14h]
0x8DC243: mov     eax, [esi+0BCh]
0x8DC249: inc     edi
0x8DC24A: cmp     edi, eax
0x8DC24C: jl      short loc_8DC230
0x8DC24E: pop     edi
0x8DC24F: pop     esi
0x8DC250: retn
