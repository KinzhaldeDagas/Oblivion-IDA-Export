0x735890: push    ecx
0x735891: push    ebx
0x735892: push    esi
0x735893: mov     esi, [esp+0Ch+arg_4]
0x735897: mov     bl, [esi]
0x735899: test    bl, bl
0x73589B: mov     [esp+0Ch+var_4], 0
0x7358A3: jz      short loc_73590B
0x7358A5: mov     edx, [esp+0Ch+arg_0]
0x7358A9: push    ebp
0x7358AA: mov     bp, word ptr [esp+10h+var_4]
0x7358AF: push    edi
0x7358B0: mov     edi, [esp+14h+arg_8]
0x7358B4: cmp     bp, [ecx+100h]
0x7358BB: jz      short loc_735909
0x7358BD: mov     al, bl
0x7358BF: add     esi, 1
0x7358C2: and     al, 7Fh
0x7358C4: test    bl, bl
0x7358C6: jns     short loc_7358E1
0x7358C8: test    al, al
0x7358CA: jz      short loc_7358FA
0x7358CC: lea     esp, [esp+0]
0x7358D0: mov     bl, [esi]
0x7358D2: add     al, 0FFh
0x7358D4: mov     [edx], bl
0x7358D6: add     esi, 2
0x7358D9: add     edx, edi
0x7358DB: test    al, al
0x7358DD: jnz     short loc_7358D0
0x7358DF: jmp     short loc_7358FA
0x7358E1: mov     bl, [esi]
0x7358E3: add     esi, 2
0x7358E6: test    al, al
0x7358E8: jz      short loc_7358FA
0x7358EA: lea     ebx, [ebx+0]
0x7358F0: add     al, 0FFh
0x7358F2: mov     [edx], bl
0x7358F4: add     edx, edi
0x7358F6: test    al, al
0x7358F8: jnz     short loc_7358F0
0x7358FA: mov     bl, [esi]
0x7358FC: sub     al, 1
0x7358FE: movzx   ax, al
0x735902: add     bp, ax
0x735905: test    bl, bl
0x735907: jnz     short loc_7358B4
0x735909: pop     edi
0x73590A: pop     ebp
0x73590B: pop     esi
0x73590C: pop     ebx
0x73590D: pop     ecx
0x73590E: retn    0Ch
