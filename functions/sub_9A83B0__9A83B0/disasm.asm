0x9A83B0: push    ecx
0x9A83B1: cmp     byte_B4295C, 0
0x9A83B8: push    ebx
0x9A83B9: push    ebp
0x9A83BA: push    esi
0x9A83BB: mov     esi, [esp+10h+arg_4]
0x9A83BF: movzx   ebx, byte ptr [esi+15h]
0x9A83C3: push    edi
0x9A83C4: mov     edi, [esi+18h]
0x9A83C7: mov     [esp+14h+var_4], 0
0x9A83CF: jnz     short loc_9A83D6
0x9A83D1: call    sub_783D70
0x9A83D6: mov     eax, dword_B42914[ebx*4]
0x9A83DD: mov     ebx, [esp+14h+arg_1C]
0x9A83E1: push    edi
0x9A83E2: push    eax
0x9A83E3: push    ebx
0x9A83E4: call    sub_9A8290
0x9A83E9: mov     edi, [esi+10h]
0x9A83EC: mov     ebp, eax
0x9A83EE: lea     eax, [esp+20h+arg_1C]
0x9A83F2: push    eax
0x9A83F3: lea     ecx, [esp+24h+arg_4]
0x9A83F7: push    ecx
0x9A83F8: push    edi
0x9A83F9: call    sub_9A5610
0x9A83FE: add     esp, 18h
0x9A8401: test    eax, eax
0x9A8403: jnz     short loc_9A8412
0x9A8405: pop     edi
0x9A8406: pop     esi
0x9A8407: pop     ebp
0x9A8408: mov     eax, 80000010h
0x9A840D: pop     ebx
0x9A840E: pop     ecx
0x9A840F: retn    2Ch ; ','
0x9A8412: mov     edx, [esp+14h+arg_28]
0x9A8416: mov     eax, [esp+14h+arg_24]
0x9A841A: mov     ecx, [esp+14h+arg_20]
0x9A841E: push    edx
0x9A841F: mov     edx, [esp+18h+arg_18]
0x9A8423: push    eax
0x9A8424: mov     eax, [esp+1Ch+arg_14]
0x9A8428: push    ecx
0x9A8429: mov     ecx, [esp+20h+arg_10]
0x9A842D: push    ebx
0x9A842E: push    edx
0x9A842F: mov     edx, [esp+28h+arg_C]
0x9A8433: push    eax
0x9A8434: mov     eax, [esp+2Ch+arg_8]
0x9A8438: push    ecx
0x9A8439: mov     ecx, [esp+30h+arg_4]
0x9A843D: push    edx
0x9A843E: push    eax
0x9A843F: push    ebp
0x9A8440: push    edi
0x9A8441: shl     ecx, 4
0x9A8444: push    ecx
0x9A8445: push    offset unk_BAA8E0
0x9A844A: call    sub_9A66F0
0x9A844F: add     esp, 34h
0x9A8452: test    al, al
0x9A8454: jnz     short loc_9A845E
0x9A8456: mov     [esp+14h+var_4], 80000060h
0x9A845E: mov     ecx, [esp+14h+arg_0]
0x9A8462: mov     edx, [ecx]
0x9A8464: mov     eax, [edx+28h]
0x9A8467: push    0
0x9A8469: push    offset unk_BAA8E0
0x9A846E: push    esi
0x9A846F: call    eax
0x9A8471: test    al, al
0x9A8473: jnz     short loc_9A847D
0x9A8475: mov     [esp+14h+var_4], 80000050h
0x9A847D: mov     eax, [esp+14h+var_4]
0x9A8481: pop     edi
0x9A8482: pop     esi
0x9A8483: pop     ebp
0x9A8484: pop     ebx
0x9A8485: pop     ecx
0x9A8486: retn    2Ch ; ','
