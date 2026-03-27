0x7E06B0: sub     esp, 10h
0x7E06B3: mov     eax, [esp+10h+a2]
0x7E06B7: push    ebx
0x7E06B8: push    ebp
0x7E06B9: push    esi
0x7E06BA: push    edi
0x7E06BB: xor     edi, edi
0x7E06BD: cmp     byte ptr [eax], 0
0x7E06C0: mov     ebx, ecx
0x7E06C2: mov     [esp+20h+var_C], ebx
0x7E06C6: mov     [esp+20h+var_10], edi
0x7E06CA: jz      short loc_7E0741
0x7E06CC: mov     ecx, [ebx+0D8h]; this
0x7E06D2: call    BSRenderedTexture__GetInnerTexture
0x7E06D7: mov     ecx, [eax+24h]
0x7E06DA: mov     edx, [ecx]
0x7E06DC: mov     eax, [edx+14h]
0x7E06DF: call    eax
0x7E06E1: push    edi
0x7E06E2: push    edi
0x7E06E3: mov     ebp, eax
0x7E06E5: mov     ecx, [ebp+0]
0x7E06E8: mov     eax, [ecx+4Ch]
0x7E06EB: lea     edx, [esp+28h+var_8]
0x7E06EF: push    edx
0x7E06F0: push    edi
0x7E06F1: push    ebp
0x7E06F2: call    eax
0x7E06F4: mov     esi, ds:0B45FC8h
0x7E06FA: test    esi, esi
0x7E06FC: mov     edx, [esp+20h+var_4]
0x7E0700: jle     short loc_7E072F
0x7E0702: xor     ecx, ecx
0x7E0704: test    esi, esi
0x7E0706: jle     short loc_7E0728
0x7E0708: mov     eax, [ebx+0F8h]
0x7E070E: mov     eax, [eax+edi*4]
0x7E0711: fld     dword ptr [eax]
0x7E0713: add     ecx, 1
0x7E0716: fstp    dword ptr [edx]
0x7E0718: mov     esi, ds:0B45FC8h
0x7E071E: add     edx, 4
0x7E0721: add     eax, 4
0x7E0724: cmp     ecx, esi
0x7E0726: jl      short loc_7E0711
0x7E0728: add     edi, 1
0x7E072B: cmp     edi, esi
0x7E072D: jl      short loc_7E0702
0x7E072F: mov     ecx, [ebp+0]
0x7E0732: mov     edx, [ecx+50h]
0x7E0735: push    0
0x7E0737: push    ebp
0x7E0738: call    edx
0x7E073A: mov     eax, [esp+20h+a2]
0x7E073E: mov     byte ptr [eax], 0
0x7E0741: mov     eax, [ebx+0DCh]
0x7E0747: test    eax, eax
0x7E0749: jz      short loc_7E0754
0x7E074B: mov     esi, [esp+20h+a2]
0x7E074F: add     eax, 20h ; ' '
0x7E0752: jmp     short loc_7E0766
0x7E0754: xor     esi, esi
0x7E0756: mov     [esp+20h+a2], esi
0x7E075A: lea     eax, [esp+20h+a2]
0x7E075E: mov     [esp+20h+var_10], 1
0x7E0766: test    byte ptr [esp+20h+var_10], 1
0x7E076B: mov     edi, [eax]
0x7E076D: jz      short loc_7E078B
0x7E076F: test    esi, esi
0x7E0771: jz      short loc_7E078B
0x7E0773: lea     ecx, [esi+4]
0x7E0776: push    ecx; lpAddend
0x7E0777: call    dword ptr ds:0A2807Ch
0x7E077D: test    eax, eax
0x7E077F: jnz     short loc_7E078B
0x7E0781: mov     edx, [esi]
0x7E0783: mov     eax, [edx]
0x7E0785: push    1
0x7E0787: mov     ecx, esi
0x7E0789: call    eax
0x7E078B: mov     ecx, [edi+24h]
0x7E078E: mov     edx, [ecx]
0x7E0790: mov     eax, [edx+14h]
0x7E0793: call    eax
0x7E0795: push    0
0x7E0797: push    0
0x7E0799: mov     esi, eax
0x7E079B: mov     ecx, [esi]
0x7E079D: mov     eax, [ecx+4Ch]
0x7E07A0: lea     edx, [esp+28h+var_8]
0x7E07A4: push    edx
0x7E07A5: push    0
0x7E07A7: push    esi
0x7E07A8: mov     [esp+34h+a2], esi
0x7E07AC: call    eax
0x7E07AE: mov     edx, ds:0B45FC8h
0x7E07B4: mov     eax, [esp+20h+var_4]
0x7E07B8: xor     edi, edi
0x7E07BA: test    edx, edx
0x7E07BC: jle     short loc_7E082B
0x7E07BE: mov     edi, edi
0x7E07C0: xor     ecx, ecx
0x7E07C2: test    edx, edx
0x7E07C4: jle     short loc_7E0824
0x7E07C6: mov     ebx, [ebx+0FCh]
0x7E07CC: mov     esi, [ebx+edi*4]
0x7E07CF: nop
0x7E07D0: mov     ebp, edx
0x7E07D2: sub     ebp, edi
0x7E07D4: mov     ebp, [ebx+ebp*4]
0x7E07D7: sub     edx, ecx
0x7E07D9: fld     dword ptr [ebp+edx*4+0]
0x7E07DD: add     eax, 4
0x7E07E0: fstp    dword ptr [eax-4]
0x7E07E3: mov     edx, ds:0B45FC8h
0x7E07E9: mov     ebp, edx
0x7E07EB: sub     ebp, edi
0x7E07ED: mov     ebp, [ebx+ebp*4]
0x7E07F0: sub     edx, ecx
0x7E07F2: fld     dword ptr [ebp+edx*4+0]
0x7E07F6: add     eax, 4
0x7E07F9: fstp    dword ptr [eax-4]
0x7E07FC: add     eax, 4
0x7E07FF: fld     dword ptr [esi]
0x7E0801: add     ecx, 1
0x7E0804: fstp    dword ptr [eax-4]
0x7E0807: add     eax, 4
0x7E080A: fld     dword ptr [esi]
0x7E080C: add     esi, 4
0x7E080F: fstp    dword ptr [eax-4]
0x7E0812: mov     edx, ds:0B45FC8h
0x7E0818: cmp     ecx, edx
0x7E081A: jl      short loc_7E07D0
0x7E081C: mov     ebx, [esp+20h+var_C]
0x7E0820: mov     esi, [esp+20h+a2]
0x7E0824: add     edi, 1
0x7E0827: cmp     edi, edx
0x7E0829: jl      short loc_7E07C0
0x7E082B: mov     ecx, [esi]
0x7E082D: mov     edx, [ecx+50h]
0x7E0830: push    0
0x7E0832: push    esi
0x7E0833: call    edx
0x7E0835: pop     edi
0x7E0836: pop     esi
0x7E0837: pop     ebp
0x7E0838: pop     ebx
0x7E0839: add     esp, 10h
0x7E083C: retn    4
