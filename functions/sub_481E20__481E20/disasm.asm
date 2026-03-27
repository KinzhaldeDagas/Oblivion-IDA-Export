0x481E20: push    ebx
0x481E21: push    esi
0x481E22: mov     esi, ecx
0x481E24: mov     eax, [esi+0Ch]
0x481E27: xor     ebx, ebx
0x481E29: test    eax, eax
0x481E2B: jbe     short loc_481E54
0x481E2D: push    edi
0x481E2E: mov     edi, edi
0x481E30: xor     edi, edi
0x481E32: test    eax, eax
0x481E34: jbe     short loc_481E49
0x481E36: mov     eax, [esi]
0x481E38: mov     edx, [eax+18h]
0x481E3B: push    edi
0x481E3C: push    ebx
0x481E3D: mov     ecx, esi
0x481E3F: call    edx
0x481E41: add     edi, 1
0x481E44: cmp     edi, [esi+0Ch]
0x481E47: jb      short loc_481E36
0x481E49: mov     eax, [esi+0Ch]
0x481E4C: add     ebx, 1
0x481E4F: cmp     ebx, eax
0x481E51: jb      short loc_481E30
0x481E53: pop     edi
0x481E54: pop     esi
0x481E55: pop     ebx
0x481E56: retn
