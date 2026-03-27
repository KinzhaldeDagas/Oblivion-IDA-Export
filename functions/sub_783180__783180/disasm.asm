0x783180: push    ecx
0x783181: cmp     byte ptr ds:0B4295Bh, 0
0x783188: push    esi
0x783189: mov     esi, [esp+8+arg_0]
0x78318D: push    edi
0x78318E: mov     edi, [esi+14h]
0x783191: mov     [esp+0Ch+var_4], ecx
0x783195: jnz     short loc_78319C
0x783197: call    sub_783C70
0x78319C: and     edi, 0FFh
0x7831A2: cmp     dword ptr ds:0B428D8h[edi*4], 8
0x7831AA: jz      short loc_7831D5
0x7831AC: cmp     byte ptr ds:0B4295Bh, 0
0x7831B3: mov     edi, [esi+14h]
0x7831B6: jnz     short loc_7831BD
0x7831B8: call    sub_783C70
0x7831BD: and     edi, 0FFh
0x7831C3: cmp     dword ptr ds:0B428D8h[edi*4], 9
0x7831CB: jz      short loc_7831D5
0x7831CD: pop     edi
0x7831CE: xor     al, al
0x7831D0: pop     esi
0x7831D1: pop     ecx
0x7831D2: retn    14h
0x7831D5: push    ebx
0x7831D6: mov     ebx, [esi+1Ch]
0x7831D9: push    ebp
0x7831DA: mov     ebp, [esp+14h+arg_8]
0x7831DE: xor     esi, esi
0x7831E0: test    ebp, ebp
0x7831E2: jbe     short loc_783226
0x7831E4: mov     edi, [esp+14h+arg_C]
0x7831E8: jmp     short loc_7831F0
0x7831EA: align 10h
0x7831F0: mov     edx, [esp+14h+arg_10]
0x7831F4: movzx   edx, word ptr [edx+esi*2]
0x7831F8: mov     eax, [esp+14h+var_4]
0x7831FC: imul    edx, edi
0x7831FF: mov     eax, [eax+24h]
0x783202: mov     eax, [eax+0FF8h]
0x783208: mov     ecx, [eax]
0x78320A: shl     edx, 4
0x78320D: add     edx, [esp+14h+arg_4]
0x783211: push    edi
0x783212: push    edx
0x783213: push    ebx
0x783214: push    eax
0x783215: mov     eax, [ecx+178h]
0x78321B: call    eax
0x78321D: add     esi, 1
0x783220: add     ebx, edi
0x783222: cmp     esi, ebp
0x783224: jb      short loc_7831F0
0x783226: pop     ebp
0x783227: pop     ebx
0x783228: pop     edi
0x783229: mov     al, 1
0x78322B: pop     esi
0x78322C: pop     ecx
0x78322D: retn    14h
