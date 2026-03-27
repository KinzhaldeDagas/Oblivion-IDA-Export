0x627680: sub     esp, 30h
0x627683: push    ebx
0x627684: push    ebp
0x627685: push    esi
0x627686: push    edi
0x627687: mov     edi, [esp+40h+arg_4]
0x62768B: mov     ebx, ecx
0x62768D: mov     ecx, edi
0x62768F: call    sub_4D7930
0x627694: test    eax, eax
0x627696: jz      loc_627746
0x62769C: mov     eax, [edi]
0x62769E: mov     edx, [eax+380h]
0x6276A4: mov     ecx, edi
0x6276A6: call    edx
0x6276A8: test    eax, eax
0x6276AA: jnz     loc_627746
0x6276B0: mov     ecx, edi
0x6276B2: call    sub_4D7930
0x6276B7: push    0; int
0x6276B9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6276BE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6276C3: mov     esi, eax
0x6276C5: push    0; int
0x6276C7: push    esi; void *
0x6276C8: call    OblivionDynamicCast
0x6276CD: add     esp, 14h
0x6276D0: test    esi, esi
0x6276D2: jz      loc_62775A
0x6276D8: test    eax, eax
0x6276DA: jz      short loc_62775A
0x6276DC: cmp     dword ptr [eax+58h], 0
0x6276E0: jz      short loc_62775A
0x6276E2: mov     eax, [edi]
0x6276E4: mov     edx, [eax+170h]
0x6276EA: mov     ecx, edi
0x6276EC: call    edx
0x6276EE: push    eax
0x6276EF: lea     ecx, [esi+44h]
0x6276F2: call    ExtraDataList__SetOrRemoveExtraOwnership
0x6276F7: mov     ecx, esi; this
0x6276F9: call    TESObjectREFR_GetWorldSpace
0x6276FE: mov     ecx, edi; this
0x627700: mov     ebp, eax
0x627702: call    TESObjectREFR_GetWorldSpace
0x627707: cmp     ebp, eax
0x627709: jnz     short loc_62775A
0x62770B: mov     eax, [esi]
0x62770D: mov     edx, [eax+198h]
0x627713: push    0
0x627715: mov     ecx, esi
0x627717: call    edx
0x627719: test    al, al
0x62771B: jnz     short loc_62775A
0x62771D: mov     eax, [esi+8]
0x627720: shr     eax, 0Bh
0x627723: test    al, 1
0x627725: jnz     short loc_62775A
0x627727: push    0
0x627729: push    edi
0x62772A: mov     ecx, esi
0x62772C: call    TesObjectREF_GetDistance
0x627731: fcomp   qword ptr ds:0A3F470h
0x627737: fnstsw  ax
0x627739: test    ah, 41h
0x62773C: jp      short loc_62775A
0x62773E: mov     byte ptr [ebx+65h], 1
0x627742: xor     al, al
0x627744: jmp     short loc_62775E
0x627746: mov     edx, [edi]
0x627748: mov     eax, [edx+380h]
0x62774E: mov     ecx, edi
0x627750: call    eax
0x627752: test    eax, eax
0x627754: jz      short loc_62775A
0x627756: xor     al, al
0x627758: jmp     short loc_62775E
0x62775A: mov     al, byte ptr [esp+40h+arg_C]
0x62775E: cmp     byte ptr [ebx+3Ch], 0
0x627762: mov     esi, [esp+40h+arg_0]
0x627766: jz      loc_627964
0x62776C: mov     ebp, [esp+40h+arg_8]
0x627770: test    ebp, ebp
0x627772: jz      loc_627981
0x627778: test    al, al
0x62777A: mov     ds:0B3B924h, ebp
0x627780: mov     dword ptr [ebx+5Ch], 0
0x627787: jz      short loc_6277E8
0x627789: mov     ecx, edi; this
0x62778B: call    TESObjectREFR_IsPersistent?
0x627790: test    al, al
0x627792: jz      short loc_6277E8
0x627794: push    edi
0x627795: call    Actor__CanUSeDoor?
0x62779A: add     esp, 4
0x62779D: test    al, al
0x62779F: jz      short loc_6277E8
0x6277A1: mov     edx, [edi]
0x6277A3: fld     dword ptr ds:0A578C0h
0x6277A9: mov     eax, [edx+174h]
0x6277AF: push    edi; a7
0x6277B0: push    offset sub_626CC0; a6
0x6277B5: push    ecx
0x6277B6: mov     ecx, edi
0x6277B8: fstp    [esp+4Ch+a5]; a5
0x6277BB: call    eax
0x6277BD: fld     dword ptr ds:0A578C0h
0x6277C3: mov     edx, [edi]
0x6277C5: push    eax; a4
0x6277C6: mov     eax, [edx+174h]
0x6277CC: push    ecx
0x6277CD: mov     ecx, edi
0x6277CF: fstp    [esp+54h+a3]; a3
0x6277D2: call    eax
0x6277D4: push    eax; a2
0x6277D5: mov     ecx, edi; this
0x6277D7: call    TESObjectREFR_GetParentCell
0x6277DC: mov     ecx, ds:0B33A98h
0x6277E2: push    eax; a1
0x6277E3: call    sub_446B90
0x6277E8: mov     eax, ds:0B3B91Ch
0x6277ED: xor     edx, edx
0x6277EF: cmp     eax, edx
0x6277F1: mov     ds:0B3B924h, edx
0x6277F7: jz      short loc_627802
0x6277F9: mov     [ebx+5Ch], eax
0x6277FC: mov     ds:0B3B91Ch, edx
0x627802: mov     ecx, [ebx+5Ch]
0x627805: cmp     ecx, edx
0x627807: jnz     loc_62794D
0x62780D: mov     edx, [ebp+0]
0x627810: mov     eax, [edx+174h]
0x627816: mov     ecx, ebp
0x627818: call    eax
0x62781A: mov     edx, [eax+4]
0x62781D: mov     ecx, [eax]
0x62781F: mov     eax, [eax+8]
0x627822: mov     [esp+40h+var_14], edx
0x627826: mov     edx, [edi]
0x627828: mov     [esp+40h+var_18], ecx
0x62782C: mov     [esp+40h+var_10], eax
0x627830: mov     eax, [edx+174h]
0x627836: mov     ecx, edi
0x627838: call    eax
0x62783A: fld     dword ptr ds:0B37030h
0x627840: mov     ecx, [eax]
0x627842: fstp    [esp+40h+arg_C]
0x627846: mov     edx, [eax+4]
0x627849: mov     eax, [eax+8]
0x62784C: mov     [esp+40h+var_24], ecx
0x627850: fld     [esp+40h+var_24]
0x627854: fsub    [esp+40h+var_18]
0x627858: mov     [esp+40h+var_20], edx
0x62785C: mov     [esp+40h+var_1C], eax
0x627860: lea     ecx, [esp+40h+var_30]
0x627864: fstp    [esp+40h+var_30]
0x627868: fld     [esp+40h+var_20]
0x62786C: fsub    [esp+40h+var_14]
0x627870: fstp    [esp+40h+var_2C]
0x627874: fld     [esp+40h+var_1C]
0x627878: fsub    [esp+40h+var_10]
0x62787C: fstp    [esp+40h+var_28]
0x627880: call    sub_43F350
0x627885: fstp    st
0x627887: fld     [esp+40h+var_30]
0x62788B: fld     [esp+40h+arg_C]
0x62788F: fld     st
0x627891: fmulp   st(2), st
0x627893: fxch    st(1)
0x627895: fstp    [esp+40h+var_18]
0x627899: fld     [esp+40h+var_2C]
0x62789D: fmul    st, st(1)
0x62789F: fstp    [esp+40h+var_14]
0x6278A3: fmul    [esp+40h+var_28]
0x6278A7: fstp    [esp+40h+var_10]
0x6278AB: fld     [esp+40h+var_18]
0x6278AF: fadd    [esp+40h+var_24]
0x6278B3: fstp    [esp+40h+var_C]
0x6278B7: mov     ecx, [esp+40h+var_C]
0x6278BB: fld     [esp+40h+var_14]
0x6278BF: mov     [esp+40h+var_30], ecx
0x6278C3: fadd    [esp+40h+var_20]
0x6278C7: mov     ecx, edi; this
0x6278C9: fstp    [esp+40h+var_8]
0x6278CD: mov     edx, [esp+40h+var_8]
0x6278D1: fld     [esp+40h+var_10]
0x6278D5: mov     [esp+40h+var_2C], edx
0x6278D9: fadd    [esp+40h+var_1C]
0x6278DD: fstp    [esp+40h+var_4]
0x6278E1: mov     eax, [esp+40h+var_4]
0x6278E5: mov     [esp+40h+var_28], eax
0x6278E9: call    TESObjectREFR_GetParentCell
0x6278EE: mov     ecx, [esp+40h+var_30]
0x6278F2: mov     edx, [esp+40h+var_2C]
0x6278F6: push    0; int
0x6278F8: push    0; float
0x6278FA: push    0; float
0x6278FC: push    eax; int
0x6278FD: sub     esp, 0Ch
0x627900: mov     eax, esp
0x627902: mov     [eax], ecx
0x627904: mov     ecx, [esp+5Ch+var_28]
0x627908: mov     [eax+4], edx
0x62790B: lea     edx, [esp+5Ch+var_C]
0x62790F: mov     [eax+8], ecx
0x627912: push    edx; int
0x627913: mov     ecx, edi
0x627915: call    sub_5E2E20
0x62791A: mov     ecx, [eax]
0x62791C: mov     [esi], ecx
0x62791E: mov     edx, [eax+4]
0x627921: mov     [esi+4], edx
0x627924: mov     eax, [eax+8]
0x627927: lea     ecx, [esp+40h+var_30]
0x62792B: push    ecx
0x62792C: mov     ecx, esi
0x62792E: mov     [esi+8], eax
0x627931: call    sub_8AA350
0x627936: test    al, al
0x627938: jz      short loc_627981
0x62793A: lea     edx, [esp+40h+var_30]
0x62793E: push    edx
0x62793F: lea     eax, [esp+44h+var_C]
0x627943: push    eax
0x627944: mov     ecx, edi
0x627946: call    sub_5E03E0
0x62794B: jmp     short loc_627952
0x62794D: call    sub_4D76F0
0x627952: mov     ecx, [eax]
0x627954: mov     [esi], ecx
0x627956: mov     edx, [eax+4]
0x627959: mov     [esi+4], edx
0x62795C: mov     eax, [eax+8]
0x62795F: mov     [esi+8], eax
0x627962: jmp     short loc_627981
0x627964: push    edi
0x627965: lea     ecx, [esp+44h+var_C]
0x627969: push    ecx
0x62796A: mov     ecx, ebx
0x62796C: call    sub_566B30
0x627971: mov     edx, [eax]
0x627973: mov     [esi], edx
0x627975: mov     ecx, [eax+4]
0x627978: mov     [esi+4], ecx
0x62797B: mov     edx, [eax+8]
0x62797E: mov     [esi+8], edx
0x627981: mov     eax, [esi]
0x627983: mov     [ebx+40h], eax
0x627986: mov     ecx, [esi+4]
0x627989: mov     [ebx+44h], ecx
0x62798C: mov     edx, [esi+8]
0x62798F: pop     edi
0x627990: mov     eax, esi
0x627992: pop     esi
0x627993: pop     ebp
0x627994: mov     [ebx+48h], edx
0x627997: pop     ebx
0x627998: add     esp, 30h
0x62799B: retn    10h
