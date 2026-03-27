0x422B10: push    esi
0x422B11: mov     esi, ecx
0x422B13: mov     ecx, [esp+4+arg_8]
0x422B17: test    ecx, ecx
0x422B19: jz      short loc_422B29
0x422B1B: mov     eax, [ecx]
0x422B1D: mov     edx, [eax+190h]
0x422B23: call    edx
0x422B25: test    al, al
0x422B27: jnz     short loc_422B93
0x422B29: push    edi
0x422B2A: mov     edi, [esp+8+arg_0]
0x422B2E: test    edi, 100000h
0x422B34: jz      short loc_422B51
0x422B36: push    32h ; '2'; a2
0x422B38: mov     ecx, esi; this
0x422B3A: call    BaseExtraList_GetExtraData
0x422B3F: test    eax, eax
0x422B41: jz      short loc_422B48
0x422B43: mov     eax, [eax+0Ch]
0x422B46: jmp     short loc_422B4A
0x422B48: xor     eax, eax
0x422B4A: mov     ecx, eax
0x422B4C: call    sub_42B580
0x422B51: test    edi, 200000h
0x422B57: pop     edi
0x422B58: jz      short loc_422B93
0x422B5A: push    0; int
0x422B5C: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x422B61: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422B66: push    0; int
0x422B68: push    3Ah ; ':'; a2
0x422B6A: mov     ecx, esi; this
0x422B6C: call    BaseExtraList_GetExtraData
0x422B71: push    eax; void *
0x422B72: call    OblivionDynamicCast
0x422B77: add     esp, 14h
0x422B7A: test    eax, eax
0x422B7C: jz      short loc_422B93
0x422B7E: lea     ecx, [eax+0Ch]
0x422B81: mov     eax, [ecx]
0x422B83: mov     edx, [eax+8]
0x422B86: push    0
0x422B88: call    edx
0x422B8A: push    eax
0x422B8B: call    ActiveEffect_Base_PostLinkAEList
0x422B90: add     esp, 8
0x422B93: pop     esi
0x422B94: retn    0Ch
