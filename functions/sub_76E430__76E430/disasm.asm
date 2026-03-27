0x76E430: push    ecx
0x76E431: push    ebx
0x76E432: push    ebp
0x76E433: push    esi
0x76E434: mov     esi, [esp+10h+arg_0]
0x76E438: mov     ebx, [esi+10h]
0x76E43B: xor     ebp, ebp
0x76E43D: cmp     ebx, ebp
0x76E43F: push    edi
0x76E440: mov     edi, [esi+24h]
0x76E443: mov     [esp+14h+var_4], ebp
0x76E447: jnz     short loc_76E47C
0x76E449: xor     ebx, ebx
0x76E44B: cmp     [esi+8], bp
0x76E44F: jbe     short loc_76E4A6
0x76E451: mov     eax, [esi+1Ch]
0x76E454: push    eax
0x76E455: push    ebp
0x76E456: push    edi
0x76E457: call    __memset
0x76E45C: mov     eax, [esi+1Ch]
0x76E45F: add     edi, [esi+20h]
0x76E462: add     [esp+20h+var_4], eax
0x76E466: add     ebx, 1
0x76E469: add     esp, 0Ch
0x76E46C: cmp     bx, [esi+8]
0x76E470: jb      short loc_76E454
0x76E472: mov     eax, [esp+14h+var_4]
0x76E476: pop     edi
0x76E477: pop     esi
0x76E478: pop     ebp
0x76E479: pop     ebx
0x76E47A: pop     ecx
0x76E47B: retn
0x76E47C: cmp     [esi+8], bp
0x76E480: jbe     short loc_76E4A6
0x76E482: mov     eax, [esi+1Ch]
0x76E485: push    eax; Size
0x76E486: push    ebx; Src
0x76E487: push    edi; Dst
0x76E488: call    _memcpy
0x76E48D: mov     eax, [esi+1Ch]
0x76E490: add     ebx, [esi+18h]
0x76E493: add     edi, [esi+20h]
0x76E496: add     [esp+20h+var_4], eax
0x76E49A: add     ebp, 1
0x76E49D: add     esp, 0Ch
0x76E4A0: cmp     bp, [esi+8]
0x76E4A4: jb      short loc_76E485
0x76E4A6: mov     eax, [esp+14h+var_4]
0x76E4AA: pop     edi
0x76E4AB: pop     esi
0x76E4AC: pop     ebp
0x76E4AD: pop     ebx
0x76E4AE: pop     ecx
0x76E4AF: retn
