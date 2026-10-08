0x54CDD0: push    0FFFFFFFFh
0x54CDD2: push    offset SEH_54CDD0
0x54CDD7: mov     eax, large fs:0
0x54CDDD: push    eax
0x54CDDE: sub     esp, 13Ch
0x54CDE4: mov     eax, ds:0B30AACh
0x54CDE9: xor     eax, esp
0x54CDEB: mov     [esp+148h+var_10], eax
0x54CDF2: push    ebx
0x54CDF3: push    ebp
0x54CDF4: push    esi
0x54CDF5: push    edi
0x54CDF6: mov     eax, ds:0B30AACh
0x54CDFB: xor     eax, esp
0x54CDFD: push    eax
0x54CDFE: lea     eax, [esp+15Ch+var_C]
0x54CE05: mov     large fs:0, eax
0x54CE0B: push    0
0x54CE0D: mov     esi, ecx
0x54CE0F: or      ebx, 0FFFFFFFFh
0x54CE12: push    ebx
0x54CE13: lea     ecx, [esp+164h+var_13C]
0x54CE17: call    sub_54EA00
0x54CE1C: mov     eax, [esp+15Ch+arg_0]
0x54CE23: test    eax, eax
0x54CE25: mov     [esp+15Ch+var_4], 0
0x54CE30: jz      def_54CFCE
0x54CE36: lea     edx, [esp+15Ch+Str]
0x54CE3A: sub     edx, eax
0x54CE3C: lea     esp, [esp+0]
0x54CE40: mov     cl, [eax]
0x54CE42: mov     [edx+eax], cl
0x54CE45: add     eax, 1
0x54CE48: test    cl, cl
0x54CE4A: jnz     short loc_54CE40
0x54CE4C: cmp     [esp+15Ch+Str], 20h ; ' '
0x54CE51: lea     edi, [esp+15Ch+Str]
0x54CE55: jnz     short loc_54CE5F
0x54CE57: add     edi, 1
0x54CE5A: cmp     byte ptr [edi], 20h ; ' '
0x54CE5D: jz      short loc_54CE57
0x54CE5F: push    20h ; ' '; Val
0x54CE61: push    edi; Str
0x54CE62: call    _strchr
0x54CE67: mov     ebp, eax
0x54CE69: add     esp, 8
0x54CE6C: test    ebp, ebp
0x54CE6E: jz      def_54CFCE
0x54CE74: push    offset aClear; "Clear"
0x54CE79: push    edi; left
0x54CE7A: mov     byte ptr [ebp+0], 0
0x54CE7E: call    CRT_StricmpLocaleDispatch
0x54CE83: add     esp, 8
0x54CE86: test    eax, eax
0x54CE88: jnz     loc_54CFAB
0x54CE8E: cmp     byte ptr [ebp+1], 20h ; ' '
0x54CE92: lea     edi, [ebp+1]
0x54CE95: jnz     short loc_54CE9F
0x54CE97: add     edi, 1
0x54CE9A: cmp     byte ptr [edi], 20h ; ' '
0x54CE9D: jz      short loc_54CE97
0x54CE9F: push    20h ; ' '; Val
0x54CEA1: push    edi; Str
0x54CEA2: call    _strchr
0x54CEA7: mov     ebp, eax
0x54CEA9: add     esp, 8
0x54CEAC: test    ebp, ebp
0x54CEAE: jz      def_54CFCE
0x54CEB4: push    edi
0x54CEB5: mov     byte ptr [ebp+0], 0
0x54CEB9: call    sub_54F440
0x54CEBE: lea     edi, [ebp+1]
0x54CEC1: add     esp, 4
0x54CEC4: mov     [esp+15Ch+var_124], eax
0x54CEC8: cmp     byte ptr [edi], 20h ; ' '
0x54CECB: jnz     short loc_54CED8
0x54CECD: lea     ecx, [ecx+0]
0x54CED0: add     edi, 1
0x54CED3: cmp     byte ptr [edi], 20h ; ' '
0x54CED6: jz      short loc_54CED0
0x54CED8: push    20h ; ' '; Val
0x54CEDA: push    edi; Str
0x54CEDB: call    _strchr
0x54CEE0: add     esp, 8
0x54CEE3: test    eax, eax
0x54CEE5: jz      short loc_54CF0F
0x54CEE7: push    edi; String
0x54CEE8: call    _atof
0x54CEED: fstp    [esp+160h+var_148]
0x54CEF1: fldz
0x54CEF3: add     esp, 4
0x54CEF6: fld     [esp+15Ch+var_148]
0x54CEFA: fcom    st(1)
0x54CEFC: fnstsw  ax
0x54CEFE: test    ah, 5
0x54CF01: jp      short loc_54CF1F
0x54CF03: fstp    st
0x54CF05: fstp    [esp+15Ch+var_148]
0x54CF09: fld     [esp+15Ch+var_148]
0x54CF0D: jmp     short loc_54CF21
0x54CF0F: fld     dword ptr ds:0A3D65Ch
0x54CF15: fstp    [esp+15Ch+var_148]
0x54CF19: fld     [esp+15Ch+var_148]
0x54CF1D: jmp     short loc_54CF21
0x54CF1F: fstp    st(1)
0x54CF21: mov     eax, [esp+15Ch+var_124]
0x54CF25: cmp     eax, 3; switch 4 cases
0x54CF28: ja      short def_54CF2A
0x54CF2A: jmp     ds:jpt_54CF2A[eax*4]; switch jump
0x54CF31: mov     eax, [esi]; jumptable 0054CF2A case 1
0x54CF33: push    0
0x54CF35: push    0
0x54CF37: push    0
0x54CF39: push    1
0x54CF3B: mov     edx, [eax+80h]
0x54CF41: push    ecx
0x54CF42: mov     ecx, esi
0x54CF44: fstp    [esp+170h+var_170]
0x54CF47: call    edx
0x54CF83: mov     eax, [esi]; jumptable 0054CF2A case 2
0x54CF85: push    0
0x54CF87: push    0
0x54CF89: push    1
0x54CF8B: push    0
0x54CF8D: jmp     short loc_54CF3B
0x54CF8F: mov     eax, [esi]; jumptable 0054CF2A case 0
0x54CF91: push    0
0x54CF93: push    1
0x54CF95: push    0
0x54CF97: push    0
0x54CF99: jmp     short loc_54CF3B
0x54CF9B: mov     eax, [esi]; jumptable 0054CF2A case 3
0x54CF9D: push    1
0x54CF9F: push    0
0x54CFA1: push    0
0x54CFA3: push    0
0x54CFA5: jmp     short loc_54CF3B
0x54CFAB: lea     eax, [esp+15Ch+var_124]
0x54CFAF: push    eax
0x54CFB0: push    edi
0x54CFB1: call    sub_54F490
0x54CFB6: add     esp, 8
0x54CFB9: test    eax, eax
0x54CFBB: mov     [esp+15Ch+var_118], eax
0x54CFBF: jl      short def_54CFCE
0x54CFC1: mov     eax, [esp+15Ch+var_124]
0x54CFC5: cmp     eax, 3; switch 4 cases
0x54CFC8: ja      def_54CFCE
0x54CFCE: jmp     ds:jpt_54CFCE[eax*4]; switch jump
0x54CFD5: lea     ecx, [esi+24h]; jumptable 0054CFCE case 1
0x54CFD8: add     esi, 34h ; '4'
0x54CFDB: mov     ebx, 0Dh
0x54CFE0: jmp     short loc_54D021
0x54CFE2: lea     edx, [esi+80h]; jumptable 0054CFCE case 2
0x54CFE8: mov     [esp+15Ch+var_144], edx
0x54CFEC: add     esi, 90h
0x54CFF2: mov     ebx, 11h
0x54CFF7: jmp     short loc_54D025
0x54CFF9: lea     eax, [esi+0DCh]; jumptable 0054CFCE case 0
0x54CFFF: mov     [esp+15Ch+var_144], eax
0x54D003: add     esi, 0ECh ; 'ì'
0x54D009: mov     ebx, 10h
0x54D00E: jmp     short loc_54D025
0x54D010: lea     ecx, [esi+138h]; jumptable 0054CFCE case 3
0x54D016: add     esi, 148h
0x54D01C: mov     ebx, 1
0x54D021: mov     [esp+15Ch+var_144], ecx
0x54D025: cmp     [esp+15Ch+var_144], 0
0x54D02A: mov     [esp+15Ch+var_140], esi
0x54D02E: jz      short loc_54D07E
0x54D030: test    esi, esi
0x54D032: jz      short loc_54D07E
0x54D034: cmp     byte ptr [ebp+1], 20h ; ' '
0x54D038: lea     esi, [ebp+1]
0x54D03B: jnz     short loc_54D048
0x54D03D: lea     ecx, [ecx+0]
0x54D040: add     esi, 1
0x54D043: cmp     byte ptr [esi], 20h ; ' '
0x54D046: jz      short loc_54D040
0x54D048: push    20h ; ' '; Val
0x54D04A: push    esi; Str
0x54D04B: call    _strchr
0x54D050: mov     edi, eax
0x54D052: xor     ebp, ebp
0x54D054: add     esp, 8
0x54D057: cmp     edi, ebp
0x54D059: jz      short loc_54D07E
0x54D05B: push    esi; String
0x54D05C: mov     byte ptr [edi], 0
0x54D05F: call    _atof
0x54D064: fstp    [esp+160h+var_128]
0x54D068: fldz
0x54D06A: add     esp, 4
0x54D06D: fld     [esp+15Ch+var_128]
0x54D071: fcom    st(1)
0x54D073: fnstsw  ax
0x54D075: fstp    st(1)
0x54D077: test    ah, 5
0x54D07A: jp      short loc_54D08E
0x54D07C: fstp    st
0x54D07E: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x54D089: jmp     loc_54CF50
0x54D08E: fld1
0x54D090: fcom    st(1)
0x54D092: fnstsw  ax
0x54D094: fstp    st(1)
0x54D096: test    ah, 5
0x54D099: jp      short loc_54D0A1
0x54D09B: fstp    [esp+15Ch+var_128]
0x54D09F: jmp     short loc_54D0A3
0x54D0A1: fstp    st
0x54D0A3: cmp     byte ptr [edi+1], 20h ; ' '
0x54D0A7: lea     esi, [edi+1]
0x54D0AA: jnz     short loc_54D0B8
0x54D0AC: lea     esp, [esp+0]
0x54D0B0: add     esi, 1
0x54D0B3: cmp     byte ptr [esi], 20h ; ' '
0x54D0B6: jz      short loc_54D0B0
0x54D0B8: push    20h ; ' '; Val
0x54D0BA: push    esi; Str
0x54D0BB: call    _strchr
0x54D0C0: mov     edi, eax
0x54D0C2: add     esp, 8
0x54D0C5: cmp     edi, ebp
0x54D0C7: jz      short loc_54D07E
0x54D0C9: push    esi; String
0x54D0CA: mov     byte ptr [edi], 0
0x54D0CD: call    _atof
0x54D0D2: fstp    [esp+160h+var_11C]
0x54D0D6: fldz
0x54D0D8: add     esp, 4
0x54D0DB: fcomp   [esp+15Ch+var_11C]
0x54D0DF: fnstsw  ax
0x54D0E1: test    ah, 41h
0x54D0E4: jz      short loc_54D07E
0x54D0E6: add     edi, 1
0x54D0E9: push    20h ; ' '; Val
0x54D0EB: push    edi; Str
0x54D0EC: call    _strchr
0x54D0F1: mov     esi, eax
0x54D0F3: add     esp, 8
0x54D0F6: cmp     esi, ebp
0x54D0F8: jz      short loc_54D07E
0x54D0FA: push    edi; String
0x54D0FB: mov     byte ptr [esi], 0
0x54D0FE: call    _atof
0x54D103: fstp    [esp+160h+var_148]
0x54D107: fldz
0x54D109: add     esp, 4
0x54D10C: fcomp   [esp+15Ch+var_148]
0x54D110: fnstsw  ax
0x54D112: test    ah, 41h
0x54D115: jz      loc_54D07E
0x54D11B: add     esi, 1
0x54D11E: cmp     byte ptr [esi], 20h ; ' '
0x54D121: jnz     short loc_54D12B
0x54D123: add     esi, 1
0x54D126: cmp     byte ptr [esi], 20h ; ' '
0x54D129: jz      short loc_54D123
0x54D12B: push    20h ; ' '; Val
0x54D12D: push    esi; Str
0x54D12E: call    _strchr
0x54D133: add     esp, 8
0x54D136: cmp     eax, ebp
0x54D138: jz      short loc_54D13D
0x54D13A: mov     byte ptr [eax], 0
0x54D13D: push    esi; String
0x54D13E: call    _atof
0x54D143: fstp    [esp+160h+var_120]
0x54D147: fldz
0x54D149: add     esp, 4
0x54D14C: fcomp   [esp+15Ch+var_120]
0x54D150: fnstsw  ax
0x54D152: test    ah, 41h
0x54D155: jz      loc_54D07E
0x54D15B: push    10h; Size
0x54D15D: call    FormHeapAlloc
0x54D162: add     esp, 4
0x54D165: cmp     eax, ebp
0x54D167: jz      short loc_54D17C
0x54D169: mov     [eax+0Ch], ebp
0x54D16C: mov     [eax+4], ebp
0x54D16F: mov     [eax+8], ebp
0x54D172: mov     dword ptr [eax], offset ??_7?$NiTPointerList@PAVBSFaceGenKeyframe@@@@6B@; const NiTPointerList<BSFaceGenKeyframe *>::`vftable'
0x54D178: mov     esi, eax
0x54D17A: jmp     short loc_54D17E
0x54D17C: xor     esi, esi
0x54D17E: mov     edx, [esp+15Ch+var_124]
0x54D182: push    edx
0x54D183: lea     ecx, [esp+160h+var_13C]
0x54D187: call    sub_54E560
0x54D18C: push    ebp
0x54D18D: push    ebx
0x54D18E: lea     ecx, [esp+164h+var_13C]
0x54D192: call    sub_54E860
0x54D197: fld     [esp+15Ch+var_11C]
0x54D19B: push    ecx
0x54D19C: lea     ecx, [esp+160h+var_13C]
0x54D1A0: fstp    [esp+160h+var_160]; float
0x54D1A3: call    sub_54E580
0x54D1A8: fld     [esp+15Ch+var_128]
0x54D1AC: mov     edi, [esp+15Ch+var_118]
0x54D1B0: push    ecx
0x54D1B1: fstp    [esp+160h+var_160]; float
0x54D1B4: push    edi; int
0x54D1B5: lea     ecx, [esp+164h+var_13C]
0x54D1B9: call    sub_54A3E0
0x54D1BE: push    esi
0x54D1BF: lea     ecx, [esp+160h+var_13C]
0x54D1C3: call    sub_54F350
0x54D1C8: push    ebp
0x54D1C9: push    ebx
0x54D1CA: lea     ecx, [esp+164h+var_13C]
0x54D1CE: call    sub_54E860
0x54D1D3: fld     [esp+15Ch+var_148]
0x54D1D7: push    ecx
0x54D1D8: lea     ecx, [esp+160h+var_13C]
0x54D1DC: fstp    [esp+160h+var_160]; float
0x54D1DF: call    sub_54E580
0x54D1E4: fld     [esp+15Ch+var_128]
0x54D1E8: push    ecx
0x54D1E9: fstp    [esp+160h+var_160]; float
0x54D1EC: push    edi; int
0x54D1ED: lea     ecx, [esp+164h+var_13C]
0x54D1F1: call    sub_54A3E0
0x54D1F6: push    esi
0x54D1F7: lea     ecx, [esp+160h+var_13C]
0x54D1FB: call    sub_54F350
0x54D200: fldz
0x54D202: fcomp   [esp+15Ch+var_120]
0x54D206: fnstsw  ax
0x54D208: test    ah, 5
0x54D20B: jp      short loc_54D243
0x54D20D: push    ebp
0x54D20E: push    ebx
0x54D20F: lea     ecx, [esp+164h+var_13C]
0x54D213: call    sub_54E860
0x54D218: fld     [esp+15Ch+var_120]
0x54D21C: push    ecx
0x54D21D: lea     ecx, [esp+160h+var_13C]
0x54D221: fstp    [esp+160h+var_160]; float
0x54D224: call    sub_54E580
0x54D229: fldz
0x54D22B: push    ecx
0x54D22C: fstp    [esp+160h+var_160]; float
0x54D22F: push    edi; int
0x54D230: lea     ecx, [esp+164h+var_13C]
0x54D234: call    sub_54A3E0
0x54D239: push    esi
0x54D23A: lea     ecx, [esp+160h+var_13C]
0x54D23E: call    sub_54F350
0x54D243: mov     eax, [esp+15Ch+var_144]
0x54D247: mov     ecx, [esp+15Ch+var_140]
0x54D24B: push    eax
0x54D24C: push    esi
0x54D24D: push    ecx
0x54D24E: call    sub_54C9C0
0x54D253: mov     eax, [esi+4]
0x54D256: add     esp, 0Ch
0x54D259: cmp     eax, ebp
0x54D25B: jz      short loc_54D27F
0x54D25D: lea     ecx, [ecx+0]
0x54D260: mov     eax, [eax+8]
0x54D263: cmp     eax, ebp
0x54D265: jz      short loc_54D271
0x54D267: mov     edx, [eax]
0x54D269: mov     ecx, eax
0x54D26B: mov     eax, [edx]
0x54D26D: push    1
0x54D26F: call    eax
0x54D271: mov     ecx, esi
0x54D273: call    sub_54A3B0
0x54D278: mov     eax, [esi+4]
0x54D27B: cmp     eax, ebp
0x54D27D: jnz     short loc_54D260
0x54D27F: mov     edx, [esi]
0x54D281: mov     eax, [edx]
0x54D283: push    1
0x54D285: mov     ecx, esi
0x54D287: call    eax
0x54D289: mov     [esp+164h+var_C], 0FFFFFFFFh
0x54D294: jmp     loc_54CF50
0x9BB900: lea     ecx, [ebp-13Ch]; this
0x9BB906: jmp     ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x9BB90B: mov     edx, [esp+arg_4]
0x9BB90F: lea     eax, [edx-14Ch]
0x9BB915: mov     ecx, [edx-150h]
0x9BB91B: xor     ecx, eax
0x9BB91D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BB922: add     eax, 10h
0x9BB925: mov     ecx, [edx-4]
0x9BB928: xor     ecx, eax
0x9BB92A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BB92F: mov     eax, offset stru_AE563C
0x9BB934: jmp     ___CxxFrameHandler3
