0x723440: push    ebp
0x723441: mov     ebp, [esp+4+arg_0]
0x723445: push    edi
0x723446: push    ebp
0x723447: mov     edi, ecx
0x723449: call    sub_707B50
0x72344E: test    al, al
0x723450: jnz     short loc_723457
0x723452: pop     edi
0x723453: pop     ebp
0x723454: retn    4
0x723457: mov     ecx, [edi+0B8h]
0x72345D: push    esi
0x72345E: mov     esi, [ebp+0B8h]
0x723464: test    esi, esi
0x723466: setz    al
0x723469: test    ecx, ecx
0x72346B: setz    dl
0x72346E: cmp     dl, al
0x723470: jnz     short loc_723482
0x723472: test    ecx, ecx
0x723474: jz      short loc_72348A
0x723476: mov     eax, [ecx]
0x723478: mov     edx, [eax+2Ch]
0x72347B: push    esi
0x72347C: call    edx
0x72347E: test    al, al
0x723480: jnz     short loc_72348A
0x723482: pop     esi
0x723483: pop     edi
0x723484: xor     al, al
0x723486: pop     ebp
0x723487: retn    4
0x72348A: mov     ecx, [edi+0B4h]
0x723490: mov     ebp, [ebp+0B4h]
0x723496: mov     eax, [ecx]
0x723498: mov     edx, [eax+2Ch]
0x72349B: push    ebp
0x72349C: call    edx
0x72349E: pop     esi
0x72349F: pop     edi
0x7234A0: pop     ebp
0x7234A1: retn    4
