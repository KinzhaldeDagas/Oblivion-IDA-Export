0x469240: push    esi
0x469241: mov     esi, [esp+4+arg_0]
0x469245: lea     eax, [esi+esi*2]
0x469248: movzx   edx, word ptr [ecx+eax*8+40h]
0x46924D: cmp     dx, 0FFFFh
0x469252: lea     eax, [ecx+eax*8+3Ch]
0x469256: jnz     short loc_46926E
0x469258: mov     eax, [eax]
0x46925A: push    edi
0x46925B: lea     edi, [eax+1]
0x46925E: mov     edi, edi
0x469260: mov     dl, [eax]
0x469262: add     eax, 1
0x469265: test    dl, dl
0x469267: jnz     short loc_469260
0x469269: sub     eax, edi
0x46926B: pop     edi
0x46926C: jmp     short loc_469271
0x46926E: movzx   eax, dx
0x469271: test    eax, eax
0x469273: jnz     short loc_46927C
0x469275: cmp     esi, 1
0x469278: jnz     short loc_46927C
0x46927A: xor     esi, esi
0x46927C: lea     edx, [esi+esi*2]
0x46927F: lea     eax, [ecx+edx*8+38h]
0x469283: pop     esi
0x469284: retn    4
