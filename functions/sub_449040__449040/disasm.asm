0x449040: add     ecx, 0B4h ; '´'
0x449046: push    esi
0x449047: jz      short loc_44906A
0x449049: mov     esi, [esp+4+arg_0]
0x44904D: mov     edx, [esp+4+arg_4]
0x449051: mov     eax, [ecx]
0x449053: test    eax, eax
0x449055: jz      short loc_44906A
0x449057: cmp     [eax+30h], esi
0x44905A: jnz     short loc_449063
0x44905C: test    edx, edx
0x44905E: jz      short loc_44906C
0x449060: sub     edx, 1
0x449063: mov     ecx, [ecx+4]
0x449066: test    ecx, ecx
0x449068: jnz     short loc_449051
0x44906A: xor     eax, eax
0x44906C: pop     esi
0x44906D: retn    8
