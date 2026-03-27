0x4BF0A0: push    ecx
0x4BF0A1: mov     eax, [ecx+24h]
0x4BF0A4: test    eax, eax
0x4BF0A6: jz      short loc_4BF0B9
0x4BF0A8: mov     eax, [eax+9Ch]
0x4BF0AE: shl     eax, 0Ch
0x4BF0B1: mov     [esp+4+var_4], eax
0x4BF0B4: fild    [esp+4+var_4]
0x4BF0B7: pop     ecx
0x4BF0B8: retn
0x4BF0B9: mov     ecx, [ecx+20h]; this
0x4BF0BC: test    ecx, ecx
0x4BF0BE: jz      short loc_4BF0D0
0x4BF0C0: call    TESObjectCELL_GetYCoordinate
0x4BF0C5: shl     eax, 0Ch
0x4BF0C8: mov     [esp+4+var_4], eax
0x4BF0CB: fild    [esp+4+var_4]
0x4BF0CE: pop     ecx
0x4BF0CF: retn
0x4BF0D0: xor     eax, eax
0x4BF0D2: shl     eax, 0Ch
0x4BF0D5: mov     [esp+4+var_4], eax
0x4BF0D8: fild    [esp+4+var_4]
0x4BF0DB: pop     ecx
0x4BF0DC: retn
