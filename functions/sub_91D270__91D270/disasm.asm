0x91D270: push    ebp
0x91D271: mov     ebp, esp
0x91D273: and     esp, 0FFFFFFF0h
0x91D276: sub     esp, 44h
0x91D279: mov     edx, ds:0BA9DE4h
0x91D27F: push    ebx
0x91D280: mov     [esp+48h+var_3C], ecx
0x91D284: mov     ecx, large fs:2Ch
0x91D28B: mov     eax, [ecx+edx*4]
0x91D28E: push    esi
0x91D28F: mov     esi, [eax+1A4h]
0x91D295: push    edi
0x91D296: cmp     esi, [eax+1A8h]
0x91D29C: jnb     short loc_91D2C2
0x91D29E: mov     esi, eax
0x91D2A0: mov     ecx, [esi+1A4h]
0x91D2A6: mov     dword ptr [ecx], offset aTthkphantomdis; "TthkPhantomDisplayViewer"
0x91D2AC: rdtsc
0x91D2AE: mov     [esp+50h+var_40], eax
0x91D2B2: mov     eax, [esp+50h+var_40]
0x91D2B6: mov     [ecx+4], eax
0x91D2B9: add     ecx, 0Ch
0x91D2BC: mov     [esi+1A4h], ecx
0x91D2C2: mov     ebx, [ebp+arg_0]
0x91D2C5: mov     edi, [ebx+0BCh]
0x91D2CB: xor     eax, eax
0x91D2CD: cmp     edi, eax
0x91D2CF: mov     ecx, 80000000h
0x91D2D4: mov     [esp+50h+var_38], eax
0x91D2D8: mov     [esp+50h+var_34], eax
0x91D2DC: mov     [esp+50h+var_30], ecx
0x91D2E0: jge     short loc_91D2FE
0x91D2E2: mov     esi, edi
0x91D2E4: shl     esi, 7
0x91D2E7: mov     ecx, [esp+50h+var_38]
0x91D2EB: mov     edx, [ecx+esi]
0x91D2EE: add     ecx, esi
0x91D2F0: push    0
0x91D2F2: call    dword ptr [edx]
0x91D2F4: add     esi, 80h ; '€'
0x91D2FA: js      short loc_91D2E7
0x91D2FC: jmp     short loc_91D35C
0x91D2FE: jle     short loc_91D329
0x91D300: cmp     edi, eax
0x91D302: mov     [esp+50h+var_38], eax
0x91D306: mov     [esp+50h+var_34], eax
0x91D30A: mov     [esp+50h+var_30], ecx
0x91D30E: jle     short loc_91D323
0x91D310: push    80h ; '€'
0x91D315: lea     eax, [esp+54h+var_38]
0x91D319: push    edi
0x91D31A: push    eax
0x91D31B: call    sub_8A6E40
0x91D320: add     esp, 0Ch
0x91D323: xor     eax, eax
0x91D325: mov     [esp+50h+var_34], eax
0x91D329: cmp     edi, eax
0x91D32B: jle     short loc_91D35C
0x91D32D: mov     esi, [esp+50h+var_38]
0x91D331: mov     [esp+50h+var_40], edi
0x91D335: jmp     short loc_91D340
0x91D337: xor     eax, eax
0x91D339: lea     esp, [esp+0]
0x91D340: cmp     esi, eax
0x91D342: jz      short loc_91D34B
0x91D344: mov     ecx, esi
0x91D346: call    sub_949300
0x91D34B: mov     eax, [esp+50h+var_40]
0x91D34F: add     esi, 80h ; '€'
0x91D355: dec     eax
0x91D356: mov     [esp+50h+var_40], eax
0x91D35A: jnz     short loc_91D337
0x91D35C: mov     esi, [ebx+0BCh]
0x91D362: xor     eax, eax
0x91D364: cmp     esi, eax
0x91D366: mov     [esp+50h+var_34], edi
0x91D36A: mov     [esp+50h+var_2C], eax
0x91D36E: mov     [esp+50h+var_28], eax
0x91D372: mov     [esp+50h+var_24], 80000000h
0x91D37A: jle     short loc_91D398
0x91D37C: xor     ecx, ecx
0x91D37E: cmp     esi, eax
0x91D380: setl    cl
0x91D383: push    4
0x91D385: lea     edx, [esp+54h+var_2C]
0x91D389: dec     ecx
0x91D38A: and     ecx, esi
0x91D38C: mov     eax, ecx
0x91D38E: push    eax
0x91D38F: push    edx
0x91D390: call    sub_8A6E40
0x91D395: add     esp, 0Ch
0x91D398: mov     eax, [ebx+0BCh]
0x91D39E: mov     [esp+50h+var_28], esi
0x91D3A2: xor     esi, esi
0x91D3A4: test    eax, eax
0x91D3A6: jle     short loc_91D3F8
0x91D3A8: xor     edi, edi
0x91D3AA: lea     ebx, [ebx+0]
0x91D3B0: mov     eax, [ebx+0B8h]
0x91D3B6: mov     ecx, [eax+esi*4]
0x91D3B9: mov     edx, [ecx]
0x91D3BB: lea     eax, [esp+50h+var_20]
0x91D3BF: push    eax
0x91D3C0: call    dword ptr [edx+14h]
0x91D3C3: mov     eax, [esp+50h+var_38]
0x91D3C7: lea     ecx, [esp+50h+var_10]
0x91D3CB: push    ecx
0x91D3CC: lea     edx, [esp+54h+var_20]
0x91D3D0: push    edx
0x91D3D1: lea     ecx, [edi+eax]
0x91D3D4: call    sub_9492E0
0x91D3D9: mov     ecx, [esp+50h+var_38]
0x91D3DD: mov     eax, [esp+50h+var_2C]
0x91D3E1: lea     edx, [edi+ecx]
0x91D3E4: mov     [eax+esi*4], edx
0x91D3E7: mov     eax, [ebx+0BCh]
0x91D3ED: inc     esi
0x91D3EE: add     edi, 80h ; '€'
0x91D3F4: cmp     esi, eax
0x91D3F6: jl      short loc_91D3B0
0x91D3F8: mov     eax, ds:0BA8448h
0x91D3FD: mov     ecx, [esp+50h+var_3C]
0x91D401: mov     ecx, [ecx-14h]
0x91D404: mov     edx, [ecx]
0x91D406: push    eax
0x91D407: mov     eax, ds:0BA844Ch
0x91D40C: push    eax
0x91D40D: lea     eax, [esp+58h+var_2C]
0x91D411: push    eax
0x91D412: call    dword ptr [edx+24h]
0x91D415: mov     eax, [esp+50h+var_24]
0x91D419: test    eax, eax
0x91D41B: mov     ebx, large fs:2Ch
0x91D422: js      short loc_91D452
0x91D424: mov     ecx, ds:0BA9DE4h
0x91D42A: mov     edx, [ebx+ecx*4]
0x91D42D: mov     ecx, [edx+19Ch]
0x91D433: test    ecx, ecx
0x91D435: jnz     short loc_91D43D
0x91D437: mov     ecx, ds:0BA7D9Ch
0x91D43D: and     eax, 3FFFFFFFh
0x91D442: push    14h
0x91D444: shl     eax, 2
0x91D447: push    eax
0x91D448: mov     eax, [esp+58h+var_2C]
0x91D44C: push    eax
0x91D44D: call    sub_8A75D0
0x91D452: mov     edi, [esp+50h+var_34]
0x91D456: test    edi, edi
0x91D458: jle     short loc_91D476
0x91D45A: xor     esi, esi
0x91D45C: lea     esp, [esp+0]
0x91D460: mov     ecx, [esp+50h+var_38]
0x91D464: mov     edx, [ecx+esi]
0x91D467: add     ecx, esi
0x91D469: push    0
0x91D46B: call    dword ptr [edx]
0x91D46D: add     esi, 80h ; '€'
0x91D473: dec     edi
0x91D474: jnz     short loc_91D460
0x91D476: mov     eax, [esp+50h+var_30]
0x91D47A: test    eax, eax
0x91D47C: js      short loc_91D4AC
0x91D47E: mov     ecx, ds:0BA9DE4h
0x91D484: mov     edx, [ebx+ecx*4]
0x91D487: mov     ecx, [edx+19Ch]
0x91D48D: test    ecx, ecx
0x91D48F: jnz     short loc_91D497
0x91D491: mov     ecx, ds:0BA7D9Ch
0x91D497: and     eax, 3FFFFFFFh
0x91D49C: push    14h
0x91D49E: shl     eax, 7
0x91D4A1: push    eax
0x91D4A2: mov     eax, [esp+58h+var_38]
0x91D4A6: push    eax
0x91D4A7: call    sub_8A75D0
0x91D4AC: mov     edi, [esp+50h+var_3C]
0x91D4B0: mov     eax, [edi+8]
0x91D4B3: xor     esi, esi
0x91D4B5: test    eax, eax
0x91D4B7: jle     short loc_91D4EC
0x91D4B9: lea     esp, [esp+0]
0x91D4C0: mov     ecx, [edi+4]
0x91D4C3: mov     eax, [ecx+esi*4]
0x91D4C6: mov     ebx, ds:0BA8448h
0x91D4CC: mov     ecx, [edi-14h]
0x91D4CF: mov     edx, [ecx]
0x91D4D1: push    ebx
0x91D4D2: lea     ebx, [eax+14h]
0x91D4D5: mov     eax, [eax+1Ch]
0x91D4D8: push    ebx
0x91D4D9: push    eax
0x91D4DA: call    dword ptr [edx+0Ch]
0x91D4DD: mov     eax, [edi+8]
0x91D4E0: inc     esi
0x91D4E1: cmp     esi, eax
0x91D4E3: jl      short loc_91D4C0
0x91D4E5: mov     ebx, large fs:2Ch
0x91D4EC: mov     ecx, ds:0BA9DE4h
0x91D4F2: mov     eax, [ebx+ecx*4]
0x91D4F5: mov     edx, [eax+1A4h]
0x91D4FB: cmp     edx, [eax+1A8h]
0x91D501: jnb     short loc_91D527
0x91D503: mov     esi, eax
0x91D505: mov     ecx, [esi+1A4h]
0x91D50B: mov     dword ptr [ecx], offset aEt; "Et"
0x91D511: rdtsc
0x91D513: mov     [esp+50h+var_3C], eax
0x91D517: mov     eax, [esp+50h+var_3C]
0x91D51B: mov     [ecx+4], eax
0x91D51E: add     ecx, 0Ch
0x91D521: mov     [esi+1A4h], ecx
0x91D527: pop     edi
0x91D528: pop     esi
0x91D529: pop     ebx
0x91D52A: mov     esp, ebp
0x91D52C: pop     ebp
0x91D52D: retn    8
