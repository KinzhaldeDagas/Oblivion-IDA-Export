0x429560: push    ebx
0x429561: mov     ebx, [esp+4+arg_0]
0x429565: push    esi
0x429566: push    edi
0x429567: push    0; int
0x429569: push    offset ??_R0?AVExtraRagDollData@@@8; struct TypeDescriptor *
0x42956E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429573: push    0; int
0x429575: push    ebx; void *
0x429576: mov     edi, ecx
0x429578: call    OblivionDynamicCast
0x42957D: mov     esi, eax
0x42957F: add     esp, 14h
0x429582: test    esi, esi
0x429584: jz      short loc_42959E
0x429586: push    ebx
0x429587: mov     ecx, edi
0x429589: call    BSExtraData_CompareTo
0x42958E: test    al, al
0x429590: jnz     short loc_42959E
0x429592: mov     ecx, [edi+0Ch]
0x429595: test    ecx, ecx
0x429597: jnz     short loc_4295A6
0x429599: cmp     [esi+0Ch], ecx
0x42959C: jz      short loc_4295BB
0x42959E: pop     edi
0x42959F: pop     esi
0x4295A0: mov     al, 1
0x4295A2: pop     ebx
0x4295A3: retn    4
0x4295A6: mov     eax, [esi+0Ch]
0x4295A9: push    eax
0x4295AA: call    sub_497270
0x4295AF: test    al, al
0x4295B1: jz      short loc_4295BB
0x4295B3: pop     edi
0x4295B4: pop     esi
0x4295B5: mov     al, 1
0x4295B7: pop     ebx
0x4295B8: retn    4
0x4295BB: pop     edi
0x4295BC: pop     esi
0x4295BD: xor     al, al
0x4295BF: pop     ebx
0x4295C0: retn    4
