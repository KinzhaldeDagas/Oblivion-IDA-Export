0x778E30: mov     eax, [esp+arg_4]
0x778E34: test    eax, eax
0x778E36: jz      short loc_778E3F
0x778E38: mov     eax, [eax+0Ch]
0x778E3B: test    eax, eax
0x778E3D: jnz     short loc_778E71
0x778E3F: mov     ecx, [esp+arg_0]
0x778E43: mov     eax, [ecx+38h]
0x778E46: test    eax, eax
0x778E48: jnz     short loc_778E4F
0x778E4A: xor     al, al
0x778E4C: retn    8
0x778E4F: push    esi
0x778E50: mov     esi, [eax+4]
0x778E53: mov     eax, [esi]
0x778E55: mov     edx, [eax+14h]
0x778E58: push    ecx
0x778E59: mov     ecx, esi
0x778E5B: call    edx
0x778E5D: cmp     dword ptr [esi+4], 0
0x778E61: jnz     short loc_778E6B
0x778E63: mov     eax, [esi]
0x778E65: mov     edx, [eax]
0x778E67: mov     ecx, esi
0x778E69: call    edx
0x778E6B: mov     al, 1
0x778E6D: pop     esi
0x778E6E: retn    8
0x778E71: push    eax
0x778E72: call    sub_778C20
0x778E77: retn    8
