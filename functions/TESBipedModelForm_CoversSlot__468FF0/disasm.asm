0x468FF0: cmp     [esp+arg_4], 0
0x468FF5: mov     eax, ecx
0x468FF7: mov     ecx, [esp+arg_0]
0x468FFB: jz      short loc_46900C
0x468FFD: cmp     ecx, 1
0x469000: jnz     short loc_46900C
0x469002: test    [eax+4], cl
0x469005: jz      short loc_46900C
0x469007: xor     al, al
0x469009: retn    8
0x46900C: movzx   eax, word ptr [eax+4]
0x469010: mov     edx, 1
0x469015: shl     edx, cl
0x469017: test    edx, eax
0x469019: setnz   al
0x46901C: retn    8
