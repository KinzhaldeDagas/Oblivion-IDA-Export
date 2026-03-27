0x770FA0: sub     esp, 8
0x770FA3: push    ebx
0x770FA4: push    ebp
0x770FA5: push    esi
0x770FA6: mov     esi, [esp+14h+Size]
0x770FAA: mov     ebx, [esi+10h]
0x770FAD: xor     ebp, ebp
0x770FAF: cmp     ebx, ebp
0x770FB1: push    edi
0x770FB2: mov     edi, [esi+24h]
0x770FB5: jnz     short loc_770FED
0x770FB7: xor     ebx, ebx
0x770FB9: cmp     [esi+8], bp
0x770FBD: jbe     loc_77107F
0x770FC3: mov     eax, [esi+1Ch]
0x770FC6: push    eax
0x770FC7: push    0
0x770FC9: push    edi
0x770FCA: call    __memset
0x770FCF: mov     eax, [esi+1Ch]
0x770FD2: add     edi, [esi+20h]
0x770FD5: add     ebx, 1
0x770FD8: add     esp, 0Ch
0x770FDB: add     ebp, eax
0x770FDD: cmp     bx, [esi+8]
0x770FE1: jb      short loc_770FC6
0x770FE3: pop     edi
0x770FE4: pop     esi
0x770FE5: mov     eax, ebp
0x770FE7: pop     ebp
0x770FE8: pop     ebx
0x770FE9: add     esp, 8
0x770FEC: retn
0x770FED: mov     ax, [esi+4]
0x770FF1: sub     ax, 18h
0x770FF5: movzx   eax, ax
0x770FF8: lea     ecx, [eax-4]
0x770FFB: test    cx, cx
0x770FFE: jle     short loc_771011
0x771000: mov     edx, [esi+1Ch]
0x771003: mov     [esp+18h+var_8], 4
0x77100B: mov     [esp+18h+Size], edx
0x77100F: jmp     short loc_77101F
0x771011: mov     ecx, [esi+14h]
0x771014: movzx   eax, ax
0x771017: mov     [esp+18h+var_8], eax
0x77101B: mov     [esp+18h+Size], ecx
0x77101F: cmp     [esi+8], bp
0x771023: mov     [esp+18h+var_4], ebp
0x771027: jbe     short loc_77107F
0x771029: lea     esp, [esp+0]
0x771030: mov     edx, [esp+18h+Size]
0x771034: push    edx; Size
0x771035: push    ebx; Src
0x771036: push    edi; Dst
0x771037: call    _memcpy
0x77103C: mov     eax, [esp+24h+Size]
0x771040: mov     ecx, [esp+24h+var_8]
0x771044: add     esp, 0Ch
0x771047: add     eax, edi
0x771049: cmp     cx, 4
0x77104D: jnb     short loc_771065
0x77104F: mov     edx, 4
0x771054: sub     edx, ecx
0x771056: movzx   ecx, dx
0x771059: push    ecx
0x77105A: push    0
0x77105C: push    eax
0x77105D: call    __memset
0x771062: add     esp, 0Ch
0x771065: mov     eax, [esp+18h+var_4]
0x771069: add     ebx, [esi+18h]
0x77106C: add     edi, [esi+20h]
0x77106F: add     ebp, [esi+1Ch]
0x771072: add     eax, 1
0x771075: cmp     ax, [esi+8]
0x771079: mov     [esp+18h+var_4], eax
0x77107D: jb      short loc_771030
0x77107F: pop     edi
0x771080: pop     esi
0x771081: mov     eax, ebp
0x771083: pop     ebp
0x771084: pop     ebx
0x771085: add     esp, 8
0x771088: retn
