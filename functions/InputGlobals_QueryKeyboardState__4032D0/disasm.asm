0x4032D0: mov     edx, [esp+a3]
0x4032D4: push    esi
0x4032D5: xor     esi, esi
0x4032D7: cmp     edx, 3; switch 4 cases
0x4032DA: ja      def_4032E0; jumptable 004032E0 default case
0x4032E0: jmp     ds:jpt_4032E0[edx*4]; switch jump
0x4032E7: mov     eax, [esp+4+a2]; jumptable 004032E0 case 0
0x4032EB: test    byte ptr [eax+ecx+18F4h], 80h
0x4032F3: jz      short def_4032E0; jumptable 004032E0 default case
0x4032F5: mov     esi, 1
0x4032FA: mov     eax, esi
0x4032FC: pop     esi
0x4032FD: retn    8
0x403300: mov     edx, [esp+4+a2]; jumptable 004032E0 case 1
0x403304: test    byte ptr [edx+ecx+19F4h], 80h
0x40330C: jnz     short def_4032E0; jumptable 004032E0 default case
0x40330E: test    byte ptr [edx+ecx+18F4h], 80h
0x403316: jz      short def_4032E0; jumptable 004032E0 default case
0x403318: mov     esi, 1
0x40331D: mov     eax, esi
0x40331F: pop     esi
0x403320: retn    8
0x403323: mov     edx, [esp+4+a2]; jumptable 004032E0 case 2
0x403327: test    byte ptr [edx+ecx+18F4h], 80h
0x40332F: jnz     short def_4032E0; jumptable 004032E0 default case
0x403331: test    byte ptr [edx+ecx+19F4h], 80h
0x403339: jz      short def_4032E0; jumptable 004032E0 default case
0x40333B: mov     esi, 1
0x403340: mov     eax, esi
0x403342: pop     esi
0x403343: retn    8
0x403346: mov     edx, [esp+4+a2]; jumptable 004032E0 case 3
0x40334A: mov     al, [edx+ecx+19F4h]
0x403351: xor     al, [edx+ecx+18F4h]
0x403358: test    al, al
0x40335A: jns     short def_4032E0; jumptable 004032E0 default case
0x40335C: mov     esi, 1
0x403361: mov     eax, esi; jumptable 004032E0 default case
0x403363: pop     esi
0x403364: retn    8
