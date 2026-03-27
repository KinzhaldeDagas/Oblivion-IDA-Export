0x8DB3F0: xor     eax, eax
0x8DB3F2: mov     ax, [ecx+14h]
0x8DB3F6: sub     esp, 414h
0x8DB3FC: test    ax, ax
0x8DB3FF: lea     edx, [eax-1]
0x8DB402: mov     [ecx+14h], dx
0x8DB406: jnz     loc_8DB4CA
0x8DB40C: mov     eax, [esp+414h+arg_0]
0x8DB413: mov     edx, [esp+414h+arg_4]
0x8DB41A: push    ebx
0x8DB41B: push    ebp
0x8DB41C: push    esi
0x8DB41D: mov     esi, [eax+10h]
0x8DB420: push    edi
0x8DB421: mov     edi, [edx+10h]
0x8DB424: mov     bx, [edi+edx+8Eh]
0x8DB42C: add     esi, eax
0x8DB42E: add     edi, edx
0x8DB430: xor     ebp, ebp
0x8DB432: mov     bp, [esi+8Eh]
0x8DB439: cmp     bp, bx
0x8DB43C: jnb     short loc_8DB440
0x8DB43E: mov     ebx, ebp
0x8DB440: mov     [esp+424h+var_414], eax
0x8DB444: mov     eax, [esp+424h+arg_C]
0x8DB44B: mov     [esp+424h+var_410], edx
0x8DB44F: mov     [ecx+14h], bx
0x8DB453: mov     edx, [eax]
0x8DB455: sub     edx, eax
0x8DB457: mov     [esp+424h+var_408], eax
0x8DB45B: sub     edx, 30h ; '0'
0x8DB45E: mov     eax, 2AAAAAABh
0x8DB463: imul    edx
0x8DB465: sar     edx, 3
0x8DB468: mov     eax, edx
0x8DB46A: shr     eax, 1Fh
0x8DB46D: lea     eax, [edx+eax-1]
0x8DB471: xor     ebx, ebx
0x8DB473: cmp     eax, ebx
0x8DB475: mov     [esp+424h+var_4], ecx
0x8DB47C: jl      short loc_8DB487
0x8DB47E: mov     edi, edi
0x8DB480: dec     eax
0x8DB481: mov     [esp+eax*4+424h+var_400], ebx
0x8DB485: jns     short loc_8DB480
0x8DB487: mov     eax, [ecx+8]
0x8DB48A: lea     edx, [esp+424h+var_414]
0x8DB48E: push    edx
0x8DB48F: push    eax
0x8DB490: call    sub_8DC9B0
0x8DB495: mov     eax, [esi+98h]
0x8DB49B: add     esp, 8
0x8DB49E: cmp     eax, ebx
0x8DB4A0: jz      short loc_8DB4B0
0x8DB4A2: lea     ecx, [esp+424h+var_414]
0x8DB4A6: push    ecx
0x8DB4A7: push    esi
0x8DB4A8: call    sub_8DC130
0x8DB4AD: add     esp, 8
0x8DB4B0: cmp     [edi+98h], ebx
0x8DB4B6: jz      short loc_8DB4C6
0x8DB4B8: lea     edx, [esp+424h+var_414]
0x8DB4BC: push    edx
0x8DB4BD: push    edi
0x8DB4BE: call    sub_8DC130
0x8DB4C3: add     esp, 8
0x8DB4C6: pop     edi
0x8DB4C7: pop     esi
0x8DB4C8: pop     ebp
0x8DB4C9: pop     ebx
0x8DB4CA: add     esp, 414h
0x8DB4D0: retn    10h
