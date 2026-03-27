0x6B00F6: fld     [esp+arg_28]; jumptable 006B00A4 default case
0x6B00FA: fld     [esp+arg_34]
0x6B00FE: fcom    st(1)
0x6B0100: fnstsw  ax
0x6B0102: test    ah, 41h
0x6B0105: jnz     short loc_6B010F
0x6B0107: fxch    st(1)
0x6B0109: fst     [esp+arg_C]
0x6B010D: jmp     short loc_6B0115
0x6B010F: fst     [esp+arg_C]
0x6B0113: fxch    st(1)
0x6B0115: fcom    st(1)
0x6B0117: fnstsw  ax
0x6B0119: test    ah, 41h
0x6B011C: jnz     short loc_6B0124
0x6B011E: fst     [esp+arg_4]
0x6B0122: jmp     short loc_6B012C
0x6B0124: fxch    st(1)
0x6B0126: fst     [esp+arg_4]
0x6B012A: fxch    st(1)
0x6B012C: fcom    st(1)
0x6B012E: fnstsw  ax
0x6B0130: test    ah, 5
0x6B0133: jp      short loc_6B0139
0x6B0135: fstp    st(1)
0x6B0137: jmp     short loc_6B013B
0x6B0139: fstp    st
0x6B013B: fstp    [esp+arg_8]
0x6B013F: fld     [esp+arg_4]
0x6B0143: fsub    [esp+arg_8]
0x6B0147: fld     qword ptr ds:0A2FAA0h
0x6B014D: fmul    st(1), st
0x6B014F: fld     [esp+arg_C]
0x6B0153: faddp   st(2), st
0x6B0155: fxch    st(1)
0x6B0157: fstp    [esp+arg_10]
0x6B015B: fld     [esp+arg_2C]
0x6B015F: fld     [esp+arg_38]
0x6B0163: fcom    st(1)
0x6B0165: fnstsw  ax
0x6B0167: test    ah, 41h
0x6B016A: jnz     short loc_6B0174
0x6B016C: fxch    st(1)
0x6B016E: fst     [esp+arg_4]
0x6B0172: jmp     short loc_6B017A
0x6B0174: fst     [esp+arg_4]
0x6B0178: fxch    st(1)
0x6B017A: fcom    st(1)
0x6B017C: fnstsw  ax
0x6B017E: test    ah, 41h
0x6B0181: jnz     short loc_6B0189
0x6B0183: fst     [esp+arg_C]
0x6B0187: jmp     short loc_6B0191
0x6B0189: fxch    st(1)
0x6B018B: fst     [esp+arg_C]
0x6B018F: fxch    st(1)
0x6B0191: fcom    st(1)
0x6B0193: fnstsw  ax
0x6B0195: test    ah, 5
0x6B0198: jp      short loc_6B019E
0x6B019A: fstp    st(1)
0x6B019C: jmp     short loc_6B01A0
0x6B019E: fstp    st
0x6B01A0: fstp    [esp+arg_8]
0x6B01A4: fld     [esp+arg_C]
0x6B01A8: fsub    [esp+arg_8]
0x6B01AC: fmul    st, st(1)
0x6B01AE: fadd    [esp+arg_4]
0x6B01B2: fstp    [esp+arg_14]
0x6B01B6: fld     [esp+arg_30]
0x6B01BA: fld     [esp+arg_3C]
0x6B01BE: fcom    st(1)
0x6B01C0: fnstsw  ax
0x6B01C2: test    ah, 41h
0x6B01C5: jnz     short loc_6B01CF
0x6B01C7: fxch    st(1)
0x6B01C9: fst     [esp+arg_4]
0x6B01CD: jmp     short loc_6B01D5
0x6B01CF: fst     [esp+arg_4]
0x6B01D3: fxch    st(1)
0x6B01D5: fcom    st(1)
0x6B01D7: fnstsw  ax
0x6B01D9: test    ah, 41h
0x6B01DC: jnz     short loc_6B01E4
0x6B01DE: fst     [esp+arg_C]
0x6B01E2: jmp     short loc_6B01EC
0x6B01E4: fxch    st(1)
0x6B01E6: fst     [esp+arg_C]
0x6B01EA: fxch    st(1)
0x6B01EC: fcom    st(1)
0x6B01EE: fnstsw  ax
0x6B01F0: test    ah, 5
0x6B01F3: jp      short loc_6B01F9
0x6B01F5: fstp    st(1)
0x6B01F7: jmp     short loc_6B01FB
0x6B01F9: fstp    st
0x6B01FB: test    esi, esi
0x6B01FD: fstp    [esp+arg_8]
0x6B0201: fld     [esp+arg_C]
0x6B0205: fsub    [esp+arg_8]
0x6B0209: fmulp   st(1), st
0x6B020B: fadd    [esp+arg_4]
0x6B020F: fstp    [esp+arg_18]
0x6B0213: jz      short loc_6B0277
0x6B0215: fld     [esp+arg_18]
0x6B0219: sub     esp, 0Ch
0x6B021C: fstp    [esp+0Ch+var_4]; float
0x6B0220: mov     ecx, esi
0x6B0222: fld     [esp+0Ch+arg_14]
0x6B0226: fstp    [esp+0Ch+var_8]; float
0x6B022A: fld     [esp+0Ch+arg_10]
0x6B022E: fstp    [esp+0Ch+var_C]; float
0x6B0231: call    sub_6B7360
0x6B0236: fld     dword ptr ds:0A52A74h
0x6B023C: push    ecx
0x6B023D: mov     ecx, esi
0x6B023F: fstp    [esp+4+var_4]; float
0x6B0242: call    sub_6B7280
0x6B0247: fld     dword ptr ds:0A57F50h
0x6B024D: push    ecx
0x6B024E: fstp    [esp+4+var_4]; float
0x6B0251: call    Rand5
0x6B0256: fadd    qword ptr ds:0A2F928h
0x6B025C: mov     ecx, esi
0x6B025E: fstp    [esp+4+arg_C]
0x6B0262: fld     [esp+4+arg_C]
0x6B0266: fstp    [esp+4+var_4]; float
0x6B0269: call    sub_6B7310
0x6B026E: push    0
0x6B0270: mov     ecx, esi
0x6B0272: call    sub_6B7190
0x6B0277: test    edi, edi
0x6B0279: jz      short loc_6B02DD
0x6B027B: fld     [esp+arg_18]
0x6B027F: sub     esp, 0Ch
0x6B0282: fstp    [esp+0Ch+var_4]; float
0x6B0286: mov     ecx, edi
0x6B0288: fld     [esp+0Ch+arg_14]
0x6B028C: fstp    [esp+0Ch+var_8]; float
0x6B0290: fld     [esp+0Ch+arg_10]
0x6B0294: fstp    [esp+0Ch+var_C]; float
0x6B0297: call    sub_6B7360
0x6B029C: fld     dword ptr ds:0A52A74h
0x6B02A2: push    ecx
0x6B02A3: mov     ecx, edi
0x6B02A5: fstp    [esp+4+var_4]; float
0x6B02A8: call    sub_6B7280
0x6B02AD: fld     dword ptr ds:0A57F50h
0x6B02B3: push    ecx
0x6B02B4: fstp    [esp+4+var_4]; float
0x6B02B7: call    Rand5
0x6B02BC: fadd    qword ptr ds:0A2F928h
0x6B02C2: mov     ecx, edi
0x6B02C4: fstp    [esp+4+arg_C]
0x6B02C8: fld     [esp+4+arg_C]
0x6B02CC: fstp    [esp+4+var_4]; float
0x6B02CF: call    sub_6B7310
0x6B02D4: push    0
0x6B02D6: mov     ecx, edi
0x6B02D8: call    sub_6B7190
0x6B02DD: test    esi, esi
0x6B02DF: jz      short loc_6B02F1
0x6B02E1: mov     ecx, esi; this
0x6B02E3: call    sub_6B73E0
0x6B02E8: push    esi
0x6B02E9: call    FormHeapFree
0x6B02EE: add     esp, 4
0x6B02F1: test    edi, edi
0x6B02F3: jz      short loc_6B0305
0x6B02F5: mov     ecx, edi; this
0x6B02F7: call    sub_6B73E0
0x6B02FC: push    edi
0x6B02FD: call    FormHeapFree
0x6B0302: add     esp, 4
0x6B0305: pop     edi
0x6B0306: pop     esi
0x6B0307: add     esp, 18h
0x6B030A: retn
