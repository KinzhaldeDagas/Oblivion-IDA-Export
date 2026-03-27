0x5732D0: push    0FFFFFFFFh
0x5732D2: push    offset SEH_5732D0
0x5732D7: mov     eax, large fs:0
0x5732DD: push    eax
0x5732DE: sub     esp, 14h
0x5732E1: push    ebx
0x5732E2: push    ebp
0x5732E3: push    esi
0x5732E4: push    edi
0x5732E5: mov     eax, ds:0B30AACh
0x5732EA: xor     eax, esp
0x5732EC: push    eax
0x5732ED: lea     eax, [esp+34h+var_C]
0x5732F1: mov     large fs:0, eax
0x5732F7: mov     [esp+34h+var_1C], ecx
0x5732FB: mov     eax, [esp+34h+a2]
0x5732FF: lea     ebp, [eax+eax*2]
0x573302: add     ebp, ebp
0x573304: add     ebp, ebp
0x573306: add     ebp, ebp
0x573308: cmp     ss:dword_B12DD0[ebp], 0
0x57330F: jz      short loc_573326
0x573311: cmp     ss:byte_B12DC8[ebp], 0
0x573318: jnz     loc_573742
0x57331E: push    1
0x573320: push    eax
0x573321: call    sub_572EC0
0x573326: push    30h ; '0'; Size
0x573328: call    FormHeapAlloc
0x57332D: push    20h ; ' '; Size
0x57332F: mov     esi, eax
0x573331: call    FormHeapAlloc
0x573336: push    0Ch; Size
0x573338: mov     edi, eax
0x57333A: call    FormHeapAlloc
0x57333F: fild    dword ptr ds:0B06C4Ch
0x573345: fld     qword ptr ds:0A2FAA0h
0x57334B: mov     ebx, eax
0x57334D: fmul    st(1), st
0x57334F: fxch    st(1)
0x573351: fstp    [esp+40h+a2]
0x573355: fimul   dword ptr ds:0B06C50h
0x57335B: fstp    [esp+40h+var_20]
0x57335F: fld     [esp+40h+a2]
0x573363: fld     st
0x573365: fchs
0x573367: fstp    [esp+40h+a2]
0x57336B: fld     [esp+40h+a2]
0x57336F: fst     [esp+40h+Src]
0x573373: mov     eax, [esp+40h+Src]
0x573377: fldz
0x573379: mov     [esi], eax
0x57337B: fst     [esp+40h+var_14]
0x57337F: fld     [esp+40h+var_20]
0x573383: mov     ecx, [esp+40h+var_14]
0x573387: fst     [esp+40h+var_10]
0x57338B: mov     [esi+4], ecx
0x57338E: mov     edx, [esp+40h+var_10]
0x573392: fxch    st(2)
0x573394: fstp    [esp+40h+Src]
0x573398: mov     [esi+8], edx
0x57339B: mov     eax, [esp+40h+Src]
0x57339F: mov     [esi+0Ch], eax
0x5733A2: fst     [esp+40h+var_14]
0x5733A6: mov     ecx, [esp+40h+var_14]
0x5733AA: fld     st(1)
0x5733AC: mov     [esi+10h], ecx
0x5733AF: fchs
0x5733B1: fstp    [esp+40h+a2]
0x5733B5: fld     [esp+40h+a2]
0x5733B9: fst     [esp+40h+var_10]
0x5733BD: mov     edx, [esp+40h+var_10]
0x5733C1: fxch    st(3)
0x5733C3: mov     [esi+14h], edx
0x5733C6: fst     [esp+40h+Src]
0x5733CA: mov     eax, [esp+40h+Src]
0x5733CE: fxch    st(1)
0x5733D0: mov     [esi+18h], eax
0x5733D3: fst     [esp+40h+var_14]
0x5733D7: mov     ecx, [esp+40h+var_14]
0x5733DB: fxch    st(2)
0x5733DD: mov     [esi+1Ch], ecx
0x5733E0: fstp    [esp+40h+var_10]
0x5733E4: mov     edx, [esp+40h+var_10]
0x5733E8: mov     [esi+20h], edx
0x5733EB: fstp    [esp+40h+Src]
0x5733EF: mov     eax, [esp+40h+Src]
0x5733F3: mov     [esi+24h], eax
0x5733F6: fst     [esp+40h+var_14]
0x5733FA: mov     ecx, [esp+40h+var_14]
0x5733FE: fxch    st(1)
0x573400: mov     [esi+28h], ecx
0x573403: fstp    [esp+40h+var_10]
0x573407: mov     edx, [esp+40h+var_10]
0x57340B: mov     [esi+2Ch], edx
0x57340E: fst     [esp+40h+Src]
0x573412: mov     eax, [esp+40h+Src]
0x573416: fst     [esp+40h+var_14]
0x57341A: mov     ecx, [esp+40h+var_14]
0x57341E: fst     [esp+40h+Src]
0x573422: mov     edx, [esp+40h+Src]
0x573426: fld1
0x573428: mov     [edi], eax
0x57342A: fst     [esp+40h+var_14]
0x57342E: mov     [edi+4], ecx
0x573431: mov     eax, [esp+40h+var_14]
0x573435: mov     [edi+8], edx
0x573438: mov     [edi+0Ch], eax
0x57343B: fst     [esp+40h+Src]
0x57343F: mov     ecx, [esp+40h+Src]
0x573443: mov     [edi+10h], ecx
0x573446: fxch    st(1)
0x573448: fstp    [esp+40h+var_14]
0x57344C: mov     edx, [esp+40h+var_14]
0x573450: mov     [edi+14h], edx
0x573453: fst     [esp+40h+Src]
0x573457: mov     eax, [esp+40h+Src]
0x57345B: mov     [edi+18h], eax
0x57345E: fstp    [esp+40h+var_14]
0x573462: mov     ecx, [esp+40h+var_14]
0x573466: mov     [edi+1Ch], ecx
0x573469: mov     ecx, 1
0x57346E: mov     eax, 2
0x573473: push    0DCh ; 'Ü'; Size
0x573478: mov     word ptr [ebx], 0
0x57347D: mov     [ebx+2], cx
0x573481: mov     [ebx+4], ax
0x573485: mov     [ebx+6], ax
0x573489: mov     [ebx+8], cx
0x57348D: mov     word ptr [ebx+0Ah], 3
0x573493: call    FormHeapAlloc
0x573498: add     esp, 10h
0x57349B: mov     [esp+34h+a2], eax
0x57349F: test    eax, eax
0x5734A1: mov     [esp+34h+var_4], 0
0x5734A9: jz      short loc_5734B6
0x5734AB: push    0
0x5734AD: mov     ecx, eax; this
0x5734AF: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5734B4: jmp     short loc_5734B8
0x5734B6: xor     eax, eax
0x5734B8: mov     edx, ss:off_B12DC4[ebp]; "LetterBox.dds"
0x5734BE: push    edx; Src
0x5734BF: mov     ecx, eax
0x5734C1: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5734C9: mov     ss:dword_B12DD0[ebp], eax
0x5734CF: call    NiObjectNET_SetName
0x5734D4: push    1Ch; Size
0x5734D6: call    FormHeapAlloc
0x5734DB: add     esp, 4
0x5734DE: mov     [esp+34h+a2], eax
0x5734E2: test    eax, eax
0x5734E4: mov     [esp+34h+var_4], 1
0x5734EC: jz      short loc_57350B
0x5734EE: mov     ecx, eax; this
0x5734F0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5734F5: mov     eax, [esp+34h+a2]
0x5734F9: mov     dword ptr [eax], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x5734FF: mov     word ptr [eax+18h], 0ECh ; 'ì'
0x573505: mov     byte ptr [eax+1Ah], 0
0x573509: jmp     short loc_57350D
0x57350B: xor     eax, eax
0x57350D: or      word ptr [eax+18h], 1
0x573512: mov     ecx, ss:dword_B12DD0[ebp]; this
0x573518: push    eax; a2
0x573519: mov     [esp+38h+var_4], 0FFFFFFFFh
0x573521: call    sub_405680
0x573526: push    0C0h ; 'À'; Size
0x57352B: call    FormHeapAlloc
0x573530: add     esp, 4
0x573533: mov     [esp+34h+a2], eax
0x573537: test    eax, eax
0x573539: mov     [esp+34h+var_4], 2
0x573541: jz      short loc_57355D
0x573543: push    ebx
0x573544: push    2
0x573546: push    0
0x573548: push    1
0x57354A: push    edi
0x57354B: push    0
0x57354D: push    0
0x57354F: push    esi
0x573550: push    4
0x573552: mov     ecx, eax
0x573554: call    sub_7174B0
0x573559: mov     edi, eax
0x57355B: jmp     short loc_57355F
0x57355D: xor     edi, edi
0x57355F: mov     ecx, ss:dword_B12DD0[ebp]
0x573565: mov     eax, [ecx]
0x573567: mov     edx, [eax+84h]
0x57356D: push    1
0x57356F: push    edi
0x573570: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x573578: call    edx
0x57357A: xor     eax, eax
0x57357C: mov     [esp+34h+Src], eax
0x573580: mov     word ptr [esp+34h+var_14], ax
0x573585: mov     word ptr [esp+34h+var_14+2], ax
0x57358A: mov     eax, ss:off_B12DC4[ebp]; "LetterBox.dds"
0x573590: push    eax; ArgList
0x573591: lea     ecx, [esp+38h+Src]
0x573595: push    offset aDataTextures_5; "Data\\Textures\\Menus\\Faders\\%s"
0x57359A: push    ecx; int
0x57359B: mov     [esp+40h+var_4], 3
0x5735A3: call    BSStringT_Static_Format
0x5735A8: mov     ebx, [esp+40h+Src]
0x5735AC: add     esp, 0Ch
0x5735AF: push    ebx; Src
0x5735B0: mov     ecx, edi
0x5735B2: call    NiObjectNET_SetName
0x5735B7: push    1; char
0x5735B9: push    offset dword_B256D0; int
0x5735BE: push    ebx; Src
0x5735BF: call    NiSourceTexture__LoadTextureByFilename
0x5735C4: mov     ebx, eax
0x5735C6: add     esp, 0Ch
0x5735C9: test    ebx, ebx
0x5735CB: mov     [esp+34h+var_20], ebx
0x5735CF: jz      short loc_5735DB
0x5735D1: lea     edx, [ebx+4]
0x5735D4: push    edx; lpAddend
0x5735D5: call    dword ptr ds:0A28078h
0x5735DB: push    30h ; '0'; Size
0x5735DD: mov     byte ptr [esp+38h+var_4], 4
0x5735E2: call    FormHeapAlloc
0x5735E7: add     esp, 4
0x5735EA: mov     [esp+34h+a2], eax
0x5735EE: test    eax, eax
0x5735F0: mov     byte ptr [esp+34h+var_4], 5
0x5735F5: jz      short loc_573604
0x5735F7: mov     ecx, eax
0x5735F9: call    NiTexturingProperty__NiTexturingProperty
0x5735FE: mov     [esp+34h+a2], eax
0x573602: jmp     short loc_57360C
0x573604: mov     [esp+34h+a2], 0
0x57360C: mov     ecx, [esp+34h+a2]
0x573610: push    ebx
0x573611: mov     byte ptr [esp+38h+var_4], 4
0x573616: call    NiTexturingProperty__SetUnk08
0x57361B: mov     eax, [esp+34h+a2]
0x57361F: push    eax; a2
0x573620: mov     ecx, edi; this
0x573622: call    sub_405680
0x573627: push    5Ch ; '\'; Size
0x573629: call    FormHeapAlloc
0x57362E: add     esp, 4
0x573631: mov     [esp+34h+a2], eax
0x573635: test    eax, eax
0x573637: mov     byte ptr [esp+34h+var_4], 6
0x57363C: jz      short loc_573647
0x57363E: mov     ecx, eax; this
0x573640: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x573645: jmp     short loc_573649
0x573647: xor     eax, eax
0x573649: mov     ecx, ds:0B3FA90h
0x57364F: mov     [eax+40h], ecx
0x573652: mov     edx, ds:0B3FA94h
0x573658: mov     [eax+44h], edx
0x57365B: mov     ecx, ds:0B3FA98h
0x573661: add     dword ptr [eax+54h], 1
0x573665: mov     [eax+48h], ecx
0x573668: mov     edx, ds:0B25AC4h
0x57366E: mov     ecx, [eax+54h]
0x573671: mov     [eax+1Ch], edx
0x573674: mov     edx, ds:0B25AC8h
0x57367A: mov     [eax+20h], edx
0x57367D: mov     edx, ds:0B25ACCh
0x573683: add     ecx, 1
0x573686: mov     [eax+54h], ecx
0x573689: push    eax; a2
0x57368A: mov     ecx, edi; this
0x57368C: mov     byte ptr [esp+38h+var_4], 4
0x573691: mov     [eax+24h], edx
0x573694: call    sub_405680
0x573699: mov     edi, [edi+0B4h]
0x57369F: push    esi
0x5736A0: push    4
0x5736A2: lea     ecx, [edi+0Ch]
0x5736A5: call    sub_72A0F0
0x5736AA: fldz
0x5736AC: mov     eax, ss:dword_B12DD0[ebp]
0x5736B2: push    ecx
0x5736B3: fstp    [esp+38h+var_38]; float
0x5736B6: push    eax; int
0x5736B7: call    sub_4A2A90
0x5736BC: mov     eax, [esp+3Ch+var_1C]
0x5736C0: mov     esi, [eax+4]
0x5736C3: add     esp, 8
0x5736C6: cmp     ss:byte_B12DC0[ebp], 0
0x5736CD: jz      short loc_5736D1
0x5736CF: mov     esi, [eax]
0x5736D1: mov     edx, [esi]
0x5736D3: mov     eax, ss:dword_B12DD0[ebp]
0x5736D9: mov     edx, [edx+84h]
0x5736DF: push    1
0x5736E1: push    eax
0x5736E2: mov     ecx, esi
0x5736E4: call    edx
0x5736E6: mov     ecx, esi
0x5736E8: call    NiNode_UpdateDynamicEffectState
0x5736ED: mov     ecx, esi; this
0x5736EF: call    NiAVObject_InitializePropertyState
0x5736F4: fldz
0x5736F6: push    0; a3
0x5736F8: push    ecx
0x5736F9: mov     ecx, esi; this
0x5736FB: fstp    [esp+3Ch+var_3C]; a2
0x5736FE: call    NiAVObject_UpdateNiAVObject
0x573703: fld     [esp+34h+arg_4]
0x573707: test    ebx, ebx
0x573709: fstp    dword ptr [ebp+0B12DCCh]
0x57370F: mov     ss:byte_B12DC8[ebp], 1
0x573716: mov     byte ptr [esp+34h+var_4], 3
0x57371B: jz      short loc_573735
0x57371D: lea     eax, [ebx+4]
0x573720: push    eax; lpAddend
0x573721: call    dword ptr ds:0A2807Ch
0x573727: test    eax, eax
0x573729: jnz     short loc_573735
0x57372B: mov     edx, [ebx]
0x57372D: mov     eax, [edx]
0x57372F: push    1
0x573731: mov     ecx, ebx
0x573733: call    eax
0x573735: mov     ecx, [esp+34h+Src]
0x573739: push    ecx
0x57373A: call    FormHeapFree
0x57373F: add     esp, 4
0x573742: mov     ecx, [esp+34h+var_C]
0x573746: mov     large fs:0, ecx
0x57374D: pop     ecx
0x57374E: pop     edi
0x57374F: pop     esi
0x573750: pop     ebp
0x573751: pop     ebx
0x573752: add     esp, 20h
0x573755: retn    8
