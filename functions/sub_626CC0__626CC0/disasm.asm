0x626CC0: push    ecx
0x626CC1: push    esi
0x626CC2: mov     esi, [esp+8+arg_0]
0x626CC6: test    esi, esi
0x626CC8: jz      loc_626DCE
0x626CCE: mov     eax, [esi+8]
0x626CD1: mov     ecx, eax
0x626CD3: shr     ecx, 5
0x626CD6: test    cl, 1
0x626CD9: jnz     loc_626DCE
0x626CDF: mov     edx, eax
0x626CE1: shr     edx, 0Eh
0x626CE4: test    dl, 1
0x626CE7: jnz     loc_626DCE
0x626CED: shr     eax, 0Bh
0x626CF0: test    al, 1
0x626CF2: jnz     loc_626DCE
0x626CF8: push    ebx
0x626CF9: mov     ebx, [esp+0Ch+arg_4]
0x626CFD: test    ebx, ebx
0x626CFF: mov     [esp+0Ch+var_4], 0
0x626D07: jz      loc_626DC8
0x626D0D: mov     eax, [esi]
0x626D0F: mov     edx, [eax+170h]
0x626D15: mov     ecx, esi
0x626D17: call    edx
0x626D19: cmp     eax, ds:0B35EBCh
0x626D1F: jz      loc_626DC8
0x626D25: mov     ecx, ds:0B3B924h; this
0x626D2B: test    ecx, ecx
0x626D2D: jz      short loc_626D40
0x626D2F: call    sub_4D8B90
0x626D34: test    al, al
0x626D36: mov     [esp+0Ch+arg_0], 80h ; '€'
0x626D3E: jnz     short loc_626D48
0x626D40: mov     [esp+0Ch+arg_0], 320h
0x626D48: mov     ecx, esi; this
0x626D4A: call    GetTeleportExtraData
0x626D4F: test    eax, eax
0x626D51: jz      short loc_626DC8
0x626D53: mov     eax, ds:0B3B924h
0x626D58: push    0
0x626D5A: push    eax
0x626D5B: mov     ecx, esi
0x626D5D: call    TesObjectREF_GetDistance
0x626D62: fild    [esp+0Ch+arg_0]
0x626D66: fcompp
0x626D68: fnstsw  ax
0x626D6A: test    ah, 5
0x626D6D: jp      short loc_626DC8
0x626D6F: push    edi
0x626D70: mov     ecx, esi
0x626D72: call    sub_4D7740
0x626D77: mov     edi, eax
0x626D79: test    edi, edi
0x626D7B: jz      short loc_626DBB
0x626D7D: mov     ecx, edi
0x626D7F: call    sub_428E70
0x626D84: test    al, al
0x626D86: jz      short loc_626DBB
0x626D88: push    1
0x626D8A: push    ebx
0x626D8B: mov     ecx, esi
0x626D8D: call    TESOBjectREFR_IsOwnedBy
0x626D92: test    al, al
0x626D94: jnz     short loc_626DBB
0x626D96: mov     eax, [edi+4]
0x626D99: test    eax, eax
0x626D9B: jz      short loc_626DB4
0x626D9D: lea     ecx, [esp+10h+var_4]
0x626DA1: push    ecx
0x626DA2: push    0
0x626DA4: push    1
0x626DA6: push    0
0x626DA8: push    eax
0x626DA9: mov     ecx, ebx
0x626DAB: call    sub_5E4A00
0x626DB0: test    al, al
0x626DB2: jnz     short loc_626DBB
0x626DB4: pop     edi
0x626DB5: pop     ebx
0x626DB6: xor     al, al
0x626DB8: pop     esi
0x626DB9: pop     ecx
0x626DBA: retn
0x626DBB: pop     edi
0x626DBC: pop     ebx
0x626DBD: mov     ds:0B3B91Ch, esi
0x626DC3: mov     al, 1
0x626DC5: pop     esi
0x626DC6: pop     ecx
0x626DC7: retn
0x626DC8: pop     ebx
0x626DC9: xor     al, al
0x626DCB: pop     esi
0x626DCC: pop     ecx
0x626DCD: retn
0x626DCE: xor     al, al
0x626DD0: pop     esi
0x626DD1: pop     ecx
0x626DD2: retn
