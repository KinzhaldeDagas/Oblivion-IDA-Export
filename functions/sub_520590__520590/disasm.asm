0x520590: push    ebx
0x520591: mov     ebx, [esp+4+arg_0]
0x520595: push    ebp
0x520596: mov     ebp, ecx
0x520598: xor     cl, cl
0x52059A: test    ebx, ebx
0x52059C: jz      short loc_520616
0x52059E: cmp     ebx, ebp
0x5205A0: jnz     short loc_5205A9
0x5205A2: pop     ebp
0x5205A3: mov     al, 1
0x5205A5: pop     ebx
0x5205A6: retn    4
0x5205A9: mov     eax, [ebp+3Ch]
0x5205AC: push    edi
0x5205AD: xor     edi, edi
0x5205AF: test    eax, eax
0x5205B1: jz      short loc_5205B6
0x5205B3: mov     edi, [eax+0Ch]
0x5205B6: push    esi
0x5205B7: xor     esi, esi
0x5205B9: test    edi, edi
0x5205BB: jbe     short loc_52060D
0x5205BD: lea     ecx, [ecx+0]
0x5205C0: mov     ecx, [ebp+3Ch]
0x5205C3: test    ecx, ecx
0x5205C5: jz      short loc_5205F4
0x5205C7: push    0; int
0x5205C9: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x5205CE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5205D3: push    0; int
0x5205D5: push    esi
0x5205D6: call    sub_494ED0
0x5205DB: push    eax; void *
0x5205DC: call    OblivionDynamicCast
0x5205E1: add     esp, 14h
0x5205E4: test    eax, eax
0x5205E6: jz      short loc_5205F4
0x5205E8: push    ebx
0x5205E9: mov     ecx, eax
0x5205EB: call    sub_520590
0x5205F0: test    al, al
0x5205F2: jnz     short loc_520604
0x5205F4: add     esi, 1
0x5205F7: cmp     esi, edi
0x5205F9: jb      short loc_5205C0
0x5205FB: pop     esi
0x5205FC: pop     edi
0x5205FD: pop     ebp
0x5205FE: xor     al, al
0x520600: pop     ebx
0x520601: retn    4
0x520604: pop     esi
0x520605: pop     edi
0x520606: pop     ebp
0x520607: mov     al, 1
0x520609: pop     ebx
0x52060A: retn    4
0x52060D: pop     esi
0x52060E: pop     edi
0x52060F: pop     ebp
0x520610: mov     al, cl
0x520612: pop     ebx
0x520613: retn    4
0x520616: pop     ebp
0x520617: mov     al, cl
0x520619: pop     ebx
0x52061A: retn    4
