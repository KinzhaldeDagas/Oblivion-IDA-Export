0x575FAE: movzx   ecx, [esp+arg_E]; jumptable 00575F9B default case
0x575FB3: lea     eax, ds:0[ecx*8]
0x575FBA: sub     eax, ecx
0x575FBC: mov     ecx, [esp+arg_34]
0x575FC0: mov     edx, [ecx+38h]
0x575FC3: add     eax, eax
0x575FC5: add     eax, eax
0x575FC7: add     eax, eax
0x575FC9: mov     [esp+arg_4C], eax
0x575FCD: lea     eax, [eax+edx+128h]
0x575FD4: fld     dword ptr [eax+30h]
0x575FD7: fadd    dword ptr [eax+24h]
0x575FDA: call    Double_To_SInt32
0x575FDF: add     ebx, eax
0x575FE1: cmp     [esp+arg_E], 20h ; ' '
0x575FE6: jnz     short loc_575FFB
0x575FE8: mov     ecx, ebx
0x575FEA: sub     ecx, eax
0x575FEC: mov     [esp+arg_48], ecx
0x575FF0: mov     [esp+arg_54], ebx
0x575FF4: mov     [esp+arg_F], 0
0x575FF9: jmp     short loc_576011
0x575FFB: cmp     [esp+arg_E], 7Eh ; '~'
0x576000: jnz     short loc_576015
0x576002: mov     [esp+arg_48], ebx
0x576006: mov     [esp+arg_54], ebx
0x57600A: mov     [esp+arg_F], 1
0x57600F: sub     ebx, eax
0x576011: mov     [esp+arg_38], esi
0x576015: mov     eax, [esp+arg_18]
0x576019: cmp     ebx, [eax+8]
0x57601C: jle     loc_576226
0x576022: mov     eax, [esp+arg_38]
0x576026: test    eax, eax
0x576028: jz      loc_57613F
0x57602E: cmp     [esp+arg_F], 0
0x576033: jz      loc_5760D9
0x576039: mov     eax, [esp+arg_30]
0x57603D: add     eax, 4
0x576040: push    eax; NewSize
0x576041: push    edi; Src
0x576042: mov     ecx, offset FormHeap
0x576047: mov     [esp+8+arg_F], 0
0x57604C: mov     [esp+8+arg_30], eax
0x576050: call    MemoryHeap_Reallocate
0x576055: mov     ecx, [esp+arg_38]
0x576059: mov     edi, eax
0x57605B: mov     edx, esi
0x57605D: sub     edx, ecx
0x57605F: lea     ebp, [edi+ecx]
0x576062: push    edx
0x576063: lea     eax, [ebp+2]
0x576066: push    ebp
0x576067: push    eax
0x576068: call    unknown_libname_16
0x57606D: fild    [esp+0Ch+arg_44]
0x576071: mov     ecx, [esp+0Ch+arg_34]
0x576075: mov     byte ptr [ebp+1], 0Ah
0x576079: mov     byte ptr [ebp+0], 2Dh ; '-'
0x57607D: mov     ebp, [ecx+38h]
0x576080: fadd    dword ptr [ebp+0]
0x576083: mov     eax, 2
0x576088: add     [esp+0Ch+arg_1C], eax
0x57608C: add     [esp+0Ch+NewSize], eax
0x576090: fiadd   [esp+0Ch+arg_20]
0x576094: add     [esp+0Ch+arg_10], eax
0x576098: add     esp, 0Ch
0x57609B: add     esi, eax
0x57609D: call    Double_To_SInt32
0x5760A2: fld     dword ptr [ebp+0B30h]
0x5760A8: fadd    dword ptr [ebp+0B24h]
0x5760AE: mov     [esp+arg_20], eax
0x5760B2: call    Double_To_SInt32
0x5760B7: mov     ecx, [esp+arg_18]
0x5760BB: sub     ebx, eax
0x5760BD: push    ebx
0x5760BE: add     ecx, 20h ; ' '
0x5760C1: call    BSSimpleList_PushBack
0x5760C6: cmp     [esp+arg_24], ebx
0x5760CA: jg      short loc_5760D0
0x5760CC: mov     [esp+arg_24], ebx
0x5760D0: movsx   eax, byte ptr [edi-1]
0x5760D4: jmp     loc_5761D4
0x5760D9: cmp     eax, esi
0x5760DB: jnz     short loc_5760E7
0x5760DD: mov     dl, [esp+arg_2F]
0x5760E1: mov     [esp+arg_E], dl
0x5760E5: jmp     short loc_5760EE
0x5760E7: mov     cl, [esp+arg_2F]
0x5760EB: mov     [edi+eax], cl
0x5760EE: mov     edx, [esp+arg_34]
0x5760F2: mov     eax, [edx+38h]
0x5760F5: fld     dword ptr [eax]
0x5760F7: fiadd   [esp+arg_44]
0x5760FB: fiadd   [esp+arg_20]
0x5760FF: call    Double_To_SInt32
0x576104: mov     ecx, [esp+arg_48]
0x576108: push    ecx
0x576109: mov     ecx, [esp+4+arg_18]
0x57610D: add     ecx, 20h ; ' '
0x576110: mov     [esp+4+arg_20], eax
0x576114: call    BSSimpleList_PushBack
0x576119: mov     edx, [esp+arg_48]
0x57611D: cmp     [esp+arg_24], edx
0x576121: jg      short loc_576129
0x576123: mov     eax, edx
0x576125: mov     [esp+arg_24], eax
0x576129: add     [esp+arg_28], 1
0x57612E: sub     ebx, [esp+arg_54]
0x576132: mov     [esp+arg_38], 0
0x57613A: jmp     loc_576226
0x57613F: mov     ecx, [esp+arg_30]
0x576143: cmp     [esp+arg_1C], ecx
0x576147: jb      short loc_57615F
0x576149: mov     ebp, [esp+NewSize]
0x57614D: push    ebp; NewSize
0x57614E: push    edi; Src
0x57614F: mov     ecx, offset FormHeap
0x576154: call    MemoryHeap_Reallocate
0x576159: mov     edi, eax
0x57615B: mov     [esp+arg_30], ebp
0x57615F: mov     dl, [esi+edi]
0x576162: fild    [esp+arg_44]
0x576166: mov     al, [esi+edi-1]
0x57616A: mov     ecx, [esp+arg_34]
0x57616E: mov     [esi+edi+1], al
0x576172: mov     [esi+edi+2], dl
0x576176: mov     byte ptr [esi+edi], 0Ah
0x57617A: mov     byte ptr [esi+edi-1], 2Dh ; '-'
0x57617F: mov     ebp, [ecx+38h]
0x576182: fadd    dword ptr [ebp+0]
0x576185: mov     eax, 2
0x57618A: add     [esp+arg_1C], eax
0x57618E: add     [esp+NewSize], eax
0x576192: fiadd   [esp+arg_20]
0x576196: add     [esp+arg_10], eax
0x57619A: add     esi, eax
0x57619C: call    Double_To_SInt32
0x5761A1: fld     dword ptr [ebp+0B30h]
0x5761A7: fadd    dword ptr [ebp+0B24h]
0x5761AD: mov     [esp+arg_20], eax
0x5761B1: call    Double_To_SInt32
0x5761B6: mov     ecx, [esp+arg_18]
0x5761BA: sub     ebx, eax
0x5761BC: push    ebx
0x5761BD: add     ecx, 20h ; ' '
0x5761C0: call    BSSimpleList_PushBack
0x5761C5: cmp     [esp+arg_24], ebx
0x5761C9: jg      short loc_5761CF
0x5761CB: mov     [esp+arg_24], ebx
0x5761CF: movsx   eax, byte ptr [esi+edi-1]
0x5761D4: mov     edx, [esp+arg_34]
0x5761D8: mov     ebp, [edx+38h]
0x5761DB: add     [esp+arg_28], 1
0x5761E0: lea     ecx, ds:0[eax*8]
0x5761E7: sub     ecx, eax
0x5761E9: fld     dword ptr [ebp+ecx*8+158h]
0x5761F0: lea     eax, [ebp+ecx*8+128h]
0x5761F7: fadd    dword ptr [eax+24h]
0x5761FA: mov     [esp+arg_38], 0
0x576202: call    Double_To_SInt32
0x576207: mov     ebx, eax
0x576209: mov     eax, [esp+arg_4C]
0x57620D: fld     dword ptr [eax+ebp+158h]
0x576214: fadd    dword ptr [eax+ebp+14Ch]
0x57621B: call    Double_To_SInt32
0x576220: mov     ebp, [esp+arg_10]
0x576224: add     ebx, eax
0x576226: mov     al, [esp+arg_E]
0x57622A: cmp     al, 7Eh ; '~'
0x57622C: jz      short loc_576246
0x57622E: mov     [esi+edi], al
0x576231: mov     eax, 1
0x576236: add     [esp+arg_1C], eax
0x57623A: add     [esp+NewSize], eax
0x57623E: add     esi, eax
0x576240: add     ebp, eax
0x576242: mov     [esp+arg_10], ebp
0x576246: cmp     esi, [esp+arg_30]
0x57624A: jb      short loc_57625E
0x57624C: push    ebp; NewSize
0x57624D: push    edi; Src
0x57624E: mov     ecx, offset FormHeap
0x576253: call    MemoryHeap_Reallocate
0x576258: mov     edi, eax
0x57625A: mov     [esp+arg_30], ebp
0x57625E: cmp     [esp+arg_58], 0
0x576263: jle     short loc_576273
0x576265: mov     edx, [esp+arg_58]
0x576269: cmp     [esp+arg_28], edx
0x57626D: jle     short loc_576273
0x57626F: test    esi, esi
0x576271: ja      short loc_57628A
0x576273: mov     eax, [esp+arg_40]
0x576277: add     eax, 1
0x57627A: cmp     eax, [esp+arg_3C]
0x57627E: mov     [esp+arg_40], eax
0x576282: jb      loc_575ED0
0x576288: jmp     short loc_5762C8
0x57628A: mov     cl, [esi+edi]
0x57628D: mov     eax, [esp+arg_18]
0x576291: cmp     cl, [eax+1Ch]
0x576294: jz      short loc_5762A8
0x576296: mov     al, [eax+1Ch]
0x576299: lea     esp, [esp+0]
0x5762A0: sub     esi, 1
0x5762A3: cmp     [esi+edi], al
0x5762A6: jnz     short loc_5762A0
0x5762A8: mov     edx, [esp+arg_34]
0x5762AC: fild    [esp+arg_20]
0x5762B0: mov     byte ptr [esi+edi], 0
0x5762B4: mov     eax, [edx+38h]
0x5762B7: fld     dword ptr [eax]
0x5762B9: fiadd   [esp+arg_44]
0x5762BD: fsubp   st(1), st
0x5762BF: call    Double_To_SInt32
0x5762C4: mov     [esp+arg_20], eax
0x5762C8: cmp     byte ptr [edi], 0
0x5762CB: jz      short loc_576317
0x5762CD: mov     ecx, [esp+arg_18]
0x5762D1: cmp     dword ptr [ecx+10h], 0
0x5762D5: jz      short loc_576312
0x5762D7: xor     ebp, ebp
0x5762D9: xor     ecx, ecx
0x5762DB: xor     eax, eax
0x5762DD: test    esi, esi
0x5762DF: jbe     short loc_57630C
0x5762E1: mov     edx, [esp+arg_18]
0x5762E5: cmp     ecx, [edx+10h]
0x5762E8: jb      short loc_5762FC
0x5762EA: cmp     ecx, [edx+14h]
0x5762ED: jnb     short loc_5762FC
0x5762EF: mov     dl, [eax+edi]
0x5762F2: mov     [edi+ebp], dl
0x5762F5: mov     edx, [esp+arg_18]
0x5762F9: add     ebp, 1
0x5762FC: cmp     byte ptr [eax+edi], 0Ah
0x576300: jnz     short loc_576305
0x576302: add     ecx, 1
0x576305: add     eax, 1
0x576308: cmp     eax, esi
0x57630A: jb      short loc_5762E5
0x57630C: mov     byte ptr [edi+ebp], 0
0x576310: mov     esi, ebp
0x576312: cmp     byte ptr [edi], 0
0x576315: jnz     short loc_57634A
0x576317: mov     eax, [esp+arg_34]
0x57631B: mov     byte ptr [edi], 20h ; ' '
0x57631E: mov     byte ptr [edi+1], 0
0x576322: mov     ebx, [eax+38h]
0x576325: fld     dword ptr [ebx+850h]
0x57632B: mov     esi, 1
0x576330: mov     [esp+arg_28], esi
0x576334: call    Double_To_SInt32
0x576339: fld     dword ptr [ebx+84Ch]
0x57633F: mov     [esp+arg_20], eax
0x576343: call    Double_To_SInt32
0x576348: mov     ebx, eax
0x57634A: test    ebx, ebx
0x57634C: jz      short loc_576395
0x57634E: mov     ebp, [esp+arg_18]
0x576352: add     ebp, 20h ; ' '
0x576355: cmp     dword ptr [ebp+4], 0
0x576359: jz      short loc_576369
0x57635B: jmp     short loc_576360
0x57635D: align 10h
0x576360: mov     ebp, [ebp+4]
0x576363: cmp     dword ptr [ebp+4], 0
0x576367: jnz     short loc_576360
0x576369: cmp     dword ptr [ebp+0], 0
0x57636D: jz      short loc_576392
0x57636F: push    8; Size
0x576371: call    FormHeapAlloc
0x576376: add     esp, 4
0x576379: test    eax, eax
0x57637B: jz      short loc_57638B
0x57637D: mov     [eax], ebx
0x57637F: mov     dword ptr [eax+4], 0
0x576386: mov     [ebp+4], eax
0x576389: jmp     short loc_576395
0x57638B: xor     eax, eax
0x57638D: mov     [ebp+4], eax
0x576390: jmp     short loc_576395
0x576392: mov     [ebp+0], ebx
0x576395: cmp     [esp+arg_24], ebx
0x576399: jg      short loc_57639F
0x57639B: mov     [esp+arg_24], ebx
0x57639F: mov     ebx, [esp+arg_18]
0x5763A3: push    0; a3
0x5763A5: push    edi; a2
0x5763A6: mov     ecx, ebx; this
0x5763A8: mov     byte ptr [esi+edi], 0
0x5763AC: call    BSStringT_Set
0x5763B1: mov     ecx, [esp+arg_24]
0x5763B5: mov     edx, [esp+arg_20]
0x5763B9: mov     eax, [esp+arg_28]
0x5763BD: mov     [ebx+8], ecx
0x5763C0: mov     ecx, [esp+arg_50]
0x5763C4: push    ecx; void *
0x5763C5: mov     ecx, offset FormHeap
0x5763CA: mov     [ebx+0Ch], edx
0x5763CD: mov     dword ptr [ebx+10h], 0
0x5763D4: mov     [ebx+14h], eax
0x5763D7: mov     [ebx+18h], esi
0x5763DA: call    MemoryHeap_Free_checked
0x5763DF: push    edi; void *
0x5763E0: mov     ecx, offset FormHeap
0x5763E5: call    MemoryHeap_Free_checked
0x5763EA: pop     edi
0x5763EB: pop     esi
0x5763EC: mov     ecx, [esp-8+arg_4DC]
0x5763F3: pop     ebp
0x5763F4: pop     ebx
0x5763F5: xor     ecx, esp
0x5763F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5763FC: add     esp, 4D4h
0x576402: retn    8
