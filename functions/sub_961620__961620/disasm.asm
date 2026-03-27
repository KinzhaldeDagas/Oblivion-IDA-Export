0x961620: push    esi
0x961621: mov     esi, [esp+4+arg_0]
0x961625: mov     eax, [esi]
0x961627: mov     edx, [eax+0Ch]
0x96162A: push    edi
0x96162B: mov     edi, ecx
0x96162D: mov     ecx, esi
0x96162F: call    edx
0x961631: cmp     eax, 1
0x961634: jnz     short loc_961650
0x961636: add     edi, 4
0x961639: push    edi
0x96163A: lea     ecx, [esi+4]
0x96163D: call    sub_96EF70
0x961642: test    al, al
0x961644: jz      short loc_961650
0x961646: pop     edi
0x961647: mov     eax, 1
0x96164C: pop     esi
0x96164D: retn    4
0x961650: pop     edi
0x961651: xor     eax, eax
0x961653: pop     esi
0x961654: retn    4
