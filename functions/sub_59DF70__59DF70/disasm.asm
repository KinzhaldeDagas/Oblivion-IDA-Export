0x59DF70: push    ecx
0x59DF71: push    esi
0x59DF72: push    edi
0x59DF73: push    26h ; '&'
0x59DF75: push    3
0x59DF77: mov     esi, ecx
0x59DF79: call    TESTopic__GEtTopic
0x59DF7E: mov     ecx, ds:0B333C4h
0x59DF84: mov     edx, [esi+60h]
0x59DF87: add     esp, 8
0x59DF8A: push    0
0x59DF8C: push    0
0x59DF8E: push    ecx
0x59DF8F: push    edx
0x59DF90: mov     ecx, eax
0x59DF92: call    TESTopic__CreateDialogueInfo
0x59DF97: mov     edi, eax
0x59DF99: test    edi, edi
0x59DF9B: jz      loc_59E028
0x59DFA1: mov     ecx, edi
0x59DFA3: call    sub_6B7BA0
0x59DFA8: test    al, al
0x59DFAA: jz      short loc_59E018
0x59DFAC: push    ebx
0x59DFAD: mov     ecx, edi
0x59DFAF: call    sub_6B7C20
0x59DFB4: fldz
0x59DFB6: mov     ecx, [esi+60h]
0x59DFB9: mov     ebx, eax
0x59DFBB: mov     eax, [ecx]
0x59DFBD: mov     edx, [eax+304h]
0x59DFC3: push    ebx; a3
0x59DFC4: push    ecx
0x59DFC5: fstp    [esp+18h+a2]
0x59DFC8: call    edx
0x59DFCA: fld     dword ptr ds:0A379B4h
0x59DFD0: xor     eax, eax
0x59DFD2: fstp    dword ptr [esi+84h]
0x59DFD8: mov     dword ptr [esi+80h], 2
0x59DFE2: cmp     ds:0B13200h, al
0x59DFE8: push    ecx
0x59DFE9: mov     ecx, [esi+2Ch]; this
0x59DFEC: setnz   al
0x59DFEF: add     eax, 1
0x59DFF2: mov     [esp+14h+var_4], eax
0x59DFF6: fild    [esp+14h+var_4]
0x59DFFA: fstp    [esp+14h+a3]; a3
0x59DFFD: push    0FA1h; a2
0x59E002: call    Tile_SetFloat
0x59E007: mov     ecx, [ebx]
0x59E009: push    ecx
0x59E00A: mov     ecx, [esi+2Ch]
0x59E00D: push    0FDEh
0x59E012: call    Tile_SetString
0x59E017: pop     ebx
0x59E018: mov     ecx, edi
0x59E01A: call    sub_6B81D0
0x59E01F: push    edi
0x59E020: call    FormHeapFree
0x59E025: add     esp, 4
0x59E028: pop     edi
0x59E029: pop     esi
0x59E02A: pop     ecx
0x59E02B: retn
