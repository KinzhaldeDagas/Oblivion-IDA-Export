0x91B340: push    ebp
0x91B341: mov     ebp, esp
0x91B343: and     esp, 0FFFFFFF0h
0x91B346: sub     esp, 54h
0x91B349: mov     edx, ds:0BA9DE4h
0x91B34F: push    ebx
0x91B350: push    esi
0x91B351: push    edi
0x91B352: mov     edi, large fs:2Ch
0x91B359: mov     eax, [edi+edx*4]
0x91B35C: mov     esi, [eax+1A8h]
0x91B362: mov     ebx, ecx
0x91B364: mov     ecx, [eax+1A4h]
0x91B36A: cmp     ecx, esi
0x91B36C: mov     [esp+60h+var_44], ebx
0x91B370: jnb     short loc_91B39C
0x91B372: mov     esi, eax
0x91B374: mov     ecx, [esi+1A4h]
0x91B37A: mov     dword ptr [ecx], offset aTthkconvexradi; "TthkConvexRadiusViewer"
0x91B380: rdtsc
0x91B382: mov     [esp+60h+var_48], eax
0x91B386: mov     edx, [esp+60h+var_48]
0x91B38A: mov     [ecx+4], edx
0x91B38D: mov     edx, ds:0BA9DE4h
0x91B393: add     ecx, 0Ch
0x91B396: mov     [esi+1A4h], ecx
0x91B39C: mov     ecx, [ebp+arg_0]
0x91B39F: mov     eax, [ecx+10h]
0x91B3A2: mov     esi, [ecx+3Ch]
0x91B3A5: mov     [esp+60h+var_4C], eax
0x91B3A9: xor     eax, eax
0x91B3AB: test    esi, esi
0x91B3AD: mov     [esp+60h+var_48], eax
0x91B3B1: jle     loc_91B466
0x91B3B7: mov     edx, [ecx+38h]
0x91B3BA: mov     esi, [edx+eax*4]
0x91B3BD: mov     edx, [esi+38h]
0x91B3C0: add     esi, 34h ; '4'
0x91B3C3: test    edx, edx
0x91B3C5: mov     [esp+60h+var_50], 0
0x91B3CD: jle     loc_91B450
0x91B3D3: mov     ecx, [esp+60h+var_50]
0x91B3D7: mov     eax, [esi]
0x91B3D9: mov     eax, [eax+ecx*4]
0x91B3DC: mov     ecx, [eax+50h]
0x91B3DF: fld     dword ptr [ecx+5Ch]
0x91B3E2: lea     edi, [eax+17h]
0x91B3E5: fld     [esp+60h+var_4C]
0x91B3E9: fucompp
0x91B3EB: fnstsw  ax
0x91B3ED: test    ah, 44h
0x91B3F0: jp      short loc_91B40E
0x91B3F2: mov     eax, [ebx-14h]
0x91B3F5: mov     ebx, ds:0BA842Ch
0x91B3FB: mov     edx, [eax]
0x91B3FD: push    ebx
0x91B3FE: add     ecx, 10h
0x91B401: push    edi
0x91B402: push    ecx
0x91B403: mov     ecx, eax
0x91B405: call    dword ptr [edx+0Ch]
0x91B408: mov     ebx, [esp+60h+var_44]
0x91B40C: jmp     short loc_91B432
0x91B40E: mov     edx, [esp+60h+var_4C]
0x91B412: lea     eax, [esp+60h+var_40]
0x91B416: push    eax
0x91B417: push    edx
0x91B418: call    sub_89DB70
0x91B41D: mov     edx, ds:0BA842Ch
0x91B423: mov     ecx, [ebx-14h]
0x91B426: mov     eax, [ecx]
0x91B428: push    edx
0x91B429: push    edi
0x91B42A: lea     edx, [esp+68h+var_40]
0x91B42E: push    edx
0x91B42F: call    dword ptr [eax+0Ch]
0x91B432: mov     eax, [esp+60h+var_50]
0x91B436: mov     ecx, [esi+4]
0x91B439: inc     eax
0x91B43A: cmp     eax, ecx
0x91B43C: mov     [esp+60h+var_50], eax
0x91B440: jl      short loc_91B3D3
0x91B442: mov     eax, [esp+60h+var_48]
0x91B446: mov     edi, large fs:2Ch
0x91B44D: mov     ecx, [ebp+arg_0]
0x91B450: mov     edx, [ecx+3Ch]
0x91B453: inc     eax
0x91B454: cmp     eax, edx
0x91B456: mov     [esp+60h+var_48], eax
0x91B45A: jl      loc_91B3B7
0x91B460: mov     edx, ds:0BA9DE4h
0x91B466: mov     eax, [edi+edx*4]
0x91B469: mov     ecx, [eax+1A4h]
0x91B46F: cmp     ecx, [eax+1A8h]
0x91B475: jnb     short loc_91B49B
0x91B477: mov     esi, eax
0x91B479: mov     ecx, [esi+1A4h]
0x91B47F: mov     dword ptr [ecx], offset aEt; "Et"
0x91B485: rdtsc
0x91B487: mov     [esp+60h+var_44], eax
0x91B48B: mov     edx, [esp+60h+var_44]
0x91B48F: mov     [ecx+4], edx
0x91B492: add     ecx, 0Ch
0x91B495: mov     [esi+1A4h], ecx
0x91B49B: pop     edi
0x91B49C: pop     esi
0x91B49D: pop     ebx
0x91B49E: mov     esp, ebp
0x91B4A0: pop     ebp
0x91B4A1: retn    8
