0x90C290: sub     esp, 1Ch
0x90C293: push    ebp
0x90C294: mov     ebp, [esp+20h+arg_0]
0x90C298: push    esi
0x90C299: mov     [esp+24h+var_1C], ecx
0x90C29D: push    edi
0x90C29E: mov     ecx, ebp
0x90C2A0: call    sub_90D240
0x90C2A5: mov     edi, eax
0x90C2A7: xor     esi, esi
0x90C2A9: cmp     edi, esi
0x90C2AB: jle     short loc_90C2E3
0x90C2AD: lea     ecx, [ecx+0]
0x90C2B0: push    esi
0x90C2B1: mov     ecx, ebp
0x90C2B3: call    sub_90D2B0
0x90C2B8: mov     cl, [eax+0Ch]
0x90C2BB: cmp     cl, 19h
0x90C2BE: jz      short loc_90C2CB
0x90C2C0: cmp     cl, 14h
0x90C2C3: jz      short loc_90C2DC
0x90C2C5: cmp     byte ptr [eax+0Dh], 19h
0x90C2C9: jnz     short loc_90C2DC
0x90C2CB: mov     ecx, eax
0x90C2CD: call    sub_90D1F0
0x90C2D2: mov     ecx, [esp+28h+var_1C]
0x90C2D6: push    eax
0x90C2D7: call    sub_90C290
0x90C2DC: inc     esi
0x90C2DD: cmp     esi, edi
0x90C2DF: jl      short loc_90C2B0
0x90C2E1: xor     esi, esi
0x90C2E3: cmp     edi, esi
0x90C2E5: mov     [esp+28h+var_C], esi
0x90C2E9: mov     [esp+28h+var_8], esi
0x90C2ED: mov     [esp+28h+var_4], 80000000h
0x90C2F5: jle     short loc_90C313
0x90C2F7: xor     eax, eax
0x90C2F9: cmp     edi, esi
0x90C2FB: setl    al
0x90C2FE: push    4
0x90C300: dec     eax
0x90C301: and     eax, edi
0x90C303: push    eax
0x90C304: lea     eax, [esp+30h+var_C]
0x90C308: push    eax
0x90C309: call    sub_8A6E40
0x90C30E: add     esp, 0Ch
0x90C311: xor     esi, esi
0x90C313: mov     ecx, ebp
0x90C315: mov     [esp+28h+var_8], edi
0x90C319: mov     [esp+28h+var_18], esi
0x90C31D: mov     [esp+28h+var_14], esi
0x90C321: mov     [esp+28h+var_10], 80000000h
0x90C329: call    sub_90D200
0x90C32E: mov     esi, eax
0x90C330: mov     eax, [esp+28h+var_10]
0x90C334: and     eax, 3FFFFFFFh
0x90C339: cmp     eax, esi
0x90C33B: jge     short loc_90C355
0x90C33D: add     eax, eax
0x90C33F: cmp     esi, eax
0x90C341: jl      short loc_90C345
0x90C343: mov     eax, esi
0x90C345: push    4
0x90C347: push    eax
0x90C348: lea     ecx, [esp+30h+var_18]
0x90C34C: push    ecx
0x90C34D: call    sub_8A6E40
0x90C352: add     esp, 0Ch
0x90C355: mov     edx, [esp+28h+var_18]
0x90C359: mov     eax, [esp+28h+var_C]
0x90C35D: mov     ecx, [esp+28h+var_1C]
0x90C361: push    edx
0x90C362: push    eax
0x90C363: push    ebp
0x90C364: mov     [esp+34h+var_14], esi
0x90C368: call    sub_90C020
0x90C36D: xor     esi, esi
0x90C36F: test    edi, edi
0x90C371: jle     short loc_90C38C
0x90C373: push    esi
0x90C374: mov     ecx, ebp
0x90C376: call    sub_90D2B0
0x90C37B: mov     ecx, [esp+28h+var_C]
0x90C37F: mov     dx, [ecx+esi*4]
0x90C383: inc     esi
0x90C384: cmp     esi, edi
0x90C386: mov     [eax+12h], dx
0x90C38A: jl      short loc_90C373
0x90C38C: mov     esi, [esp+28h+var_14]
0x90C390: dec     esi
0x90C391: js      short loc_90C3AE
0x90C393: mov     eax, [esp+28h+var_18]
0x90C397: mov     ecx, [eax+esi*4]
0x90C39A: push    ecx
0x90C39B: mov     ecx, ebp
0x90C39D: call    sub_90D370
0x90C3A2: mov     ecx, ebp
0x90C3A4: call    sub_90D1F0
0x90C3A9: dec     esi
0x90C3AA: mov     ebp, eax
0x90C3AC: jns     short loc_90C393
0x90C3AE: mov     eax, [esp+28h+var_10]
0x90C3B2: test    eax, eax
0x90C3B4: mov     esi, ds:0BA9DE4h
0x90C3BA: mov     edi, large fs:2Ch
0x90C3C1: js      short loc_90C3E1
0x90C3C3: mov     edx, [esp+28h+var_18]
0x90C3C7: and     eax, 3FFFFFFFh
0x90C3CC: push    14h
0x90C3CE: shl     eax, 2
0x90C3D1: push    eax
0x90C3D2: mov     eax, [edi+esi*4]
0x90C3D5: mov     ecx, [eax+19Ch]
0x90C3DB: push    edx
0x90C3DC: call    sub_8A75D0
0x90C3E1: mov     eax, [esp+28h+var_4]
0x90C3E5: test    eax, eax
0x90C3E7: js      short loc_90C407
0x90C3E9: mov     ecx, [esp+28h+var_C]
0x90C3ED: mov     edx, [edi+esi*4]
0x90C3F0: and     eax, 3FFFFFFFh
0x90C3F5: push    14h
0x90C3F7: shl     eax, 2
0x90C3FA: push    eax
0x90C3FB: push    ecx
0x90C3FC: mov     ecx, [edx+19Ch]
0x90C402: call    sub_8A75D0
0x90C407: pop     edi
0x90C408: pop     esi
0x90C409: pop     ebp
0x90C40A: add     esp, 1Ch
0x90C40D: retn    4
