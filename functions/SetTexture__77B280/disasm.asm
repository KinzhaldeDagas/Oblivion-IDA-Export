0x77B280: mov     eax, [esp+sampler]
0x77B284: mov     edx, [esp+arg_4]
0x77B288: cmp     [ecx+eax*4+0FA0h], edx
0x77B28F: jz      short locret_77B2AD
0x77B291: push    esi
0x77B292: mov     [ecx+eax*4+0FA0h], edx
0x77B299: mov     ecx, [ecx+0FF8h]
0x77B29F: mov     esi, [ecx]
0x77B2A1: push    edx
0x77B2A2: push    eax
0x77B2A3: mov     eax, [esi+104h]
0x77B2A9: push    ecx
0x77B2AA: call    eax
0x77B2AC: pop     esi
0x77B2AD: retn    8
