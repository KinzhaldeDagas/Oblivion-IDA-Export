0x59D030: push    ebp
0x59D031: mov     ebp, esp
0x59D033: and     esp, 0FFFFFFF8h
0x59D036: push    0FFFFFFFFh
0x59D038: push    offset SEH_59D030
0x59D03D: mov     eax, large fs:0
0x59D043: push    eax
0x59D044: sub     esp, 188h
0x59D04A: mov     eax, ds:0B30AACh
0x59D04F: xor     eax, esp
0x59D051: mov     [esp+194h+var_14], eax
0x59D058: push    ebx
0x59D059: push    esi
0x59D05A: push    edi
0x59D05B: mov     eax, ds:0B30AACh
0x59D060: xor     eax, esp
0x59D062: push    eax
0x59D063: lea     eax, [esp+1A4h+var_C]
0x59D06A: mov     large fs:0, eax
0x59D070: xor     edi, edi
0x59D072: push    edi
0x59D073: push    2800h
0x59D078: push    edi
0x59D079: mov     esi, ecx
0x59D07B: push    offset aDataCredits_tx; "Data\\Credits.txt"
0x59D080: lea     ecx, [esp+1B4h+var_170]
0x59D084: call    BSFile_constr
0x59D089: mov     eax, [esp+1A4h+var_170]
0x59D08D: mov     edx, [eax+4]
0x59D090: lea     ecx, [esp+1A4h+var_170]
0x59D094: mov     [esp+1A4h+var_4], edi
0x59D09B: call    edx
0x59D09D: test    al, al
0x59D09F: lea     ecx, [esp+1A4h+var_170]
0x59D0A3: jz      loc_59D60F
0x59D0A9: call    BSFile_GetFileSizeDirect
0x59D0AE: add     eax, 1
0x59D0B1: push    eax; Size
0x59D0B2: mov     [esi+34h], eax
0x59D0B5: call    FormHeapAlloc
0x59D0BA: mov     ecx, [esi+34h]
0x59D0BD: mov     [esi+38h], eax
0x59D0C0: mov     byte ptr [ecx+eax-1], 0
0x59D0C5: mov     eax, [esi+34h]
0x59D0C8: mov     ecx, [esi+38h]
0x59D0CB: mov     ebx, 1
0x59D0D0: push    ebx
0x59D0D1: lea     edx, [esp+1ACh+var_190]
0x59D0D5: push    edx
0x59D0D6: sub     eax, ebx
0x59D0D8: push    eax
0x59D0D9: push    ecx
0x59D0DA: lea     eax, [esp+1B8h+var_170]
0x59D0DE: push    eax
0x59D0DF: mov     [esp+1BCh+var_190], ebx
0x59D0E3: call    [esp+1BCh+var_16C]
0x59D0E7: mov     ecx, [esi+34h]
0x59D0EA: sub     ecx, ebx
0x59D0EC: add     esp, 18h
0x59D0EF: cmp     eax, ecx
0x59D0F1: jz      short loc_59D104
0x59D0F3: mov     eax, [esi+38h]
0x59D0F6: push    eax
0x59D0F7: call    FormHeapFree
0x59D0FC: mov     [esi+38h], edi
0x59D0FF: jmp     loc_59D608
0x59D104: push    0DCh ; 'Ü'; Size
0x59D109: call    FormHeapAlloc
0x59D10E: add     esp, 4
0x59D111: mov     [esp+1A4h+var_194], eax
0x59D115: cmp     eax, edi
0x59D117: mov     byte ptr [esp+1A4h+var_4], 1
0x59D11F: jz      short loc_59D12B
0x59D121: push    edi
0x59D122: mov     ecx, eax; this
0x59D124: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x59D129: jmp     short loc_59D12D
0x59D12B: xor     eax, eax
0x59D12D: push    offset aCreditsScrollR; "Credits Scroll Root"
0x59D132: mov     ecx, eax
0x59D134: mov     byte ptr [esp+1A8h+var_4], 0
0x59D13C: mov     [esi+2Ch], eax
0x59D13F: call    NiObjectNET_SetName
0x59D144: fldz
0x59D146: mov     edx, ds:0B06C50h
0x59D14C: fst     [esp+1A4h+var_184]
0x59D150: mov     eax, [esi+2Ch]
0x59D153: fstp    [esp+1A4h+var_180]
0x59D157: mov     ecx, [esp+1A4h+var_184]
0x59D15B: neg     edx
0x59D15D: mov     [esp+1A4h+var_190], edx
0x59D161: fild    [esp+1A4h+var_190]
0x59D165: mov     edx, [esp+1A4h+var_180]
0x59D169: mov     [eax+54h], ecx
0x59D16C: mov     [eax+58h], edx
0x59D16F: fstp    [esp+1A4h+var_17C]
0x59D173: mov     ecx, [esp+1A4h+var_17C]
0x59D177: mov     [eax+5Ch], ecx
0x59D17A: mov     edx, [esi+28h]
0x59D17D: mov     ecx, [edx+24h]
0x59D180: mov     eax, [ecx]
0x59D182: mov     edx, [esi+2Ch]
0x59D185: mov     eax, [eax+84h]
0x59D18B: push    ebx
0x59D18C: push    edx
0x59D18D: call    eax
0x59D18F: push    1Ch; Size
0x59D191: call    FormHeapAlloc
0x59D196: mov     edi, eax
0x59D198: add     esp, 4
0x59D19B: mov     [esp+1A4h+var_194], edi
0x59D19F: test    edi, edi
0x59D1A1: mov     byte ptr [esp+1A4h+var_4], 2
0x59D1A9: jz      short loc_59D1C4
0x59D1AB: mov     ecx, edi; this
0x59D1AD: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x59D1B2: mov     dword ptr [edi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x59D1B8: mov     word ptr [edi+18h], 0ECh ; 'ì'
0x59D1BE: mov     byte ptr [edi+1Ah], 0
0x59D1C2: jmp     short loc_59D1C6
0x59D1C4: xor     edi, edi
0x59D1C6: or      [edi+18h], bx
0x59D1CA: mov     ecx, [esi+2Ch]; this
0x59D1CD: push    edi; a2
0x59D1CE: mov     byte ptr [esp+1A8h+var_4], 0
0x59D1D6: call    sub_405680
0x59D1DB: mov     edi, [esi+3Ch]
0x59D1DE: call    FontManager_GetSingleton
0x59D1E3: mov     ebx, [eax+edi*4]
0x59D1E6: xor     edi, edi
0x59D1E8: mov     [esp+1A4h+var_190], ebx
0x59D1EC: mov     [esp+1A4h+Src], edi
0x59D1F0: mov     word ptr [esp+1A4h+var_188], di
0x59D1F5: mov     word ptr [esp+1A4h+var_188+2], di
0x59D1FA: mov     ecx, [esi+30h]
0x59D1FD: cmp     ecx, [esi+34h]
0x59D200: mov     byte ptr [esp+1A4h+var_4], 3
0x59D208: jnb     loc_59D5C1
0x59D20E: mov     edi, edi
0x59D210: mov     edx, [esi+30h]
0x59D213: mov     eax, [esi+38h]
0x59D216: cmp     byte ptr [edx+eax], 0Dh
0x59D21A: lea     edi, [edx+eax]
0x59D21D: jnz     short loc_59D235
0x59D21F: fld     dword ptr [ebx+2Ch]
0x59D222: fstp    [esp+1A4h+var_178]
0x59D226: fild    dword ptr [esi+48h]
0x59D229: fsub    [esp+1A4h+var_178]
0x59D22D: call    Double_To_SInt32
0x59D232: mov     [esi+48h], eax
0x59D235: cmp     byte ptr [edi], 0Ah
0x59D238: jz      loc_59D588
0x59D23E: mov     edi, edi
0x59D240: mov     eax, [esi+30h]
0x59D243: mov     edi, [esi+34h]
0x59D246: cmp     eax, edi
0x59D248: jnb     loc_59D588
0x59D24E: mov     ecx, [esi+38h]
0x59D251: mov     dl, [eax+ecx]
0x59D254: cmp     dl, 2Ah ; '*'
0x59D257: jz      loc_59D55B
0x59D25D: cmp     dl, 3Ch ; '<'
0x59D260: jz      loc_59D327
0x59D266: cmp     dl, 20h ; ' '
0x59D269: jge     short loc_59D276
0x59D26B: add     eax, 1
0x59D26E: mov     [esi+30h], eax
0x59D271: jmp     loc_59D578
0x59D276: lea     ecx, [esp+1A4h+Src]
0x59D27A: push    ecx
0x59D27B: mov     ecx, esi
0x59D27D: call    sub_59CB70
0x59D282: fldz
0x59D284: mov     eax, [esi+40h]
0x59D287: push    1; int
0x59D289: lea     edx, [esi+4Ch]
0x59D28C: push    edx; int
0x59D28D: push    eax; int
0x59D28E: lea     ecx, [esp+1B0h+var_174]
0x59D292: push    ecx; int
0x59D293: lea     edx, [esp+1B4h+Src]
0x59D297: push    edx; int
0x59D298: sub     esp, 0Ch
0x59D29B: fst     [esp+1C4h+var_1BC]; float
0x59D29F: mov     ecx, ebx
0x59D2A1: fst     [esp+1C4h+var_1C0]; float
0x59D2A5: mov     [esp+1C4h+var_174], 500h
0x59D2AD: fstp    [esp+1C4h+var_1C4]; float
0x59D2B0: call    sub_575870
0x59D2B5: fild    dword ptr [esi+44h]
0x59D2B8: mov     edi, eax
0x59D2BA: fstp    [esp+1A4h+var_178]
0x59D2BE: fild    dword ptr [esi+48h]
0x59D2C1: fstp    [esp+1A4h+var_194]
0x59D2C5: fld     [esp+1A4h+var_178]
0x59D2C9: fstp    [esp+1A4h+var_184]
0x59D2CD: mov     eax, [esp+1A4h+var_184]
0x59D2D1: fldz
0x59D2D3: mov     [edi+54h], eax
0x59D2D6: fstp    [esp+1A4h+var_180]
0x59D2DA: fld     [esp+1A4h+var_194]
0x59D2DE: mov     ecx, [esp+1A4h+var_180]
0x59D2E2: mov     [edi+58h], ecx
0x59D2E5: fstp    [esp+1A4h+var_17C]
0x59D2E9: mov     edx, [esp+1A4h+var_17C]
0x59D2ED: mov     [edi+5Ch], edx
0x59D2F0: mov     eax, [esp+1A4h+Src]
0x59D2F4: push    eax; Src
0x59D2F5: mov     ecx, edi
0x59D2F7: call    NiObjectNET_SetName
0x59D2FC: mov     ecx, [esi+2Ch]
0x59D2FF: mov     edx, [ecx]
0x59D301: mov     eax, [edx+84h]
0x59D307: push    1
0x59D309: push    edi
0x59D30A: call    eax
0x59D30C: fld     dword ptr [ebx+2Ch]
0x59D30F: fstp    [esp+1A4h+var_194]
0x59D313: fild    dword ptr [esi+48h]
0x59D316: fsub    [esp+1A4h+var_194]
0x59D31A: call    Double_To_SInt32
0x59D31F: mov     [esi+48h], eax
0x59D322: jmp     loc_59D578
0x59D327: add     eax, 1
0x59D32A: mov     [esi+30h], eax
0x59D32D: movsx   edx, byte ptr [eax+ecx]
0x59D331: add     edx, 0FFFFFFBDh; switch 23 cases
0x59D334: cmp     edx, 16h
0x59D337: ja      def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D33D: movzx   edx, ds:byte_59D660[edx]
0x59D344: jmp     ds:jpt_59D344[edx*4]; switch jump
0x59D34B: mov     dl, [eax+ecx+2]; jumptable 0059D344 case 88
0x59D34F: cmp     dl, 2Bh ; '+'
0x59D352: lea     edi, [eax+ecx+2]
0x59D356: jnz     short loc_59D36D
0x59D358: lea     eax, [eax+ecx+3]
0x59D35C: push    eax; Str
0x59D35D: call    j__atol
0x59D362: add     esp, 4
0x59D365: add     [esi+44h], eax
0x59D368: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D36D: cmp     dl, 2Dh ; '-'
0x59D370: jnz     short loc_59D387
0x59D372: lea     ecx, [eax+ecx+3]
0x59D376: push    ecx; Str
0x59D377: call    j__atol
0x59D37C: add     esp, 4
0x59D37F: sub     [esi+44h], eax
0x59D382: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D387: push    edi; Str
0x59D388: call    j__atol
0x59D38D: add     esp, 4
0x59D390: mov     [esi+44h], eax
0x59D393: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D398: mov     dl, [eax+ecx+2]; jumptable 0059D344 case 89
0x59D39C: cmp     dl, 2Bh ; '+'
0x59D39F: lea     edi, [eax+ecx+2]
0x59D3A3: jnz     short loc_59D3BA
0x59D3A5: lea     edx, [eax+ecx+3]
0x59D3A9: push    edx; Str
0x59D3AA: call    j__atol
0x59D3AF: add     esp, 4
0x59D3B2: sub     [esi+48h], eax
0x59D3B5: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D3BA: cmp     dl, 2Dh ; '-'
0x59D3BD: jnz     short loc_59D3D4
0x59D3BF: lea     eax, [eax+ecx+3]
0x59D3C3: push    eax; Str
0x59D3C4: call    j__atol
0x59D3C9: add     esp, 4
0x59D3CC: add     [esi+48h], eax
0x59D3CF: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D3D4: push    edi; Str
0x59D3D5: call    j__atol
0x59D3DA: add     esp, 4
0x59D3DD: mov     [esi+48h], eax
0x59D3E0: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D3E5: lea     ecx, [eax+ecx+2]; jumptable 0059D344 case 73
0x59D3E9: push    ecx; Str
0x59D3EA: call    j__atol
0x59D3EF: mov     edx, [esi+30h]
0x59D3F2: mov     ebx, eax
0x59D3F4: mov     eax, [esi+38h]
0x59D3F7: lea     ecx, [edx+eax+7]
0x59D3FB: push    ecx; Str
0x59D3FC: call    j__atol
0x59D401: mov     edx, [esi+30h]
0x59D404: mov     edi, eax
0x59D406: mov     eax, [esi+38h]
0x59D409: lea     ecx, [edx+eax+0Ch]
0x59D40D: push    ecx; Str
0x59D40E: call    j__atol
0x59D413: mov     [esp+1B0h+var_194], eax
0x59D417: fild    [esp+1B0h+var_194]
0x59D41B: add     dword ptr [esi+30h], 10h
0x59D41F: add     esp, 0Ch
0x59D422: fdiv    qword ptr ds:0A3DDD8h
0x59D428: lea     edx, [esp+1A4h+Src]
0x59D42C: push    edx
0x59D42D: mov     ecx, esi
0x59D42F: fstp    [esp+1A8h+var_194]
0x59D433: call    sub_59CB70
0x59D438: fld     [esp+1A4h+var_194]
0x59D43C: push    ecx
0x59D43D: fstp    [esp+1A8h+var_1A8]; float
0x59D440: push    edi; int
0x59D441: push    ebx; int
0x59D442: lea     eax, [esp+1B0h+Src]
0x59D446: push    eax; int
0x59D447: mov     ecx, esi
0x59D449: call    sub_59CC00
0x59D44E: mov     ecx, [esi+2Ch]
0x59D451: mov     edx, [ecx]
0x59D453: push    1
0x59D455: push    eax
0x59D456: mov     eax, [edx+84h]
0x59D45C: call    eax
0x59D45E: sub     [esi+48h], edi
0x59D461: mov     ebx, [esp+1A4h+var_190]
0x59D465: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D46A: mov     al, [eax+ecx+2]; jumptable 0059D344 case 74
0x59D46E: cmp     al, 43h ; 'C'
0x59D470: jnz     short loc_59D47E
0x59D472: mov     dword ptr [esi+40h], 2
0x59D479: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D47E: sub     al, 52h ; 'R'
0x59D480: neg     al
0x59D482: sbb     eax, eax
0x59D484: and     eax, 0FFFFFFFDh
0x59D487: add     eax, 4
0x59D48A: mov     [esi+40h], eax
0x59D48D: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D492: movsx   edi, byte ptr [eax+ecx+2]; jumptable 0059D344 case 70
0x59D497: add     edi, 0FFFFFFCFh
0x59D49A: mov     [esi+3Ch], edi
0x59D49D: call    FontManager_GetSingleton
0x59D4A2: mov     ecx, [eax+edi*4]
0x59D4A5: mov     [esp+1A4h+var_190], ecx
0x59D4A9: mov     ebx, ecx
0x59D4AB: jmp     def_59D344; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D4B0: lea     edx, [eax+ecx+2]; jumptable 0059D344 case 67
0x59D4B4: push    edx; Str
0x59D4B5: call    j__atol
0x59D4BA: mov     [esp+1A8h+var_194], eax
0x59D4BE: fild    [esp+1A8h+var_194]
0x59D4C2: mov     eax, [esi+30h]
0x59D4C5: mov     ecx, [esi+38h]
0x59D4C8: fdiv    qword ptr ds:0A3DDD8h
0x59D4CE: lea     edx, [eax+ecx+6]
0x59D4D2: push    edx; Str
0x59D4D3: fstp    dword ptr [esi+4Ch]
0x59D4D6: call    j__atol
0x59D4DB: mov     [esp+1ACh+var_194], eax
0x59D4DF: fild    [esp+1ACh+var_194]
0x59D4E3: mov     eax, [esi+30h]
0x59D4E6: mov     ecx, [esi+38h]
0x59D4E9: fdiv    qword ptr ds:0A3DDD8h
0x59D4EF: lea     edx, [eax+ecx+0Ah]
0x59D4F3: push    edx; Str
0x59D4F4: fstp    dword ptr [esi+50h]
0x59D4F7: call    j__atol
0x59D4FC: mov     [esp+1B0h+var_194], eax
0x59D500: fild    [esp+1B0h+var_194]
0x59D504: mov     eax, [esi+30h]
0x59D507: mov     ecx, [esi+38h]
0x59D50A: fdiv    qword ptr ds:0A3DDD8h
0x59D510: lea     edx, [eax+ecx+0Eh]
0x59D514: push    edx; Str
0x59D515: fstp    dword ptr [esi+54h]
0x59D518: call    j__atol
0x59D51D: mov     [esp+1B4h+var_194], eax
0x59D521: fild    [esp+1B4h+var_194]
0x59D525: add     esp, 10h
0x59D528: fdiv    qword ptr ds:0A3DDD8h
0x59D52E: fstp    dword ptr [esi+58h]
0x59D531: mov     eax, [esi+30h]; jumptable 0059D344 default case, cases 68,69,71,72,75-87
0x59D534: mov     ecx, [esi+38h]
0x59D537: cmp     byte ptr [eax+ecx], 3Eh ; '>'
0x59D53B: jz      short loc_59D555
0x59D53D: mov     eax, [esi+34h]
0x59D540: add     dword ptr [esi+30h], 1
0x59D544: cmp     [esi+30h], eax
0x59D547: jnb     short loc_59D578
0x59D549: mov     edx, [esi+30h]
0x59D54C: mov     ecx, [esi+38h]
0x59D54F: cmp     byte ptr [edx+ecx], 3Eh ; '>'
0x59D553: jnz     short loc_59D540
0x59D555: add     dword ptr [esi+30h], 1
0x59D559: jmp     short loc_59D578
0x59D55B: cmp     dl, 0Ah
0x59D55E: jz      short loc_59D578
0x59D560: mov     eax, [esi+30h]
0x59D563: cmp     eax, edi
0x59D565: jnb     short loc_59D578
0x59D567: add     eax, 1
0x59D56A: mov     [esi+30h], eax
0x59D56D: mov     edx, eax
0x59D56F: mov     eax, [esi+38h]
0x59D572: cmp     byte ptr [edx+eax], 0Ah
0x59D576: jnz     short loc_59D560
0x59D578: mov     ecx, [esi+30h]
0x59D57B: mov     edx, [esi+38h]
0x59D57E: cmp     byte ptr [ecx+edx], 0Ah
0x59D582: jnz     loc_59D240
0x59D588: mov     eax, [esi+30h]
0x59D58B: mov     ecx, [esi+38h]
0x59D58E: cmp     byte ptr [eax+ecx], 0Ah
0x59D592: jz      short loc_59D5AF
0x59D594: mov     ecx, [esi+34h]
0x59D597: mov     eax, [esi+30h]
0x59D59A: cmp     eax, ecx
0x59D59C: jnb     short loc_59D5AF
0x59D59E: add     eax, 1
0x59D5A1: mov     [esi+30h], eax
0x59D5A4: mov     edx, eax
0x59D5A6: mov     eax, [esi+38h]
0x59D5A9: cmp     byte ptr [edx+eax], 0Ah
0x59D5AD: jnz     short loc_59D597
0x59D5AF: add     dword ptr [esi+30h], 1
0x59D5B3: mov     ecx, [esi+30h]
0x59D5B6: cmp     ecx, [esi+34h]
0x59D5B9: jb      loc_59D210
0x59D5BF: xor     edi, edi
0x59D5C1: mov     eax, [esi+38h]
0x59D5C4: push    eax
0x59D5C5: call    FormHeapFree
0x59D5CA: mov     ecx, [esi+2Ch]; this
0x59D5CD: add     esp, 4
0x59D5D0: mov     [esi+38h], edi
0x59D5D3: call    NiAVObject_InitializePropertyState
0x59D5D8: mov     ecx, [esi+2Ch]
0x59D5DB: call    NiNode_UpdateDynamicEffectState
0x59D5E0: fldz
0x59D5E2: push    1; a3
0x59D5E4: push    ecx
0x59D5E5: mov     ecx, [esi+2Ch]; this
0x59D5E8: fstp    [esp+1ACh+a2]; a2
0x59D5EB: call    NiAVObject_UpdateNiAVObject
0x59D5F0: mov     edx, [esp+1A4h+Src]
0x59D5F4: push    edx
0x59D5F5: call    FormHeapFree
0x59D5FA: mov     [esp+1A8h+Src], edi
0x59D5FE: mov     word ptr [esp+1A8h+var_188+2], di
0x59D603: mov     word ptr [esp+1A8h+var_188], di
0x59D608: lea     ecx, [esp+1A8h+var_170]; this
0x59D60C: add     esp, 4
0x59D60F: mov     [esp+1A4h+var_4], 0FFFFFFFFh
0x59D61A: call    ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x59D61F: mov     ecx, [esp+1A4h+var_C]
0x59D626: mov     large fs:0, ecx
0x59D62D: pop     ecx
0x59D62E: pop     edi
0x59D62F: pop     esi
0x59D630: pop     ebx
0x59D631: mov     ecx, [esp+194h+var_14]
0x59D638: xor     ecx, esp
0x59D63A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59D63F: mov     esp, ebp
0x59D641: pop     ebp
0x59D642: retn
