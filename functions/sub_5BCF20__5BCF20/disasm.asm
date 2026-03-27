0x5BCF20: sub     esp, 130h
0x5BCF26: mov     eax, ds:0B30AACh
0x5BCF2B: xor     eax, esp
0x5BCF2D: mov     [esp+130h+var_4], eax
0x5BCF34: mov     eax, ds:0B3B410h
0x5BCF39: push    ebx
0x5BCF3A: push    esi
0x5BCF3B: push    edi
0x5BCF3C: push    eax
0x5BCF3D: mov     esi, ecx
0x5BCF3F: call    sub_597CA0
0x5BCF44: mov     ecx, [esi+50h]
0x5BCF47: add     esp, 4
0x5BCF4A: push    ecx
0x5BCF4B: mov     ecx, ds:0B333C4h
0x5BCF51: call    Player_GetActorBarterFactor?
0x5BCF56: fmul    qword ptr ds:0A309F0h
0x5BCF5C: call    Double_To_SInt32
0x5BCF61: mov     edx, [esi+50h]
0x5BCF64: mov     ecx, ds:0B333C4h; this
0x5BCF6A: push    edx; targetNpc
0x5BCF6B: mov     ebx, eax
0x5BCF6D: call    calculateItemMultiplicationFromDisposition
0x5BCF72: fmul    qword ptr ds:0A309F0h
0x5BCF78: call    Double_To_SInt32
0x5BCF7D: mov     edi, eax
0x5BCF7F: mov     eax, ds:0B3B410h
0x5BCF84: test    eax, eax
0x5BCF86: jz      short loc_5BCF8C
0x5BCF88: sub     ebx, eax
0x5BCF8A: add     edi, eax
0x5BCF8C: cmp     ebx, 64h ; 'd'
0x5BCF8F: jge     short loc_5BCF96
0x5BCF91: mov     ebx, 64h ; 'd'
0x5BCF96: cmp     edi, 64h ; 'd'
0x5BCF99: jle     short loc_5BCFA0
0x5BCF9B: mov     edi, 64h ; 'd'
0x5BCFA0: mov     ecx, [esi+40h]
0x5BCFA3: push    0FB0h
0x5BCFA8: call    sub_588C10
0x5BCFAD: mov     ecx, [esi+40h]
0x5BCFB0: push    eax
0x5BCFB1: push    ebx
0x5BCFB2: push    0FAFh
0x5BCFB7: call    sub_588C10
0x5BCFBC: push    eax
0x5BCFBD: lea     eax, [esp+148h+var_130]
0x5BCFC1: push    offset aSIS; "%s %i %s"
0x5BCFC6: push    eax
0x5BCFC7: call    __sprintf
0x5BCFCC: add     esp, 14h
0x5BCFCF: lea     ecx, [esp+13Ch+var_130]
0x5BCFD3: push    ecx
0x5BCFD4: mov     ecx, [esi+40h]
0x5BCFD7: push    0FDEh
0x5BCFDC: call    Tile_SetString
0x5BCFE1: mov     ecx, [esi+44h]
0x5BCFE4: push    0FB0h
0x5BCFE9: call    sub_588C10
0x5BCFEE: mov     ecx, [esi+44h]
0x5BCFF1: push    eax
0x5BCFF2: push    edi
0x5BCFF3: push    0FAFh
0x5BCFF8: call    sub_588C10
0x5BCFFD: push    eax
0x5BCFFE: lea     edx, [esp+148h+var_130]
0x5BD002: push    offset aSIS; "%s %i %s"
0x5BD007: push    edx
0x5BD008: call    __sprintf
0x5BD00D: mov     ecx, [esi+44h]
0x5BD010: add     esp, 14h
0x5BD013: lea     eax, [esp+13Ch+var_130]
0x5BD017: push    eax
0x5BD018: push    0FDEh
0x5BD01D: call    Tile_SetString
0x5BD022: mov     ecx, [esp+13Ch+var_4]
0x5BD029: pop     edi
0x5BD02A: pop     esi
0x5BD02B: pop     ebx
0x5BD02C: xor     ecx, esp
0x5BD02E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5BD033: add     esp, 130h
0x5BD039: retn
