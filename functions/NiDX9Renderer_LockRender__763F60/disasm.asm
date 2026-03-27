0x763F60: push    esi
0x763F61: push    edi
0x763F62: mov     edi, ecx
0x763F64: lea     esi, [edi+80h]
0x763F6A: push    esi; lpCriticalSection
0x763F6B: call    dword ptr ds:0A2806Ch
0x763F71: call    dword ptr ds:0A2808Ch
0x763F77: mov     [esi+78h], eax
0x763F7A: mov     eax, 1
0x763F7F: add     [esi+7Ch], eax
0x763F82: cmp     [edi+0FCh], eax
0x763F88: jnz     short loc_763F98
0x763F8A: mov     eax, [edi]
0x763F8C: mov     edx, [eax+128h]
0x763F92: mov     ecx, edi
0x763F94: pop     edi
0x763F95: pop     esi
0x763F96: jmp     edx
0x763F98: pop     edi
0x763F99: pop     esi
0x763F9A: retn
