0x552530: push    ecx
0x552531: push    ebx
0x552532: mov     ebx, [esp+8+arg_4]
0x552536: push    ebp
0x552537: push    esi
0x552538: mov     esi, ecx
0x55253A: mov     eax, [esi]
0x55253C: cmp     eax, [ebx]
0x55253E: push    edi
0x55253F: mov     [esp+14h+var_4], 0
0x552547: jnz     short loc_552551
0x552549: mov     ecx, [esi+4]
0x55254C: cmp     ecx, [ebx+4]
0x55254F: jz      short loc_552563
0x552551: push    167h; int
0x552556: push    offset aENetworkprojec; "e:\\networkprojectspc\\oblivionse\\sdk"...
0x55255B: call    sub_6ED6D0
0x552560: add     esp, 8
0x552563: mov     edx, [esi+4]
0x552566: mov     eax, [esi]
0x552568: mov     edi, [esp+14h+arg_0]
0x55256C: push    edx
0x55256D: push    eax
0x55256E: mov     ecx, edi
0x552570: call    sub_552240
0x552575: mov     ebp, [edi+0Ch]
0x552578: cmp     ebp, [edi+10h]
0x55257B: jbe     short loc_552582
0x55257D: call    __invalid_parameter_noinfo
0x552582: lea     edi, [esi+8]
0x552585: mov     esi, [edi+4]
0x552588: cmp     esi, [edi+8]
0x55258B: jbe     short loc_552592
0x55258D: call    __invalid_parameter_noinfo
0x552592: mov     ebx, [ebx+0Ch]
0x552595: mov     ecx, [esp+14h+arg_4]
0x552599: cmp     ebx, [ecx+10h]
0x55259C: jbe     short loc_5525A3
0x55259E: call    __invalid_parameter_noinfo
0x5525A3: mov     eax, [edi+8]
0x5525A6: cmp     [edi+4], eax
0x5525A9: mov     [esp+14h+var_4], eax
0x5525AD: jbe     short loc_5525B4
0x5525AF: call    __invalid_parameter_noinfo
0x5525B4: cmp     edi, edi
0x5525B6: jz      short loc_5525BD
0x5525B8: call    __invalid_parameter_noinfo
0x5525BD: cmp     esi, [esp+14h+var_4]
0x5525C1: jz      short loc_552621
0x5525C3: cmp     esi, [edi+8]
0x5525C6: jb      short loc_5525CD
0x5525C8: call    __invalid_parameter_noinfo
0x5525CD: mov     edx, [esp+14h+arg_4]
0x5525D1: cmp     ebx, [edx+10h]
0x5525D4: jb      short loc_5525DB
0x5525D6: call    __invalid_parameter_noinfo
0x5525DB: mov     eax, [esp+14h+arg_0]
0x5525DF: cmp     ebp, [eax+10h]
0x5525E2: jb      short loc_5525E9
0x5525E4: call    __invalid_parameter_noinfo
0x5525E9: fld     dword ptr [ebx]
0x5525EB: fadd    dword ptr [esi]
0x5525ED: fstp    dword ptr [ebp+0]
0x5525F0: cmp     esi, [edi+8]
0x5525F3: jb      short loc_5525FA
0x5525F5: call    __invalid_parameter_noinfo
0x5525FA: mov     ecx, [esp+14h+arg_4]
0x5525FE: add     esi, 4
0x552601: cmp     ebx, [ecx+10h]
0x552604: jb      short loc_55260B
0x552606: call    __invalid_parameter_noinfo
0x55260B: mov     edx, [esp+14h+arg_0]
0x55260F: add     ebx, 4
0x552612: cmp     ebp, [edx+10h]
0x552615: jb      short loc_55261C
0x552617: call    __invalid_parameter_noinfo
0x55261C: add     ebp, 4
0x55261F: jmp     short loc_5525A3
0x552621: mov     eax, [esp+14h+arg_0]
0x552625: pop     edi
0x552626: pop     esi
0x552627: pop     ebp
0x552628: pop     ebx
0x552629: pop     ecx
0x55262A: retn    8
