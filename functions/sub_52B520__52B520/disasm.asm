0x52B520: lea     eax, [ecx+8Ch]
0x52B526: test    eax, eax
0x52B528: jz      short loc_52B542
0x52B52A: mov     edx, [esp+arg_0]
0x52B52E: mov     edi, edi
0x52B530: mov     ecx, [eax]
0x52B532: test    ecx, ecx
0x52B534: jz      short loc_52B542
0x52B536: cmp     [ecx+0Ch], edx
0x52B539: jz      short loc_52B547
0x52B53B: mov     eax, [eax+4]
0x52B53E: test    eax, eax
0x52B540: jnz     short loc_52B530
0x52B542: xor     eax, eax
0x52B544: retn    4
0x52B547: mov     eax, ecx
0x52B549: retn    4
