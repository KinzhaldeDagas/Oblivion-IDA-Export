0x5206B0: push    ecx
0x5206B1: push    esi
0x5206B2: push    edi
0x5206B3: mov     edi, ecx
0x5206B5: mov     eax, [edi+8]
0x5206B8: xor     esi, esi
0x5206BA: shr     eax, 5
0x5206BD: test    al, 1
0x5206BF: mov     [esp+0Ch+var_4], esi
0x5206C3: jnz     loc_520766
0x5206C9: mov     ecx, [esp+0Ch+arg_0]
0x5206CD: push    ebp
0x5206CE: mov     ebp, [esp+10h+arg_4]
0x5206D2: push    ebp
0x5206D3: push    ecx
0x5206D4: lea     ecx, [edi+30h]
0x5206D7: call    sub_56A950
0x5206DC: test    al, al
0x5206DE: jz      loc_52076E
0x5206E4: test    byte ptr [edi+38h], 80h
0x5206E8: jnz     short loc_5206F5
0x5206EA: mov     ecx, edi
0x5206EC: call    sub_520220
0x5206F1: test    al, al
0x5206F3: jz      short loc_5206FB
0x5206F5: mov     [esp+10h+var_4], edi
0x5206F9: mov     esi, edi
0x5206FB: mov     eax, [edi+3Ch]
0x5206FE: test    eax, eax
0x520700: jz      short loc_52076E
0x520702: push    ebx
0x520703: mov     ebx, [eax+0Ch]
0x520706: test    ebx, ebx
0x520708: jz      short loc_52075C
0x52070A: xor     esi, esi
0x52070C: test    ebx, ebx
0x52070E: jbe     short loc_520750
0x520710: mov     ecx, [edi+3Ch]
0x520713: test    ecx, ecx
0x520715: jz      short loc_520749
0x520717: push    0; int
0x520719: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52071E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520723: push    0; int
0x520725: push    esi
0x520726: call    sub_494ED0
0x52072B: push    eax; void *
0x52072C: call    OblivionDynamicCast
0x520731: add     esp, 14h
0x520734: test    eax, eax
0x520736: jz      short loc_520749
0x520738: mov     edx, [esp+14h+arg_0]
0x52073C: push    ebp
0x52073D: push    edx
0x52073E: mov     ecx, eax
0x520740: call    sub_5206B0
0x520745: test    eax, eax
0x520747: jnz     short loc_520754
0x520749: add     esi, 1
0x52074C: cmp     esi, ebx
0x52074E: jb      short loc_520710
0x520750: mov     eax, [esp+14h+var_4]
0x520754: pop     ebx
0x520755: pop     ebp
0x520756: pop     edi
0x520757: pop     esi
0x520758: pop     ecx
0x520759: retn    8
0x52075C: pop     ebx
0x52075D: pop     ebp
0x52075E: pop     edi
0x52075F: mov     eax, esi
0x520761: pop     esi
0x520762: pop     ecx
0x520763: retn    8
0x520766: pop     edi
0x520767: mov     eax, esi
0x520769: pop     esi
0x52076A: pop     ecx
0x52076B: retn    8
0x52076E: pop     ebp
0x52076F: pop     edi
0x520770: mov     eax, esi
0x520772: pop     esi
0x520773: pop     ecx
0x520774: retn    8
