0x4C8520: push    ecx
0x4C8521: mov     eax, [esp+4+arg_0]
0x4C8525: push    ebx
0x4C8526: push    esi
0x4C8527: push    0; int
0x4C8529: push    offset ??_R0?AVTESObjectLAND@@@8; struct TypeDescriptor *
0x4C852E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C8533: mov     esi, ecx
0x4C8535: push    0; int
0x4C8537: push    eax; void *
0x4C8538: mov     [esp+20h+var_4], esi
0x4C853C: call    OblivionDynamicCast
0x4C8541: mov     ebx, eax
0x4C8543: add     esp, 14h
0x4C8546: test    ebx, ebx
0x4C8548: jz      loc_4C8676
0x4C854E: test    byte ptr [ebx+1Ch], 8
0x4C8552: jz      short loc_4C855B
0x4C8554: mov     byte ptr [esp+0Ch+arg_0], 1
0x4C8559: jmp     short loc_4C8569
0x4C855B: push    0; char
0x4C855D: mov     ecx, ebx; int
0x4C855F: mov     byte ptr [esp+10h+arg_0], 0
0x4C8564: call    sub_4C79A0
0x4C8569: mov     ecx, [ebx+20h]
0x4C856C: push    ebp
0x4C856D: mov     [esi+20h], ecx
0x4C8570: push    edi
0x4C8571: mov     ecx, esi
0x4C8573: call    sub_4C64E0
0x4C8578: xor     ebp, ebp
0x4C857A: lea     ebx, [ebx+0]
0x4C8580: mov     ecx, [esi+24h]
0x4C8583: mov     edx, [ebx+24h]
0x4C8586: mov     eax, [edx+4]
0x4C8589: mov     edx, [ecx+4]
0x4C858C: mov     edi, [edx+ebp]
0x4C858F: mov     esi, [eax+ebp]
0x4C8592: mov     ecx, 363h
0x4C8597: rep movsd
0x4C8599: mov     eax, [ebx+24h]
0x4C859C: mov     edx, [eax+8]
0x4C859F: mov     eax, [esp+14h+var_4]
0x4C85A3: mov     ecx, [eax+24h]
0x4C85A6: mov     edi, [ecx+8]
0x4C85A9: mov     esi, [edx+ebp]
0x4C85AC: mov     edi, [edi+ebp]
0x4C85AF: mov     ecx, 363h
0x4C85B4: rep movsd
0x4C85B6: mov     edx, [ebx+24h]
0x4C85B9: mov     ecx, [edx+0Ch]
0x4C85BC: mov     edx, [ecx+ebp]
0x4C85BF: mov     eax, [eax+24h]
0x4C85C2: mov     ecx, [eax+0Ch]
0x4C85C5: push    1210h; Size
0x4C85CA: push    edx; Src
0x4C85CB: mov     edx, [ecx+ebp]
0x4C85CE: push    edx; Dst
0x4C85CF: call    _memcpy
0x4C85D4: mov     eax, [ebx+24h]
0x4C85D7: mov     edx, [eax+10h]
0x4C85DA: mov     eax, [esp+20h+var_4]
0x4C85DE: mov     ecx, [eax+24h]
0x4C85E1: mov     edi, [ecx+10h]
0x4C85E4: mov     esi, [edx+ebp]
0x4C85E7: mov     edi, [edi+ebp]
0x4C85EA: mov     ecx, 48h ; 'H'
0x4C85EF: rep movsd
0x4C85F1: movsb
0x4C85F2: mov     edx, [ebx+24h]
0x4C85F5: mov     ecx, [edx+ebp+40h]
0x4C85F9: mov     edx, [ecx]
0x4C85FB: mov     eax, [eax+24h]
0x4C85FE: mov     ecx, [eax+ebp+40h]
0x4C8602: push    2420h; Size
0x4C8607: push    edx; Src
0x4C8608: mov     edx, [ecx]
0x4C860A: push    edx; Dst
0x4C860B: call    _memcpy
0x4C8610: mov     eax, [esp+2Ch+var_4]
0x4C8614: mov     edx, [ebx+24h]
0x4C8617: mov     edi, [eax+24h]
0x4C861A: mov     esi, [edx+ebp+30h]
0x4C861E: mov     edi, [edi+ebp+30h]
0x4C8622: mov     ecx, 8
0x4C8627: rep movsd
0x4C8629: mov     ecx, [ebx+24h]
0x4C862C: mov     edx, [eax+24h]
0x4C862F: mov     eax, [ecx+ebp+20h]
0x4C8633: mov     esi, [esp+2Ch+var_4]
0x4C8637: mov     [edx+ebp+20h], eax
0x4C863B: add     ebp, 4
0x4C863E: add     esp, 18h
0x4C8641: cmp     ebp, 10h
0x4C8644: jl      loc_4C8580
0x4C864A: cmp     byte ptr [esp+14h+arg_0], 0
0x4C864F: mov     ecx, [ebx+1Ch]
0x4C8652: mov     [esi+1Ch], ecx
0x4C8655: mov     eax, [ebx+24h]
0x4C8658: mov     edx, [eax+18h]
0x4C865B: mov     ecx, [esi+24h]
0x4C865E: mov     [ecx+18h], edx
0x4C8661: mov     eax, [eax+1Ch]
0x4C8664: pop     edi
0x4C8665: mov     [ecx+1Ch], eax
0x4C8668: pop     ebp
0x4C8669: jnz     short loc_4C8672
0x4C866B: mov     ecx, ebx
0x4C866D: call    sub_4C6280
0x4C8672: or      dword ptr [esi+1Ch], 8
0x4C8676: pop     esi
0x4C8677: pop     ebx
0x4C8678: pop     ecx
0x4C8679: retn    4
