0x4EECE0: push    esi
0x4EECE1: mov     esi, ecx
0x4EECE3: push    edi
0x4EECE4: xor     edi, edi
0x4EECE6: test    esi, esi
0x4EECE8: mov     eax, esi
0x4EECEA: jz      short loc_4EED46
0x4EECEC: lea     esp, [esp+0]
0x4EECF0: mov     ecx, [eax]
0x4EECF2: test    ecx, ecx
0x4EECF4: jz      short loc_4EECFB
0x4EECF6: mov     ecx, [ecx+4]
0x4EECF9: jmp     short loc_4EECFD
0x4EECFB: xor     ecx, ecx
0x4EECFD: mov     eax, [eax+4]
0x4EED00: add     edi, ecx
0x4EED02: test    eax, eax
0x4EED04: jnz     short loc_4EECF0
0x4EED06: test    edi, edi
0x4EED08: jz      short loc_4EED46
0x4EED0A: push    ebx
0x4EED0B: push    eax; Seed
0x4EED0C: call    GetRandomLargeInteger?
0x4EED11: xor     edx, edx
0x4EED13: div     edi
0x4EED15: add     esp, 4
0x4EED18: xor     edi, edi
0x4EED1A: or      ebx, 0FFFFFFFFh
0x4EED1D: lea     ecx, [ecx+0]
0x4EED20: mov     ecx, [esi]
0x4EED22: test    ecx, ecx
0x4EED24: jz      short loc_4EED35
0x4EED26: mov     eax, [ecx+4]
0x4EED29: add     ebx, eax
0x4EED2B: cmp     edi, edx
0x4EED2D: ja      short loc_4EED33
0x4EED2F: cmp     edx, ebx
0x4EED31: jbe     short loc_4EED3C
0x4EED33: add     edi, eax
0x4EED35: mov     esi, [esi+4]
0x4EED38: test    esi, esi
0x4EED3A: jnz     short loc_4EED20
0x4EED3C: test    ecx, ecx
0x4EED3E: pop     ebx
0x4EED3F: jz      short loc_4EED46
0x4EED41: mov     eax, [ecx]
0x4EED43: pop     edi
0x4EED44: pop     esi
0x4EED45: retn
0x4EED46: pop     edi
0x4EED47: xor     eax, eax
0x4EED49: pop     esi
0x4EED4A: retn
