0x955240: push    ebx
0x955241: push    ebp
0x955242: mov     ebp, [esp+8+arg_8]
0x955246: push    esi
0x955247: mov     esi, ecx
0x955249: mov     ecx, [esi+10h]
0x95524C: mov     eax, [ecx+0Ch]
0x95524F: push    edi
0x955250: mov     edi, [esp+10h+arg_10]
0x955254: mov     ebx, eax
0x955256: sub     ebx, edi
0x955258: cmp     ebp, 3
0x95525B: jge     loc_955348
0x955261: sub     eax, [esp+10h+arg_C]
0x955265: test    eax, eax
0x955267: mov     [esp+10h+arg_10], eax
0x95526B: jg      short loc_955275
0x95526D: cmp     ebx, 0F8h ; 'ø'
0x955273: jle     short loc_9552EB
0x955275: cmp     eax, 10000h
0x95527A: jge     short loc_9552EB
0x95527C: cmp     ebx, 10000h
0x955282: jge     short loc_9552EB
0x955284: mov     eax, ebx
0x955286: and     eax, 0FFh
0x95528B: push    eax
0x95528C: call    sub_956520
0x955291: movzx   ecx, bh
0x955294: push    ecx
0x955295: mov     ecx, [esi+10h]
0x955298: call    sub_956520
0x95529D: mov     ebx, [esp+10h+arg_10]
0x9552A1: mov     ecx, [esi+10h]
0x9552A4: mov     edx, ebx
0x9552A6: and     edx, 0FFh
0x9552AC: push    edx
0x9552AD: call    sub_956520
0x9552B2: mov     ecx, [esi+10h]
0x9552B5: movzx   eax, bh
0x9552B8: push    eax
0x9552B9: call    sub_956520
0x9552BE: mov     ecx, [esp+10h+arg_0]
0x9552C2: push    ecx
0x9552C3: mov     ecx, [esi+10h]
0x9552C6: call    sub_956520
0x9552CB: mov     edx, [esp+10h+arg_4]
0x9552CF: mov     ecx, [esi+10h]
0x9552D2: push    edx
0x9552D3: call    sub_956520
0x9552D8: mov     ecx, [esi+10h]
0x9552DB: add     ebp, 23h ; '#'
0x9552DE: push    ebp
0x9552DF: call    sub_956520
0x9552E4: pop     edi
0x9552E5: pop     esi
0x9552E6: pop     ebp
0x9552E7: pop     ebx
0x9552E8: retn    14h
0x9552EB: mov     eax, [esp+10h+arg_4]
0x9552EF: sub     eax, [esp+10h+arg_0]
0x9552F3: cmp     eax, 1
0x9552F6: jnz     short loc_955348
0x9552F8: cmp     ebx, 0FBh ; 'û'
0x9552FE: jle     short loc_95530E
0x955300: push    edi
0x955301: mov     ecx, esi
0x955303: call    sub_954BC0
0x955308: mov     ecx, [esi+10h]
0x95530B: mov     edi, [ecx+0Ch]
0x95530E: mov     edx, [esp+10h+arg_C]
0x955312: push    edx
0x955313: mov     ecx, esi
0x955315: call    sub_954BC0
0x95531A: mov     ecx, [esi+10h]
0x95531D: mov     eax, [ecx+0Ch]
0x955320: sub     eax, edi
0x955322: push    eax
0x955323: call    sub_956520
0x955328: mov     ecx, [esp+10h+arg_0]
0x95532C: push    ecx
0x95532D: mov     ecx, [esi+10h]
0x955330: call    sub_956520
0x955335: mov     ecx, [esi+10h]
0x955338: add     ebp, 20h ; ' '
0x95533B: push    ebp
0x95533C: call    sub_956520
0x955341: pop     edi
0x955342: pop     esi
0x955343: pop     ebp
0x955344: pop     ebx
0x955345: retn    14h
0x955348: cmp     ebx, 0FBh ; 'û'
0x95534E: jle     short loc_95535E
0x955350: push    edi
0x955351: mov     ecx, esi
0x955353: call    sub_954BC0
0x955358: mov     edx, [esi+10h]
0x95535B: mov     edi, [edx+0Ch]
0x95535E: mov     eax, [esp+10h+arg_C]
0x955362: push    eax
0x955363: mov     ecx, esi
0x955365: call    sub_954BC0
0x95536A: mov     ecx, [esi+10h]
0x95536D: mov     edx, [ecx+0Ch]
0x955370: sub     edx, edi
0x955372: push    edx
0x955373: call    sub_956520
0x955378: mov     eax, [esp+10h+arg_0]
0x95537C: mov     ecx, [esi+10h]
0x95537F: push    eax
0x955380: call    sub_956520
0x955385: mov     ecx, [esp+10h+arg_4]
0x955389: push    ecx
0x95538A: mov     ecx, [esi+10h]
0x95538D: call    sub_956520
0x955392: mov     ecx, [esi+10h]
0x955395: add     ebp, 10h
0x955398: push    ebp
0x955399: call    sub_956520
0x95539E: pop     edi
0x95539F: pop     esi
0x9553A0: pop     ebp
0x9553A1: pop     ebx
0x9553A2: retn    14h
