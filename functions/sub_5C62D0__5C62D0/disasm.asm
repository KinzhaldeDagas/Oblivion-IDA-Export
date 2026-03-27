0x5C62D0: push    0FFFFFFFFh
0x5C62D2: push    offset SEH_5C62D0
0x5C62D7: mov     eax, large fs:0
0x5C62DD: push    eax
0x5C62DE: sub     esp, 8
0x5C62E1: push    esi
0x5C62E2: push    edi
0x5C62E3: mov     eax, ds:0B30AACh
0x5C62E8: xor     eax, esp
0x5C62EA: push    eax
0x5C62EB: lea     eax, [esp+20h+var_C]
0x5C62EF: mov     large fs:0, eax
0x5C62F5: mov     esi, ecx
0x5C62F7: mov     eax, ds:0B38FD8h
0x5C62FC: push    0FAEh
0x5C6301: sub     esp, 8
0x5C6304: mov     ecx, esp; this
0x5C6306: xor     edi, edi
0x5C6308: mov     [esp+2Ch+var_14], esp
0x5C630C: push    edi; a3
0x5C630D: push    eax; a2
0x5C630E: mov     [ecx], edi
0x5C6310: mov     [ecx+4], di
0x5C6314: mov     [ecx+6], di
0x5C6318: call    BSStringT_Set
0x5C631D: mov     eax, ds:0B38F88h
0x5C6322: sub     esp, 8
0x5C6325: mov     ecx, esp; this
0x5C6327: mov     [esp+34h+var_10], esp
0x5C632B: push    edi; a3
0x5C632C: push    eax; a2
0x5C632D: mov     [esp+3Ch+var_4], edi
0x5C6331: mov     [ecx], edi
0x5C6333: mov     [ecx+4], di
0x5C6337: mov     [ecx+6], di
0x5C633B: call    BSStringT_Set
0x5C6340: mov     ecx, esi
0x5C6342: mov     [esp+34h+var_4], 0FFFFFFFFh
0x5C634A: call    sub_5C3440
0x5C634F: mov     ecx, eax
0x5C6351: call    Tile_GetFloat
0x5C6356: fstp    [esp+20h+var_14]
0x5C635A: mov     ecx, ds:0B333C4h
0x5C6360: mov     eax, [ecx]
0x5C6362: mov     edx, [eax+170h]
0x5C6368: call    edx
0x5C636A: fld     [esp+20h+var_14]
0x5C636E: push    edi
0x5C636F: fstp    dword ptr [eax+1CCh]
0x5C6375: mov     ecx, esi
0x5C6377: call    sub_5C50A0
0x5C637C: mov     ecx, [esp+20h+var_C]
0x5C6380: mov     large fs:0, ecx
0x5C6387: pop     ecx
0x5C6388: pop     edi
0x5C6389: pop     esi
0x5C638A: add     esp, 14h
0x5C638D: retn
