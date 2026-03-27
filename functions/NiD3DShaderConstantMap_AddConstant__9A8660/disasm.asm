0x9A8660: push    esi
0x9A8661: mov     esi, ecx
0x9A8663: mov     eax, [esi]
0x9A8665: mov     edx, [eax+38h]
0x9A8668: push    edi
0x9A8669: mov     edi, [esp+8+constName]
0x9A866D: push    edi
0x9A866E: mov     dword ptr [esi+24h], 0
0x9A8675: call    edx
0x9A8677: test    eax, eax
0x9A8679: jz      short loc_9A8688
0x9A867B: mov     eax, 80000020h
0x9A8680: pop     edi
0x9A8681: mov     [esi+24h], eax
0x9A8684: pop     esi
0x9A8685: retn    28h ; '('
0x9A8688: mov     eax, [esp+8+flags]
0x9A868C: mov     ecx, eax
0x9A868E: and     ecx, 0F0000000h
0x9A8694: cmp     ecx, 30000000h
0x9A869A: jnz     short loc_9A86D7
0x9A869C: mov     ecx, [esp+8+a11]
0x9A86A0: push    ecx
0x9A86A1: mov     ecx, [esp+0Ch+a10]
0x9A86A5: push    ecx
0x9A86A6: mov     ecx, [esp+10h+number]
0x9A86AA: mov     edx, [esi]
0x9A86AC: push    ecx
0x9A86AD: mov     ecx, [esp+14h+size]
0x9A86B1: mov     edx, [edx+20h]
0x9A86B4: push    ecx
0x9A86B5: mov     ecx, [esp+18h+sawEmpty]
0x9A86B9: push    ecx
0x9A86BA: mov     ecx, [esp+1Ch+boh]
0x9A86BE: push    ecx
0x9A86BF: mov     ecx, [esp+20h+register_1]
0x9A86C3: push    ecx
0x9A86C4: mov     ecx, [esp+24h+extra]
0x9A86C8: push    ecx
0x9A86C9: push    eax
0x9A86CA: push    edi
0x9A86CB: mov     ecx, esi
0x9A86CD: call    edx
0x9A86CF: pop     edi
0x9A86D0: mov     [esi+24h], eax
0x9A86D3: pop     esi
0x9A86D4: retn    28h ; '('
0x9A86D7: cmp     ecx, 10000000h
0x9A86DD: jnz     short loc_9A871A
0x9A86DF: mov     ecx, [esp+8+a11]
0x9A86E3: push    ecx
0x9A86E4: mov     ecx, [esp+0Ch+a10]
0x9A86E8: push    ecx
0x9A86E9: mov     ecx, [esp+10h+number]
0x9A86ED: mov     edx, [esi]
0x9A86EF: push    ecx
0x9A86F0: mov     ecx, [esp+14h+size]
0x9A86F4: mov     edx, [edx+24h]
0x9A86F7: push    ecx
0x9A86F8: mov     ecx, [esp+18h+sawEmpty]
0x9A86FC: push    ecx
0x9A86FD: mov     ecx, [esp+1Ch+boh]
0x9A8701: push    ecx
0x9A8702: mov     ecx, [esp+20h+register_1]
0x9A8706: push    ecx
0x9A8707: mov     ecx, [esp+24h+extra]
0x9A870B: push    ecx
0x9A870C: push    eax
0x9A870D: push    edi
0x9A870E: mov     ecx, esi
0x9A8710: call    edx
0x9A8712: pop     edi
0x9A8713: mov     [esi+24h], eax
0x9A8716: pop     esi
0x9A8717: retn    28h ; '('
0x9A871A: cmp     ecx, 20000000h
0x9A8720: jnz     short loc_9A8743
0x9A8722: mov     ecx, [esp+8+sawEmpty]
0x9A8726: mov     edx, [esp+8+register_1]
0x9A872A: mov     eax, [esi]
0x9A872C: push    ecx
0x9A872D: mov     ecx, [esp+0Ch+extra]
0x9A8731: push    edx
0x9A8732: mov     edx, [eax+1Ch]
0x9A8735: push    ecx
0x9A8736: push    edi
0x9A8737: mov     ecx, esi
0x9A8739: call    edx
0x9A873B: pop     edi
0x9A873C: mov     [esi+24h], eax
0x9A873F: pop     esi
0x9A8740: retn    28h ; '('
0x9A8743: cmp     ecx, 40000000h
0x9A8749: jnz     short loc_9A8786
0x9A874B: mov     ecx, [esp+8+a11]
0x9A874F: push    ecx
0x9A8750: mov     ecx, [esp+0Ch+a10]
0x9A8754: push    ecx
0x9A8755: mov     ecx, [esp+10h+number]
0x9A8759: mov     edx, [esi]
0x9A875B: push    ecx
0x9A875C: mov     ecx, [esp+14h+size]
0x9A8760: mov     edx, [edx+28h]
0x9A8763: push    ecx
0x9A8764: mov     ecx, [esp+18h+sawEmpty]
0x9A8768: push    ecx
0x9A8769: mov     ecx, [esp+1Ch+boh]
0x9A876D: push    ecx
0x9A876E: mov     ecx, [esp+20h+register_1]
0x9A8772: push    ecx
0x9A8773: mov     ecx, [esp+24h+extra]
0x9A8777: push    ecx
0x9A8778: push    eax
0x9A8779: push    edi
0x9A877A: mov     ecx, esi
0x9A877C: call    edx
0x9A877E: pop     edi
0x9A877F: mov     [esi+24h], eax
0x9A8782: pop     esi
0x9A8783: retn    28h ; '('
0x9A8786: cmp     ecx, 50000000h
0x9A878C: jnz     short loc_9A87B5
0x9A878E: mov     ecx, [esp+8+sawEmpty]
0x9A8792: mov     edx, [esi]
0x9A8794: mov     edx, [edx+2Ch]
0x9A8797: push    ecx
0x9A8798: mov     ecx, [esp+0Ch+boh]
0x9A879C: push    ecx
0x9A879D: mov     ecx, [esp+10h+register_1]
0x9A87A1: push    ecx
0x9A87A2: mov     ecx, [esp+14h+extra]
0x9A87A6: push    ecx
0x9A87A7: push    eax
0x9A87A8: push    edi
0x9A87A9: mov     ecx, esi
0x9A87AB: call    edx
0x9A87AD: pop     edi
0x9A87AE: mov     [esi+24h], eax
0x9A87B1: pop     esi
0x9A87B2: retn    28h ; '('
0x9A87B5: cmp     ecx, 60000000h
0x9A87BB: jnz     short loc_9A87EA
0x9A87BD: push    ebx
0x9A87BE: mov     ebx, [esi]
0x9A87C0: push    eax
0x9A87C1: call    sub_9A2450
0x9A87C6: mov     ecx, [esp+10h+sawEmpty]
0x9A87CA: mov     edx, [esp+10h+register_1]
0x9A87CE: add     esp, 4
0x9A87D1: push    eax
0x9A87D2: mov     eax, [esp+10h+extra]
0x9A87D6: push    eax
0x9A87D7: mov     eax, [ebx+30h]
0x9A87DA: push    ecx
0x9A87DB: push    edx
0x9A87DC: push    edi
0x9A87DD: mov     ecx, esi
0x9A87DF: call    eax
0x9A87E1: pop     ebx
0x9A87E2: pop     edi
0x9A87E3: mov     [esi+24h], eax
0x9A87E6: pop     esi
0x9A87E7: retn    28h ; '('
0x9A87EA: mov     dword ptr [esi+24h], 80000040h
0x9A87F1: mov     eax, [esi+24h]
0x9A87F4: pop     edi
0x9A87F5: pop     esi
0x9A87F6: retn    28h ; '('
