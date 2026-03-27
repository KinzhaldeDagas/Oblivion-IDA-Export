0x89CD00: sub     esp, 44h
0x89CD03: push    ebx
0x89CD04: mov     ebx, ecx
0x89CD06: mov     eax, [ebx+88h]
0x89CD0C: mov     ecx, [ebx+8Ch]
0x89CD12: add     ecx, eax
0x89CD14: jz      short loc_89CD44
0x89CD16: mov     edx, [esp+48h+arg_0]
0x89CD1A: mov     ax, word ptr [esp+48h+arg_4]
0x89CD1F: lea     ecx, [esp+48h+var_3C]
0x89CD23: push    ecx
0x89CD24: mov     ecx, [ebx+80h]
0x89CD2A: mov     byte ptr [esp+4Ch+var_3C], 0Fh
0x89CD2F: mov     [esp+4Ch+var_38], edx
0x89CD33: mov     word ptr [esp+4Ch+var_34], ax
0x89CD38: call    sub_8D8830
0x89CD3D: pop     ebx
0x89CD3E: add     esp, 44h
0x89CD41: retn    8
0x89CD44: mov     ecx, large fs:2Ch
0x89CD4B: mov     edx, ds:0BA9DE4h
0x89CD51: inc     eax
0x89CD52: push    edi
0x89CD53: mov     edi, [ecx+edx*4]
0x89CD56: mov     [ebx+88h], eax
0x89CD5C: mov     ecx, [edi+19Ch]
0x89CD62: xor     eax, eax
0x89CD64: cmp     ecx, eax
0x89CD66: mov     [esp+4Ch+var_10], eax
0x89CD6A: mov     [esp+4Ch+var_C], eax
0x89CD6E: mov     [esp+4Ch+var_8], 80000000h
0x89CD76: mov     [esp+4Ch+var_40], edi
0x89CD7A: jnz     short loc_89CD82
0x89CD7C: mov     ecx, ds:0BA7D9Ch
0x89CD82: mov     edx, [ecx+20h]
0x89CD85: push    ebp
0x89CD86: push    esi
0x89CD87: mov     esi, [esp+54h+arg_4]
0x89CD8B: lea     eax, ds:10h[esi*4]
0x89CD92: and     eax, 0FFFFFFF0h
0x89CD95: lea     ebp, [edx+eax]
0x89CD98: cmp     ebp, [ecx+2Ch]
0x89CD9B: ja      short loc_89CDA4
0x89CD9D: mov     [ecx+20h], ebp
0x89CDA0: mov     eax, edx
0x89CDA2: jmp     short loc_89CDAA
0x89CDA4: mov     edx, [ecx]
0x89CDA6: push    eax
0x89CDA7: call    dword ptr [edx+0Ch]
0x89CDAA: mov     ecx, [edi+19Ch]
0x89CDB0: mov     [esp+54h+var_10], eax
0x89CDB4: mov     ebp, esi
0x89CDB6: mov     [esp+54h+var_4], eax
0x89CDBA: xor     eax, eax
0x89CDBC: or      ebp, 80000000h
0x89CDC2: cmp     ecx, eax
0x89CDC4: mov     [esp+54h+var_8], ebp
0x89CDC8: mov     [esp+54h+var_20], eax
0x89CDCC: mov     [esp+54h+var_1C], eax
0x89CDD0: mov     [esp+54h+var_18], 80000000h
0x89CDD8: jnz     short loc_89CDE0
0x89CDDA: mov     ecx, ds:0BA7D9Ch
0x89CDE0: mov     edx, [ecx+20h]
0x89CDE3: mov     eax, esi
0x89CDE5: shl     eax, 5
0x89CDE8: add     eax, 10h
0x89CDEB: and     eax, 0FFFFFFF0h
0x89CDEE: lea     edi, [edx+eax]
0x89CDF1: cmp     edi, [ecx+2Ch]
0x89CDF4: ja      short loc_89CDFD
0x89CDF6: mov     [ecx+20h], edi
0x89CDF9: mov     eax, edx
0x89CDFB: jmp     short loc_89CE03
0x89CDFD: mov     edx, [ecx]
0x89CDFF: push    eax
0x89CE00: call    dword ptr [edx+0Ch]
0x89CE03: mov     [esp+54h+var_18], ebp
0x89CE07: xor     ebp, ebp
0x89CE09: test    esi, esi
0x89CE0B: mov     [esp+54h+var_20], eax
0x89CE0F: mov     [esp+54h+var_14], eax
0x89CE13: mov     [esp+54h+var_1C], esi
0x89CE17: mov     [esp+54h+var_C], esi
0x89CE1B: jle     loc_89CEC1
0x89CE21: lea     edi, [ebx+0B8h]
0x89CE27: mov     [esp+54h+var_44], ebp
0x89CE2B: jmp     short loc_89CE30
0x89CE2D: align 10h
0x89CE30: mov     eax, [esp+54h+arg_0]
0x89CE34: mov     esi, [eax+ebp*4]
0x89CE37: mov     eax, [esi+1Ch]
0x89CE3A: test    eax, eax
0x89CE3C: jnz     short loc_89CE48
0x89CE3E: mov     edx, [esi]
0x89CE40: mov     ecx, esi
0x89CE42: call    dword ptr [edx+0Ch]
0x89CE45: mov     [esi+1Ch], eax
0x89CE48: mov     [esi+8], ebx
0x89CE4B: mov     ecx, [esp+54h+var_10]
0x89CE4F: lea     eax, [esi+28h]
0x89CE52: mov     [ecx+ebp*4], eax
0x89CE55: mov     eax, [esp+54h+var_20]
0x89CE59: mov     ecx, [esp+54h+var_44]
0x89CE5D: mov     edx, [esi]
0x89CE5F: add     ecx, eax
0x89CE61: push    ecx
0x89CE62: mov     ecx, esi
0x89CE64: call    dword ptr [edx+14h]
0x89CE67: mov     ecx, esi
0x89CE69: call    sub_8BC720
0x89CE6E: mov     edx, [edi+8]
0x89CE71: mov     eax, [edi+4]
0x89CE74: and     edx, 3FFFFFFFh
0x89CE7A: cmp     eax, edx
0x89CE7C: jnz     short loc_89CE89
0x89CE7E: push    4
0x89CE80: push    edi
0x89CE81: call    sub_8A6EE0
0x89CE86: add     esp, 8
0x89CE89: mov     eax, [edi+4]
0x89CE8C: mov     ecx, [edi]
0x89CE8E: mov     [ecx+eax*4], esi
0x89CE91: mov     eax, [edi+4]
0x89CE94: inc     eax
0x89CE95: push    esi
0x89CE96: push    ebx
0x89CE97: mov     [edi+4], eax
0x89CE9A: call    sub_8DC530
0x89CE9F: add     esp, 8
0x89CEA2: mov     ecx, esi
0x89CEA4: call    sub_8DE590
0x89CEA9: mov     ecx, [esp+54h+var_44]
0x89CEAD: mov     eax, [esp+54h+arg_4]
0x89CEB1: inc     ebp
0x89CEB2: add     ecx, 20h ; ' '
0x89CEB5: cmp     ebp, eax
0x89CEB7: mov     [esp+54h+var_44], ecx
0x89CEBB: jl      loc_89CE30
0x89CEC1: mov     edi, [esp+54h+var_40]
0x89CEC5: mov     ecx, [edi+19Ch]
0x89CECB: mov     esi, [ebx+2A4h]
0x89CED1: xor     eax, eax
0x89CED3: cmp     ecx, eax
0x89CED5: mov     [esp+54h+var_30], eax
0x89CED9: mov     [esp+54h+var_2C], eax
0x89CEDD: mov     [esp+54h+var_28], 80000000h
0x89CEE5: jnz     short loc_89CEED
0x89CEE7: mov     ecx, ds:0BA7D9Ch
0x89CEED: mov     edx, [ecx+20h]
0x89CEF0: lea     eax, ds:10h[esi*8]
0x89CEF7: and     eax, 0FFFFFFF0h
0x89CEFA: lea     ebp, [edx+eax]
0x89CEFD: cmp     ebp, [ecx+2Ch]
0x89CF00: ja      short loc_89CF09
0x89CF02: mov     [ecx+20h], ebp
0x89CF05: mov     eax, edx
0x89CF07: jmp     short loc_89CF0F
0x89CF09: mov     edx, [ecx]
0x89CF0B: push    eax
0x89CF0C: call    dword ptr [edx+0Ch]
0x89CF0F: mov     ecx, [ebx+64h]
0x89CF12: lea     edx, [esp+54h+var_30]
0x89CF16: push    edx
0x89CF17: lea     edx, [esp+58h+var_20]
0x89CF1B: push    edx
0x89CF1C: or      esi, 80000000h
0x89CF22: lea     edx, [esp+5Ch+var_10]
0x89CF26: mov     [esp+5Ch+var_30], eax
0x89CF2A: mov     [esp+5Ch+var_28], esi
0x89CF2E: mov     [esp+5Ch+var_24], eax
0x89CF32: mov     eax, [ecx]
0x89CF34: push    edx
0x89CF35: call    dword ptr [eax+0Ch]
0x89CF38: mov     eax, [ebx+78h]
0x89CF3B: test    eax, eax
0x89CF3D: pop     esi
0x89CF3E: pop     ebp
0x89CF3F: jz      short loc_89CF46
0x89CF41: add     eax, 8
0x89CF44: jmp     short loc_89CF48
0x89CF46: xor     eax, eax
0x89CF48: mov     ecx, [esp+4Ch+var_30]
0x89CF4C: push    eax
0x89CF4D: mov     eax, [esp+50h+var_2C]
0x89CF51: push    eax
0x89CF52: push    ecx
0x89CF53: mov     ecx, [ebx+68h]
0x89CF56: call    sub_8D8370
0x89CF5B: dec     dword ptr [ebx+88h]
0x89CF61: jnz     short loc_89CF7E
0x89CF63: mov     eax, [ebx+84h]
0x89CF69: test    eax, eax
0x89CF6B: jz      short loc_89CF7E
0x89CF6D: mov     al, [ebx+90h]
0x89CF73: test    al, al
0x89CF75: jnz     short loc_89CF7E
0x89CF77: mov     ecx, ebx
0x89CF79: call    sub_899210
0x89CF7E: mov     ecx, [edi+19Ch]
0x89CF84: test    ecx, ecx
0x89CF86: mov     eax, [esp+4Ch+var_24]
0x89CF8A: jnz     short loc_89CF92
0x89CF8C: mov     ecx, ds:0BA7D9Ch
0x89CF92: cmp     eax, [ecx+28h]
0x89CF95: mov     [ecx+20h], eax
0x89CF98: jnz     short loc_89CFA0
0x89CF9A: mov     edx, [ecx]
0x89CF9C: push    eax
0x89CF9D: call    dword ptr [edx+10h]
0x89CFA0: mov     eax, [esp+4Ch+var_28]
0x89CFA4: test    eax, eax
0x89CFA6: js      short loc_89CFCD
0x89CFA8: mov     ecx, [edi+19Ch]
0x89CFAE: test    ecx, ecx
0x89CFB0: jnz     short loc_89CFB8
0x89CFB2: mov     ecx, ds:0BA7D9Ch
0x89CFB8: and     eax, 3FFFFFFFh
0x89CFBD: push    14h
0x89CFBF: shl     eax, 3
0x89CFC2: push    eax
0x89CFC3: mov     eax, [esp+54h+var_30]
0x89CFC7: push    eax
0x89CFC8: call    sub_8A75D0
0x89CFCD: mov     ecx, [edi+19Ch]
0x89CFD3: test    ecx, ecx
0x89CFD5: mov     eax, [esp+4Ch+var_14]
0x89CFD9: jnz     short loc_89CFE1
0x89CFDB: mov     ecx, ds:0BA7D9Ch
0x89CFE1: cmp     eax, [ecx+28h]
0x89CFE4: mov     [ecx+20h], eax
0x89CFE7: jnz     short loc_89CFEF
0x89CFE9: mov     edx, [ecx]
0x89CFEB: push    eax
0x89CFEC: call    dword ptr [edx+10h]
0x89CFEF: mov     eax, [esp+4Ch+var_18]
0x89CFF3: test    eax, eax
0x89CFF5: js      short loc_89D01C
0x89CFF7: mov     ecx, [edi+19Ch]
0x89CFFD: test    ecx, ecx
0x89CFFF: jnz     short loc_89D007
0x89D001: mov     ecx, ds:0BA7D9Ch
0x89D007: and     eax, 3FFFFFFFh
0x89D00C: push    14h
0x89D00E: shl     eax, 5
0x89D011: push    eax
0x89D012: mov     eax, [esp+54h+var_20]
0x89D016: push    eax
0x89D017: call    sub_8A75D0
0x89D01C: mov     ecx, [edi+19Ch]
0x89D022: test    ecx, ecx
0x89D024: mov     eax, [esp+4Ch+var_4]
0x89D028: jnz     short loc_89D030
0x89D02A: mov     ecx, ds:0BA7D9Ch
0x89D030: cmp     eax, [ecx+28h]
0x89D033: mov     [ecx+20h], eax
0x89D036: jnz     short loc_89D03E
0x89D038: mov     edx, [ecx]
0x89D03A: push    eax
0x89D03B: call    dword ptr [edx+10h]
0x89D03E: mov     eax, [esp+4Ch+var_8]
0x89D042: test    eax, eax
0x89D044: js      short loc_89D06B
0x89D046: mov     ecx, [edi+19Ch]
0x89D04C: test    ecx, ecx
0x89D04E: jnz     short loc_89D056
0x89D050: mov     ecx, ds:0BA7D9Ch
0x89D056: and     eax, 3FFFFFFFh
0x89D05B: push    14h
0x89D05D: shl     eax, 2
0x89D060: push    eax
0x89D061: mov     eax, [esp+54h+var_10]
0x89D065: push    eax
0x89D066: call    sub_8A75D0
0x89D06B: pop     edi
0x89D06C: pop     ebx
0x89D06D: add     esp, 44h
0x89D070: retn    8
