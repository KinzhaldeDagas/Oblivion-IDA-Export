0x4D73F0: push    ebp
0x4D73F1: push    esi
0x4D73F2: mov     esi, ecx
0x4D73F4: mov     eax, [esi]
0x4D73F6: mov     edx, [eax+170h]
0x4D73FC: or      ebp, 0FFFFFFFFh
0x4D73FF: call    edx
0x4D7401: cmp     byte ptr [eax+4], 20h ; ' '
0x4D7405: jnz     short loc_4D7468
0x4D7407: mov     eax, [esi]
0x4D7409: mov     edx, [eax+170h]
0x4D740F: push    ebx
0x4D7410: mov     ecx, esi
0x4D7412: call    edx
0x4D7414: mov     ebx, eax
0x4D7416: test    ebx, ebx
0x4D7418: jz      short loc_4D7462
0x4D741A: push    edi
0x4D741B: push    17h; a2
0x4D741D: lea     ecx, [esi+44h]; this
0x4D7420: call    BaseExtraList_GetExtraData
0x4D7425: mov     edi, eax
0x4D7427: xor     esi, esi
0x4D7429: lea     esp, [esp+0]
0x4D7430: push    esi
0x4D7431: mov     ecx, ebx
0x4D7433: call    sub_4AE5B0
0x4D7438: test    al, al
0x4D743A: jz      short loc_4D744C
0x4D743C: test    edi, edi
0x4D743E: jz      short loc_4D745B
0x4D7440: push    esi
0x4D7441: mov     ecx, edi
0x4D7443: call    sub_4295D0
0x4D7448: test    al, al
0x4D744A: jz      short loc_4D745B
0x4D744C: add     esi, 1
0x4D744F: cmp     esi, 1Eh
0x4D7452: jb      short loc_4D7430
0x4D7454: pop     edi
0x4D7455: pop     ebx
0x4D7456: pop     esi
0x4D7457: mov     eax, ebp
0x4D7459: pop     ebp
0x4D745A: retn
0x4D745B: pop     edi
0x4D745C: pop     ebx
0x4D745D: mov     eax, esi
0x4D745F: pop     esi
0x4D7460: pop     ebp
0x4D7461: retn
0x4D7462: pop     ebx
0x4D7463: pop     esi
0x4D7464: mov     eax, ebp
0x4D7466: pop     ebp
0x4D7467: retn
0x4D7468: pop     esi
0x4D7469: mov     eax, ebp
0x4D746B: pop     ebp
0x4D746C: retn
