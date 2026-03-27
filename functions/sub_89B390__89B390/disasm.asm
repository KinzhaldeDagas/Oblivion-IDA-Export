0x89B390: sub     esp, 24h
0x89B393: push    ebp
0x89B394: mov     ebp, ecx
0x89B396: mov     eax, [ebp+88h]
0x89B39C: test    eax, eax
0x89B39E: jz      short loc_89B3CC
0x89B3A0: mov     cl, [esp+28h+arg_4]
0x89B3A4: mov     eax, [esp+28h+arg_0]
0x89B3A8: lea     edx, [esp+28h+var_1C]
0x89B3AC: mov     byte ptr [esp+28h+var_14], cl
0x89B3B0: mov     ecx, [ebp+80h]
0x89B3B6: push    edx
0x89B3B7: mov     byte ptr [esp+2Ch+var_1C], 13h
0x89B3BC: mov     [esp+2Ch+var_18], eax
0x89B3C0: call    sub_8D8830
0x89B3C5: pop     ebp
0x89B3C6: add     esp, 24h
0x89B3C9: retn    8
0x89B3CC: push    ebx
0x89B3CD: mov     ebx, ds:0BA9DE4h
0x89B3D3: push    esi
0x89B3D4: push    edi
0x89B3D5: mov     edi, large fs:2Ch
0x89B3DC: mov     eax, [edi+ebx*4]
0x89B3DF: mov     dword ptr [ebp+88h], 1
0x89B3E9: mov     ecx, [eax+1A4h]
0x89B3EF: cmp     ecx, [eax+1A8h]
0x89B3F5: jnb     short loc_89B422
0x89B3F7: mov     esi, eax
0x89B3F9: mov     ecx, [esi+1A4h]
0x89B3FF: mov     dword ptr [ecx], offset aLtupdatefilt_0; "LtUpdateFilterOnPhantom"
0x89B405: mov     dword ptr [ecx+0Ch], offset aBroadphase_0; "broadphase"
0x89B40C: rdtsc
0x89B40E: mov     [esp+34h+var_20], eax
0x89B412: mov     edx, [esp+34h+var_20]
0x89B416: mov     [ecx+4], edx
0x89B419: add     ecx, 10h
0x89B41C: mov     [esi+1A4h], ecx
0x89B422: mov     ebx, [edi+ebx*4]
0x89B425: mov     ecx, [ebx+19Ch]
0x89B42B: mov     esi, [ebp+2A4h]
0x89B431: xor     eax, eax
0x89B433: cmp     ecx, eax
0x89B435: mov     [esp+34h+var_10], eax
0x89B439: mov     [esp+34h+var_C], eax
0x89B43D: mov     [esp+34h+var_8], 80000000h
0x89B445: mov     [esp+34h+var_24], ebx
0x89B449: jnz     short loc_89B451
0x89B44B: mov     ecx, ds:0BA7D9Ch
0x89B451: mov     eax, [ecx+20h]
0x89B454: lea     edx, ds:10h[esi*8]
0x89B45B: and     edx, 0FFFFFFF0h
0x89B45E: lea     ebx, [eax+edx]
0x89B461: cmp     ebx, [ecx+2Ch]
0x89B464: ja      short loc_89B46B
0x89B466: mov     [ecx+20h], ebx
0x89B469: jmp     short loc_89B471
0x89B46B: mov     eax, [ecx]
0x89B46D: push    edx
0x89B46E: call    dword ptr [eax+0Ch]
0x89B471: mov     ebx, [esp+34h+arg_0]
0x89B475: mov     ecx, [ebp+64h]
0x89B478: mov     [esp+34h+var_10], eax
0x89B47C: mov     [esp+34h+var_4], eax
0x89B480: lea     eax, [esp+34h+var_10]
0x89B484: or      esi, 80000000h
0x89B48A: push    eax
0x89B48B: mov     [esp+38h+var_8], esi
0x89B48F: mov     edx, [ecx]
0x89B491: add     ebx, 28h ; '('
0x89B494: push    ebx
0x89B495: call    dword ptr [edx+2Ch]
0x89B498: mov     ecx, ds:0BA9DE4h
0x89B49E: mov     eax, [edi+ecx*4]
0x89B4A1: mov     edx, [eax+1A4h]
0x89B4A7: cmp     edx, [eax+1A8h]
0x89B4AD: mov     esi, [esp+34h+var_24]
0x89B4B1: jnb     short loc_89B4D5
0x89B4B3: mov     ecx, [esi+1A4h]
0x89B4B9: mov     dword ptr [ecx], offset aStupdateoverla; "StUpdateOverlaps"
0x89B4BF: rdtsc
0x89B4C1: mov     [esp+34h+var_20], eax
0x89B4C5: mov     eax, [esp+34h+var_20]
0x89B4C9: mov     [ecx+4], eax
0x89B4CC: add     ecx, 0Ch
0x89B4CF: mov     [esi+1A4h], ecx
0x89B4D5: mov     eax, [esp+34h+var_C]
0x89B4D9: xor     ecx, ecx
0x89B4DB: test    eax, eax
0x89B4DD: mov     [esp+34h+var_20], ecx
0x89B4E1: jle     short loc_89B521
0x89B4E3: mov     edx, [esp+34h+var_10]
0x89B4E7: mov     eax, [edx+ecx*8+4]
0x89B4EB: cmp     eax, ebx
0x89B4ED: jz      short loc_89B514
0x89B4EF: movsx   esi, byte ptr [eax+5]
0x89B4F3: mov     ecx, [ebp+78h]
0x89B4F6: mov     edi, [esp+34h+arg_0]
0x89B4FA: push    ecx
0x89B4FB: add     esi, eax
0x89B4FD: call    sub_898760
0x89B502: mov     edi, large fs:2Ch
0x89B509: mov     ecx, [esp+38h+var_20]
0x89B50D: mov     esi, [esp+38h+var_24]
0x89B511: add     esp, 4
0x89B514: mov     eax, [esp+34h+var_C]
0x89B518: inc     ecx
0x89B519: cmp     ecx, eax
0x89B51B: mov     [esp+34h+var_20], ecx
0x89B51F: jl      short loc_89B4E3
0x89B521: mov     eax, dword ptr [esp+34h+arg_4]
0x89B525: test    eax, eax
0x89B527: jz      short loc_89B56B
0x89B529: mov     edx, ds:0BA9DE4h
0x89B52F: mov     eax, [edi+edx*4]
0x89B532: mov     ecx, [eax+1A4h]
0x89B538: cmp     ecx, [eax+1A8h]
0x89B53E: jnb     short loc_89B562
0x89B540: mov     ecx, [esi+1A4h]
0x89B546: mov     dword ptr [ecx], offset aStcollectionfi; "StcollectionFilter"
0x89B54C: rdtsc
0x89B54E: mov     dword ptr [esp+34h+arg_4], eax
0x89B552: mov     edx, dword ptr [esp+34h+arg_4]
0x89B556: mov     [ecx+4], edx
0x89B559: add     ecx, 0Ch
0x89B55C: mov     [esi+1A4h], ecx
0x89B562: mov     ecx, [esp+34h+arg_0]
0x89B566: mov     eax, [ecx]
0x89B568: call    dword ptr [eax+28h]
0x89B56B: dec     dword ptr [ebp+88h]
0x89B571: jnz     short loc_89B58E
0x89B573: mov     eax, [ebp+84h]
0x89B579: test    eax, eax
0x89B57B: jz      short loc_89B58E
0x89B57D: mov     al, [ebp+90h]
0x89B583: test    al, al
0x89B585: jnz     short loc_89B58E
0x89B587: mov     ecx, ebp
0x89B589: call    sub_899210
0x89B58E: mov     ecx, ds:0BA9DE4h
0x89B594: mov     edi, [edi+ecx*4]
0x89B597: mov     edx, [edi+1A4h]
0x89B59D: cmp     edx, [edi+1A8h]
0x89B5A3: jnb     short loc_89B5C7
0x89B5A5: mov     ecx, [esi+1A4h]
0x89B5AB: mov     dword ptr [ecx], offset aLt_0; "lt"
0x89B5B1: rdtsc
0x89B5B3: mov     [esp+34h+arg_0], eax
0x89B5B7: mov     eax, [esp+34h+arg_0]
0x89B5BB: mov     [ecx+4], eax
0x89B5BE: add     ecx, 0Ch
0x89B5C1: mov     [esi+1A4h], ecx
0x89B5C7: mov     ecx, [esi+19Ch]
0x89B5CD: test    ecx, ecx
0x89B5CF: mov     eax, [esp+34h+var_4]
0x89B5D3: jnz     short loc_89B5DB
0x89B5D5: mov     ecx, ds:0BA7D9Ch
0x89B5DB: cmp     eax, [ecx+28h]
0x89B5DE: mov     [ecx+20h], eax
0x89B5E1: jnz     short loc_89B5E9
0x89B5E3: mov     edx, [ecx]
0x89B5E5: push    eax
0x89B5E6: call    dword ptr [edx+10h]
0x89B5E9: mov     edx, [esp+34h+var_8]
0x89B5ED: test    edx, edx
0x89B5EF: js      short loc_89B618
0x89B5F1: mov     eax, [esi+19Ch]
0x89B5F7: test    eax, eax
0x89B5F9: jnz     short loc_89B600
0x89B5FB: mov     eax, ds:0BA7D9Ch
0x89B600: mov     ecx, [esp+34h+var_10]
0x89B604: and     edx, 3FFFFFFFh
0x89B60A: push    14h
0x89B60C: shl     edx, 3
0x89B60F: push    edx
0x89B610: push    ecx
0x89B611: mov     ecx, eax
0x89B613: call    sub_8A75D0
0x89B618: pop     edi
0x89B619: pop     esi
0x89B61A: pop     ebx
0x89B61B: pop     ebp
0x89B61C: add     esp, 24h
0x89B61F: retn    8
