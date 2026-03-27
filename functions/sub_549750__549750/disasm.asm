0x549750: push    0FFFFFFFFh
0x549752: push    offset SEH_549750
0x549757: mov     eax, large fs:0
0x54975D: push    eax
0x54975E: sub     esp, 28h
0x549761: push    esi
0x549762: mov     eax, ds:0B30AACh
0x549767: xor     eax, esp
0x549769: push    eax
0x54976A: lea     eax, [esp+3Ch+var_C]
0x54976E: mov     large fs:0, eax
0x549774: mov     esi, ecx
0x549776: cmp     byte ptr [esi+1DAh], 0
0x54977D: jnz     def_549790
0x549783: mov     eax, [esp+3Ch+arg_0]
0x549787: cmp     eax, 3; switch 4 cases
0x54978A: ja      def_549790
0x549790: jmp     ds:jpt_549790[eax*4]; switch jump
0x549797: push    0Dh; jumptable 00549790 case 1
0x549799: push    1
0x54979B: lea     ecx, [esp+44h+var_34]
0x54979F: call    sub_54EA00
0x5497A4: fld     [esp+3Ch+arg_4]
0x5497A8: push    ecx
0x5497A9: lea     ecx, [esp+40h+var_34]
0x5497AD: fstp    [esp+40h+var_40]; float
0x5497B0: mov     [esp+40h+var_4], 0
0x5497B8: call    sub_54E580
0x5497BD: add     esi, 24h ; '$'
0x5497C0: push    esi
0x5497C1: lea     ecx, [esp+40h+var_34]
0x5497C5: call    sub_54F350
0x5497CA: lea     ecx, [esp+3Ch+var_34]
0x5497CE: jmp     loc_549885
0x5497D3: push    11h; jumptable 00549790 case 2
0x5497D5: push    2
0x5497D7: lea     ecx, [esp+44h+var_34]
0x5497DB: call    sub_54EA00
0x5497E0: fld     [esp+3Ch+arg_4]
0x5497E4: push    ecx
0x5497E5: lea     ecx, [esp+40h+var_34]
0x5497E9: fstp    [esp+40h+var_40]; float
0x5497EC: mov     [esp+40h+var_4], 1
0x5497F4: call    sub_54E580
0x5497F9: add     esi, 80h ; '€'
0x5497FF: push    esi
0x549800: lea     ecx, [esp+40h+var_34]
0x549804: call    sub_54F350
0x549809: lea     ecx, [esp+3Ch+var_34]
0x54980D: jmp     short loc_549885
0x54980F: push    10h; jumptable 00549790 case 0
0x549811: push    0
0x549813: lea     ecx, [esp+44h+var_34]
0x549817: call    sub_54EA00
0x54981C: fld     [esp+3Ch+arg_4]
0x549820: push    ecx
0x549821: lea     ecx, [esp+40h+var_34]
0x549825: fstp    [esp+40h+var_40]; float
0x549828: mov     [esp+40h+var_4], 2
0x549830: call    sub_54E580
0x549835: add     esi, 0DCh ; 'Ü'
0x54983B: push    esi
0x54983C: lea     ecx, [esp+40h+var_34]
0x549840: call    sub_54F350
0x549845: lea     ecx, [esp+3Ch+var_34]
0x549849: jmp     short loc_549885
0x54984B: push    1; jumptable 00549790 case 3
0x54984D: push    3
0x54984F: lea     ecx, [esp+44h+var_20]
0x549853: call    sub_54EA00
0x549858: fld     [esp+3Ch+arg_4]
0x54985C: push    ecx
0x54985D: lea     ecx, [esp+40h+var_20]
0x549861: fstp    [esp+40h+var_40]; float
0x549864: mov     [esp+40h+var_4], 3
0x54986C: call    sub_54E580
0x549871: add     esi, 138h
0x549877: push    esi
0x549878: lea     ecx, [esp+40h+var_20]
0x54987C: call    sub_54F350
0x549881: lea     ecx, [esp+3Ch+var_20]; this
0x549885: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x54988D: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
