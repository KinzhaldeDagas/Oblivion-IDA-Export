0x59E030: push    ecx
0x59E031: push    ebx
0x59E032: push    esi
0x59E033: push    8
0x59E035: push    5
0x59E037: mov     esi, ecx
0x59E039: call    TESTopic__GEtTopic
0x59E03E: mov     ecx, ds:0B333C4h
0x59E044: mov     edx, [esi+60h]
0x59E047: add     esp, 8
0x59E04A: push    0
0x59E04C: push    0
0x59E04E: push    ecx
0x59E04F: push    edx
0x59E050: mov     ecx, eax
0x59E052: call    TESTopic__CreateDialogueInfo
0x59E057: mov     ebx, eax
0x59E059: test    ebx, ebx
0x59E05B: jz      loc_59E0FB
0x59E061: mov     ecx, ebx
0x59E063: call    sub_6B7BA0
0x59E068: test    al, al
0x59E06A: jz      short loc_59E0EB
0x59E06C: push    edi
0x59E06D: mov     ecx, ebx
0x59E06F: call    sub_6B7C20
0x59E074: fldz
0x59E076: mov     ecx, [esi+60h]
0x59E079: mov     edi, eax
0x59E07B: mov     eax, [ecx]
0x59E07D: mov     edx, [eax+304h]
0x59E083: push    edi; a3
0x59E084: push    ecx
0x59E085: fstp    [esp+18h+a3]; a3
0x59E088: call    edx
0x59E08A: fld     dword ptr ds:0A379B4h
0x59E090: xor     eax, eax
0x59E092: fstp    dword ptr [esi+84h]
0x59E098: mov     dword ptr [esi+80h], 2
0x59E0A2: cmp     ds:0B13200h, al
0x59E0A8: push    ecx
0x59E0A9: mov     ecx, [esi+2Ch]; this
0x59E0AC: setnz   al
0x59E0AF: add     eax, 1
0x59E0B2: mov     [esp+14h+var_4], eax
0x59E0B6: fild    [esp+14h+var_4]
0x59E0BA: fstp    [esp+14h+var_14]; a3
0x59E0BD: push    0FA1h; a2
0x59E0C2: call    Tile_SetFloat
0x59E0C7: mov     ecx, [edi]
0x59E0C9: push    ecx
0x59E0CA: mov     ecx, [esi+2Ch]
0x59E0CD: push    0FDEh
0x59E0D2: call    Tile_SetString
0x59E0D7: fld1
0x59E0D9: push    ecx
0x59E0DA: fstp    [esp+14h+var_14]; a3
0x59E0DD: mov     ecx, [esi+3Ch]; this
0x59E0E0: push    0FA1h; a2
0x59E0E5: call    Tile_SetFloat
0x59E0EA: pop     edi
0x59E0EB: mov     ecx, ebx
0x59E0ED: call    sub_6B81D0
0x59E0F2: push    ebx
0x59E0F3: call    FormHeapFree
0x59E0F8: add     esp, 4
0x59E0FB: pop     esi
0x59E0FC: pop     ebx
0x59E0FD: pop     ecx
0x59E0FE: retn
