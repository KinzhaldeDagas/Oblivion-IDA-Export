0x99FFF2: push    ebp
0x99FFF3: mov     ebp, esp
0x99FFF5: sub     esp, 74h
0x99FFF8: mov     eax, ___security_cookie
0x99FFFD: xor     eax, ebp
0x99FFFF: mov     [ebp+var_4], eax
0x9A0002: push    ebx
0x9A0003: mov     ebx, [ebp+arg_14]
0x9A0006: push    esi
0x9A0007: push    edi; Src
0x9A0008: lea     esi, [ebp+arg_0]
0x9A000B: lea     edi, [ebp+var_10]
0x9A000E: movsd
0x9A000F: movsd
0x9A0010: movsw
0x9A0012: mov     edx, [ebp+var_8]
0x9A0015: mov     ecx, edx
0x9A0017: mov     eax, 8000h
0x9A001C: and     ecx, eax
0x9A001E: and     edx, 7FFFh
0x9A0024: test    cx, cx
0x9A0027: mov     [ebp+var_60], ebx
0x9A002A: mov     byte ptr [ebp+var_30], 0CCh ; 'Ì'
0x9A002E: mov     byte ptr [ebp+var_30+1], 0CCh ; 'Ì'
0x9A0032: mov     byte ptr [ebp+var_30+2], 0CCh ; 'Ì'
0x9A0036: mov     byte ptr [ebp+var_30+3], 0CCh ; 'Ì'
0x9A003A: mov     byte ptr [ebp+var_2C], 0CCh ; 'Ì'
0x9A003E: mov     byte ptr [ebp+var_2C+1], 0CCh ; 'Ì'
0x9A0042: mov     byte ptr [ebp+var_2C+2], 0CCh ; 'Ì'
0x9A0046: mov     byte ptr [ebp+var_2C+3], 0CCh ; 'Ì'
0x9A004A: mov     byte ptr [ebp+var_28], 0CCh ; 'Ì'
0x9A004E: mov     byte ptr [ebp+var_28+1], 0CCh ; 'Ì'
0x9A0052: mov     byte ptr [ebp+var_28+2], 0FBh ; 'û'
0x9A0056: mov     byte ptr [ebp+var_28+3], 3Fh ; '?'
0x9A005A: mov     [ebp+var_74], 1
0x9A0061: mov     [ebp+var_6C], ecx
0x9A0064: jz      short loc_9A006C
0x9A0066: mov     byte ptr [ebx+2], 2Dh ; '-'
0x9A006A: jmp     short loc_9A0070
0x9A006C: mov     byte ptr [ebx+2], 20h ; ' '
0x9A0070: test    dx, dx
0x9A0073: mov     esi, [ebp+var_C]
0x9A0076: mov     edi, [ebp+var_10]
0x9A0079: jnz     short loc_9A00A9
0x9A007B: test    esi, esi
0x9A007D: jnz     short loc_9A00A9
0x9A007F: test    edi, edi
0x9A0081: jnz     short loc_9A00A9
0x9A0083: and     [ebx], di
0x9A0086: cmp     cx, ax
0x9A0089: setnz   al
0x9A008C: dec     al
0x9A008E: and     al, 0Dh
0x9A0090: add     al, 20h ; ' '
0x9A0092: mov     [ebx+2], al
0x9A0095: mov     byte ptr [ebx+3], 1
0x9A0099: mov     byte ptr [ebx+4], 30h ; '0'
0x9A009D: mov     byte ptr [ebx+5], 0
0x9A00A1: xor     eax, eax
0x9A00A3: inc     eax
0x9A00A4: jmp     loc_9A0872
0x9A00A9: cmp     dx, 7FFFh
0x9A00AE: jnz     loc_9A0152
0x9A00B4: mov     eax, 80000000h
0x9A00B9: cmp     esi, eax
0x9A00BB: mov     word ptr [ebx], 1
0x9A00C0: jnz     short loc_9A00C6
0x9A00C2: test    edi, edi
0x9A00C4: jz      short loc_9A00D5
0x9A00C6: test    esi, 40000000h
0x9A00CC: jnz     short loc_9A00D5
0x9A00CE: push    offset a1Snan
0x9A00D3: jmp     short loc_9A0126
0x9A00D5: test    cx, cx
0x9A00D8: jz      short loc_9A00ED
0x9A00DA: cmp     esi, 0C0000000h
0x9A00E0: jnz     short loc_9A00ED
0x9A00E2: test    edi, edi
0x9A00E4: jnz     short loc_9A0121
0x9A00E6: push    offset a1Ind
0x9A00EB: jmp     short loc_9A00FA
0x9A00ED: cmp     esi, eax
0x9A00EF: jnz     short loc_9A0121
0x9A00F1: test    edi, edi
0x9A00F3: jnz     short loc_9A0121
0x9A00F5: push    offset a1Inf
0x9A00FA: lea     eax, [ebx+4]
0x9A00FD: push    16h; SizeInBytes
0x9A00FF: push    eax; Dst
0x9A0100: call    _strcpy_s
0x9A0105: add     esp, 0Ch
0x9A0108: xor     esi, esi
0x9A010A: test    eax, eax
0x9A010C: jz      short loc_9A011B
0x9A010E: push    esi
0x9A010F: push    esi
0x9A0110: push    esi
0x9A0111: push    esi
0x9A0112: push    esi
0x9A0113: call    __invoke_watson
0x9A0118: add     esp, 14h
0x9A011B: mov     byte ptr [ebx+3], 5
0x9A011F: jmp     short loc_9A014B
0x9A0121: push    offset a1Qnan
0x9A0126: lea     eax, [ebx+4]
0x9A0129: push    16h; SizeInBytes
0x9A012B: push    eax; Dst
0x9A012C: call    _strcpy_s
0x9A0131: add     esp, 0Ch
0x9A0134: xor     esi, esi
0x9A0136: test    eax, eax
0x9A0138: jz      short loc_9A0147
0x9A013A: push    esi
0x9A013B: push    esi
0x9A013C: push    esi
0x9A013D: push    esi
0x9A013E: push    esi
0x9A013F: call    __invoke_watson
0x9A0144: add     esp, 14h
0x9A0147: mov     byte ptr [ebx+3], 6
0x9A014B: xor     eax, eax
0x9A014D: jmp     loc_9A0872
0x9A0152: movzx   ecx, dx
0x9A0155: mov     ebx, ecx
0x9A0157: imul    ecx, 4D10h
0x9A015D: shr     ebx, 8
0x9A0160: mov     eax, esi
0x9A0162: shr     eax, 18h
0x9A0165: lea     eax, [ebx+eax*2]
0x9A0168: imul    eax, 4Dh ; 'M'
0x9A016B: lea     eax, [eax+ecx-134312F4h]
0x9A0172: sar     eax, 10h
0x9A0175: movzx   ecx, ax
0x9A0178: movsx   ebx, cx
0x9A017B: mov     [ebp+var_4C], ecx
0x9A017E: xor     eax, eax
0x9A0180: mov     ecx, offset unk_B32120
0x9A0185: neg     ebx
0x9A0187: sub     ecx, 60h ; '`'
0x9A018A: cmp     ebx, eax
0x9A018C: mov     word ptr [ebp+var_16], dx
0x9A0190: mov     [ebp+var_1A], esi
0x9A0193: mov     [ebp+var_20+2], edi
0x9A0196: mov     word ptr [ebp+var_20], ax
0x9A019A: mov     [ebp+var_68], ecx
0x9A019D: jz      loc_9A0451
0x9A01A3: jge     short loc_9A01B2
0x9A01A5: mov     ecx, offset unk_B32280
0x9A01AA: neg     ebx
0x9A01AC: sub     ecx, 60h ; '`'
0x9A01AF: mov     [ebp+var_68], ecx
0x9A01B2: cmp     ebx, eax
0x9A01B4: jz      loc_9A0451
0x9A01BA: add     [ebp+var_68], 54h ; 'T'
0x9A01BE: mov     ecx, ebx
0x9A01C0: and     ecx, 7
0x9A01C3: sar     ebx, 3
0x9A01C6: test    ecx, ecx
0x9A01C8: jz      loc_9A0447
0x9A01CE: imul    ecx, 0Ch
0x9A01D1: add     ecx, [ebp+var_68]
0x9A01D4: cmp     word ptr [ecx], 8000h
0x9A01D9: mov     [ebp+var_64], ecx
0x9A01DC: jb      short loc_9A01F1
0x9A01DE: mov     esi, ecx
0x9A01E0: lea     edi, [ebp+var_3C]
0x9A01E3: movsd
0x9A01E4: movsd
0x9A01E5: lea     eax, [ebp+var_3C]
0x9A01E8: movsd
0x9A01E9: dec     [ebp+var_3C+2]
0x9A01EC: mov     [ebp+var_64], eax
0x9A01EF: mov     ecx, eax
0x9A01F1: movzx   edi, word ptr [ecx+0Ah]
0x9A01F5: mov     edx, [ebp+var_16]
0x9A01F8: xor     eax, eax
0x9A01FA: mov     ecx, edi
0x9A01FC: mov     esi, 7FFFh
0x9A0201: xor     ecx, edx
0x9A0203: and     edx, esi
0x9A0205: and     edi, esi
0x9A0207: mov     [ebp+var_48], eax
0x9A020A: mov     [ebp+var_10], eax
0x9A020D: mov     [ebp+var_C], eax
0x9A0210: mov     [ebp+var_8], eax
0x9A0213: and     ecx, 8000h
0x9A0219: cmp     dx, si
0x9A021C: lea     eax, [edi+edx]
0x9A021F: movzx   eax, ax
0x9A0222: jnb     loc_9A042B
0x9A0228: cmp     di, si
0x9A022B: jnb     loc_9A042B
0x9A0231: cmp     ax, 0BFFDh
0x9A0235: ja      loc_9A042B
0x9A023B: cmp     ax, 3FBFh
0x9A023F: ja      short loc_9A0251
0x9A0241: xor     eax, eax
0x9A0243: mov     [ebp+var_1A+2], eax
0x9A0246: mov     [ebp-1Ch], eax
0x9A0249: mov     [ebp+var_20], eax
0x9A024C: jmp     loc_9A0447
0x9A0251: xor     esi, esi
0x9A0253: cmp     dx, si
0x9A0256: jnz     short loc_9A0275
0x9A0258: inc     eax
0x9A0259: test    [ebp+var_1A+2], 7FFFFFFFh
0x9A0260: jnz     short loc_9A0275
0x9A0262: cmp     [ebp-1Ch], esi
0x9A0265: jnz     short loc_9A0275
0x9A0267: cmp     [ebp+var_20], esi
0x9A026A: jnz     short loc_9A0275
0x9A026C: mov     word ptr [ebp+var_16], si
0x9A0270: jmp     loc_9A0447
0x9A0275: cmp     di, si
0x9A0278: jnz     short loc_9A029E
0x9A027A: mov     edx, [ebp+var_64]
0x9A027D: inc     eax
0x9A027E: test    dword ptr [edx+8], 7FFFFFFFh
0x9A0285: jnz     short loc_9A029E
0x9A0287: cmp     [edx+4], esi
0x9A028A: jnz     short loc_9A029E
0x9A028C: cmp     [edx], esi
0x9A028E: jnz     short loc_9A029E
0x9A0290: mov     [ebp+var_1A+2], esi
0x9A0293: mov     [ebp-1Ch], esi
0x9A0296: mov     [ebp+var_20], esi
0x9A0299: jmp     loc_9A0447
0x9A029E: lea     edi, [ebp+var_C]
0x9A02A1: mov     [ebp+var_5C], esi
0x9A02A4: mov     [ebp+var_44], edi
0x9A02A7: mov     [ebp+var_40], 5
0x9A02AE: mov     edx, [ebp+var_5C]
0x9A02B1: mov     esi, [ebp+var_40]
0x9A02B4: add     edx, edx
0x9A02B6: test    esi, esi
0x9A02B8: mov     [ebp+var_50], esi
0x9A02BB: jle     short loc_9A0315
0x9A02BD: lea     edx, [ebp+edx+var_20]
0x9A02C1: mov     [ebp+var_58], edx
0x9A02C4: mov     edx, [ebp+var_64]
0x9A02C7: add     edx, 8
0x9A02CA: mov     [ebp+var_54], edx
0x9A02CD: mov     edx, [ebp+var_58]
0x9A02D0: mov     esi, [ebp+var_54]
0x9A02D3: movzx   esi, word ptr [esi]
0x9A02D6: movzx   edx, word ptr [edx]
0x9A02D9: mov     edi, [edi-4]
0x9A02DC: imul    edx, esi
0x9A02DF: and     [ebp+var_70], 0
0x9A02E3: lea     esi, [edi+edx]
0x9A02E6: cmp     esi, edi
0x9A02E8: jb      short loc_9A02EE
0x9A02EA: cmp     esi, edx
0x9A02EC: jnb     short loc_9A02F5
0x9A02EE: mov     [ebp+var_70], 1
0x9A02F5: cmp     [ebp+var_70], 0
0x9A02F9: mov     edi, [ebp+var_44]
0x9A02FC: mov     [edi-4], esi
0x9A02FF: jz      short loc_9A0304
0x9A0301: inc     word ptr [edi]
0x9A0304: add     [ebp+var_58], 2
0x9A0308: sub     [ebp+var_54], 2
0x9A030C: dec     [ebp+var_50]
0x9A030F: cmp     [ebp+var_50], 0
0x9A0313: jg      short loc_9A02CD
0x9A0315: inc     edi
0x9A0316: inc     edi
0x9A0317: inc     [ebp+var_5C]
0x9A031A: dec     [ebp+var_40]
0x9A031D: cmp     [ebp+var_40], 0
0x9A0321: mov     [ebp+var_44], edi
0x9A0324: jg      short loc_9A02AE
0x9A0326: add     eax, 0C002h
0x9A032B: test    ax, ax
0x9A032E: jle     short loc_9A036B
0x9A0330: test    [ebp+var_8], 80000000h
0x9A0337: jnz     short loc_9A0366
0x9A0339: mov     edx, [ebp+var_10]
0x9A033C: mov     edi, [ebp+var_C]
0x9A033F: mov     esi, [ebp+var_C]
0x9A0342: shl     [ebp+var_10], 1
0x9A0345: shr     edx, 1Fh
0x9A0348: add     edi, edi
0x9A034A: or      edi, edx
0x9A034C: mov     edx, [ebp+var_8]
0x9A034F: shr     esi, 1Fh
0x9A0352: add     edx, edx
0x9A0354: or      edx, esi
0x9A0356: add     eax, 0FFFFh
0x9A035B: test    ax, ax
0x9A035E: mov     [ebp+var_C], edi
0x9A0361: mov     [ebp+var_8], edx
0x9A0364: jg      short loc_9A0330
0x9A0366: test    ax, ax
0x9A0369: jg      short loc_9A03BD
0x9A036B: add     eax, 0FFFFh
0x9A0370: test    ax, ax
0x9A0373: jge     short loc_9A03BD
0x9A0375: mov     edx, eax
0x9A0377: neg     edx
0x9A0379: movzx   edx, dx
0x9A037C: mov     [ebp+var_44], edx
0x9A037F: add     eax, edx
0x9A0381: test    byte ptr [ebp+var_10], 1
0x9A0385: jz      short loc_9A038A
0x9A0387: inc     [ebp+var_48]
0x9A038A: mov     edx, [ebp+var_8]
0x9A038D: mov     edi, [ebp+var_C]
0x9A0390: mov     esi, [ebp+var_C]
0x9A0393: shr     [ebp+var_8], 1
0x9A0396: shl     edx, 1Fh
0x9A0399: shr     edi, 1
0x9A039B: or      edi, edx
0x9A039D: mov     edx, [ebp+var_10]
0x9A03A0: shl     esi, 1Fh
0x9A03A3: shr     edx, 1
0x9A03A5: or      edx, esi
0x9A03A7: dec     [ebp+var_44]
0x9A03AA: mov     [ebp+var_C], edi
0x9A03AD: mov     [ebp+var_10], edx
0x9A03B0: jnz     short loc_9A0381
0x9A03B2: cmp     [ebp+var_48], 0
0x9A03B6: jz      short loc_9A03BD
0x9A03B8: or      word ptr [ebp+var_10], 1
0x9A03BD: cmp     word ptr [ebp+var_10], 8000h
0x9A03C3: ja      short loc_9A03D6
0x9A03C5: mov     edx, [ebp+var_10]
0x9A03C8: and     edx, 1FFFFh
0x9A03CE: cmp     edx, 18000h
0x9A03D4: jnz     short loc_9A0409
0x9A03D6: cmp     [ebp+var_10+2], 0FFFFFFFFh
0x9A03DA: jnz     short loc_9A0406
0x9A03DC: and     [ebp+var_10+2], 0
0x9A03E0: cmp     [ebp+var_C+2], 0FFFFFFFFh
0x9A03E4: jnz     short loc_9A0401
0x9A03E6: and     [ebp+var_C+2], 0
0x9A03EA: cmp     word ptr [ebp+var_8+2], 0FFFFh
0x9A03F0: jnz     short loc_9A03FB
0x9A03F2: mov     word ptr [ebp+var_8+2], 8000h
0x9A03F8: inc     eax
0x9A03F9: jmp     short loc_9A0409
0x9A03FB: inc     word ptr [ebp+var_8+2]
0x9A03FF: jmp     short loc_9A0409
0x9A0401: inc     [ebp+var_C+2]
0x9A0404: jmp     short loc_9A0409
0x9A0406: inc     [ebp+var_10+2]
0x9A0409: cmp     ax, 7FFFh
0x9A040D: jnb     short loc_9A042B
0x9A040F: mov     dx, word ptr [ebp+var_10+2]
0x9A0413: mov     word ptr [ebp+var_20], dx
0x9A0417: mov     edx, [ebp+var_C]
0x9A041A: mov     [ebp+var_20+2], edx
0x9A041D: mov     edx, [ebp+var_8]
0x9A0420: or      eax, ecx
0x9A0422: mov     [ebp+var_1A], edx
0x9A0425: mov     word ptr [ebp+var_16], ax
0x9A0429: jmp     short loc_9A0447
0x9A042B: neg     cx
0x9A042E: sbb     ecx, ecx
0x9A0430: and     dword ptr [ebp-1Ch], 0
0x9A0434: and     ecx, 80000000h
0x9A043A: add     ecx, 7FFF8000h
0x9A0440: and     [ebp+var_20], 0
0x9A0444: mov     [ebp+var_1A+2], ecx
0x9A0447: test    ebx, ebx
0x9A0449: jnz     loc_9A01BA
0x9A044F: xor     eax, eax
0x9A0451: mov     ecx, [ebp+var_1A+2]
0x9A0454: shr     ecx, 10h
0x9A0457: cmp     cx, 3FFFh
0x9A045C: mov     ebx, 7FFFh
0x9A0461: jb      loc_9A06B1
0x9A0467: mov     esi, [ebp+var_28+2]
0x9A046A: inc     [ebp+var_4C]
0x9A046D: movzx   edx, cx
0x9A0470: mov     ecx, esi
0x9A0472: xor     ecx, edx
0x9A0474: and     edx, ebx
0x9A0476: and     esi, ebx
0x9A0478: and     ecx, 8000h
0x9A047E: cmp     dx, bx
0x9A0481: lea     edi, [esi+edx]
0x9A0484: mov     [ebp+var_58], eax
0x9A0487: mov     [ebp+var_10], eax
0x9A048A: mov     [ebp+var_C], eax
0x9A048D: mov     [ebp+var_8], eax
0x9A0490: movzx   edi, di
0x9A0493: jnb     loc_9A0697
0x9A0499: cmp     si, bx
0x9A049C: jnb     loc_9A0697
0x9A04A2: cmp     di, 0BFFDh
0x9A04A7: ja      loc_9A0697
0x9A04AD: cmp     di, 3FBFh
0x9A04B2: ja      short loc_9A04BC
0x9A04B4: mov     [ebp+var_1A+2], eax
0x9A04B7: jmp     loc_9A06AB
0x9A04BC: cmp     dx, ax
0x9A04BF: jnz     short loc_9A04DE
0x9A04C1: inc     edi
0x9A04C2: test    [ebp+var_1A+2], 7FFFFFFFh
0x9A04C9: jnz     short loc_9A04DE
0x9A04CB: cmp     [ebp-1Ch], eax
0x9A04CE: jnz     short loc_9A04DE
0x9A04D0: cmp     [ebp+var_20], eax
0x9A04D3: jnz     short loc_9A04DE
0x9A04D5: mov     word ptr [ebp+var_16], ax
0x9A04D9: jmp     loc_9A06B1
0x9A04DE: cmp     si, ax
0x9A04E1: jnz     short loc_9A04F7
0x9A04E3: inc     edi
0x9A04E4: test    [ebp+var_28], 7FFFFFFFh
0x9A04EB: jnz     short loc_9A04F7
0x9A04ED: cmp     [ebp+var_2C], eax
0x9A04F0: jnz     short loc_9A04F7
0x9A04F2: cmp     [ebp+var_30], eax
0x9A04F5: jz      short loc_9A04B4
0x9A04F7: and     [ebp+var_54], 0
0x9A04FB: lea     eax, [ebp+var_C]
0x9A04FE: mov     [ebp+var_40], 5
0x9A0505: mov     edx, [ebp+var_54]
0x9A0508: mov     esi, [ebp+var_40]
0x9A050B: add     edx, edx
0x9A050D: test    esi, esi
0x9A050F: mov     [ebp+var_50], esi
0x9A0512: jle     short loc_9A0566
0x9A0514: lea     esi, [ebp+var_28]
0x9A0517: lea     edx, [ebp+edx+var_20]
0x9A051B: mov     [ebp+var_5C], esi
0x9A051E: mov     [ebp+var_48], edx
0x9A0521: mov     edx, [ebp+var_5C]
0x9A0524: mov     esi, [ebp+var_48]
0x9A0527: movzx   esi, word ptr [esi]
0x9A052A: movzx   edx, word ptr [edx]
0x9A052D: and     [ebp+var_44], 0
0x9A0531: imul    edx, esi
0x9A0534: mov     esi, [eax-4]
0x9A0537: lea     ebx, [esi+edx]
0x9A053A: cmp     ebx, esi
0x9A053C: jb      short loc_9A0542
0x9A053E: cmp     ebx, edx
0x9A0540: jnb     short loc_9A0549
0x9A0542: mov     [ebp+var_44], 1
0x9A0549: cmp     [ebp+var_44], 0
0x9A054D: mov     [eax-4], ebx
0x9A0550: jz      short loc_9A0555
0x9A0552: inc     word ptr [eax]
0x9A0555: add     [ebp+var_48], 2
0x9A0559: sub     [ebp+var_5C], 2
0x9A055D: dec     [ebp+var_50]
0x9A0560: cmp     [ebp+var_50], 0
0x9A0564: jg      short loc_9A0521
0x9A0566: inc     eax
0x9A0567: inc     eax
0x9A0568: inc     [ebp+var_54]
0x9A056B: dec     [ebp+var_40]
0x9A056E: cmp     [ebp+var_40], 0
0x9A0572: jg      short loc_9A0505
0x9A0574: add     edi, 0C002h
0x9A057A: xor     eax, eax
0x9A057C: cmp     di, ax
0x9A057F: jle     short loc_9A05BD
0x9A0581: test    [ebp+var_8], 80000000h
0x9A0588: jnz     short loc_9A05B8
0x9A058A: mov     edx, [ebp+var_10]
0x9A058D: mov     ebx, [ebp+var_C]
0x9A0590: mov     esi, [ebp+var_C]
0x9A0593: shl     [ebp+var_10], 1
0x9A0596: shr     edx, 1Fh
0x9A0599: add     ebx, ebx
0x9A059B: or      ebx, edx
0x9A059D: mov     edx, [ebp+var_8]
0x9A05A0: shr     esi, 1Fh
0x9A05A3: add     edx, edx
0x9A05A5: or      edx, esi
0x9A05A7: add     edi, 0FFFFh
0x9A05AD: cmp     di, ax
0x9A05B0: mov     [ebp+var_C], ebx
0x9A05B3: mov     [ebp+var_8], edx
0x9A05B6: jg      short loc_9A0581
0x9A05B8: cmp     di, ax
0x9A05BB: jg      short loc_9A060C
0x9A05BD: add     edi, 0FFFFh
0x9A05C3: cmp     di, ax
0x9A05C6: jge     short loc_9A060C
0x9A05C8: mov     eax, edi
0x9A05CA: neg     eax
0x9A05CC: movzx   eax, ax
0x9A05CF: add     edi, eax
0x9A05D1: test    byte ptr [ebp+var_10], 1
0x9A05D5: jz      short loc_9A05DA
0x9A05D7: inc     [ebp+var_58]
0x9A05DA: mov     edx, [ebp+var_8]
0x9A05DD: mov     ebx, [ebp+var_C]
0x9A05E0: mov     esi, [ebp+var_C]
0x9A05E3: shr     [ebp+var_8], 1
0x9A05E6: shl     edx, 1Fh
0x9A05E9: shr     ebx, 1
0x9A05EB: or      ebx, edx
0x9A05ED: mov     edx, [ebp+var_10]
0x9A05F0: shl     esi, 1Fh
0x9A05F3: shr     edx, 1
0x9A05F5: or      edx, esi
0x9A05F7: dec     eax
0x9A05F8: mov     [ebp+var_C], ebx
0x9A05FB: mov     [ebp+var_10], edx
0x9A05FE: jnz     short loc_9A05D1
0x9A0600: xor     eax, eax
0x9A0602: cmp     [ebp+var_58], eax
0x9A0605: jz      short loc_9A060C
0x9A0607: or      word ptr [ebp+var_10], 1
0x9A060C: cmp     word ptr [ebp+var_10], 8000h
0x9A0612: ja      short loc_9A0625
0x9A0614: mov     edx, [ebp+var_10]
0x9A0617: and     edx, 1FFFFh
0x9A061D: cmp     edx, 18000h
0x9A0623: jnz     short loc_9A0656
0x9A0625: cmp     [ebp+var_10+2], 0FFFFFFFFh
0x9A0629: jnz     short loc_9A0653
0x9A062B: cmp     [ebp+var_C+2], 0FFFFFFFFh
0x9A062F: mov     [ebp+var_10+2], eax
0x9A0632: jnz     short loc_9A064E
0x9A0634: cmp     word ptr [ebp+var_8+2], 0FFFFh
0x9A063A: mov     [ebp+var_C+2], eax
0x9A063D: jnz     short loc_9A0648
0x9A063F: mov     word ptr [ebp+var_8+2], 8000h
0x9A0645: inc     edi
0x9A0646: jmp     short loc_9A0656
0x9A0648: inc     word ptr [ebp+var_8+2]
0x9A064C: jmp     short loc_9A0656
0x9A064E: inc     [ebp+var_C+2]
0x9A0651: jmp     short loc_9A0656
0x9A0653: inc     [ebp+var_10+2]
0x9A0656: cmp     di, 7FFFh
0x9A065B: jb      short loc_9A067B
0x9A065D: neg     cx
0x9A0660: mov     [ebp-1Ch], eax
0x9A0663: mov     [ebp+var_20], eax
0x9A0666: sbb     ecx, ecx
0x9A0668: and     ecx, 80000000h
0x9A066E: add     ecx, 7FFF8000h
0x9A0674: mov     [ebp+var_1A+2], ecx
0x9A0677: xor     eax, eax
0x9A0679: jmp     short loc_9A06B1
0x9A067B: mov     ax, word ptr [ebp+var_10+2]
0x9A067F: mov     word ptr [ebp+var_20], ax
0x9A0683: mov     eax, [ebp+var_C]
0x9A0686: mov     [ebp+var_20+2], eax
0x9A0689: mov     eax, [ebp+var_8]
0x9A068C: or      edi, ecx
0x9A068E: mov     [ebp+var_1A], eax
0x9A0691: mov     word ptr [ebp+var_16], di
0x9A0695: jmp     short loc_9A0677
0x9A0697: neg     cx
0x9A069A: sbb     ecx, ecx
0x9A069C: and     ecx, 80000000h
0x9A06A2: add     ecx, 7FFF8000h
0x9A06A8: mov     [ebp+var_1A+2], ecx
0x9A06AB: mov     [ebp-1Ch], eax
0x9A06AE: mov     [ebp+var_20], eax
0x9A06B1: test    [ebp+arg_10], 1
0x9A06B5: mov     edx, [ebp+var_60]
0x9A06B8: mov     ecx, [ebp+var_4C]
0x9A06BB: mov     [edx], cx
0x9A06BE: jz      short loc_9A06F2
0x9A06C0: movsx   ecx, cx
0x9A06C3: add     [ebp+arg_C], ecx
0x9A06C6: cmp     [ebp+arg_C], eax
0x9A06C9: jg      short loc_9A06F2
0x9A06CB: and     word ptr [edx], 0
0x9A06CF: cmp     word ptr [ebp+var_6C], 8000h
0x9A06D5: mov     byte ptr [edx+3], 1
0x9A06D9: setnz   al
0x9A06DC: dec     al
0x9A06DE: and     al, 0Dh
0x9A06E0: add     al, 20h ; ' '
0x9A06E2: mov     [edx+2], al
0x9A06E5: mov     byte ptr [edx+4], 30h ; '0'
0x9A06E9: mov     byte ptr [edx+5], 0
0x9A06ED: jmp     loc_9A00A1
0x9A06F2: push    15h
0x9A06F4: pop     ecx
0x9A06F5: cmp     [ebp+arg_C], ecx
0x9A06F8: jle     short loc_9A06FD
0x9A06FA: mov     [ebp+arg_C], ecx
0x9A06FD: mov     esi, [ebp+var_1A+2]
0x9A0700: shr     esi, 10h
0x9A0703: push    8
0x9A0705: sub     esi, 3FFEh
0x9A070B: mov     word ptr [ebp+var_16], ax
0x9A070F: pop     ebx
0x9A0710: mov     eax, [ebp+var_20]
0x9A0713: mov     edi, [ebp-1Ch]
0x9A0716: mov     ecx, [ebp-1Ch]
0x9A0719: shl     [ebp+var_20], 1
0x9A071C: shr     eax, 1Fh
0x9A071F: add     edi, edi
0x9A0721: or      edi, eax
0x9A0723: mov     eax, [ebp+var_1A+2]
0x9A0726: shr     ecx, 1Fh
0x9A0729: add     eax, eax
0x9A072B: or      eax, ecx
0x9A072D: dec     ebx
0x9A072E: mov     [ebp-1Ch], edi
0x9A0731: mov     [ebp+var_1A+2], eax
0x9A0734: jnz     short loc_9A0710
0x9A0736: test    esi, esi
0x9A0738: jge     short loc_9A076C
0x9A073A: neg     esi
0x9A073C: and     esi, 0FFh
0x9A0742: jle     short loc_9A076C
0x9A0744: mov     eax, [ebp+var_1A+2]
0x9A0747: mov     edi, [ebp-1Ch]
0x9A074A: mov     ecx, [ebp-1Ch]
0x9A074D: shr     [ebp+var_1A+2], 1
0x9A0750: shl     eax, 1Fh
0x9A0753: shr     edi, 1
0x9A0755: or      edi, eax
0x9A0757: mov     eax, [ebp+var_20]
0x9A075A: shl     ecx, 1Fh
0x9A075D: shr     eax, 1
0x9A075F: or      eax, ecx
0x9A0761: dec     esi
0x9A0762: test    esi, esi
0x9A0764: mov     [ebp-1Ch], edi
0x9A0767: mov     [ebp+var_20], eax
0x9A076A: jg      short loc_9A0744
0x9A076C: mov     eax, [ebp+arg_C]
0x9A076F: inc     eax
0x9A0770: test    eax, eax
0x9A0772: lea     ebx, [edx+4]
0x9A0775: mov     [ebp+var_40], ebx
0x9A0778: mov     [ebp+var_4C], eax
0x9A077B: jle     loc_9A0836
0x9A0781: mov     edx, [ebp+var_20]
0x9A0784: mov     eax, [ebp-1Ch]
0x9A0787: lea     esi, [ebp+var_20]
0x9A078A: lea     edi, [ebp+var_3C]
0x9A078D: movsd
0x9A078E: movsd
0x9A078F: movsd
0x9A0790: shl     [ebp+var_20], 1
0x9A0793: mov     edi, [ebp+var_20]
0x9A0796: shl     [ebp+var_20], 1
0x9A0799: shr     edx, 1Fh
0x9A079C: lea     ecx, [eax+eax]
0x9A079F: or      ecx, edx
0x9A07A1: mov     edx, [ebp+var_1A+2]
0x9A07A4: mov     esi, eax
0x9A07A6: shr     esi, 1Fh
0x9A07A9: add     edx, edx
0x9A07AB: or      edx, esi
0x9A07AD: mov     eax, ecx
0x9A07AF: lea     esi, [ecx+ecx]
0x9A07B2: shr     eax, 1Fh
0x9A07B5: lea     ecx, [edx+edx]
0x9A07B8: mov     edx, [ebp+var_3C]
0x9A07BB: shr     edi, 1Fh
0x9A07BE: or      ecx, eax
0x9A07C0: mov     eax, [ebp+var_20]
0x9A07C3: or      esi, edi
0x9A07C5: lea     edi, [edx+eax]
0x9A07C8: cmp     edi, eax
0x9A07CA: jb      short loc_9A07D0
0x9A07CC: cmp     edi, edx
0x9A07CE: jnb     short loc_9A07E8
0x9A07D0: lea     eax, [esi+1]
0x9A07D3: xor     edx, edx
0x9A07D5: cmp     eax, esi
0x9A07D7: jb      short loc_9A07DE
0x9A07D9: cmp     eax, 1
0x9A07DC: jnb     short loc_9A07E1
0x9A07DE: xor     edx, edx
0x9A07E0: inc     edx
0x9A07E1: test    edx, edx
0x9A07E3: mov     esi, eax
0x9A07E5: jz      short loc_9A07E8
0x9A07E7: inc     ecx
0x9A07E8: mov     eax, [ebp+var_38]
0x9A07EB: lea     edx, [eax+esi]
0x9A07EE: cmp     edx, esi
0x9A07F0: mov     [ebp+var_44], edx
0x9A07F3: jb      short loc_9A07F9
0x9A07F5: cmp     edx, eax
0x9A07F7: jnb     short loc_9A07FA
0x9A07F9: inc     ecx
0x9A07FA: add     ecx, [ebp+var_34]
0x9A07FD: shr     edx, 1Fh
0x9A0800: add     ecx, ecx
0x9A0802: or      ecx, edx
0x9A0804: lea     esi, [edi+edi]
0x9A0807: mov     [ebp+var_20], esi
0x9A080A: mov     esi, [ebp+var_44]
0x9A080D: mov     [ebp+var_1A+2], ecx
0x9A0810: shr     ecx, 18h
0x9A0813: add     esi, esi
0x9A0815: add     cl, 30h ; '0'
0x9A0818: mov     eax, edi
0x9A081A: shr     eax, 1Fh
0x9A081D: or      esi, eax
0x9A081F: mov     [ebx], cl
0x9A0821: inc     ebx
0x9A0822: dec     [ebp+var_4C]
0x9A0825: cmp     [ebp+var_4C], 0
0x9A0829: mov     [ebp-1Ch], esi
0x9A082C: mov     byte ptr [ebp+var_16+1], 0
0x9A0830: jg      loc_9A0781
0x9A0836: dec     ebx
0x9A0837: mov     al, [ebx]
0x9A0839: dec     ebx
0x9A083A: cmp     al, 35h ; '5'
0x9A083C: jge     short loc_9A084C
0x9A083E: mov     ecx, [ebp+var_40]
0x9A0841: jmp     short loc_9A0887
0x9A0843: cmp     byte ptr [ebx], 39h ; '9'
0x9A0846: jnz     short loc_9A0851
0x9A0848: mov     byte ptr [ebx], 30h ; '0'
0x9A084B: dec     ebx
0x9A084C: cmp     ebx, [ebp+var_40]
0x9A084F: jnb     short loc_9A0843
0x9A0851: cmp     ebx, [ebp+var_40]
0x9A0854: mov     eax, [ebp+var_60]
0x9A0857: jnb     short loc_9A085D
0x9A0859: inc     ebx
0x9A085A: inc     word ptr [eax]
0x9A085D: inc     byte ptr [ebx]
0x9A085F: sub     bl, al
0x9A0861: sub     bl, 3
0x9A0864: movsx   ecx, bl
0x9A0867: mov     [eax+3], bl
0x9A086A: mov     byte ptr [ecx+eax+4], 0
0x9A086F: mov     eax, [ebp+var_74]
0x9A0872: mov     ecx, [ebp+var_4]
0x9A0875: pop     edi
0x9A0876: pop     esi
0x9A0877: xor     ecx, ebp
0x9A0879: pop     ebx
0x9A087A: call    @__security_check_cookie@4
0x9A087F: leave
0x9A0880: retn
0x9A0881: cmp     byte ptr [ebx], 30h ; '0'
0x9A0884: jnz     short loc_9A088B
0x9A0886: dec     ebx
0x9A0887: cmp     ebx, ecx
0x9A0889: jnb     short loc_9A0881
0x9A088B: cmp     ebx, ecx
0x9A088D: mov     eax, [ebp+var_60]
0x9A0890: jnb     short loc_9A085F
0x9A0892: and     word ptr [eax], 0
0x9A0896: cmp     word ptr [ebp+var_6C], 8000h
0x9A089C: mov     byte ptr [eax+3], 1
0x9A08A0: setnz   dl
0x9A08A3: dec     dl
0x9A08A5: and     dl, 0Dh
0x9A08A8: add     dl, 20h ; ' '
0x9A08AB: mov     [eax+2], dl
0x9A08AE: mov     byte ptr [ecx], 30h ; '0'
0x9A08B1: mov     byte ptr [eax+5], 0
0x9A08B5: jmp     loc_9A00A1
