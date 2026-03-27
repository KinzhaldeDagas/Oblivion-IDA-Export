0x8097D0: push    ebx
0x8097D1: push    ebp
0x8097D2: push    esi
0x8097D3: push    edi
0x8097D4: mov     ebp, ecx
0x8097D6: call    sub_8025F0
0x8097DB: lea     edi, [ebp+9Ch]
0x8097E1: mov     ebx, 14h
0x8097E6: mov     esi, [edi]
0x8097E8: test    esi, esi
0x8097EA: jz      short loc_80980E
0x8097EC: lea     eax, [esi+4]
0x8097EF: push    eax; lpAddend
0x8097F0: call    dword ptr ds:0A2807Ch
0x8097F6: test    eax, eax
0x8097F8: jnz     short loc_809808
0x8097FA: test    esi, esi
0x8097FC: jz      short loc_809808
0x8097FE: mov     edx, [esi]
0x809800: mov     eax, [edx]
0x809802: push    1
0x809804: mov     ecx, esi
0x809806: call    eax
0x809808: mov     dword ptr [edi], 0
0x80980E: add     edi, 4
0x809811: sub     ebx, 1
0x809814: jnz     short loc_8097E6
0x809816: lea     edi, [ebp+0ECh]
0x80981C: mov     ebx, 0Ah
0x809821: mov     esi, [edi]
0x809823: test    esi, esi
0x809825: jz      short loc_809849
0x809827: lea     ecx, [esi+4]
0x80982A: push    ecx; lpAddend
0x80982B: call    dword ptr ds:0A2807Ch
0x809831: test    eax, eax
0x809833: jnz     short loc_809843
0x809835: test    esi, esi
0x809837: jz      short loc_809843
0x809839: mov     edx, [esi]
0x80983B: mov     eax, [edx]
0x80983D: push    1
0x80983F: mov     ecx, esi
0x809841: call    eax
0x809843: mov     dword ptr [edi], 0
0x809849: add     edi, 4
0x80984C: sub     ebx, 1
0x80984F: jnz     short loc_809821
0x809851: mov     esi, offset dword_B47718
0x809856: or      edi, 0FFFFFFFFh
0x809859: lea     esp, [esp+0]
0x809860: mov     ecx, [esi]
0x809862: test    ecx, ecx
0x809864: jz      short loc_809876
0x809866: add     [ecx+60h], edi
0x809869: jnz     short loc_809870
0x80986B: call    sub_7604D0
0x809870: mov     dword ptr [esi], 0
0x809876: add     esi, 4
0x809879: cmp     esi, offset unk_B47768
0x80987F: jl      short loc_809860
0x809881: pop     edi
0x809882: pop     esi
0x809883: pop     ebp
0x809884: mov     al, 1
0x809886: pop     ebx
0x809887: retn
