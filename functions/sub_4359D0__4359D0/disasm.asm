0x4359D0: mov     eax, [esp+arg_0]
0x4359D4: test    eax, eax
0x4359D6: jz      short loc_435A00
0x4359D8: mov     eax, [eax+8]
0x4359DB: mov     ecx, [ecx+4]
0x4359DE: push    esi
0x4359DF: lea     esi, [esp+4+arg_0]
0x4359E3: mov     [esp+4+arg_0], 0
0x4359EB: mov     edx, [ecx]
0x4359ED: push    esi
0x4359EE: push    eax
0x4359EF: mov     eax, [edx+4]
0x4359F2: call    eax
0x4359F4: neg     al
0x4359F6: pop     esi
0x4359F7: sbb     eax, eax
0x4359F9: and     eax, [esp+arg_0]
0x4359FD: retn    4
0x435A00: xor     eax, eax
0x435A02: retn    4
