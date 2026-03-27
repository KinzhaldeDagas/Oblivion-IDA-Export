0x5204F0: push    ebx
0x5204F1: mov     ebx, ecx
0x5204F3: mov     ecx, [ebx+3Ch]
0x5204F6: test    ecx, ecx
0x5204F8: jz      loc_52058A
0x5204FE: push    esi
0x5204FF: mov     esi, [esp+8+arg_0]
0x520503: push    edi
0x520504: push    0; int
0x520506: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52050B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520510: push    0; int
0x520512: lea     eax, [esi+1]
0x520515: push    eax
0x520516: call    sub_494ED0
0x52051B: push    eax; void *
0x52051C: call    OblivionDynamicCast
0x520521: mov     ecx, [ebx+3Ch]
0x520524: mov     edi, eax
0x520526: add     esp, 14h
0x520529: xor     eax, eax
0x52052B: test    ecx, ecx
0x52052D: jz      short loc_52054D
0x52052F: push    eax; int
0x520530: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520535: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52053A: push    eax; int
0x52053B: lea     edx, [esi-1]
0x52053E: push    edx
0x52053F: call    sub_494ED0
0x520544: push    eax; void *
0x520545: call    OblivionDynamicCast
0x52054A: add     esp, 14h
0x52054D: test    edi, edi
0x52054F: jz      short loc_520554
0x520551: mov     [edi+44h], eax
0x520554: mov     eax, [ebx+3Ch]
0x520557: cmp     esi, [eax+0Ch]
0x52055A: jnb     short loc_520580
0x52055C: mov     ecx, [eax+4]
0x52055F: mov     edx, [ecx+esi*4]
0x520562: test    edx, edx
0x520564: lea     ecx, [ecx+esi*4]
0x520567: mov     dword ptr [ecx], 0
0x52056D: jz      short loc_520573
0x52056F: add     dword ptr [eax+10h], 0FFFFFFFFh
0x520573: mov     ecx, [eax+0Ch]
0x520576: add     ecx, 0FFFFFFFFh
0x520579: cmp     esi, ecx
0x52057B: jnz     short loc_520580
0x52057D: mov     [eax+0Ch], ecx
0x520580: mov     ecx, [ebx+3Ch]
0x520583: call    sub_5A56F0
0x520588: pop     edi
0x520589: pop     esi
0x52058A: pop     ebx
0x52058B: retn    4
