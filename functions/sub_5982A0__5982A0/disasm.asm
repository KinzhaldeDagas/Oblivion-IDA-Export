0x5982A0: push    ecx
0x5982A1: push    0
0x5982A3: push    401h
0x5982A8: call    sub_5790E0
0x5982AD: add     esp, 8
0x5982B0: test    al, al
0x5982B2: jnz     loc_59863B
0x5982B8: push    0
0x5982BA: push    3F8h
0x5982BF: call    sub_5790E0
0x5982C4: add     esp, 8
0x5982C7: test    al, al
0x5982C9: jnz     loc_59863B
0x5982CF: push    0
0x5982D1: push    3E9h
0x5982D6: call    sub_5790E0
0x5982DB: add     esp, 8
0x5982DE: test    al, al
0x5982E0: jnz     loc_59863B
0x5982E6: push    esi
0x5982E7: push    3F0h
0x5982EC: call    Menu_GetOpenMenuTile
0x5982F1: mov     esi, eax
0x5982F3: add     esp, 4
0x5982F6: test    esi, esi
0x5982F8: jz      loc_59863A
0x5982FE: push    edi
0x5982FF: mov     ecx, esi
0x598301: call    Tile_GetParentMenu
0x598306: mov     edi, eax
0x598308: test    edi, edi
0x59830A: jz      loc_598622
0x598310: mov     eax, ds:0B33398h
0x598315: mov     ecx, [eax+24h]
0x598318: push    ebx
0x598319: push    ebp; a3
0x59831A: call    sub_6AC3D0
0x59831F: call    sub_5B3E90
0x598324: mov     ecx, [edi+44h]
0x598327: push    0; int
0x598329: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59832E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x598333: push    0; int
0x598335: push    ecx; void *
0x598336: call    OblivionDynamicCast
0x59833B: mov     dl, [edi+63h]
0x59833E: mov     ecx, [edi+44h]; this
0x598341: add     esp, 14h
0x598344: mov     ebx, eax
0x598346: mov     [esp+14h+var_1], dl
0x59834A: call    TESObjectREFR_GetOwner
0x59834F: fld     dword ptr ds:0A379B4h
0x598355: push    ecx
0x598356: fstp    [esp+18h+a2]; a3
0x598359: push    1772h; a2
0x59835E: mov     ecx, esi; this
0x598360: mov     ebp, eax
0x598362: call    Tile_SetFloat
0x598367: mov     ecx, esi
0x598369: call    Tile_GetParentMenu
0x59836E: mov     ecx, eax; int
0x598370: call    sub_584740
0x598375: test    ebx, ebx
0x598377: mov     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x598381: jz      short loc_5983A0
0x598383: mov     ecx, ebx; this
0x598385: call    Actor_IsNPC
0x59838A: test    al, al
0x59838C: jz      short loc_5983A0
0x59838E: mov     ecx, [ebx+58h]
0x598391: test    ecx, ecx
0x598393: jz      short loc_5983A0
0x598395: mov     eax, [ecx]
0x598397: mov     edx, [eax+318h]
0x59839D: push    ebx
0x59839E: call    edx
0x5983A0: cmp     [esp+14h+var_1], 0
0x5983A5: jz      loc_5984A9
0x5983AB: mov     eax, [ebx]
0x5983AD: mov     edx, [eax+19Ch]
0x5983B3: mov     ecx, ebx
0x5983B5: call    edx
0x5983B7: test    al, al
0x5983B9: jnz     loc_5984A9
0x5983BF: cmp     ds:0B13E90h, al
0x5983C5: jz      loc_5984A9
0x5983CB: mov     ecx, ds:0B333C4h
0x5983D1: fldz
0x5983D3: mov     eax, [ecx]
0x5983D5: mov     edx, [eax+39Ch]
0x5983DB: push    ecx
0x5983DC: fstp    [esp+18h+a2]
0x5983DF: push    1
0x5983E1: push    1Fh
0x5983E3: call    edx
0x5983E5: mov     ecx, ds:0B333C4h
0x5983EB: mov     eax, [ecx]
0x5983ED: mov     edx, [eax+284h]
0x5983F3: push    7
0x5983F5: call    edx
0x5983F7: mov     ecx, ds:0B333C4h
0x5983FD: push    eax
0x5983FE: mov     eax, [ecx]
0x598400: mov     edx, [eax+284h]
0x598406: push    1Fh
0x598408: call    edx
0x59840A: push    eax
0x59840B: call    Calc_LuckModifiedSkill
0x598410: call    Double_To_SInt32
0x598415: push    0; int
0x598417: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59841C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x598421: mov     ebp, eax
0x598423: mov     eax, [edi+44h]
0x598426: push    0; int
0x598428: push    eax; void *
0x598429: call    OblivionDynamicCast
0x59842E: mov     esi, eax
0x598430: mov     edx, [esi]
0x598432: mov     eax, [edx+284h]
0x598438: add     esp, 1Ch
0x59843B: push    7
0x59843D: mov     ecx, esi
0x59843F: call    eax
0x598441: mov     edx, [esi]
0x598443: push    eax
0x598444: mov     eax, [edx+284h]
0x59844A: push    1Fh
0x59844C: mov     ecx, esi
0x59844E: call    eax
0x598450: push    eax
0x598451: call    Calc_LuckModifiedSkill
0x598456: call    Double_To_SInt32
0x59845B: fldz
0x59845D: add     esp, 4
0x598460: fstp    [esp+18h+a2]; float
0x598463: push    eax; int
0x598464: push    ebp; int
0x598465: call    sub_546660
0x59846A: push    0; Seed
0x59846C: mov     ebp, eax
0x59846E: call    GetRandomLargeInteger?
0x598473: mov     ecx, eax
0x598475: mov     eax, 51EB851Fh
0x59847A: imul    ecx
0x59847C: sar     edx, 5
0x59847F: mov     eax, edx
0x598481: shr     eax, 1Fh
0x598484: add     eax, edx
0x598486: imul    eax, 64h ; 'd'
0x598489: sub     ecx, eax
0x59848B: add     esp, 10h
0x59848E: cmp     ebp, ecx
0x598490: jge     short loc_5984DC
0x598492: mov     ecx, ds:0B333C4h
0x598498: mov     edx, [ecx]
0x59849A: mov     eax, [edx+23Ch]
0x5984A0: push    0
0x5984A2: push    0
0x5984A4: push    esi
0x5984A5: call    eax
0x5984A7: jmp     short loc_5984DC
0x5984A9: cmp     byte ptr ds:0B3B279h, 0
0x5984B0: jz      short loc_5984DC
0x5984B2: mov     eax, ds:0B3B27Ch
0x5984B7: test    eax, eax
0x5984B9: jle     short loc_5984DC
0x5984BB: mov     ecx, ds:0B333C4h
0x5984C1: mov     edx, [ecx]
0x5984C3: mov     edx, [edx+238h]
0x5984C9: push    ebp
0x5984CA: push    eax
0x5984CB: mov     eax, [edi+44h]
0x5984CE: push    0
0x5984D0: push    0
0x5984D2: push    eax
0x5984D3: call    edx
0x5984D5: mov     byte ptr ds:0B3B279h, 0
0x5984DC: cmp     byte ptr [edi+61h], 0
0x5984E0: jz      short loc_598550
0x5984E2: cmp     byte ptr [edi+62h], 0
0x5984E6: jz      short loc_598544
0x5984E8: push    3F1h
0x5984ED: call    Menu_GetOpenMenuTile
0x5984F2: mov     ebp, eax
0x5984F4: add     esp, 4
0x5984F7: test    ebp, ebp
0x5984F9: jz      short loc_598550
0x5984FB: test    ebx, ebx
0x5984FD: jz      short loc_598550
0x5984FF: push    0; float
0x598501: mov     ecx, ebp
0x598503: call    sub_58FBA0
0x598508: cmp     byte ptr [edi+55h], 0
0x59850C: jz      short loc_59852C
0x59850E: mov     ecx, ebp
0x598510: call    Tile_GetParentMenu
0x598515: mov     ecx, ebx
0x598517: mov     esi, eax
0x598519: call    sub_5EF930
0x59851E: mov     ecx, esi
0x598520: mov     byte ptr [esi+96h], 1
0x598527: call    sub_59E030
0x59852C: fld     dword ptr ds:0A379B4h
0x598532: push    ecx
0x598533: fstp    [esp+18h+a2]; a3
0x598536: push    0FA1h; a2
0x59853B: mov     ecx, ebp; this
0x59853D: call    Tile_SetFloat
0x598542: jmp     short loc_598550
0x598544: mov     eax, ds:0B333C4h
0x598549: mov     byte ptr [eax+10Ch], 0
0x598550: cmp     dword ptr [edi+44h], 0
0x598554: pop     ebp
0x598555: pop     ebx
0x598556: jz      loc_598622
0x59855C: mov     ecx, [edi+44h]
0x59855F: mov     edx, [ecx]
0x598561: mov     eax, [edx+170h]
0x598567: call    eax
0x598569: movzx   eax, byte ptr [eax+4]
0x59856D: cmp     eax, 17h
0x598570: jz      short loc_5985BD
0x598572: add     eax, 0FFFFFFDDh
0x598575: cmp     eax, 1
0x598578: ja      loc_598622
0x59857E: mov     edi, [edi+44h]
0x598581: mov     edx, [edi]
0x598583: mov     eax, [edx+198h]
0x598589: push    0
0x59858B: mov     ecx, edi
0x59858D: call    eax
0x59858F: test    al, al
0x598591: jz      loc_598622
0x598597: push    0; int
0x598599: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x59859E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5985A3: push    0; int
0x5985A5: push    offset aDrsbodyclose; "DRSBodyClose"
0x5985AA: call    sub_46B280
0x5985AF: add     esp, 4
0x5985B2: push    eax; void *
0x5985B3: call    OblivionDynamicCast
0x5985B8: add     esp, 14h
0x5985BB: jmp     short loc_5985CD
0x5985BD: mov     ecx, [edi+44h]
0x5985C0: mov     edx, [ecx]
0x5985C2: mov     eax, [edx+170h]
0x5985C8: call    eax
0x5985CA: mov     eax, [eax+74h]
0x5985CD: test    eax, eax
0x5985CF: jz      short loc_598622
0x5985D1: mov     ecx, ds:0B33398h
0x5985D7: mov     ecx, [ecx+24h]
0x5985DA: test    ecx, ecx
0x5985DC: jz      short loc_598622
0x5985DE: mov     eax, [eax+0Ch]
0x5985E1: push    0
0x5985E3: push    121h
0x5985E8: push    eax
0x5985E9: call    OSGLobals_PlaySound
0x5985EE: mov     esi, eax
0x5985F0: test    esi, esi
0x5985F2: jz      short loc_598622
0x5985F4: cmp     byte ptr ds:0B3B278h, 0
0x5985FB: push    0
0x5985FD: mov     ecx, esi
0x5985FF: jnz     short loc_598608
0x598601: call    sub_6B7190
0x598606: jmp     short loc_598612
0x598608: push    14Dh
0x59860D: call    sub_6B71F0
0x598612: mov     ecx, esi; this
0x598614: call    sub_6B73E0
0x598619: push    esi
0x59861A: call    FormHeapFree
0x59861F: add     esp, 4
0x598622: mov     edx, ds:0B333C4h
0x598628: mov     dword ptr ds:0B3B27Ch, 0
0x598632: mov     byte ptr [edx+124h], 0
0x598639: pop     edi
0x59863A: pop     esi
0x59863B: pop     ecx
0x59863C: retn
