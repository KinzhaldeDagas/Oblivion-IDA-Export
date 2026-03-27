0x89D080: sub     esp, 24h
0x89D083: push    esi
0x89D084: mov     esi, ecx
0x89D086: mov     eax, [esi+88h]
0x89D08C: mov     ecx, [esi+8Ch]
0x89D092: add     ecx, eax
0x89D094: jz      short loc_89D0C4
0x89D096: mov     edx, [esp+28h+arg_0]
0x89D09A: mov     ax, word ptr [esp+28h+arg_4]
0x89D09F: lea     ecx, [esp+28h+var_20]
0x89D0A3: push    ecx
0x89D0A4: mov     ecx, [esi+80h]
0x89D0AA: mov     byte ptr [esp+2Ch+var_20], 10h
0x89D0AF: mov     [esp+2Ch+var_1C], edx
0x89D0B3: mov     word ptr [esp+2Ch+var_18], ax
0x89D0B8: call    sub_8D8830
0x89D0BD: pop     esi
0x89D0BE: add     esp, 24h
0x89D0C1: retn    8
0x89D0C4: mov     edx, ds:0BA9DE4h
0x89D0CA: inc     eax
0x89D0CB: mov     [esi+88h], eax
0x89D0D1: mov     eax, large fs:2Ch
0x89D0D7: mov     eax, [eax+edx*4]
0x89D0DA: mov     ecx, [eax+19Ch]
0x89D0E0: push    ebx
0x89D0E1: push    ebp
0x89D0E2: xor     ebp, ebp
0x89D0E4: cmp     ecx, ebp
0x89D0E6: push    edi
0x89D0E7: mov     [esp+34h+var_10], ebp
0x89D0EB: mov     [esp+34h+var_C], ebp
0x89D0EF: mov     [esp+34h+var_8], 80000000h
0x89D0F7: mov     [esp+34h+var_24], eax
0x89D0FB: jnz     short loc_89D103
0x89D0FD: mov     ecx, ds:0BA7D9Ch
0x89D103: mov     ebx, [esp+34h+arg_4]
0x89D107: mov     edx, [ecx+20h]
0x89D10A: lea     eax, ds:10h[ebx*4]
0x89D111: and     eax, 0FFFFFFF0h
0x89D114: lea     edi, [edx+eax]
0x89D117: cmp     edi, [ecx+2Ch]
0x89D11A: ja      short loc_89D123
0x89D11C: mov     [ecx+20h], edi
0x89D11F: mov     eax, edx
0x89D121: jmp     short loc_89D129
0x89D123: mov     edx, [ecx]
0x89D125: push    eax
0x89D126: call    dword ptr [edx+0Ch]
0x89D129: mov     ecx, ebx
0x89D12B: or      ecx, 80000000h
0x89D131: test    ebx, ebx
0x89D133: mov     [esp+34h+var_10], eax
0x89D137: mov     [esp+34h+var_8], ecx
0x89D13B: mov     [esp+34h+var_4], eax
0x89D13F: jle     short loc_89D175
0x89D141: mov     edx, [esp+34h+arg_0]
0x89D145: mov     edi, [edx+ebp*4]
0x89D148: mov     ecx, [esp+34h+var_C]
0x89D14C: mov     edx, [esp+34h+var_10]
0x89D150: lea     eax, [edi+28h]
0x89D153: mov     [edx+ecx*4], eax
0x89D156: mov     edx, [esp+34h+var_C]
0x89D15A: inc     edx
0x89D15B: push    edi
0x89D15C: push    esi
0x89D15D: mov     [esp+3Ch+var_C], edx
0x89D161: call    sub_8DC5C0
0x89D166: add     esp, 8
0x89D169: mov     ecx, edi
0x89D16B: call    sub_8DE520
0x89D170: inc     ebp
0x89D171: cmp     ebp, ebx
0x89D173: jl      short loc_89D141
0x89D175: mov     ecx, [esp+34h+var_24]
0x89D179: mov     ecx, [ecx+19Ch]
0x89D17F: mov     edi, [esi+2A4h]
0x89D185: xor     eax, eax
0x89D187: cmp     ecx, eax
0x89D189: mov     [esp+34h+var_20], eax
0x89D18D: mov     [esp+34h+var_1C], eax
0x89D191: mov     [esp+34h+var_18], 80000000h
0x89D199: jnz     short loc_89D1A1
0x89D19B: mov     ecx, ds:0BA7D9Ch
0x89D1A1: mov     eax, [ecx+20h]
0x89D1A4: lea     edx, ds:10h[edi*8]
0x89D1AB: and     edx, 0FFFFFFF0h
0x89D1AE: lea     ebp, [eax+edx]
0x89D1B1: cmp     ebp, [ecx+2Ch]
0x89D1B4: ja      short loc_89D1BB
0x89D1B6: mov     [ecx+20h], ebp
0x89D1B9: jmp     short loc_89D1C1
0x89D1BB: mov     eax, [ecx]
0x89D1BD: push    edx
0x89D1BE: call    dword ptr [eax+0Ch]
0x89D1C1: mov     ecx, [esi+64h]
0x89D1C4: mov     [esp+34h+var_20], eax
0x89D1C8: mov     [esp+34h+var_14], eax
0x89D1CC: lea     eax, [esp+34h+var_20]
0x89D1D0: push    eax
0x89D1D1: or      edi, 80000000h
0x89D1D7: lea     eax, [esp+38h+var_10]
0x89D1DB: mov     [esp+38h+var_18], edi
0x89D1DF: mov     edx, [ecx]
0x89D1E1: push    eax
0x89D1E2: call    dword ptr [edx+14h]
0x89D1E5: mov     ecx, [esp+34h+var_1C]
0x89D1E9: mov     edx, [esp+34h+var_20]
0x89D1ED: push    ecx
0x89D1EE: mov     ecx, [esi+68h]
0x89D1F1: push    edx
0x89D1F2: call    sub_8D83E0
0x89D1F7: mov     edi, [esp+34h+var_24]
0x89D1FB: mov     eax, [edi+19Ch]
0x89D201: test    eax, eax
0x89D203: mov     edx, [esp+34h+var_14]
0x89D207: jnz     short loc_89D20E
0x89D209: mov     eax, ds:0BA7D9Ch
0x89D20E: cmp     edx, [eax+28h]
0x89D211: mov     [eax+20h], edx
0x89D214: jnz     short loc_89D21E
0x89D216: mov     ebp, [eax]
0x89D218: push    edx
0x89D219: mov     ecx, eax
0x89D21B: call    dword ptr [ebp+10h]
0x89D21E: mov     eax, [esp+34h+var_18]
0x89D222: test    eax, eax
0x89D224: js      short loc_89D24B
0x89D226: mov     ecx, [edi+19Ch]
0x89D22C: test    ecx, ecx
0x89D22E: jnz     short loc_89D236
0x89D230: mov     ecx, ds:0BA7D9Ch
0x89D236: and     eax, 3FFFFFFFh
0x89D23B: push    14h
0x89D23D: shl     eax, 3
0x89D240: push    eax
0x89D241: mov     eax, [esp+3Ch+var_20]
0x89D245: push    eax
0x89D246: call    sub_8A75D0
0x89D24B: xor     ebp, ebp
0x89D24D: test    ebx, ebx
0x89D24F: jle     short loc_89D2B8
0x89D251: mov     ecx, [esp+34h+arg_0]
0x89D255: mov     edi, [ecx+ebp*4]
0x89D258: xor     eax, eax
0x89D25A: mov     [edi+8], eax
0x89D25D: mov     ecx, [esi+0BCh]
0x89D263: cmp     ecx, eax
0x89D265: jle     short loc_89D27C
0x89D267: mov     edx, [esi+0B8h]
0x89D26D: lea     ecx, [ecx+0]
0x89D270: cmp     [edx], edi
0x89D272: jz      short loc_89D27F
0x89D274: inc     eax
0x89D275: add     edx, 4
0x89D278: cmp     eax, ecx
0x89D27A: jl      short loc_89D270
0x89D27C: or      eax, 0FFFFFFFFh
0x89D27F: mov     ecx, [esi+0BCh]
0x89D285: dec     ecx
0x89D286: mov     [esi+0BCh], ecx
0x89D28C: mov     edx, ecx
0x89D28E: mov     ecx, [esi+0B8h]
0x89D294: mov     edx, [ecx+edx*4]
0x89D297: mov     [ecx+eax*4], edx
0x89D29A: cmp     word ptr [edi+4], 0
0x89D29F: jnz     short loc_89D2A8
0x89D2A1: mov     eax, [edi]
0x89D2A3: mov     ecx, edi
0x89D2A5: call    dword ptr [eax+2Ch]
0x89D2A8: mov     ecx, edi
0x89D2AA: call    sub_8BC730
0x89D2AF: inc     ebp
0x89D2B0: cmp     ebp, ebx
0x89D2B2: jl      short loc_89D251
0x89D2B4: mov     edi, [esp+34h+var_24]
0x89D2B8: dec     dword ptr [esi+88h]
0x89D2BE: jnz     short loc_89D2DB
0x89D2C0: mov     eax, [esi+84h]
0x89D2C6: test    eax, eax
0x89D2C8: jz      short loc_89D2DB
0x89D2CA: mov     al, [esi+90h]
0x89D2D0: test    al, al
0x89D2D2: jnz     short loc_89D2DB
0x89D2D4: mov     ecx, esi
0x89D2D6: call    sub_899210
0x89D2DB: mov     ecx, [edi+19Ch]
0x89D2E1: test    ecx, ecx
0x89D2E3: mov     eax, [esp+34h+var_4]
0x89D2E7: jnz     short loc_89D2EF
0x89D2E9: mov     ecx, ds:0BA7D9Ch
0x89D2EF: cmp     eax, [ecx+28h]
0x89D2F2: mov     [ecx+20h], eax
0x89D2F5: jnz     short loc_89D2FD
0x89D2F7: mov     edx, [ecx]
0x89D2F9: push    eax
0x89D2FA: call    dword ptr [edx+10h]
0x89D2FD: mov     eax, [esp+34h+var_8]
0x89D301: test    eax, eax
0x89D303: js      short loc_89D32A
0x89D305: mov     ecx, [edi+19Ch]
0x89D30B: test    ecx, ecx
0x89D30D: jnz     short loc_89D315
0x89D30F: mov     ecx, ds:0BA7D9Ch
0x89D315: and     eax, 3FFFFFFFh
0x89D31A: push    14h
0x89D31C: shl     eax, 2
0x89D31F: push    eax
0x89D320: mov     eax, [esp+3Ch+var_10]
0x89D324: push    eax
0x89D325: call    sub_8A75D0
0x89D32A: pop     edi
0x89D32B: pop     ebp
0x89D32C: pop     ebx
0x89D32D: pop     esi
0x89D32E: add     esp, 24h
0x89D331: retn    8
