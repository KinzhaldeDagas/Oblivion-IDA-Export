0x537020: push    0FFFFFFFFh
0x537022: push    offset SEH_537020
0x537027: mov     eax, large fs:0
0x53702D: push    eax
0x53702E: sub     esp, 138h
0x537034: push    ebx
0x537035: push    ebp
0x537036: push    esi
0x537037: push    edi
0x537038: mov     eax, ds:0B30AACh
0x53703D: xor     eax, esp
0x53703F: push    eax
0x537040: lea     eax, [esp+158h+var_C]
0x537047: mov     large fs:0, eax
0x53704D: mov     edi, ecx
0x53704F: mov     [esp+158h+var_134], edi
0x537053: mov     ecx, [edi+0Ch]
0x537056: xor     ebp, ebp
0x537058: cmp     ecx, ebp
0x53705A: mov     byte ptr [esp+158h+var_144+2], 0
0x53705F: jz      loc_53745B
0x537065: mov     eax, [ecx+8]
0x537068: mov     edx, eax
0x53706A: shr     edx, 0Bh
0x53706D: test    dl, 1
0x537070: jnz     loc_53745B
0x537076: shr     eax, 5
0x537079: test    al, 1
0x53707B: jnz     loc_53745B
0x537081: mov     eax, [ecx]
0x537083: mov     edx, [eax+154h]
0x537089: call    edx
0x53708B: test    eax, eax
0x53708D: jz      loc_53745B
0x537093: mov     eax, [edi+8]
0x537096: mov     esi, [eax+10h]
0x537099: add     esi, eax
0x53709B: mov     eax, [esi]
0x53709D: mov     edx, [eax+10h]
0x5370A0: mov     ecx, esi
0x5370A2: mov     [esp+158h+var_130], esi
0x5370A6: call    edx
0x5370A8: mov     ebx, 1
0x5370AD: cmp     eax, ebx
0x5370AF: jnz     loc_5372FA
0x5370B5: cmp     [esi+124h], ebp
0x5370BB: setz    al
0x5370BE: test    al, al
0x5370C0: jnz     loc_537455
0x5370C6: lea     ecx, [esp+158h+var_120]
0x5370CA: call    sub_536F70
0x5370CF: mov     eax, [esi]
0x5370D1: mov     edx, [eax+38h]
0x5370D4: lea     ecx, [esp+158h+var_120]
0x5370D8: push    ecx
0x5370D9: mov     ecx, esi
0x5370DB: mov     [esp+15Ch+var_4], ebp
0x5370E2: mov     [esp+15Ch+var_114], ebp
0x5370E6: mov     byte ptr [esp+15Ch+var_11C], 0
0x5370EB: call    edx
0x5370ED: mov     eax, [esp+158h+var_114]
0x5370F1: cmp     eax, ebp
0x5370F3: setz    cl
0x5370F6: test    cl, cl
0x5370F8: jnz     loc_5372DD
0x5370FE: mov     esi, eax
0x537100: mov     [esp+158h+var_140], ebp
0x537104: mov     [esp+158h+var_13C], ebp
0x537108: mov     [esp+158h+var_138], 80000000h
0x537110: cmp     eax, ebp
0x537112: mov     byte ptr [esp+158h+var_4], bl
0x537119: jle     short loc_537136
0x53711B: xor     ecx, ecx
0x53711D: cmp     eax, ebp
0x53711F: setl    cl
0x537122: push    4
0x537124: lea     edx, [esp+15Ch+var_140]
0x537128: sub     ecx, ebx
0x53712A: and     eax, ecx
0x53712C: push    eax
0x53712D: push    edx
0x53712E: call    sub_8A6E40
0x537133: add     esp, 0Ch
0x537136: cmp     esi, ebp
0x537138: mov     byte ptr [esp+158h+var_144+3], 0
0x53713D: jle     loc_537297
0x537143: mov     [esp+158h+var_12C], ebp
0x537147: mov     [esp+158h+var_128], esi
0x53714B: jmp     short loc_537154
0x53714D: align 10h
0x537150: mov     edi, [esp+158h+var_134]
0x537154: mov     eax, [esp+158h+var_118]
0x537158: mov     ebp, [eax+ebp+8]
0x53715C: test    ebp, ebp
0x53715E: jz      loc_53727B
0x537164: push    ebp
0x537165: call    sub_536110
0x53716A: mov     esi, eax
0x53716C: add     esp, 4
0x53716F: test    esi, esi
0x537171: jz      loc_53727B
0x537177: mov     ecx, [esp+158h+var_13C]
0x53717B: mov     edx, [esp+158h+var_140]
0x53717F: xor     eax, eax
0x537181: test    ecx, ecx
0x537183: jle     short loc_53719B
0x537185: cmp     [edx+eax*4], esi
0x537188: jz      short loc_537192
0x53718A: add     eax, ebx
0x53718C: cmp     eax, ecx
0x53718E: jl      short loc_537185
0x537190: jmp     short loc_53719B
0x537192: cmp     eax, 0FFFFFFFFh
0x537195: jnz     loc_53727B
0x53719B: mov     edx, [esp+158h+var_138]
0x53719F: and     edx, 3FFFFFFFh
0x5371A5: cmp     ecx, edx
0x5371A7: jnz     short loc_5371BC
0x5371A9: lea     eax, [esp+158h+var_140]
0x5371AD: push    4
0x5371AF: push    eax
0x5371B0: call    sub_8A6EE0
0x5371B5: mov     ecx, [esp+160h+var_13C]
0x5371B9: add     esp, 8
0x5371BC: mov     edx, [esp+158h+var_140]
0x5371C0: mov     [edx+ecx*4], esi
0x5371C3: mov     eax, [edi+0Ch]
0x5371C6: add     [esp+158h+var_13C], ebx
0x5371CA: lea     edi, [eax+44h]
0x5371CD: push    10000000h
0x5371D2: push    edi
0x5371D3: push    esi
0x5371D4: call    Script_AddEventToExtraScript
0x5371D9: mov     bl, al
0x5371DB: mov     eax, [esi]
0x5371DD: mov     edx, [eax+188h]
0x5371E3: add     esp, 0Ch
0x5371E6: mov     ecx, esi
0x5371E8: call    edx
0x5371EA: neg     al
0x5371EC: sbb     eax, eax
0x5371EE: and     eax, esi
0x5371F0: jz      short loc_53723A
0x5371F2: push    40000000h
0x5371F7: push    edi
0x5371F8: push    esi
0x5371F9: call    Script_AddEventToExtraScript
0x5371FE: or      bl, al
0x537200: mov     eax, [esi]
0x537202: mov     edx, [eax+190h]
0x537208: add     esp, 0Ch
0x53720B: mov     ecx, esi
0x53720D: call    edx
0x53720F: neg     al
0x537211: sbb     eax, eax
0x537213: and     eax, esi
0x537215: mov     ecx, eax
0x537217: jz      short loc_53723A
0x537219: mov     eax, [ecx]
0x53721B: mov     edx, [eax+198h]
0x537221: push    0
0x537223: call    edx
0x537225: test    al, al
0x537227: jnz     short loc_53723A
0x537229: push    20000000h
0x53722E: push    edi
0x53722F: push    esi
0x537230: call    Script_AddEventToExtraScript
0x537235: add     esp, 0Ch
0x537238: or      bl, al
0x53723A: cmp     byte ptr [esp+158h+var_144+3], 0
0x53723F: jnz     short loc_537253
0x537241: mov     eax, [esp+158h+var_134]
0x537245: mov     ecx, [eax+0Ch]
0x537248: push    esi
0x537249: call    sub_4D8350
0x53724E: mov     byte ptr [esp+158h+var_144+3], 1
0x537253: test    bl, bl
0x537255: jz      short loc_53725E
0x537257: mov     byte ptr [esp+158h+var_144+2], 1
0x53725C: jmp     short loc_53727B
0x53725E: mov     ecx, ds:0B33B00h
0x537264: mov     edx, [ecx+18h]
0x537267: shr     edx, 0Bh
0x53726A: test    dl, 1
0x53726D: jnz     short loc_53727B
0x53726F: mov     ecx, [esp+158h+var_130]
0x537273: mov     eax, [ecx]
0x537275: mov     edx, [eax+20h]
0x537278: push    ebp
0x537279: call    edx
0x53727B: mov     ebp, [esp+158h+var_12C]
0x53727F: add     ebp, 10h
0x537282: mov     ebx, 1
0x537287: sub     [esp+158h+var_128], ebx
0x53728B: mov     [esp+158h+var_12C], ebp
0x53728F: jnz     loc_537150
0x537295: xor     ebp, ebp
0x537297: mov     eax, [esp+158h+var_138]
0x53729B: test    eax, eax
0x53729D: mov     byte ptr [esp+158h+var_4], 0
0x5372A5: js      short loc_5372DD
0x5372A7: mov     ecx, ds:0BA9DE4h
0x5372AD: mov     edx, large fs:2Ch
0x5372B4: mov     ecx, [edx+ecx*4]
0x5372B7: mov     ecx, [ecx+19Ch]
0x5372BD: cmp     ecx, ebp
0x5372BF: jnz     short loc_5372C7
0x5372C1: mov     ecx, ds:0BA7D9Ch
0x5372C7: mov     edx, [esp+158h+var_140]
0x5372CB: and     eax, 3FFFFFFFh
0x5372D0: add     eax, eax
0x5372D2: push    14h
0x5372D4: add     eax, eax
0x5372D6: push    eax
0x5372D7: push    edx
0x5372D8: call    sub_8A75D0
0x5372DD: lea     ecx, [esp+158h+var_120]; this
0x5372E1: mov     [esp+158h+var_4], 0FFFFFFFFh
0x5372EC: call    ??1hkAllCdBodyPairCollector@@UAE@XZ; hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(void)
0x5372F1: mov     al, byte ptr [esp+158h+var_144+2]
0x5372F5: jmp     loc_53745D
0x5372FA: mov     eax, [esi]
0x5372FC: mov     edx, [eax+10h]
0x5372FF: mov     ecx, esi
0x537301: call    edx
0x537303: test    eax, eax
0x537305: jnz     loc_537455
0x53730B: mov     ebx, [esi+94h]
0x537311: cmp     ebx, ebp
0x537313: setz    al
0x537316: test    al, al
0x537318: jnz     loc_537455
0x53731E: mov     [esp+158h+var_140], ebp
0x537322: mov     [esp+158h+var_13C], ebp
0x537326: mov     [esp+158h+var_138], 80000000h
0x53732E: cmp     ebx, ebp
0x537330: mov     [esp+158h+var_4], 2
0x53733B: jle     short loc_537359
0x53733D: xor     eax, eax
0x53733F: cmp     ebx, ebp
0x537341: setl    al
0x537344: push    4
0x537346: sub     eax, 1
0x537349: and     eax, ebx
0x53734B: push    eax
0x53734C: lea     eax, [esp+160h+var_140]
0x537350: push    eax
0x537351: call    sub_8A6E40
0x537356: add     esp, 0Ch
0x537359: test    ebx, ebx
0x53735B: jle     loc_53740C
0x537361: jmp     short loc_537367
0x537363: mov     esi, [esp+158h+var_130]
0x537367: mov     ecx, [esi+90h]
0x53736D: mov     edi, [ecx+ebp*4]
0x537370: test    edi, edi
0x537372: jz      loc_537401
0x537378: push    edi
0x537379: call    sub_536110
0x53737E: mov     ecx, [esp+15Ch+var_13C]
0x537382: mov     edx, [esp+15Ch+var_140]
0x537386: mov     esi, eax
0x537388: add     esp, 4
0x53738B: xor     eax, eax
0x53738D: test    ecx, ecx
0x53738F: jle     short loc_5373A4
0x537391: cmp     [edx+eax*4], esi
0x537394: jz      short loc_53739F
0x537396: add     eax, 1
0x537399: cmp     eax, ecx
0x53739B: jl      short loc_537391
0x53739D: jmp     short loc_5373A4
0x53739F: cmp     eax, 0FFFFFFFFh
0x5373A2: jnz     short loc_537401
0x5373A4: mov     edx, [esp+158h+var_138]
0x5373A8: and     edx, 3FFFFFFFh
0x5373AE: cmp     ecx, edx
0x5373B0: jnz     short loc_5373C5
0x5373B2: lea     eax, [esp+158h+var_140]
0x5373B6: push    4
0x5373B8: push    eax
0x5373B9: call    sub_8A6EE0
0x5373BE: mov     ecx, [esp+160h+var_13C]
0x5373C2: add     esp, 8
0x5373C5: mov     edx, [esp+158h+var_140]
0x5373C9: mov     eax, [esp+158h+var_134]
0x5373CD: mov     [edx+ecx*4], esi
0x5373D0: mov     eax, [eax+0Ch]
0x5373D3: add     [esp+158h+var_13C], 1
0x5373D8: push    10000000h
0x5373DD: add     eax, 44h ; 'D'
0x5373E0: push    eax
0x5373E1: push    esi
0x5373E2: call    Script_AddEventToExtraScript
0x5373E7: add     esp, 0Ch
0x5373EA: test    al, al
0x5373EC: jz      short loc_5373F5
0x5373EE: mov     byte ptr [esp+158h+var_144+2], 1
0x5373F3: jmp     short loc_537401
0x5373F5: mov     ecx, [esp+158h+var_130]
0x5373F9: mov     edx, [ecx]
0x5373FB: mov     eax, [edx+20h]
0x5373FE: push    edi
0x5373FF: call    eax
0x537401: add     ebp, 1
0x537404: cmp     ebp, ebx
0x537406: jl      loc_537363
0x53740C: mov     eax, [esp+158h+var_138]
0x537410: test    eax, eax
0x537412: mov     [esp+158h+var_4], 0FFFFFFFFh
0x53741D: js      short loc_537455
0x53741F: mov     ecx, ds:0BA9DE4h
0x537425: mov     edx, large fs:2Ch
0x53742C: mov     ecx, [edx+ecx*4]
0x53742F: mov     ecx, [ecx+19Ch]
0x537435: test    ecx, ecx
0x537437: jnz     short loc_53743F
0x537439: mov     ecx, ds:0BA7D9Ch
0x53743F: mov     edx, [esp+158h+var_140]
0x537443: and     eax, 3FFFFFFFh
0x537448: add     eax, eax
0x53744A: push    14h
0x53744C: add     eax, eax
0x53744E: push    eax
0x53744F: push    edx
0x537450: call    sub_8A75D0
0x537455: mov     al, byte ptr [esp+158h+var_144+2]
0x537459: jmp     short loc_53745D
0x53745B: xor     al, al
0x53745D: mov     ecx, [esp+158h+var_C]
0x537464: mov     large fs:0, ecx
0x53746B: pop     ecx
0x53746C: pop     edi
0x53746D: pop     esi
0x53746E: pop     ebp
0x53746F: pop     ebx
0x537470: add     esp, 144h
0x537476: retn    4
