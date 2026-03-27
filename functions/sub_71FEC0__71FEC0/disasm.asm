0x71FEC0: push    0FFFFFFFFh
0x71FEC2: push    offset SEH_71FEC0
0x71FEC7: mov     eax, large fs:0
0x71FECD: push    eax
0x71FECE: sub     esp, 10h
0x71FED1: push    ebx
0x71FED2: push    ebp
0x71FED3: push    esi
0x71FED4: push    edi
0x71FED5: mov     eax, ds:0B30AACh
0x71FEDA: xor     eax, esp
0x71FEDC: push    eax
0x71FEDD: lea     eax, [esp+30h+var_C]
0x71FEE1: mov     large fs:0, eax
0x71FEE7: mov     ebp, ecx
0x71FEE9: mov     ebx, [esp+30h+arg_0]
0x71FEED: push    ebx
0x71FEEE: call    sub_732E70
0x71FEF3: mov     eax, [ebx+21Ch]
0x71FEF9: mov     edx, [eax+4]
0x71FEFC: push    1
0x71FEFE: lea     ecx, [esp+34h+var_18]
0x71FF02: push    ecx
0x71FF03: push    4
0x71FF05: lea     esi, [ebp+44h]
0x71FF08: push    esi
0x71FF09: push    eax
0x71FF0A: mov     [esp+44h+var_18], 4
0x71FF12: call    edx
0x71FF14: mov     eax, [ebx+0D8h]
0x71FF1A: add     esp, 14h
0x71FF1D: cmp     eax, 0A000111h
0x71FF22: jb      loc_720008
0x71FF28: mov     eax, [ebx+21Ch]
0x71FF2E: push    1
0x71FF30: lea     ecx, [esp+34h+var_18]
0x71FF34: push    ecx
0x71FF35: push    1
0x71FF37: lea     edx, [esp+3Ch+arg_0]
0x71FF3B: push    edx
0x71FF3C: push    eax
0x71FF3D: mov     eax, [eax+4]
0x71FF40: mov     [esp+44h+var_18], 1
0x71FF48: call    eax
0x71FF4A: add     esp, 14h
0x71FF4D: cmp     byte ptr [esp+30h+arg_0], 0
0x71FF52: jz      short loc_71FF98
0x71FF54: mov     eax, [esi]
0x71FF56: test    eax, eax
0x71FF58: jbe     short loc_71FF98
0x71FF5A: xor     ecx, ecx
0x71FF5C: mov     edx, 2
0x71FF61: mul     edx
0x71FF63: seto    cl
0x71FF66: neg     ecx
0x71FF68: or      ecx, eax
0x71FF6A: push    ecx; Size
0x71FF6B: call    FormHeapAlloc
0x71FF70: mov     esi, [esi]
0x71FF72: lea     edx, [esi+esi]
0x71FF75: push    1
0x71FF77: lea     esi, [esp+38h+var_18]
0x71FF7B: push    esi
0x71FF7C: push    edx
0x71FF7D: mov     [ebp+48h], eax
0x71FF80: mov     ecx, [ebx+21Ch]
0x71FF86: push    eax
0x71FF87: mov     eax, [ecx+4]
0x71FF8A: push    ecx
0x71FF8B: mov     [esp+48h+var_18], 2
0x71FF93: call    eax
0x71FF95: add     esp, 18h
0x71FF98: mov     eax, [ebx+21Ch]
0x71FF9E: mov     edx, [eax+4]
0x71FFA1: push    1
0x71FFA3: lea     ecx, [esp+34h+var_18]
0x71FFA7: push    ecx
0x71FFA8: push    2
0x71FFAA: lea     esi, [ebp+50h]
0x71FFAD: push    esi
0x71FFAE: push    eax
0x71FFAF: mov     [esp+44h+var_18], 2
0x71FFB7: call    edx
0x71FFB9: movzx   eax, word ptr [esi]
0x71FFBC: add     esp, 14h
0x71FFBF: test    ax, ax
0x71FFC2: jz      loc_720192
0x71FFC8: movzx   edi, ax
0x71FFCB: xor     ecx, ecx
0x71FFCD: mov     eax, edi
0x71FFCF: mov     edx, 8
0x71FFD4: mul     edx
0x71FFD6: seto    cl
0x71FFD9: neg     ecx
0x71FFDB: or      ecx, eax
0x71FFDD: push    ecx; Size
0x71FFDE: call    FormHeapAlloc
0x71FFE3: mov     esi, eax
0x71FFE5: add     esp, 4
0x71FFE8: mov     [esp+30h+var_10], esi
0x71FFEC: test    esi, esi
0x71FFEE: mov     [esp+30h+var_4], 0
0x71FFF6: jz      short loc_720012
0x71FFF8: push    offset sub_71FAB0
0x71FFFD: push    edi
0x71FFFE: push    8
0x720000: push    esi
0x720001: call    sub_401080
0x720006: jmp     short loc_720014
0x720008: mov     byte ptr [esp+30h+arg_0], 1
0x72000D: jmp     loc_71FF54
0x720012: xor     esi, esi
0x720014: or      edi, 0FFFFFFFFh
0x720017: push    14h; Size
0x720019: mov     [esp+34h+var_4], edi
0x72001D: mov     [ebp+4Ch], esi
0x720020: call    FormHeapAlloc
0x720025: add     esp, 4
0x720028: mov     [esp+30h+var_10], eax
0x72002C: test    eax, eax
0x72002E: mov     [esp+30h+var_4], 1
0x720036: jz      short loc_720046
0x720038: movzx   ecx, word ptr [ebp+50h]
0x72003C: push    ecx
0x72003D: mov     ecx, eax
0x72003F: call    sub_71FAC0
0x720044: jmp     short loc_720048
0x720046: xor     eax, eax
0x720048: cmp     word ptr [ebp+50h], 0
0x72004D: mov     [esp+30h+var_4], edi
0x720051: mov     [ebp+54h], eax
0x720054: mov     [esp+30h+var_18], 0
0x72005C: jbe     loc_720192
0x720062: mov     eax, [ebx+21Ch]
0x720068: push    1
0x72006A: lea     edx, [esp+34h+var_14]
0x72006E: push    edx
0x72006F: mov     edx, [eax+4]
0x720072: mov     edi, 2
0x720077: push    edi
0x720078: lea     ecx, [esp+3Ch+var_1C]
0x72007C: push    ecx
0x72007D: push    eax
0x72007E: xor     esi, esi
0x720080: mov     [esp+44h+var_14], edi
0x720084: call    edx
0x720086: mov     cx, [esp+44h+var_1C]
0x72008B: add     esp, 14h
0x72008E: test    cx, cx
0x720091: jz      loc_720157
0x720097: mov     eax, [ebp+54h]
0x72009A: test    eax, eax
0x72009C: jz      short loc_7200AD
0x72009E: movzx   edx, cx
0x7200A1: cmp     edx, [eax+0Ch]
0x7200A4: jbe     short loc_72011B
0x7200A6: mov     eax, [eax+10h]
0x7200A9: test    eax, eax
0x7200AB: jnz     short loc_7200A1
0x7200AD: push    14h; Size
0x7200AF: call    FormHeapAlloc
0x7200B4: mov     esi, eax
0x7200B6: add     esp, 4
0x7200B9: mov     [esp+30h+var_10], esi
0x7200BD: test    esi, esi
0x7200BF: mov     [esp+30h+var_4], edi
0x7200C3: jz      short loc_720103
0x7200C5: mov     eax, [ebp+54h]
0x7200C8: mov     edi, [eax+8]
0x7200CB: add     edi, edi
0x7200CD: xor     ecx, ecx
0x7200CF: mov     eax, edi
0x7200D1: mov     edx, 2
0x7200D6: mul     edx
0x7200D8: seto    cl
0x7200DB: neg     ecx
0x7200DD: or      ecx, eax
0x7200DF: push    ecx; Size
0x7200E0: call    FormHeapAlloc
0x7200E5: mov     [esi], eax
0x7200E7: mov     [esi+4], eax
0x7200EA: mov     [esi+8], edi
0x7200ED: mov     [esi+0Ch], edi
0x7200F0: add     esp, 4
0x7200F3: mov     dword ptr [esi+10h], 0
0x7200FA: mov     eax, esi
0x7200FC: mov     edi, 2
0x720101: jmp     short loc_720105
0x720103: xor     eax, eax
0x720105: mov     ecx, [ebp+54h]
0x720108: mov     [eax+10h], ecx
0x72010B: mov     cx, [esp+30h+var_1C]
0x720110: mov     [esp+30h+var_4], 0FFFFFFFFh
0x720118: mov     [ebp+54h], eax
0x72011B: mov     esi, [eax+4]
0x72011E: movzx   edx, cx
0x720121: sub     [eax+0Ch], edx
0x720124: movzx   ecx, [esp+30h+var_1C]
0x720129: lea     edx, [esi+ecx*2]
0x72012C: mov     [eax+4], edx
0x72012F: movzx   edx, [esp+30h+var_1C]
0x720134: mov     eax, [ebx+21Ch]
0x72013A: push    1
0x72013C: lea     ecx, [esp+34h+var_10]
0x720140: push    ecx
0x720141: add     edx, edx
0x720143: push    edx
0x720144: push    esi
0x720145: push    eax
0x720146: mov     eax, [eax+4]
0x720149: mov     [esp+44h+var_10], edi
0x72014D: call    eax
0x72014F: mov     cx, [esp+44h+var_1C]
0x720154: add     esp, 14h
0x720157: test    cx, cx
0x72015A: mov     edx, [esp+30h+var_18]
0x72015E: mov     edi, [ebp+4Ch]
0x720161: movzx   eax, dx
0x720164: lea     eax, [edi+eax*8]
0x720167: jz      short loc_720175
0x720169: test    esi, esi
0x72016B: jz      short loc_720175
0x72016D: mov     [eax], cx
0x720170: mov     [eax+4], esi
0x720173: jmp     short loc_720181
0x720175: mov     word ptr [eax], 0
0x72017A: mov     dword ptr [eax+4], 0
0x720181: add     edx, 1
0x720184: cmp     dx, [ebp+50h]
0x720188: mov     [esp+30h+var_18], edx
0x72018C: jb      loc_720062
0x720192: mov     ecx, [esp+30h+var_C]
0x720196: mov     large fs:0, ecx
0x72019D: pop     ecx
0x72019E: pop     edi
0x72019F: pop     esi
0x7201A0: pop     ebp
0x7201A1: pop     ebx
0x7201A2: add     esp, 1Ch
0x7201A5: retn    4
