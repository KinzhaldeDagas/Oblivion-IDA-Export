0x8E83B0: sub     esp, 8
0x8E83B3: mov     eax, [esp+8+arg_0]
0x8E83B7: mov     eax, [eax+21Ch]
0x8E83BD: push    ebp
0x8E83BE: push    esi
0x8E83BF: push    edi
0x8E83C0: push    1
0x8E83C2: lea     ecx, [esp+18h+var_4]
0x8E83C6: push    ecx
0x8E83C7: push    4
0x8E83C9: lea     edx, [esp+20h+var_8]
0x8E83CD: push    edx
0x8E83CE: xor     edi, edi
0x8E83D0: mov     [esp+24h+var_8], edi
0x8E83D4: push    eax
0x8E83D5: mov     eax, [eax+4]
0x8E83D8: mov     [esp+28h+var_4], 4
0x8E83E0: call    eax
0x8E83E2: mov     esi, [esp+28h+arg_4]
0x8E83E6: mov     eax, [esi+8]
0x8E83E9: add     esp, 14h
0x8E83EC: test    eax, eax
0x8E83EE: js      short loc_8E8423
0x8E83F0: mov     ecx, ds:0BA9DE4h
0x8E83F6: mov     edx, large fs:2Ch
0x8E83FD: mov     ecx, [edx+ecx*4]
0x8E8400: mov     ecx, [ecx+19Ch]
0x8E8406: cmp     ecx, edi
0x8E8408: jnz     short loc_8E8410
0x8E840A: mov     ecx, ds:0BA7D9Ch
0x8E8410: mov     edx, [esi]
0x8E8412: and     eax, 3FFFFFFFh
0x8E8417: push    14h
0x8E8419: shl     eax, 4
0x8E841C: push    eax
0x8E841D: push    edx
0x8E841E: call    sub_8A75D0
0x8E8423: mov     eax, [esi+8]
0x8E8426: mov     ecx, [esp+14h+var_8]
0x8E842A: and     eax, 0C0000000h
0x8E842F: or      eax, 80000000h
0x8E8434: mov     [esi+8], eax
0x8E8437: and     eax, 3FFFFFFFh
0x8E843C: cmp     eax, ecx
0x8E843E: mov     [esi], edi
0x8E8440: mov     [esi+4], edi
0x8E8443: mov     ebp, ecx
0x8E8445: jge     short loc_8E845F
0x8E8447: add     eax, eax
0x8E8449: cmp     ecx, eax
0x8E844B: jge     short loc_8E844F
0x8E844D: mov     ecx, eax
0x8E844F: push    10h
0x8E8451: push    ecx
0x8E8452: push    esi
0x8E8453: call    sub_8A6E40
0x8E8458: mov     ecx, [esp+20h+var_8]
0x8E845C: add     esp, 0Ch
0x8E845F: mov     [esi+4], ebp
0x8E8462: mov     ebp, ecx
0x8E8464: shl     ebp, 4
0x8E8467: cmp     ecx, edi
0x8E8469: jbe     short loc_8E849B
0x8E846B: push    ebx
0x8E846C: xor     ebx, ebx
0x8E846E: mov     edi, edi
0x8E8470: mov     ecx, [esi]
0x8E8472: mov     eax, [esp+18h+arg_0]
0x8E8476: mov     eax, [eax+21Ch]
0x8E847C: mov     edx, [eax+4]
0x8E847F: push    0
0x8E8481: push    0
0x8E8483: push    10h
0x8E8485: add     ecx, ebx
0x8E8487: push    ecx
0x8E8488: push    eax
0x8E8489: call    edx
0x8E848B: add     edi, 1
0x8E848E: add     esp, 14h
0x8E8491: add     ebx, 10h
0x8E8494: cmp     edi, [esp+18h+var_8]
0x8E8498: jb      short loc_8E8470
0x8E849A: pop     ebx
0x8E849B: pop     edi
0x8E849C: pop     esi
0x8E849D: mov     eax, ebp
0x8E849F: pop     ebp
0x8E84A0: add     esp, 8
0x8E84A3: retn
