0x8DE950: sub     esp, 30h
0x8DE953: push    esi
0x8DE954: mov     esi, ecx
0x8DE956: mov     ecx, [esi+8]
0x8DE959: xor     eax, eax
0x8DE95B: cmp     ecx, eax
0x8DE95D: jz      loc_8DEBD6
0x8DE963: mov     edx, [ecx+8Ch]
0x8DE969: push    edi
0x8DE96A: add     edx, [ecx+88h]
0x8DE970: jz      short loc_8DE995
0x8DE972: mov     eax, [esp+38h+arg_0]
0x8DE976: lea     edx, [esp+38h+var_2C]
0x8DE97A: push    edx
0x8DE97B: mov     byte ptr [esp+3Ch+var_2C], 11h
0x8DE980: mov     [esp+3Ch+var_28], esi
0x8DE984: mov     [esp+3Ch+var_24], eax
0x8DE988: call    sub_898820
0x8DE98D: pop     edi
0x8DE98E: pop     esi
0x8DE98F: add     esp, 30h
0x8DE992: retn    4
0x8DE995: mov     edi, [ecx+88h]
0x8DE99B: mov     edx, ds:0BA9DE4h
0x8DE9A1: inc     edi
0x8DE9A2: mov     [ecx+88h], edi
0x8DE9A8: mov     ecx, [esi+8]
0x8DE9AB: mov     edi, [ecx+2A8h]
0x8DE9B1: mov     ecx, large fs:2Ch
0x8DE9B8: push    ebx
0x8DE9B9: mov     ebx, [ecx+edx*4]
0x8DE9BC: mov     ecx, [ebx+19Ch]
0x8DE9C2: cmp     ecx, eax
0x8DE9C4: mov     [esp+3Ch+var_10], eax
0x8DE9C8: mov     [esp+3Ch+var_C], eax
0x8DE9CC: mov     [esp+3Ch+var_8], 80000000h
0x8DE9D4: jnz     short loc_8DE9DC
0x8DE9D6: mov     ecx, ds:0BA7D9Ch
0x8DE9DC: mov     edx, [ecx+20h]
0x8DE9DF: lea     eax, ds:10h[edi*8]
0x8DE9E6: and     eax, 0FFFFFFF0h
0x8DE9E9: push    ebp
0x8DE9EA: lea     ebp, [edx+eax]
0x8DE9ED: cmp     ebp, [ecx+2Ch]
0x8DE9F0: ja      short loc_8DE9F9
0x8DE9F2: mov     [ecx+20h], ebp
0x8DE9F5: mov     eax, edx
0x8DE9F7: jmp     short loc_8DE9FF
0x8DE9F9: mov     edx, [ecx]
0x8DE9FB: push    eax
0x8DE9FC: call    dword ptr [edx+0Ch]
0x8DE9FF: mov     ecx, [ebx+19Ch]
0x8DEA05: mov     [esp+40h+var_10], eax
0x8DEA09: or      edi, 80000000h
0x8DEA0F: mov     [esp+40h+var_4], eax
0x8DEA13: mov     eax, [esi+8]
0x8DEA16: mov     [esp+40h+var_8], edi
0x8DEA1A: mov     edi, [eax+2A8h]
0x8DEA20: xor     eax, eax
0x8DEA22: cmp     ecx, eax
0x8DEA24: mov     [esp+40h+var_20], eax
0x8DEA28: mov     [esp+40h+var_1C], eax
0x8DEA2C: mov     [esp+40h+var_18], 80000000h
0x8DEA34: jnz     short loc_8DEA3C
0x8DEA36: mov     ecx, ds:0BA7D9Ch
0x8DEA3C: mov     edx, [ecx+20h]
0x8DEA3F: lea     eax, ds:10h[edi*8]
0x8DEA46: and     eax, 0FFFFFFF0h
0x8DEA49: lea     ebp, [edx+eax]
0x8DEA4C: cmp     ebp, [ecx+2Ch]
0x8DEA4F: ja      short loc_8DEA58
0x8DEA51: mov     [ecx+20h], ebp
0x8DEA54: mov     eax, edx
0x8DEA56: jmp     short loc_8DEA5E
0x8DEA58: mov     edx, [ecx]
0x8DEA5A: push    eax
0x8DEA5B: call    dword ptr [edx+0Ch]
0x8DEA5E: mov     ecx, [esi+8]
0x8DEA61: mov     [esp+40h+var_20], eax
0x8DEA65: mov     [esp+40h+var_14], eax
0x8DEA69: lea     eax, [esi+28h]
0x8DEA6C: or      edi, 80000000h
0x8DEA72: mov     [esp+40h+var_18], edi
0x8DEA76: mov     [esp+40h+var_30], eax
0x8DEA7A: mov     ecx, [ecx+8]
0x8DEA7D: mov     edx, [ecx]
0x8DEA7F: call    dword ptr [edx+24h]
0x8DEA82: mov     eax, [esi+8]
0x8DEA85: mov     ecx, [eax+64h]
0x8DEA88: mov     edx, [ecx]
0x8DEA8A: lea     eax, [esp+40h+var_20]
0x8DEA8E: push    eax
0x8DEA8F: lea     eax, [esp+44h+var_10]
0x8DEA93: push    eax
0x8DEA94: mov     eax, [esp+48h+arg_0]
0x8DEA98: push    1
0x8DEA9A: push    eax
0x8DEA9B: lea     eax, [esp+50h+var_30]
0x8DEA9F: push    eax
0x8DEAA0: call    dword ptr [edx+18h]
0x8DEAA3: mov     eax, [esp+40h+var_C]
0x8DEAA7: test    eax, eax
0x8DEAA9: pop     ebp
0x8DEAAA: jnz     short loc_8DEAB4
0x8DEAAC: mov     eax, [esp+3Ch+var_1C]
0x8DEAB0: test    eax, eax
0x8DEAB2: jz      short loc_8DEB07
0x8DEAB4: lea     ecx, [esp+3Ch+var_20]
0x8DEAB8: push    ecx
0x8DEAB9: lea     edx, [esp+40h+var_10]
0x8DEABD: push    edx
0x8DEABE: call    sub_8D84F0
0x8DEAC3: mov     eax, [esp+44h+var_1C]
0x8DEAC7: mov     ecx, [esp+44h+var_20]
0x8DEACB: mov     edx, [esi+8]
0x8DEACE: add     esp, 8
0x8DEAD1: push    eax
0x8DEAD2: push    ecx
0x8DEAD3: mov     ecx, [edx+68h]
0x8DEAD6: call    sub_8D83E0
0x8DEADB: mov     ecx, [esi+8]
0x8DEADE: mov     eax, [ecx+78h]
0x8DEAE1: test    eax, eax
0x8DEAE3: jz      short loc_8DEAEA
0x8DEAE5: add     eax, 8
0x8DEAE8: jmp     short loc_8DEAEC
0x8DEAEA: xor     eax, eax
0x8DEAEC: mov     edx, [esp+3Ch+var_10]
0x8DEAF0: mov     ecx, [ecx+68h]
0x8DEAF3: push    eax
0x8DEAF4: mov     eax, [esp+40h+var_C]
0x8DEAF8: push    eax
0x8DEAF9: push    edx
0x8DEAFA: call    sub_8D8370
0x8DEAFF: lea     eax, [esi+50h]
0x8DEB02: call    sub_8DE4E0
0x8DEB07: mov     eax, [esi+8]
0x8DEB0A: mov     ecx, [eax+8]
0x8DEB0D: mov     edx, [ecx]
0x8DEB0F: call    dword ptr [edx+28h]
0x8DEB12: mov     ecx, [esi+8]
0x8DEB15: dec     dword ptr [ecx+88h]
0x8DEB1B: jnz     short loc_8DEB36
0x8DEB1D: mov     eax, [ecx+84h]
0x8DEB23: test    eax, eax
0x8DEB25: jz      short loc_8DEB36
0x8DEB27: mov     al, [ecx+90h]
0x8DEB2D: test    al, al
0x8DEB2F: jnz     short loc_8DEB36
0x8DEB31: call    sub_899210
0x8DEB36: mov     ecx, [ebx+19Ch]
0x8DEB3C: test    ecx, ecx
0x8DEB3E: mov     eax, [esp+3Ch+var_14]
0x8DEB42: jnz     short loc_8DEB4A
0x8DEB44: mov     ecx, ds:0BA7D9Ch
0x8DEB4A: cmp     eax, [ecx+28h]
0x8DEB4D: mov     [ecx+20h], eax
0x8DEB50: jnz     short loc_8DEB58
0x8DEB52: mov     edx, [ecx]
0x8DEB54: push    eax
0x8DEB55: call    dword ptr [edx+10h]
0x8DEB58: mov     eax, [esp+3Ch+var_18]
0x8DEB5C: test    eax, eax
0x8DEB5E: js      short loc_8DEB85
0x8DEB60: mov     ecx, [ebx+19Ch]
0x8DEB66: test    ecx, ecx
0x8DEB68: jnz     short loc_8DEB70
0x8DEB6A: mov     ecx, ds:0BA7D9Ch
0x8DEB70: and     eax, 3FFFFFFFh
0x8DEB75: push    14h
0x8DEB77: shl     eax, 3
0x8DEB7A: push    eax
0x8DEB7B: mov     eax, [esp+44h+var_20]
0x8DEB7F: push    eax
0x8DEB80: call    sub_8A75D0
0x8DEB85: mov     ecx, [ebx+19Ch]
0x8DEB8B: test    ecx, ecx
0x8DEB8D: mov     eax, [esp+3Ch+var_4]
0x8DEB91: jnz     short loc_8DEB99
0x8DEB93: mov     ecx, ds:0BA7D9Ch
0x8DEB99: cmp     eax, [ecx+28h]
0x8DEB9C: mov     [ecx+20h], eax
0x8DEB9F: jnz     short loc_8DEBA7
0x8DEBA1: mov     edx, [ecx]
0x8DEBA3: push    eax
0x8DEBA4: call    dword ptr [edx+10h]
0x8DEBA7: mov     eax, [esp+3Ch+var_8]
0x8DEBAB: test    eax, eax
0x8DEBAD: js      short loc_8DEBD4
0x8DEBAF: mov     ecx, [ebx+19Ch]
0x8DEBB5: test    ecx, ecx
0x8DEBB7: jnz     short loc_8DEBBF
0x8DEBB9: mov     ecx, ds:0BA7D9Ch
0x8DEBBF: and     eax, 3FFFFFFFh
0x8DEBC4: push    14h
0x8DEBC6: shl     eax, 3
0x8DEBC9: push    eax
0x8DEBCA: mov     eax, [esp+44h+var_10]
0x8DEBCE: push    eax
0x8DEBCF: call    sub_8A75D0
0x8DEBD4: pop     ebx
0x8DEBD5: pop     edi
0x8DEBD6: pop     esi
0x8DEBD7: add     esp, 30h
0x8DEBDA: retn    4
