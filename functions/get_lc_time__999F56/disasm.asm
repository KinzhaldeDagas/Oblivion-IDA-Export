0x999F56: push    ebp
0x999F57: mov     ebp, esp
0x999F59: sub     esp, 10h
0x999F5C: test    esi, esi
0x999F5E: movzx   ecx, word ptr [eax+42h]
0x999F62: movzx   edx, word ptr [eax+44h]
0x999F66: mov     [ebp+var_4], ecx
0x999F69: mov     [ebp+var_8], edx
0x999F6C: jnz     short loc_999F73
0x999F6E: or      eax, 0FFFFFFFFh
0x999F71: leave
0x999F72: retn
0x999F73: and     [ebp+var_C], 0
0x999F77: push    ebx
0x999F78: push    edi
0x999F79: mov     [ebp+var_10], eax
0x999F7C: lea     eax, [esi+4]
0x999F7F: push    eax
0x999F80: push    31h ; '1'
0x999F82: push    ecx
0x999F83: xor     ebx, ebx
0x999F85: inc     ebx
0x999F86: lea     eax, [ebp+var_10]
0x999F89: push    ebx
0x999F8A: push    eax
0x999F8B: call    unknown_libname_90
0x999F90: mov     edi, eax
0x999F92: lea     eax, [esi+8]
0x999F95: push    eax
0x999F96: push    32h ; '2'
0x999F98: push    [ebp+var_4]
0x999F9B: lea     eax, [ebp+var_10]
0x999F9E: push    ebx
0x999F9F: push    eax
0x999FA0: call    unknown_libname_90
0x999FA5: or      edi, eax
0x999FA7: lea     eax, [esi+0Ch]
0x999FAA: push    eax
0x999FAB: push    33h ; '3'
0x999FAD: push    [ebp+var_4]
0x999FB0: lea     eax, [ebp+var_10]
0x999FB3: push    ebx
0x999FB4: push    eax
0x999FB5: call    unknown_libname_90
0x999FBA: or      edi, eax
0x999FBC: lea     eax, [esi+10h]
0x999FBF: push    eax
0x999FC0: push    34h ; '4'
0x999FC2: push    [ebp+var_4]
0x999FC5: lea     eax, [ebp+var_10]
0x999FC8: push    ebx
0x999FC9: push    eax
0x999FCA: call    unknown_libname_90
0x999FCF: add     esp, 50h
0x999FD2: or      edi, eax
0x999FD4: lea     eax, [esi+14h]
0x999FD7: push    eax
0x999FD8: push    35h ; '5'
0x999FDA: push    [ebp+var_4]
0x999FDD: lea     eax, [ebp+var_10]
0x999FE0: push    ebx
0x999FE1: push    eax
0x999FE2: call    unknown_libname_90
0x999FE7: or      edi, eax
0x999FE9: lea     eax, [esi+18h]
0x999FEC: push    eax
0x999FED: push    36h ; '6'
0x999FEF: push    [ebp+var_4]
0x999FF2: lea     eax, [ebp+var_10]
0x999FF5: push    ebx
0x999FF6: push    eax
0x999FF7: call    unknown_libname_90
0x999FFC: push    esi
0x999FFD: push    37h ; '7'
0x999FFF: push    [ebp+var_4]
0x99A002: or      edi, eax
0x99A004: lea     eax, [ebp+var_10]
0x99A007: push    ebx
0x99A008: push    eax
0x99A009: call    unknown_libname_90
0x99A00E: or      edi, eax
0x99A010: lea     eax, [esi+20h]
0x99A013: push    eax
0x99A014: push    2Ah ; '*'
0x99A016: push    [ebp+var_4]
0x99A019: lea     eax, [ebp+var_10]
0x99A01C: push    ebx
0x99A01D: push    eax
0x99A01E: call    unknown_libname_90
0x99A023: add     esp, 50h
0x99A026: or      edi, eax
0x99A028: lea     eax, [esi+24h]
0x99A02B: push    eax
0x99A02C: push    2Bh ; '+'
0x99A02E: push    [ebp+var_4]
0x99A031: lea     eax, [ebp+var_10]
0x99A034: push    ebx
0x99A035: push    eax
0x99A036: call    unknown_libname_90
0x99A03B: or      edi, eax
0x99A03D: lea     eax, [esi+28h]
0x99A040: push    eax
0x99A041: push    2Ch ; ','
0x99A043: push    [ebp+var_4]
0x99A046: lea     eax, [ebp+var_10]
0x99A049: push    ebx
0x99A04A: push    eax
0x99A04B: call    unknown_libname_90
0x99A050: or      edi, eax
0x99A052: lea     eax, [esi+2Ch]
0x99A055: push    eax
0x99A056: push    2Dh ; '-'
0x99A058: push    [ebp+var_4]
0x99A05B: lea     eax, [ebp+var_10]
0x99A05E: push    ebx
0x99A05F: push    eax
0x99A060: call    unknown_libname_90
0x99A065: or      edi, eax
0x99A067: lea     eax, [esi+30h]
0x99A06A: push    eax
0x99A06B: push    2Eh ; '.'
0x99A06D: push    [ebp+var_4]
0x99A070: lea     eax, [ebp+var_10]
0x99A073: push    ebx
0x99A074: push    eax
0x99A075: call    unknown_libname_90
0x99A07A: add     esp, 50h
0x99A07D: or      edi, eax
0x99A07F: lea     eax, [esi+34h]
0x99A082: push    eax
0x99A083: push    2Fh ; '/'
0x99A085: push    [ebp+var_4]
0x99A088: lea     eax, [ebp+var_10]
0x99A08B: push    ebx
0x99A08C: push    eax
0x99A08D: call    unknown_libname_90
0x99A092: or      edi, eax
0x99A094: lea     eax, [esi+1Ch]
0x99A097: push    eax
0x99A098: push    30h ; '0'
0x99A09A: push    [ebp+var_4]
0x99A09D: lea     eax, [ebp+var_10]
0x99A0A0: push    ebx
0x99A0A1: push    eax
0x99A0A2: call    unknown_libname_90
0x99A0A7: or      edi, eax
0x99A0A9: lea     eax, [esi+38h]
0x99A0AC: push    eax
0x99A0AD: push    44h ; 'D'
0x99A0AF: push    [ebp+var_4]
0x99A0B2: lea     eax, [ebp+var_10]
0x99A0B5: push    ebx
0x99A0B6: push    eax
0x99A0B7: call    unknown_libname_90
0x99A0BC: or      edi, eax
0x99A0BE: lea     eax, [esi+3Ch]
0x99A0C1: push    eax
0x99A0C2: push    45h ; 'E'
0x99A0C4: push    [ebp+var_4]
0x99A0C7: lea     eax, [ebp+var_10]
0x99A0CA: push    ebx
0x99A0CB: push    eax
0x99A0CC: call    unknown_libname_90
0x99A0D1: add     esp, 50h
0x99A0D4: or      edi, eax
0x99A0D6: lea     eax, [esi+40h]
0x99A0D9: push    eax
0x99A0DA: push    46h ; 'F'
0x99A0DC: push    [ebp+var_4]
0x99A0DF: lea     eax, [ebp+var_10]
0x99A0E2: push    ebx
0x99A0E3: push    eax
0x99A0E4: call    unknown_libname_90
0x99A0E9: or      edi, eax
0x99A0EB: lea     eax, [esi+44h]
0x99A0EE: push    eax
0x99A0EF: push    47h ; 'G'
0x99A0F1: push    [ebp+var_4]
0x99A0F4: lea     eax, [ebp+var_10]
0x99A0F7: push    ebx
0x99A0F8: push    eax
0x99A0F9: call    unknown_libname_90
0x99A0FE: or      edi, eax
0x99A100: lea     eax, [esi+48h]
0x99A103: push    eax
0x99A104: push    48h ; 'H'
0x99A106: push    [ebp+var_4]
0x99A109: lea     eax, [ebp+var_10]
0x99A10C: push    ebx
0x99A10D: push    eax
0x99A10E: call    unknown_libname_90
0x99A113: or      edi, eax
0x99A115: lea     eax, [esi+4Ch]
0x99A118: push    eax
0x99A119: push    49h ; 'I'
0x99A11B: push    [ebp+var_4]
0x99A11E: lea     eax, [ebp+var_10]
0x99A121: push    ebx
0x99A122: push    eax
0x99A123: call    unknown_libname_90
0x99A128: add     esp, 50h
0x99A12B: or      edi, eax
0x99A12D: lea     eax, [esi+50h]
0x99A130: push    eax
0x99A131: push    4Ah ; 'J'
0x99A133: push    [ebp+var_4]
0x99A136: lea     eax, [ebp+var_10]
0x99A139: push    ebx
0x99A13A: push    eax
0x99A13B: call    unknown_libname_90
0x99A140: or      edi, eax
0x99A142: lea     eax, [esi+54h]
0x99A145: push    eax
0x99A146: push    4Bh ; 'K'
0x99A148: push    [ebp+var_4]
0x99A14B: lea     eax, [ebp+var_10]
0x99A14E: push    ebx
0x99A14F: push    eax
0x99A150: call    unknown_libname_90
0x99A155: or      edi, eax
0x99A157: lea     eax, [esi+58h]
0x99A15A: push    eax
0x99A15B: push    4Ch ; 'L'
0x99A15D: push    [ebp+var_4]
0x99A160: lea     eax, [ebp+var_10]
0x99A163: push    ebx
0x99A164: push    eax
0x99A165: call    unknown_libname_90
0x99A16A: or      edi, eax
0x99A16C: lea     eax, [esi+5Ch]
0x99A16F: push    eax
0x99A170: push    4Dh ; 'M'
0x99A172: push    [ebp+var_4]
0x99A175: lea     eax, [ebp+var_10]
0x99A178: push    ebx
0x99A179: push    eax
0x99A17A: call    unknown_libname_90
0x99A17F: add     esp, 50h
0x99A182: or      edi, eax
0x99A184: lea     eax, [esi+60h]
0x99A187: push    eax
0x99A188: push    4Eh ; 'N'
0x99A18A: push    [ebp+var_4]
0x99A18D: lea     eax, [ebp+var_10]
0x99A190: push    ebx
0x99A191: push    eax
0x99A192: call    unknown_libname_90
0x99A197: or      edi, eax
0x99A199: lea     eax, [esi+64h]
0x99A19C: push    eax
0x99A19D: push    4Fh ; 'O'
0x99A19F: push    [ebp+var_4]
0x99A1A2: lea     eax, [ebp+var_10]
0x99A1A5: push    ebx
0x99A1A6: push    eax
0x99A1A7: call    unknown_libname_90
0x99A1AC: or      edi, eax
0x99A1AE: lea     eax, [esi+68h]
0x99A1B1: push    eax
0x99A1B2: push    38h ; '8'
0x99A1B4: push    [ebp+var_4]
0x99A1B7: lea     eax, [ebp+var_10]
0x99A1BA: push    ebx
0x99A1BB: push    eax
0x99A1BC: call    unknown_libname_90
0x99A1C1: or      edi, eax
0x99A1C3: lea     eax, [esi+6Ch]
0x99A1C6: push    eax
0x99A1C7: push    39h ; '9'
0x99A1C9: push    [ebp+var_4]
0x99A1CC: lea     eax, [ebp+var_10]
0x99A1CF: push    ebx
0x99A1D0: push    eax
0x99A1D1: call    unknown_libname_90
0x99A1D6: add     esp, 50h
0x99A1D9: or      edi, eax
0x99A1DB: lea     eax, [esi+70h]
0x99A1DE: push    eax
0x99A1DF: push    3Ah ; ':'
0x99A1E1: push    [ebp+var_4]
0x99A1E4: lea     eax, [ebp+var_10]
0x99A1E7: push    ebx
0x99A1E8: push    eax
0x99A1E9: call    unknown_libname_90
0x99A1EE: or      edi, eax
0x99A1F0: lea     eax, [esi+74h]
0x99A1F3: push    eax
0x99A1F4: push    3Bh ; ';'
0x99A1F6: push    [ebp+var_4]
0x99A1F9: lea     eax, [ebp+var_10]
0x99A1FC: push    ebx
0x99A1FD: push    eax
0x99A1FE: call    unknown_libname_90
0x99A203: or      edi, eax
0x99A205: lea     eax, [esi+78h]
0x99A208: push    eax
0x99A209: push    3Ch ; '<'
0x99A20B: push    [ebp+var_4]
0x99A20E: lea     eax, [ebp+var_10]
0x99A211: push    ebx
0x99A212: push    eax
0x99A213: call    unknown_libname_90
0x99A218: or      edi, eax
0x99A21A: lea     eax, [esi+7Ch]
0x99A21D: push    eax
0x99A21E: push    3Dh ; '='
0x99A220: push    [ebp+var_4]
0x99A223: lea     eax, [ebp+var_10]
0x99A226: push    ebx
0x99A227: push    eax
0x99A228: call    unknown_libname_90
0x99A22D: add     esp, 50h
0x99A230: or      edi, eax
0x99A232: lea     eax, [esi+80h]
0x99A238: push    eax
0x99A239: push    3Eh ; '>'
0x99A23B: push    [ebp+var_4]
0x99A23E: lea     eax, [ebp+var_10]
0x99A241: push    ebx
0x99A242: push    eax
0x99A243: call    unknown_libname_90
0x99A248: or      edi, eax
0x99A24A: lea     eax, [esi+84h]
0x99A250: push    eax
0x99A251: push    3Fh ; '?'
0x99A253: push    [ebp+var_4]
0x99A256: lea     eax, [ebp+var_10]
0x99A259: push    ebx
0x99A25A: push    eax
0x99A25B: call    unknown_libname_90
0x99A260: or      edi, eax
0x99A262: lea     eax, [esi+88h]
0x99A268: push    eax
0x99A269: push    40h ; '@'
0x99A26B: push    [ebp+var_4]
0x99A26E: push    ebx
0x99A26F: lea     eax, [ebp+var_10]
0x99A272: push    eax
0x99A273: call    unknown_libname_90
0x99A278: or      edi, eax
0x99A27A: lea     eax, [esi+8Ch]
0x99A280: push    eax
0x99A281: push    41h ; 'A'
0x99A283: push    [ebp+var_4]
0x99A286: lea     eax, [ebp+var_10]
0x99A289: push    ebx
0x99A28A: push    eax
0x99A28B: call    unknown_libname_90
0x99A290: add     esp, 50h
0x99A293: or      edi, eax
0x99A295: lea     eax, [esi+90h]
0x99A29B: push    eax
0x99A29C: push    42h ; 'B'
0x99A29E: push    [ebp+var_4]
0x99A2A1: lea     eax, [ebp+var_10]
0x99A2A4: push    ebx
0x99A2A5: push    eax
0x99A2A6: call    unknown_libname_90
0x99A2AB: or      edi, eax
0x99A2AD: lea     eax, [esi+94h]
0x99A2B3: push    eax
0x99A2B4: push    43h ; 'C'
0x99A2B6: push    [ebp+var_4]
0x99A2B9: lea     eax, [ebp+var_10]
0x99A2BC: push    ebx
0x99A2BD: push    eax
0x99A2BE: call    unknown_libname_90
0x99A2C3: or      edi, eax
0x99A2C5: lea     eax, [esi+98h]
0x99A2CB: push    eax
0x99A2CC: push    28h ; '('
0x99A2CE: push    [ebp+var_4]
0x99A2D1: lea     eax, [ebp+var_10]
0x99A2D4: push    ebx
0x99A2D5: push    eax
0x99A2D6: call    unknown_libname_90
0x99A2DB: or      edi, eax
0x99A2DD: lea     eax, [esi+9Ch]
0x99A2E3: push    eax
0x99A2E4: push    29h ; ')'
0x99A2E6: push    [ebp+var_4]
0x99A2E9: lea     eax, [ebp+var_10]
0x99A2EC: push    ebx
0x99A2ED: push    eax
0x99A2EE: call    unknown_libname_90
0x99A2F3: add     esp, 50h
0x99A2F6: or      edi, eax
0x99A2F8: lea     eax, [esi+0A0h]
0x99A2FE: push    eax
0x99A2FF: push    1Fh
0x99A301: push    [ebp+var_8]
0x99A304: lea     eax, [ebp+var_10]
0x99A307: push    ebx
0x99A308: push    eax
0x99A309: call    unknown_libname_90
0x99A30E: or      edi, eax
0x99A310: lea     eax, [esi+0A4h]
0x99A316: push    eax
0x99A317: push    20h ; ' '
0x99A319: push    [ebp+var_8]
0x99A31C: lea     eax, [ebp+var_10]
0x99A31F: push    ebx
0x99A320: push    eax
0x99A321: call    unknown_libname_90
0x99A326: or      edi, eax
0x99A328: lea     eax, [esi+0A8h]
0x99A32E: push    eax
0x99A32F: push    1003h
0x99A334: push    [ebp+var_8]
0x99A337: lea     eax, [ebp+var_10]
0x99A33A: push    ebx
0x99A33B: push    eax
0x99A33C: call    unknown_libname_90
0x99A341: or      edi, eax
0x99A343: lea     eax, [esi+0B0h]
0x99A349: push    eax
0x99A34A: push    1009h
0x99A34F: mov     ebx, [ebp+var_8]
0x99A352: push    ebx
0x99A353: lea     eax, [ebp+var_10]
0x99A356: push    0
0x99A358: push    eax
0x99A359: call    unknown_libname_90
0x99A35E: add     esp, 50h
0x99A361: or      edi, eax
0x99A363: mov     eax, edi
0x99A365: pop     edi
0x99A366: mov     [esi+0ACh], ebx
0x99A36C: pop     ebx
0x99A36D: leave
0x99A36E: retn
