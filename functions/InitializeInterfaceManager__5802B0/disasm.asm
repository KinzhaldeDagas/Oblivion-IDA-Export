0x5802B0: push    0FFFFFFFFh
0x5802B2: push    offset InitializeInterfaceManager_SEH
0x5802B7: mov     eax, large fs:0
0x5802BD: push    eax
0x5802BE: sub     esp, 14h
0x5802C1: push    ebx
0x5802C2: push    ebp
0x5802C3: push    esi
0x5802C4: push    edi
0x5802C5: mov     eax, ds:0B30AACh
0x5802CA: xor     eax, esp
0x5802CC: push    eax
0x5802CD: lea     eax, [esp+34h+var_C]
0x5802D1: mov     large fs:0, eax
0x5802D7: mov     esi, ecx
0x5802D9: mov     [esp+34h+var_10], esi
0x5802DD: xor     ebx, ebx
0x5802DF: mov     [esi], ebx
0x5802E1: mov     [esp+34h+var_4], ebx
0x5802E5: mov     [esi+4], ebx
0x5802E8: mov     [esi+78h], ebx
0x5802EB: fldz
0x5802ED: fst     [esp+34h+var_20]
0x5802F1: mov     [esi+54h], ebx
0x5802F4: mov     eax, [esp+34h+var_20]
0x5802F8: fst     [esp+34h+var_1C]
0x5802FC: mov     ecx, [esp+34h+var_1C]
0x580300: fst     [esp+34h+var_18]
0x580304: mov     edx, [esp+34h+var_18]
0x580308: fst     dword ptr [esi+74h]
0x58030B: mov     [esi+0D0h], eax
0x580311: mov     [esi+0D4h], ecx
0x580317: mov     [esi+58h], ebx
0x58031A: mov     [esi+5Ch], ebx
0x58031D: mov     [esi+60h], ebx
0x580320: mov     [esi+68h], ebx
0x580323: mov     [esi+70h], ebx
0x580326: mov     [esi+0D8h], edx
0x58032C: mov     [esi+0DCh], bl
0x580332: mov     [esi+0C8h], ebx
0x580338: mov     [esi+0CCh], ebx
0x58033E: mov     [esi+0BCh], ebx
0x580344: mov     [esi+0C0h], ebx
0x58034A: mov     [esi+0C4h], ebx
0x580350: mov     [esi+18h], ebx
0x580353: mov     byte ptr [esi+8], 1
0x580357: mov     [esi+9], bl
0x58035A: mov     byte ptr [esi+0Ah], 0FFh
0x58035E: mov     byte ptr [esi+0Bh], 0FFh
0x580362: mov     byte ptr [esi+0Ch], 0FFh
0x580366: mov     byte ptr [esi+0Dh], 0FFh
0x58036A: mov     [esi+7Eh], bx
0x58036E: mov     [esi+88h], ebx
0x580374: mov     [esi+98h], ebx
0x58037A: mov     [esi+9Ch], ebx
0x580380: mov     [esi+0A0h], ebx
0x580386: mov     [esi+0A4h], ebx
0x58038C: mov     edi, [esi+78h]
0x58038F: cmp     edi, ebx
0x580391: mov     byte ptr [esp+34h+var_4], 2
0x580396: jz      short loc_5803BB
0x580398: lea     eax, [edi+4]
0x58039B: fstp    st
0x58039D: push    eax; lpAddend
0x58039E: call    dword ptr ds:0A2807Ch
0x5803A4: test    eax, eax
0x5803A6: jnz     short loc_5803B6
0x5803A8: cmp     edi, ebx
0x5803AA: jz      short loc_5803B6
0x5803AC: mov     edx, [edi]
0x5803AE: mov     eax, [edx]
0x5803B0: push    1
0x5803B2: mov     ecx, edi
0x5803B4: call    eax
0x5803B6: fldz
0x5803B8: mov     [esi+78h], ebx
0x5803BB: fst     dword ptr [esi+38h]
0x5803BE: mov     dword ptr [esi+10h], 50h ; 'P'
0x5803C5: mov     edi, [esi+78h]
0x5803C8: cmp     edi, ebx
0x5803CA: jz      short loc_5803EF
0x5803CC: lea     ecx, [edi+4]
0x5803CF: fstp    st
0x5803D1: push    ecx; lpAddend
0x5803D2: call    dword ptr ds:0A2807Ch
0x5803D8: test    eax, eax
0x5803DA: jnz     short loc_5803EA
0x5803DC: cmp     edi, ebx
0x5803DE: jz      short loc_5803EA
0x5803E0: mov     edx, [edi]
0x5803E2: mov     eax, [edx]
0x5803E4: push    1
0x5803E6: mov     ecx, edi
0x5803E8: call    eax
0x5803EA: fldz
0x5803EC: mov     [esi+78h], ebx
0x5803EF: fstp    dword ptr [esi+3Ch]
0x5803F2: mov     [esi+10Ch], ebx
0x5803F8: mov     [esi+1Ch], ebx
0x5803FB: mov     [esi+114h], bl
0x580401: mov     [esi+118h], ebx
0x580407: mov     [esi+11Ch], ebx
0x58040D: mov     [esi+120h], ebx
0x580413: mov     [esi+128h], ebx
0x580419: mov     [esi+80h], ebx
0x58041F: mov     [esi+84h], ebx
0x580425: mov     [esi+0A8h], bl
0x58042B: mov     byte ptr [esi+0B0h], 0FFh
0x580432: mov     [esi+0B4h], ebx
0x580438: mov     [esi+0B8h], bl
0x58043E: mov     byte ptr [esi+0B9h], 1
0x580445: mov     dword ptr [esi+8Ch], 64h ; 'd'
0x58044F: mov     [esi+94h], bl
0x580455: mov     [esi+0E0h], ebx
0x58045B: mov     [esi+0E4h], ebx
0x580461: mov     [esi+0E8h], ebx
0x580467: mov     [esi+0ECh], ebx
0x58046D: mov     [esi+0F0h], ebx
0x580473: mov     [esi+0F4h], ebx
0x580479: mov     [esi+0F8h], ebx
0x58047F: mov     [esi+0FCh], ebx
0x580485: mov     [esi+100h], ebx
0x58048B: mov     [esi+104h], ebx
0x580491: fild    dword ptr ds:0B06C4Ch
0x580497: fstp    [esp+34h+var_20]
0x58049B: fild    dword ptr ds:0B06C50h
0x5804A1: fstp    [esp+34h+var_14]
0x5804A5: fld     [esp+34h+var_20]
0x5804A9: fld     [esp+34h+var_14]
0x5804AD: fcom    st(1)
0x5804AF: fnstsw  ax
0x5804B1: test    ah, 5
0x5804B4: jp      short loc_5804C0
0x5804B6: fdivp   st(1), st
0x5804B8: fmul    qword ptr ds:0A68D70h
0x5804BE: jmp     short loc_5804CA
0x5804C0: fstp    st(1)
0x5804C2: fstp    st
0x5804C4: fld     dword ptr ds:0A688A8h
0x5804CA: fstp    [esp+34h+var_20]
0x5804CE: fld     [esp+34h+var_20]
0x5804D2: fmul    qword ptr ds:0A2FAA0h
0x5804D8: fstp    qword ptr [esp+34h+var_20]
0x5804DC: fld     qword ptr ds:0A690D0h
0x5804E2: call    __CIsin
0x5804E7: fstp    [esp+34h+var_14]
0x5804EB: fld     [esp+34h+var_14]
0x5804EF: fdivr   qword ptr [esp+34h+var_20]
0x5804F3: fstp    [esp+34h+var_20]
0x5804F7: fld     qword ptr ds:0A690D0h
0x5804FD: call    __CIcos
0x580502: fstp    [esp+34h+var_14]
0x580506: cmp     [esi+78h], ebx
0x580509: fld     [esp+34h+var_14]
0x58050D: fmul    [esp+34h+var_20]
0x580511: fstp    dword ptr [esi+74h]
0x580514: jnz     loc_58059D
0x58051A: push    1Ch; Size
0x58051C: call    FormHeapAlloc
0x580521: mov     edi, eax
0x580523: add     esp, 4
0x580526: mov     [esp+34h+var_14], edi
0x58052A: cmp     edi, ebx
0x58052C: mov     byte ptr [esp+34h+var_4], 3
0x580531: jz      short loc_58054D
0x580533: mov     ecx, edi; this
0x580535: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x58053A: mov     dword ptr [edi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x580540: mov     word ptr [edi+18h], 0ECh ; 'ì'
0x580546: mov     [edi+1Ah], bl
0x580549: mov     ebp, edi
0x58054B: jmp     short loc_58054F
0x58054D: xor     ebp, ebp
0x58054F: mov     edi, [esi+78h]
0x580552: cmp     edi, ebp
0x580554: mov     byte ptr [esp+34h+var_4], 2
0x580559: jz      short loc_58058C
0x58055B: cmp     edi, ebx
0x58055D: jz      short loc_58057B
0x58055F: lea     ecx, [edi+4]
0x580562: push    ecx; lpAddend
0x580563: call    dword ptr ds:0A2807Ch
0x580569: test    eax, eax
0x58056B: jnz     short loc_58057B
0x58056D: cmp     edi, ebx
0x58056F: jz      short loc_58057B
0x580571: mov     edx, [edi]
0x580573: mov     eax, [edx]
0x580575: push    1
0x580577: mov     ecx, edi
0x580579: call    eax
0x58057B: cmp     ebp, ebx
0x58057D: mov     [esi+78h], ebp
0x580580: jz      short loc_58058C
0x580582: add     ebp, 4
0x580585: push    ebp; lpAddend
0x580586: call    dword ptr ds:0A28078h
0x58058C: mov     eax, [esi+78h]
0x58058F: or      word ptr [eax+18h], 1
0x580594: mov     eax, [esi+78h]
0x580597: and     word ptr [eax+18h], 0DFFFh
0x58059D: mov     ecx, ds:0B333D4h
0x5805A3: push    1
0x5805A5: push    offset aMenu3droot; "Menu3DRoot"
0x5805AA: push    ecx
0x5805AB: mov     ecx, esi
0x5805AD: call    sub_57ED20
0x5805B2: mov     edi, [esi+4]
0x5805B5: mov     ebp, eax
0x5805B7: cmp     edi, ebp
0x5805B9: jz      short loc_5805EC
0x5805BB: cmp     edi, ebx
0x5805BD: jz      short loc_5805DB
0x5805BF: lea     edx, [edi+4]
0x5805C2: push    edx; lpAddend
0x5805C3: call    dword ptr ds:0A2807Ch
0x5805C9: test    eax, eax
0x5805CB: jnz     short loc_5805DB
0x5805CD: cmp     edi, ebx
0x5805CF: jz      short loc_5805DB
0x5805D1: mov     eax, [edi]
0x5805D3: mov     edx, [eax]
0x5805D5: push    1
0x5805D7: mov     ecx, edi
0x5805D9: call    edx
0x5805DB: cmp     ebp, ebx
0x5805DD: mov     [esi+4], ebp
0x5805E0: jz      short loc_5805EC
0x5805E2: add     ebp, 4
0x5805E5: push    ebp; lpAddend
0x5805E6: call    dword ptr ds:0A28078h
0x5805EC: mov     eax, ds:0B333D0h
0x5805F1: push    ebx
0x5805F2: push    offset aMenuroot; "MenuRoot"
0x5805F7: push    eax
0x5805F8: mov     ecx, esi
0x5805FA: call    sub_57ED20
0x5805FF: mov     edi, [esi]
0x580601: mov     ebp, eax
0x580603: cmp     edi, ebp
0x580605: jz      short loc_580637
0x580607: cmp     edi, ebx
0x580609: jz      short loc_580627
0x58060B: lea     ecx, [edi+4]
0x58060E: push    ecx; lpAddend
0x58060F: call    dword ptr ds:0A2807Ch
0x580615: test    eax, eax
0x580617: jnz     short loc_580627
0x580619: cmp     edi, ebx
0x58061B: jz      short loc_580627
0x58061D: mov     edx, [edi]
0x58061F: mov     eax, [edx]
0x580621: push    1
0x580623: mov     ecx, edi
0x580625: call    eax
0x580627: cmp     ebp, ebx
0x580629: mov     [esi], ebp
0x58062B: jz      short loc_580637
0x58062D: add     ebp, 4
0x580630: push    ebp; lpAddend
0x580631: call    dword ptr ds:0A28078h
0x580637: call    FontManager_GetSingleton
0x58063C: push    1
0x58063E: call    Menu_GetB3A708
0x580643: call    sub_5888A0
0x580648: push    0Ch; Size
0x58064A: call    FormHeapAlloc
0x58064F: add     esp, 8
0x580652: mov     [esp+34h+var_14], eax
0x580656: cmp     eax, ebx
0x580658: mov     byte ptr [esp+34h+var_4], 4
0x58065D: jz      short loc_580668
0x58065F: mov     ecx, eax
0x580661: call    sub_538B20
0x580666: jmp     short loc_58066A
0x580668: xor     eax, eax
0x58066A: push    14h; Size
0x58066C: mov     byte ptr [esp+38h+var_4], 2
0x580671: mov     [esi+108h], eax
0x580677: call    FormHeapAlloc
0x58067C: add     esp, 4
0x58067F: cmp     eax, ebx
0x580681: jz      short loc_58069B
0x580683: fldz
0x580685: mov     [eax+0Ch], ebx
0x580688: fstp    dword ptr [eax+4]
0x58068B: mov     [eax+10h], ebx
0x58068E: fld     dword ptr ds:0A37080h
0x580694: mov     [eax], ebx
0x580696: fstp    dword ptr [eax+8]
0x580699: jmp     short loc_58069D
0x58069B: xor     eax, eax
0x58069D: mov     [esi+130h], eax
0x5806A3: mov     [eax+0Ch], eax
0x5806A6: mov     [esi+10Ch], ebx
0x5806AC: mov     [esi+110h], ebx
0x5806B2: mov     eax, esi
0x5806B4: mov     ecx, dword ptr [esp+34h+var_C]
0x5806B8: mov     large fs:0, ecx
0x5806BF: pop     ecx
0x5806C0: pop     edi
0x5806C1: pop     esi
0x5806C2: pop     ebp
0x5806C3: pop     ebx
0x5806C4: add     esp, 20h
0x5806C7: retn
