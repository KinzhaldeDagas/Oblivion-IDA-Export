0x8C1920: mov     eax, [esp+arg_0]
0x8C1924: push    esi
0x8C1925: push    eax
0x8C1926: mov     esi, ecx
0x8C1928: call    sub_8A0610
0x8C192D: test    esi, esi
0x8C192F: jz      short loc_8C193D
0x8C1931: mov     eax, [esi+8]
0x8C1934: test    eax, eax
0x8C1936: jz      short loc_8C193D
0x8C1938: mov     eax, [eax+0Ch]
0x8C193B: jmp     short loc_8C1946
0x8C193D: mov     eax, [esi+0Ch]
0x8C1940: test    eax, eax
0x8C1942: jz      short loc_8C1964
0x8C1944: mov     eax, [eax]
0x8C1946: test    eax, eax
0x8C1948: jz      short loc_8C1964
0x8C194A: fldz
0x8C194C: fcomp   dword ptr [eax+98h]
0x8C1952: fnstsw  ax
0x8C1954: test    ah, 44h
0x8C1957: jnp     short loc_8C1964
0x8C1959: mov     esi, [esi+8]
0x8C195C: test    esi, esi
0x8C195E: jz      short loc_8C1964
0x8C1960: mov     byte ptr [esi+19h], 1
0x8C1964: pop     esi
0x8C1965: retn    4
