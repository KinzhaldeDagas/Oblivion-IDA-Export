0x59FF60: mov     eax, [esp+arg_0]
0x59FF64: cmp     eax, 1Fh
0x59FF67: push    esi
0x59FF68: mov     esi, ecx
0x59FF6A: jnz     short loc_59FF94
0x59FF6C: mov     eax, [esi+94h]
0x59FF72: mov     ecx, [eax+14h]
0x59FF75: push    1
0x59FF77: push    ecx
0x59FF78: call    sub_5D6390
0x59FF7D: mov     eax, [esp+0Ch+arg_4]
0x59FF81: mov     edx, [esi]
0x59FF83: mov     edx, [edx+14h]
0x59FF86: add     esp, 8
0x59FF89: push    eax
0x59FF8A: push    1Fh
0x59FF8C: mov     ecx, esi
0x59FF8E: call    edx
0x59FF90: pop     esi
0x59FF91: retn    8
0x59FF94: cmp     eax, 20h ; ' '
0x59FF97: jnz     short loc_59FFC1
0x59FF99: mov     eax, [esi+94h]
0x59FF9F: mov     ecx, [eax+14h]
0x59FFA2: push    0
0x59FFA4: push    ecx
0x59FFA5: call    sub_5D6390
0x59FFAA: mov     eax, [esp+0Ch+arg_4]
0x59FFAE: mov     edx, [esi]
0x59FFB0: mov     edx, [edx+14h]
0x59FFB3: add     esp, 8
0x59FFB6: push    eax
0x59FFB7: push    20h ; ' '
0x59FFB9: mov     ecx, esi
0x59FFBB: call    edx
0x59FFBD: pop     esi
0x59FFBE: retn    8
0x59FFC1: cmp     eax, 22h ; '"'
0x59FFC4: jnz     loc_5A0052
0x59FFCA: mov     ecx, [esi+40h]
0x59FFCD: push    0FAEh
0x59FFD2: call    Tile_GetFloat
0x59FFD7: fcomp   dword ptr ds:0A379B4h
0x59FFDD: fnstsw  ax
0x59FFDF: test    ah, 44h
0x59FFE2: jp      loc_5A024D
0x59FFE8: mov     eax, [esi+98h]
0x59FFEE: add     eax, 1
0x59FFF1: xor     ecx, ecx
0x59FFF3: cmp     eax, 5
0x59FFF6: setnl   cl
0x59FFF9: sub     ecx, 1
0x59FFFC: and     eax, ecx
0x59FFFE: push    eax
0x59FFFF: mov     [esi+98h], eax
0x5A0005: call    sub_429A30
0x5A000A: mov     ecx, [esi+94h]
0x5A0010: add     esp, 4
0x5A0013: push    eax
0x5A0014: call    EffectItem_SetMagnitude
0x5A0019: mov     edx, [esi+98h]
0x5A001F: mov     eax, ds:0B03E1Ch[edx*4]
0x5A0026: test    eax, eax
0x5A0028: jz      short loc_5A003E
0x5A002A: mov     eax, [eax]
0x5A002C: mov     ecx, [esi+40h]
0x5A002F: push    eax
0x5A0030: push    0FAFh
0x5A0035: call    Tile_SetString
0x5A003A: pop     esi
0x5A003B: retn    8
0x5A003E: mov     ecx, [esi+40h]
0x5A0041: xor     eax, eax
0x5A0043: push    eax
0x5A0044: push    0FAFh
0x5A0049: call    Tile_SetString
0x5A004E: pop     esi
0x5A004F: retn    8
0x5A0052: cmp     eax, 17h
0x5A0055: jnz     short loc_5A0089
0x5A0057: cmp     byte ptr [esi+71h], 0
0x5A005B: jz      short loc_5A0072
0x5A005D: mov     eax, [esi+94h]
0x5A0063: push    eax
0x5A0064: call    sub_59FE30
0x5A0069: call    sub_59FC60
0x5A006E: pop     esi
0x5A006F: retn    8
0x5A0072: mov     ecx, [esi+94h]
0x5A0078: push    ecx
0x5A0079: mov     ecx, esi
0x5A007B: call    sub_59FEC0
0x5A0080: call    sub_59FC60
0x5A0085: pop     esi
0x5A0086: retn    8
0x5A0089: cmp     eax, 15h
0x5A008C: push    edi; a3
0x5A008D: jnz     loc_5A012C
0x5A0093: mov     edi, [esi+94h]
0x5A0099: mov     eax, [edi+1Ch]
0x5A009C: xor     dl, dl
0x5A009E: test    dword ptr [eax+58h], 180000h
0x5A00A5: jz      short loc_5A0122
0x5A00A7: mov     eax, [esi+78h]
0x5A00AA: test    eax, eax
0x5A00AC: jz      short loc_5A00BA
0x5A00AE: mov     eax, [eax+74h]
0x5A00B1: test    eax, eax
0x5A00B3: jz      short loc_5A00CD
0x5A00B5: lea     ecx, [eax+28h]
0x5A00B8: jmp     short loc_5A00D0
0x5A00BA: mov     eax, [esi+7Ch]
0x5A00BD: test    eax, eax
0x5A00BF: jz      short loc_5A00CD
0x5A00C1: mov     eax, [eax+28h]
0x5A00C4: test    eax, eax
0x5A00C6: jz      short loc_5A00CD
0x5A00C8: lea     ecx, [eax+28h]
0x5A00CB: jmp     short loc_5A00D0
0x5A00CD: xor     ecx, ecx
0x5A00CF: nop
0x5A00D0: test    ecx, ecx
0x5A00D2: jz      short loc_5A00FB
0x5A00D4: mov     eax, [ecx]
0x5A00D6: test    eax, eax
0x5A00D8: jz      short loc_5A00FB
0x5A00DA: cmp     edi, eax
0x5A00DC: jz      short loc_5A00F0
0x5A00DE: mov     edx, [edi]
0x5A00E0: cmp     edx, [eax]
0x5A00E2: jnz     short loc_5A00F0
0x5A00E4: mov     edx, [edi+14h]
0x5A00E7: cmp     edx, [eax+14h]
0x5A00EA: jnz     short loc_5A00F0
0x5A00EC: mov     dl, 1
0x5A00EE: jmp     short loc_5A00F2
0x5A00F0: xor     dl, dl
0x5A00F2: test    dl, dl
0x5A00F4: mov     ecx, [ecx+4]
0x5A00F7: jz      short loc_5A00D0
0x5A00F9: jmp     short loc_5A00FF
0x5A00FB: test    dl, dl
0x5A00FD: jz      short loc_5A0122
0x5A00FF: push    edi
0x5A0100: mov     ecx, esi
0x5A0102: call    sub_59FE30
0x5A0107: mov     eax, ds:0B38CF0h
0x5A010C: mov     ecx, ds:0B389F8h
0x5A0112: push    0
0x5A0114: push    eax
0x5A0115: push    1
0x5A0117: push    0
0x5A0119: push    ecx
0x5A011A: call    ShowUIMessageBox
0x5A011F: add     esp, 14h
0x5A0122: call    sub_59FC60
0x5A0127: pop     edi
0x5A0128: pop     esi
0x5A0129: retn    8
0x5A012C: cmp     eax, 16h
0x5A012F: jnz     short loc_5A0147
0x5A0131: mov     edx, [esi+94h]
0x5A0137: push    edx
0x5A0138: call    sub_59FE30
0x5A013D: call    sub_59FC60
0x5A0142: pop     edi
0x5A0143: pop     esi
0x5A0144: retn    8
0x5A0147: cmp     eax, 21h ; '!'
0x5A014A: push    ebx; a3
0x5A014B: jz      loc_5A01F1
0x5A0151: cmp     eax, 27h ; '''
0x5A0154: jnz     loc_5A024B
0x5A015A: push    3; int
0x5A015C: mov     edi, 2
0x5A0161: call    sub_57DE50
0x5A0166: add     esp, 4
0x5A0169: lea     esp, [esp+0]
0x5A0170: mov     ecx, [esi+94h]
0x5A0176: mov     eax, [ecx+10h]
0x5A0179: add     eax, edi
0x5A017B: cdq
0x5A017C: mov     ebx, 3
0x5A0181: idiv    ebx
0x5A0183: push    edx
0x5A0184: call    EffectItem_SetRange
0x5A0189: sub     edi, 1
0x5A018C: test    al, al
0x5A018E: jz      short loc_5A0170
0x5A0190: mov     eax, [esi+94h]
0x5A0196: mov     ecx, [eax+10h]
0x5A0199: push    ecx
0x5A019A: call    Magic_GetRangeName
0x5A019F: mov     ecx, [esi+3Ch]
0x5A01A2: add     esp, 4
0x5A01A5: push    eax
0x5A01A6: push    0FAEh
0x5A01AB: call    Tile_SetString
0x5A01B0: mov     ecx, [esi+3Ch]
0x5A01B3: call    sub_58E870
0x5A01B8: mov     eax, [esi+94h]
0x5A01BE: mov     edx, [eax+1Ch]
0x5A01C1: mov     ecx, [edx+58h]
0x5A01C4: shr     ecx, 9
0x5A01C7: test    cl, 1
0x5A01CA: jnz     short loc_5A0225
0x5A01CC: cmp     dword ptr [eax+10h], 0
0x5A01D0: jz      short loc_5A0225
0x5A01D2: fld     dword ptr ds:0A379B4h
0x5A01D8: push    ecx
0x5A01D9: mov     ecx, [esi+50h]; this
0x5A01DC: fstp    [esp+10h+a2]; a3
0x5A01DF: push    0FC1h; a2
0x5A01E4: call    Tile_SetFloat
0x5A01E9: fld     dword ptr ds:0A379B4h
0x5A01EF: jmp     short loc_5A023A
0x5A01F1: mov     edi, 1
0x5A01F6: jmp     short loc_5A0200
0x5A01F8: align 10h
0x5A0200: mov     ecx, [esi+94h]
0x5A0206: mov     eax, [ecx+10h]
0x5A0209: add     eax, edi
0x5A020B: cdq
0x5A020C: mov     ebx, 3
0x5A0211: idiv    ebx
0x5A0213: push    edx
0x5A0214: call    EffectItem_SetRange
0x5A0219: add     edi, 1
0x5A021C: test    al, al
0x5A021E: jz      short loc_5A0200
0x5A0220: jmp     loc_5A0190
0x5A0225: fld1
0x5A0227: push    ecx
0x5A0228: mov     ecx, [esi+50h]; this
0x5A022B: fstp    [esp+10h+a2]; a3
0x5A022E: push    0FC1h; a2
0x5A0233: call    Tile_SetFloat
0x5A0238: fld1
0x5A023A: push    ecx
0x5A023B: mov     ecx, [esi+50h]; this
0x5A023E: fstp    [esp+10h+a2]; a3
0x5A0241: push    0FA1h; a2
0x5A0246: call    Tile_SetFloat
0x5A024B: pop     ebx
0x5A024C: pop     edi
0x5A024D: pop     esi
0x5A024E: retn    8
