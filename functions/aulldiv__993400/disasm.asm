0x993400: push    ebx
0x993401: push    esi
0x993402: mov     eax, [esp+8+arg_C]
0x993406: or      eax, eax
0x993408: jnz     short loc_993422
0x99340A: mov     ecx, [esp+8+arg_8]
0x99340E: mov     eax, [esp+8+arg_4]
0x993412: xor     edx, edx
0x993414: div     ecx
0x993416: mov     ebx, eax
0x993418: mov     eax, [esp+8+arg_0]
0x99341C: div     ecx
0x99341E: mov     edx, ebx
0x993420: jmp     short loc_993463
0x993422: mov     ecx, eax
0x993424: mov     ebx, [esp+8+arg_8]
0x993428: mov     edx, [esp+8+arg_4]
0x99342C: mov     eax, [esp+8+arg_0]
0x993430: shr     ecx, 1
0x993432: rcr     ebx, 1
0x993434: shr     edx, 1
0x993436: rcr     eax, 1
0x993438: or      ecx, ecx
0x99343A: jnz     short loc_993430
0x99343C: div     ebx
0x99343E: mov     esi, eax
0x993440: mul     [esp+8+arg_C]
0x993444: mov     ecx, eax
0x993446: mov     eax, [esp+8+arg_8]
0x99344A: mul     esi
0x99344C: add     edx, ecx
0x99344E: jb      short loc_99345E
0x993450: cmp     edx, [esp+8+arg_4]
0x993454: ja      short loc_99345E
0x993456: jb      short loc_99345F
0x993458: cmp     eax, [esp+8+arg_0]
0x99345C: jbe     short loc_99345F
0x99345E: dec     esi
0x99345F: xor     edx, edx
0x993461: mov     eax, esi
0x993463: pop     esi
0x993464: pop     ebx
0x993465: retn    10h
