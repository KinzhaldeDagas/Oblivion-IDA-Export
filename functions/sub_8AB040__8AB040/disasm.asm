0x8AB040: sub     esp, 30h
0x8AB043: push    ebx
0x8AB044: mov     ebx, [esp+34h+arg_0]
0x8AB048: test    ebx, ebx
0x8AB04A: jz      loc_8AB22E
0x8AB050: push    esi
0x8AB051: push    edi
0x8AB052: push    ebx
0x8AB053: call    sub_497420
0x8AB058: mov     edx, eax
0x8AB05A: add     esp, 4
0x8AB05D: test    edx, edx
0x8AB05F: jz      loc_8AB1DB
0x8AB065: mov     ecx, [edx+10h]
0x8AB068: xor     eax, eax
0x8AB06A: test    ecx, ecx
0x8AB06C: jz      short loc_8AB083
0x8AB06E: mov     ecx, [ecx+8]
0x8AB071: test    ecx, ecx
0x8AB073: jz      short loc_8AB081
0x8AB075: lea     eax, [ecx+14h]
0x8AB078: test    eax, eax
0x8AB07A: jz      short loc_8AB081
0x8AB07C: mov     eax, [eax+1Ch]
0x8AB07F: jmp     short loc_8AB083
0x8AB081: xor     eax, eax
0x8AB083: shr     eax, 8
0x8AB086: and     eax, 1Fh
0x8AB089: cmp     [esp+3Ch+arg_8], 0
0x8AB08E: jz      short loc_8AB0A4
0x8AB090: fld     dword ptr ds:0B2ED68h[eax*8]
0x8AB097: fstp    [esp+3Ch+arg_0]
0x8AB09B: fld     dword ptr ds:0B2ED6Ch[eax*8]
0x8AB0A2: jmp     short loc_8AB0B6
0x8AB0A4: fld     dword ptr ds:0B2EC68h[eax*8]
0x8AB0AB: fstp    [esp+3Ch+arg_0]
0x8AB0AF: fld     dword ptr ds:0B2EC6Ch[eax*8]
0x8AB0B6: fstp    [esp+3Ch+var_30]
0x8AB0BA: fld     dword ptr [edx+14h]
0x8AB0BD: fld     [esp+3Ch+arg_0]
0x8AB0C1: fcom    st(1)
0x8AB0C3: fnstsw  ax
0x8AB0C5: fstp    st(1)
0x8AB0C7: test    ah, 41h
0x8AB0CA: jnz     short loc_8AB0D1
0x8AB0CC: fstp    st
0x8AB0CE: fld     dword ptr [edx+14h]
0x8AB0D1: fstp    [esp+3Ch+var_2C]
0x8AB0D5: fld     dword ptr [edx+18h]
0x8AB0D8: fld     [esp+3Ch+var_30]
0x8AB0DC: fcom    st(1)
0x8AB0DE: fnstsw  ax
0x8AB0E0: fstp    st(1)
0x8AB0E2: test    ah, 41h
0x8AB0E5: jnz     short loc_8AB0EC
0x8AB0E7: fstp    st
0x8AB0E9: fld     dword ptr [edx+18h]
0x8AB0EC: push    offset dword_BA7F3C
0x8AB0F1: fstp    [esp+40h+var_28]
0x8AB0F5: mov     ecx, ebx
0x8AB0F7: call    sub_700010
0x8AB0FC: mov     esi, eax
0x8AB0FE: test    esi, esi
0x8AB100: jz      loc_8AB1DB
0x8AB106: mov     edi, 1
0x8AB10B: cmp     [esi+60h], edi
0x8AB10E: ja      loc_8AB1DB
0x8AB114: mov     ecx, esi
0x8AB116: call    sub_8AA7F0
0x8AB11B: cmp     dword ptr [esi+50h], 0
0x8AB11F: mov     [esi+60h], edi
0x8AB122: jnz     loc_8AB1DB
0x8AB128: push    ebp
0x8AB129: push    offset sub_8AA460
0x8AB12E: push    3
0x8AB130: push    0Ch
0x8AB132: lea     eax, [esp+4Ch+var_24]
0x8AB136: push    eax
0x8AB137: call    sub_401080
0x8AB13C: fld     [esp+40h+var_2C]
0x8AB140: fstp    [esp+40h+var_20]
0x8AB144: push    3
0x8AB146: fld     [esp+44h+var_28]
0x8AB14A: lea     ecx, [esi+40h]
0x8AB14D: fstp    [esp+44h+var_1C]
0x8AB151: fldz
0x8AB153: fstp    [esp+44h+var_24]
0x8AB157: fld     [esp+44h+arg_0]
0x8AB15B: fstp    [esp+44h+var_14]
0x8AB15F: fld     [esp+44h+var_30]
0x8AB163: fstp    [esp+44h+var_10]
0x8AB167: fld     dword ptr ds:0A57F50h
0x8AB16D: fstp    [esp+44h+var_18]
0x8AB171: fld1
0x8AB173: fst     [esp+44h+var_8]
0x8AB177: fstp    [esp+44h+var_4]
0x8AB17B: fld     dword ptr ds:0A3D65Ch
0x8AB181: fstp    [esp+44h+var_C]
0x8AB185: call    sub_8AA480
0x8AB18A: lea     edi, [esp+40h+var_24]
0x8AB18E: mov     ebp, 3
0x8AB193: push    edi
0x8AB194: mov     ecx, esi
0x8AB196: call    sub_8AB000
0x8AB19B: add     edi, 0Ch
0x8AB19E: sub     ebp, 1
0x8AB1A1: jnz     short loc_8AB193
0x8AB1A3: mov     cx, [esi+8]
0x8AB1A7: fldz
0x8AB1A9: mov     edx, [esi]
0x8AB1AB: fst     dword ptr [esi+14h]
0x8AB1AE: fld1
0x8AB1B0: mov     eax, [edx+4Ch]
0x8AB1B3: and     cx, 0FFF5h
0x8AB1B8: fst     dword ptr [esi+18h]
0x8AB1BB: or      cx, 1C5h
0x8AB1C0: fstp    dword ptr [esi+0Ch]
0x8AB1C3: mov     [esi+8], cx
0x8AB1C7: fstp    dword ptr [esi+10h]
0x8AB1CA: fld     dword ptr ds:0A7DEB4h
0x8AB1D0: fchs
0x8AB1D2: push    ecx
0x8AB1D3: mov     ecx, esi
0x8AB1D5: fstp    [esp+44h+var_44]
0x8AB1D8: call    eax
0x8AB1DA: pop     ebp
0x8AB1DB: mov     edx, [ebx]
0x8AB1DD: mov     eax, [edx+8]
0x8AB1E0: mov     ecx, ebx
0x8AB1E2: call    eax
0x8AB1E4: mov     edi, eax
0x8AB1E6: test    edi, edi
0x8AB1E8: jz      short loc_8AB22C
0x8AB1EA: movzx   eax, word ptr [edi+0B6h]
0x8AB1F1: xor     esi, esi
0x8AB1F3: test    eax, eax
0x8AB1F5: jbe     short loc_8AB22C
0x8AB1F7: cmp     eax, esi
0x8AB1F9: ja      short loc_8AB1FF
0x8AB1FB: xor     eax, eax
0x8AB1FD: jmp     short loc_8AB208
0x8AB1FF: mov     ecx, [edi+0B0h]
0x8AB205: mov     eax, [ecx+esi*4]
0x8AB208: mov     edx, dword ptr [esp+3Ch+arg_8]
0x8AB20C: fld     [esp+3Ch+arg_4]
0x8AB210: push    edx
0x8AB211: push    ecx
0x8AB212: fstp    [esp+44h+var_44]
0x8AB215: push    eax
0x8AB216: call    sub_8AB040
0x8AB21B: movzx   eax, word ptr [edi+0B6h]
0x8AB222: add     esi, 1
0x8AB225: add     esp, 0Ch
0x8AB228: cmp     eax, esi
0x8AB22A: ja      short loc_8AB1FF
0x8AB22C: pop     edi
0x8AB22D: pop     esi
0x8AB22E: pop     ebx
0x8AB22F: add     esp, 30h
0x8AB232: retn
