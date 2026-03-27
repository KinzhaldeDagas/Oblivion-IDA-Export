0x549240: mov     edx, [esp+arg_C]
0x549244: sub     esp, 44h
0x549247: push    ebx
0x549248: mov     ebx, [esp+48h+arg_4]
0x54924C: push    esi
0x54924D: mov     esi, ecx
0x54924F: mov     ecx, [esp+4Ch+arg_10]
0x549253: mov     eax, [esi]
0x549255: push    edi
0x549256: push    ecx
0x549257: mov     ecx, [esp+54h+arg_8]
0x54925B: push    edx
0x54925C: mov     edx, [eax+0B0h]
0x549262: push    ecx
0x549263: push    ebx
0x549264: mov     ecx, esi
0x549266: call    edx
0x549268: test    bl, bl
0x54926A: jz      short loc_5492AD
0x54926C: mov     eax, [esi+10h]
0x54926F: fldz
0x549271: mov     edx, [eax+10h]
0x549274: lea     edi, [esi+10h]
0x549277: push    ecx
0x549278: mov     ecx, edi
0x54927A: fstp    [esp+54h+var_54]
0x54927D: call    edx
0x54927F: fldz
0x549281: fcomp   [esp+50h+arg_0]
0x549285: fnstsw  ax
0x549287: test    ah, 5
0x54928A: jp      short loc_5492A2
0x54928C: fld1
0x54928E: mov     eax, [esi]
0x549290: mov     edx, [eax+0C8h]
0x549296: push    ecx
0x549297: fstp    [esp+54h+var_54]
0x54929A: push    0FFFFFFFFh
0x54929C: mov     ecx, esi
0x54929E: call    edx
0x5492A0: jmp     short loc_5492AD
0x5492A2: mov     eax, [edi]
0x5492A4: mov     edx, [eax+20h]
0x5492A7: push    1
0x5492A9: mov     ecx, edi
0x5492AB: call    edx
0x5492AD: cmp     byte ptr [esp+50h+arg_C], 0
0x5492B2: jz      loc_54935E
0x5492B8: mov     eax, [esi+6Ch]
0x5492BB: fldz
0x5492BD: mov     edx, [eax+10h]
0x5492C0: lea     edi, [esi+6Ch]
0x5492C3: push    ecx
0x5492C4: mov     ecx, edi
0x5492C6: fstp    [esp+54h+var_54]
0x5492C9: call    edx
0x5492CB: fldz
0x5492CD: fld     [esp+4Ch+arg_4]
0x5492D1: push    1
0x5492D3: fcom    st(1)
0x5492D5: fnstsw  ax
0x5492D7: fstp    st(1)
0x5492D9: test    ah, 41h
0x5492DC: jnz     short loc_54932A
0x5492DE: cmp     [esp+50h+arg_18], 0
0x5492E3: jz      short loc_549316
0x5492E5: lea     eax, [esp+50h+var_40]
0x5492E9: fstp    st
0x5492EB: push    11h
0x5492ED: push    eax
0x5492EE: call    sub_54F630
0x5492F3: fld1
0x5492F5: mov     edx, [esi]
0x5492F7: fst     [esp+58h+var_40]
0x5492FB: mov     edx, [edx+0A4h]
0x549301: fstp    [esp+58h+var_3C]
0x549305: fld     [esp+58h+arg_4]
0x549309: add     esp, 8
0x54930C: lea     eax, [esp+50h+var_40]
0x549310: fstp    [esp+50h+var_50]
0x549313: push    eax
0x549314: jmp     short loc_54935A
0x549316: mov     eax, [esi]
0x549318: mov     edx, [eax+0A8h]
0x54931E: push    ecx
0x54931F: fstp    [esp+54h+var_54]
0x549322: push    2
0x549324: mov     ecx, esi
0x549326: call    edx
0x549328: jmp     short loc_54935E
0x54932A: mov     eax, [edi]
0x54932C: fstp    st
0x54932E: mov     edx, [eax+20h]
0x549331: mov     ecx, edi
0x549333: call    edx
0x549335: cmp     [esp+50h+arg_14], 0
0x54933A: jz      short loc_54935E
0x54933C: fld1
0x54933E: mov     eax, [esi]
0x549340: mov     edx, [eax+64h]
0x549343: push    ecx
0x549344: fstp    [esp+54h+var_54]
0x549347: push    0
0x549349: mov     ecx, esi
0x54934B: call    edx
0x54934D: fld1
0x54934F: mov     eax, [esi]
0x549351: mov     edx, [eax+64h]
0x549354: push    ecx
0x549355: fstp    [esp+50h+var_50]
0x549358: push    1
0x54935A: mov     ecx, esi
0x54935C: call    edx
0x54935E: cmp     byte ptr [esp+50h+arg_8], 0
0x549363: jz      short loc_5493B0
0x549365: mov     eax, [esi+0C8h]
0x54936B: fldz
0x54936D: mov     edx, [eax+10h]
0x549370: lea     edi, [esi+0C8h]
0x549376: push    ecx
0x549377: mov     ecx, edi
0x549379: fstp    [esp+54h+var_54]
0x54937C: call    edx
0x54937E: fldz
0x549380: fld     [esp+4Ch+arg_4]
0x549384: push    1
0x549386: fcom    st(1)
0x549388: fnstsw  ax
0x54938A: fstp    st(1)
0x54938C: test    ah, 41h
0x54938F: jnz     short loc_5493A5
0x549391: mov     eax, [esi]
0x549393: mov     edx, [eax+0A8h]
0x549399: push    ecx
0x54939A: fstp    [esp+54h+var_54]
0x54939D: push    0
0x54939F: mov     ecx, esi
0x5493A1: call    edx
0x5493A3: jmp     short loc_5493B0
0x5493A5: mov     eax, [edi]
0x5493A7: fstp    st
0x5493A9: mov     edx, [eax+20h]
0x5493AC: mov     ecx, edi
0x5493AE: call    edx
0x5493B0: cmp     byte ptr [esp+50h+arg_10], 0
0x5493B5: jz      short loc_549409
0x5493B7: mov     eax, [esi+124h]
0x5493BD: fldz
0x5493BF: mov     edx, [eax+10h]
0x5493C2: lea     edi, [esi+124h]
0x5493C8: push    ecx
0x5493C9: mov     ecx, edi
0x5493CB: fstp    [esp+54h+var_54]
0x5493CE: call    edx
0x5493D0: fldz
0x5493D2: fld     [esp+4Ch+arg_4]
0x5493D6: push    1
0x5493D8: fcom    st(1)
0x5493DA: fnstsw  ax
0x5493DC: fstp    st(1)
0x5493DE: test    ah, 41h
0x5493E1: jnz     short loc_5493FE
0x5493E3: mov     eax, [esi]
0x5493E5: mov     edx, [eax+0A8h]
0x5493EB: push    ecx
0x5493EC: fstp    [esp+54h+var_54]
0x5493EF: push    3
0x5493F1: mov     ecx, esi
0x5493F3: call    edx
0x5493F5: pop     edi
0x5493F6: pop     esi
0x5493F7: pop     ebx
0x5493F8: add     esp, 44h
0x5493FB: retn    18h
0x5493FE: mov     eax, [edi]
0x549400: fstp    st
0x549402: mov     edx, [eax+20h]
0x549405: mov     ecx, edi
0x549407: call    edx
0x549409: pop     edi
0x54940A: pop     esi
0x54940B: pop     ebx
0x54940C: add     esp, 44h
0x54940F: retn    18h
