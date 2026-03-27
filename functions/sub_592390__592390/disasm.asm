0x592390: push    0FFFFFFFFh
0x592392: push    offset SEH_592390
0x592397: mov     eax, large fs:0
0x59239D: push    eax
0x59239E: sub     esp, 98h
0x5923A4: push    ebx
0x5923A5: push    ebp
0x5923A6: push    esi
0x5923A7: push    edi
0x5923A8: mov     eax, ds:0B30AACh
0x5923AD: xor     eax, esp
0x5923AF: push    eax; a3
0x5923B0: lea     eax, [esp+0B8h+var_C]
0x5923B7: mov     large fs:0, eax
0x5923BD: mov     esi, ecx
0x5923BF: call    sub_5894D0
0x5923C4: push    0FADh
0x5923C9: mov     ecx, esi
0x5923CB: mov     [esp+0BCh+var_80], eax
0x5923CF: call    Tile_GetFloat
0x5923D4: fstp    [esp+0B8h+var_5C]
0x5923D8: push    0FACh
0x5923DD: mov     ecx, esi
0x5923DF: call    Tile_GetFloat
0x5923E4: fchs
0x5923E6: push    0FD4h
0x5923EB: fstp    [esp+0BCh+var_70]
0x5923EF: mov     ecx, esi
0x5923F1: call    Tile_GetFloat
0x5923F6: call    Double_To_SInt32
0x5923FB: push    0FD5h
0x592400: mov     ecx, esi
0x592402: mov     [esp+0BCh+var_9C], eax
0x592406: call    Tile_GetFloat
0x59240B: call    Double_To_SInt32
0x592410: push    0FD6h
0x592415: mov     ecx, esi
0x592417: mov     [esp+0BCh+var_8C], eax
0x59241B: call    Tile_GetFloat
0x592420: call    Double_To_SInt32
0x592425: push    0FD1h
0x59242A: mov     ecx, esi
0x59242C: mov     [esp+0BCh+var_90], eax
0x592430: call    Tile_GetFloat
0x592435: call    Double_To_SInt32
0x59243A: push    0FD3h
0x59243F: mov     ecx, esi
0x592441: mov     [esp+0BCh+var_84], eax
0x592445: call    Tile_GetFloat
0x59244A: fld1
0x59244C: fcom    st(1)
0x59244E: fnstsw  ax
0x592450: fstp    st(1)
0x592452: test    ah, 5
0x592455: jp      short loc_592465
0x592457: push    0FD3h
0x59245C: fstp    st
0x59245E: mov     ecx, esi
0x592460: call    Tile_GetFloat
0x592465: fstp    [esp+0B8h+var_A0]
0x592469: fld     [esp+0B8h+var_A0]
0x59246D: fsub    qword ptr ds:0A2F928h
0x592473: call    Double_To_SInt32
0x592478: mov     edi, eax
0x59247A: call    FontManager_GetSingleton
0x59247F: mov     ebp, [eax+edi*4]
0x592482: push    0FD7h
0x592487: mov     ecx, esi
0x592489: call    Tile_GetFloat
0x59248E: call    Double_To_SInt32
0x592493: push    0FD8h
0x592498: mov     ecx, esi
0x59249A: mov     [esp+0BCh+var_88], eax
0x59249E: call    Tile_GetFloat
0x5924A3: fcomp   dword ptr ds:0A2FAA8h
0x5924A9: xor     ebx, ebx
0x5924AB: mov     [esp+0B8h+var_A1], 1
0x5924B0: fnstsw  ax
0x5924B2: test    ah, 41h
0x5924B5: jz      short loc_5924BB
0x5924B7: mov     [esp+0B8h+var_A1], bl
0x5924BB: push    0FCCh
0x5924C0: mov     ecx, esi
0x5924C2: call    sub_588B80
0x5924C7: test    al, al
0x5924C9: jz      short loc_5924D9
0x5924CB: push    0FCCh
0x5924D0: mov     ecx, esi
0x5924D2: call    Tile_GetFloat
0x5924D7: jmp     short loc_5924DB
0x5924D9: fldz
0x5924DB: push    0FCDh
0x5924E0: fstp    [esp+0BCh+var_7C]
0x5924E4: mov     ecx, esi
0x5924E6: call    sub_588B80
0x5924EB: test    al, al
0x5924ED: jz      short loc_5924FD
0x5924EF: push    0FCDh
0x5924F4: mov     ecx, esi
0x5924F6: call    Tile_GetFloat
0x5924FB: jmp     short loc_5924FF
0x5924FD: fldz
0x5924FF: push    0FCEh
0x592504: fstp    [esp+0BCh+var_78]
0x592508: mov     ecx, esi
0x59250A: call    sub_588B80
0x59250F: test    al, al
0x592511: jz      short loc_592521
0x592513: push    0FCEh
0x592518: mov     ecx, esi
0x59251A: call    Tile_GetFloat
0x59251F: jmp     short loc_592523
0x592521: fldz
0x592523: push    0FA7h
0x592528: fstp    [esp+0BCh+var_74]
0x59252C: mov     ecx, esi
0x59252E: call    sub_588B80
0x592533: fldz
0x592535: test    al, al
0x592537: fld     qword ptr ds:0A3DDD8h
0x59253D: jz      short loc_592572
0x59253F: fstp    st
0x592541: push    0FA7h
0x592546: mov     ecx, esi
0x592548: fstp    st
0x59254A: call    Tile_GetFloat
0x59254F: fstp    [esp+0B8h+var_A0]
0x592553: fldz
0x592555: fcom    [esp+0B8h+var_A0]
0x592559: fnstsw  ax
0x59255B: test    ah, 44h
0x59255E: jnp     short loc_592586
0x592560: fld     qword ptr ds:0A3DDD8h
0x592566: fldz
0x592568: fxch    st(2)
0x59256A: fld     [esp+0B8h+var_A0]
0x59256E: fdiv    st, st(2)
0x592570: jmp     short loc_592596
0x592572: fld     dword ptr ds:0A40098h
0x592578: fstp    [esp+0B8h+var_A0]
0x59257C: fldz
0x59257E: fld     [esp+0B8h+var_A0]
0x592582: fdiv    st, st(2)
0x592584: jmp     short loc_592596
0x592586: fldz
0x592588: fld     st
0x59258A: fld     qword ptr ds:0A3DDD8h
0x592590: fxch    st(2)
0x592592: fxch    st(3)
0x592594: fxch    st(1)
0x592596: fld     st(1)
0x592598: fld     [esp+0B8h+var_74]
0x59259C: fucom   st(1)
0x59259E: fnstsw  ax
0x5925A0: fstp    st(1)
0x5925A2: test    ah, 44h
0x5925A5: jnp     short loc_5925AB
0x5925A7: fdiv    st, st(3)
0x5925A9: jmp     short loc_5925AF
0x5925AB: fstp    st
0x5925AD: fld     st(3)
0x5925AF: fld     st(2)
0x5925B1: fld     [esp+0B8h+var_78]
0x5925B5: fucom   st(1)
0x5925B7: fnstsw  ax
0x5925B9: fstp    st(1)
0x5925BB: test    ah, 44h
0x5925BE: jnp     short loc_5925C4
0x5925C0: fdiv    st, st(4)
0x5925C2: jmp     short loc_5925C8
0x5925C4: fstp    st
0x5925C6: fld     st(4)
0x5925C8: fld     [esp+0B8h+var_7C]
0x5925CC: fucom   st(4)
0x5925CE: fnstsw  ax
0x5925D0: fstp    st(4)
0x5925D2: test    ah, 44h
0x5925D5: jnp     short loc_5925DF
0x5925D7: fstp    st(5)
0x5925D9: fxch    st(2)
0x5925DB: fdivrp  st(3), st
0x5925DD: jmp     short loc_5925E9
0x5925DF: fstp    st(4)
0x5925E1: fstp    st(2)
0x5925E3: fxch    st(2)
0x5925E5: fxch    st(3)
0x5925E7: fxch    st(2)
0x5925E9: fxch    st(2)
0x5925EB: push    ebx; a3
0x5925EC: fstp    [esp+0BCh+var_6C]
0x5925F0: push    offset word_A36430; a2
0x5925F5: fxch    st(2)
0x5925F7: lea     ecx, [esp+0C0h+var_98]; this
0x5925FB: fstp    [esp+0C0h+var_68]
0x5925FF: mov     [esp+0C0h+var_98.m_data], ebx
0x592603: fxch    st(1)
0x592605: mov     [esp+0C0h+var_98.m_dataLen], bx
0x59260A: fstp    [esp+0C0h+var_64]
0x59260E: mov     [esp+0C0h+var_98.m_bufLen], bx
0x592613: fstp    [esp+0C0h+var_60]
0x592617: call    BSStringT_Set
0x59261C: push    0FDEh
0x592621: mov     ecx, esi
0x592623: mov     [esp+0BCh+var_4], ebx
0x59262A: call    sub_588C10
0x59262F: test    eax, eax
0x592631: jz      short loc_59265C
0x592633: push    0FDEh
0x592638: mov     ecx, esi
0x59263A: call    sub_588C10
0x59263F: cmp     [eax], bl
0x592641: jz      short loc_59265C
0x592643: push    0FDEh
0x592648: mov     ecx, esi
0x59264A: call    sub_588C10
0x59264F: push    ebx; a3
0x592650: push    eax; a2
0x592651: lea     ecx, [esp+0C0h+var_98]; this
0x592655: call    BSStringT_Set
0x59265A: jmp     short loc_592680
0x59265C: push    0FDEh
0x592661: mov     ecx, esi
0x592663: call    Tile_GetFloat
0x592668: sub     esp, 8
0x59266B: fstp    qword ptr [esp+0C0h+ArgList]; ArgList
0x59266E: lea     eax, [esp+0C0h+var_98]
0x592672: push    offset a0_f; "%0.f"
0x592677: push    eax; int
0x592678: call    BSStringT_Static_Format
0x59267D: add     esp, 10h
0x592680: cmp     [esp+0B8h+var_9C], 1
0x592685: jge     short loc_592695
0x592687: call    sub_57D7A0
0x59268C: call    Double_To_SInt32
0x592691: mov     [esp+0B8h+var_9C], eax
0x592695: cmp     [esp+0B8h+var_90], 1
0x59269A: jge     short loc_5926A4
0x59269C: mov     [esp+0B8h+var_90], 7FFFFFFFh
0x5926A4: cmp     [esp+0B8h+var_A1], bl
0x5926A8: jnz     loc_592784
0x5926AE: call    FontManager_GetSingleton
0x5926B3: cmp     [eax+14h], bl
0x5926B6: jnz     loc_592784
0x5926BC: push    0DCh ; 'Ü'; Size
0x5926C1: call    FormHeapAlloc
0x5926C6: add     esp, 4
0x5926C9: mov     [esp+0B8h+var_88], eax
0x5926CD: cmp     eax, ebx
0x5926CF: mov     byte ptr [esp+0B8h+var_4], 4
0x5926D7: jz      short loc_5926E3
0x5926D9: push    ebx
0x5926DA: mov     ecx, eax; this
0x5926DC: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5926E1: jmp     short loc_5926E5
0x5926E3: xor     eax, eax
0x5926E5: mov     edx, [esp+0B8h+var_84]
0x5926E9: push    1
0x5926EB: lea     ecx, [esp+0BCh+var_6C]
0x5926EF: push    ecx
0x5926F0: push    0Ah
0x5926F2: push    edx
0x5926F3: mov     [esi+24h], eax
0x5926F6: mov     eax, [esp+0C8h+var_90]
0x5926FA: push    eax
0x5926FB: push    ebx
0x5926FC: lea     ecx, [esp+0D0h+var_8C]
0x592700: push    ecx
0x592701: lea     edx, [esp+0D4h+var_9C]
0x592705: push    edx
0x592706: lea     eax, [esp+0D8h+var_98]
0x59270A: push    eax
0x59270B: mov     ecx, ebp
0x59270D: mov     byte ptr [esp+0DCh+var_4], bl
0x592714: call    sub_576670
0x592719: mov     edi, eax
0x59271B: mov     ecx, [edi+54h]
0x59271E: mov     [esi+44h], ecx
0x592721: mov     edx, [edi+58h]
0x592724: mov     [esi+48h], edx
0x592727: mov     eax, [edi+5Ch]
0x59272A: push    0FABh
0x59272F: mov     ecx, esi
0x592731: mov     [esi+4Ch], eax
0x592734: call    Tile_GetFloat
0x592739: fmul    qword ptr ds:0A68FD0h
0x59273F: push    ebx
0x592740: push    edi
0x592741: fstp    [esp+0C0h+var_84]
0x592745: fld     [esp+0C0h+var_5C]
0x592749: fstp    [esp+0C0h+var_58]
0x59274D: mov     ecx, [esp+0C0h+var_58]
0x592751: fld     [esp+0C0h+var_84]
0x592755: mov     [edi+54h], ecx
0x592758: fstp    [esp+0C0h+var_54]
0x59275C: mov     edx, [esp+0C0h+var_54]
0x592760: fld     [esp+0C0h+var_70]
0x592764: mov     [edi+58h], edx
0x592767: fstp    [esp+0C0h+var_50]
0x59276B: mov     eax, [esp+0C0h+var_50]
0x59276F: mov     [edi+5Ch], eax
0x592772: mov     ecx, [esi+24h]
0x592775: mov     edx, [ecx]
0x592777: mov     eax, [edx+84h]
0x59277D: call    eax
0x59277F: jmp     loc_592933
0x592784: push    0DCh ; 'Ü'; Size
0x592789: call    FormHeapAlloc
0x59278E: add     esp, 4
0x592791: mov     [esp+0B8h+var_70], eax
0x592795: cmp     eax, ebx
0x592797: mov     byte ptr [esp+0B8h+var_4], 1
0x59279F: jz      short loc_5927AB
0x5927A1: push    ebx
0x5927A2: mov     ecx, eax; this
0x5927A4: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5927A9: jmp     short loc_5927AD
0x5927AB: xor     eax, eax
0x5927AD: mov     [esi+24h], eax
0x5927B0: mov     [esp+0B8h+var_14], ebx
0x5927B7: mov     [esp+0B8h+var_10], bx
0x5927BF: mov     [esp+0B8h+var_E], bx
0x5927C7: mov     [esp+0B8h+var_34], 0Ah
0x5927CF: mov     [esp+0B8h+var_20], ebx
0x5927D6: mov     [esp+0B8h+var_1C], ebx
0x5927DD: mov     ecx, [esp+0B8h+var_9C]
0x5927E1: cmp     ecx, ebx
0x5927E3: mov     byte ptr [esp+0B8h+var_4], 2
0x5927EB: mov     [esp+0B8h+var_4C], edi
0x5927EF: mov     [esp+0B8h+var_30], ecx
0x5927F6: jnz     short loc_592803
0x5927F8: mov     [esp+0B8h+var_30], 7FFFFFFFh
0x592803: mov     ecx, [esp+0B8h+var_84]
0x592807: mov     edx, [esp+0B8h+var_6C]
0x59280B: mov     [esp+0B8h+var_48], ecx
0x59280F: mov     ecx, [esp+0B8h+var_68]
0x592813: mov     [esp+0B8h+var_40], ecx
0x592817: mov     ecx, [esp+0B8h+var_60]
0x59281B: mov     [esp+0B8h+var_38], ecx
0x592822: mov     ecx, [esp+0B8h+var_8C]
0x592826: cmp     ecx, ebx
0x592828: mov     [esp+0B8h+var_44], edx
0x59282C: mov     edx, [esp+0B8h+var_64]
0x592830: mov     [esp+0B8h+var_3C], edx
0x592834: mov     [esp+0B8h+var_2C], ecx
0x59283B: jnz     short loc_592848
0x59283D: mov     [esp+0B8h+var_2C], 7FFFFFFFh
0x592848: mov     edx, [esp+0B8h+var_88]
0x59284C: mov     ecx, [esp+0B8h+var_90]
0x592850: push    eax
0x592851: mov     [esp+0BCh+var_28], edx
0x592858: mov     dl, [esp+0BCh+var_A1]
0x59285C: lea     eax, [esp+0BCh+var_4C]
0x592860: push    eax
0x592861: sub     esp, 8
0x592864: mov     [esp+0C8h+var_24], ecx
0x59286B: mov     ecx, esp; this
0x59286D: mov     [esp+0C8h+var_18], dl
0x592874: mov     [esp+0C8h+var_88], esp
0x592878: mov     [ecx], ebx
0x59287A: mov     [ecx+4], bx
0x59287E: mov     [ecx+6], bx
0x592882: mov     edx, [esp+0C8h+var_98.m_data]
0x592886: push    ebx; a3
0x592887: push    edx; a2
0x592888: call    BSStringT_Set
0x59288D: mov     byte ptr [esp+0C8h+var_4], 3
0x592895: call    FontManager_GetSingleton
0x59289A: mov     ecx, eax
0x59289C: mov     byte ptr [esp+0C8h+var_4], 2
0x5928A4: call    sub_578C10
0x5928A9: cmp     al, bl
0x5928AB: jnz     short loc_5928E5
0x5928AD: mov     eax, [esp+0B8h+var_14]
0x5928B4: push    eax
0x5928B5: call    FormHeapFree
0x5928BA: mov     ecx, [esp+0BCh+var_98.m_data]
0x5928BE: push    ecx
0x5928BF: mov     [esp+0C0h+var_14], ebx
0x5928C6: mov     [esp+0C0h+var_E], bx
0x5928CE: mov     [esp+0C0h+var_10], bx
0x5928D6: call    FormHeapFree
0x5928DB: add     esp, 8
0x5928DE: xor     eax, eax
0x5928E0: jmp     loc_592A46
0x5928E5: fild    [esp+0B8h+var_20]
0x5928EC: mov     edx, [esp+0B8h+var_30]
0x5928F3: mov     eax, [esp+0B8h+var_2C]
0x5928FA: push    ecx
0x5928FB: fstp    dword ptr [esp+0BCh+ArgList+4]; a3
0x5928FE: push    0FEFh; a2
0x592903: mov     ecx, esi; this
0x592905: mov     [esp+0C0h+var_9C], edx
0x592909: mov     [esp+0C0h+var_8C], eax
0x59290D: call    Tile_SetFloat
0x592912: mov     edx, [esp+0B8h+var_14]
0x592919: mov     cl, [esp+0B8h+var_18]
0x592920: push    edx
0x592921: mov     [esi+50h], cl
0x592924: mov     byte ptr [esp+0BCh+var_4], bl
0x59292B: call    FormHeapFree
0x592930: add     esp, 4
0x592933: fild    [esp+0B8h+var_9C]
0x592937: push    ecx
0x592938: mov     ecx, esi; this
0x59293A: fstp    dword ptr [esp+0BCh+ArgList+4]; a3
0x59293D: push    0FCBh; a2
0x592942: call    Tile_SetFloat
0x592947: fild    [esp+0B8h+var_8C]
0x59294B: push    ecx
0x59294C: mov     ecx, esi; this
0x59294E: fstp    dword ptr [esp+0BCh+ArgList+4]; a3
0x592951: push    0FCAh; a2
0x592956: call    Tile_SetFloat
0x59295B: mov     edi, 1
0x592960: or      [esi+2Ch], edi
0x592963: push    0FC8h
0x592968: mov     ecx, esi
0x59296A: call    Tile_GetFloat
0x59296F: fcomp   dword ptr ds:0A379B4h
0x592975: fnstsw  ax
0x592977: test    ah, 44h
0x59297A: jp      short loc_592983
0x59297C: or      dword ptr [esi+2Ch], 200h
0x592983: mov     ecx, [esp+0B8h+var_80]
0x592987: cmp     ecx, ebx
0x592989: jnz     short loc_59299E
0x59298B: push    edi; arg1
0x59298C: push    ebx; canCreate
0x59298D: call    InterfaceManager_GetSingleton
0x592992: mov     eax, [eax+54h]
0x592995: add     esp, 8
0x592998: mov     [esp+0B8h+var_80], eax
0x59299C: mov     ecx, eax
0x59299E: mov     edx, [ecx]
0x5929A0: mov     eax, [esi+24h]
0x5929A3: mov     edx, [edx+84h]
0x5929A9: push    edi
0x5929AA: push    eax
0x5929AB: call    edx
0x5929AD: push    0FA1h
0x5929B2: mov     ecx, esi
0x5929B4: call    Tile_GetFloat
0x5929B9: fcomp   dword ptr ds:0A2F948h
0x5929BF: fnstsw  ax
0x5929C1: test    ah, 44h
0x5929C4: jp      short loc_5929CA
0x5929C6: mov     cl, 1
0x5929C8: jmp     short loc_5929CC
0x5929CA: xor     cl, cl
0x5929CC: cmp     cl, bl
0x5929CE: mov     eax, [esi+24h]
0x5929D1: jz      short loc_5929D9
0x5929D3: or      [eax+18h], di
0x5929D7: jmp     short loc_5929DF
0x5929D9: and     word ptr [eax+18h], 0FFFEh
0x5929DF: mov     ecx, [esi+24h]
0x5929E2: call    NiNode_UpdateDynamicEffectState
0x5929E7: mov     ecx, [esi+24h]; this
0x5929EA: call    NiAVObject_InitializePropertyState
0x5929EF: push    edi; arg1
0x5929F0: push    ebx; canCreate
0x5929F1: call    InterfaceManager_GetSingleton
0x5929F6: push    14h; Size
0x5929F8: mov     byte ptr [eax+7Ch], 1
0x5929FC: call    FormHeapAlloc
0x592A01: add     esp, 0Ch
0x592A04: mov     [esp+0B8h+var_88], eax
0x592A08: cmp     eax, ebx
0x592A0A: mov     byte ptr [esp+0B8h+var_4], 5
0x592A12: jz      short loc_592A22
0x592A14: mov     ecx, [esi+24h]
0x592A17: push    ecx
0x592A18: push    esi
0x592A19: mov     ecx, eax; this
0x592A1B: call    ??0Extra@Tile@@QAE@XZ; Tile::Extra::Extra(void)
0x592A20: jmp     short loc_592A24
0x592A22: xor     eax, eax
0x592A24: mov     ecx, [esi+24h]
0x592A27: push    eax
0x592A28: mov     byte ptr [esp+0BCh+var_4], bl
0x592A2F: call    NiNode_AddNiExtraData
0x592A34: mov     edx, [esp+0B8h+var_98.m_data]
0x592A38: mov     esi, [esi+24h]
0x592A3B: push    edx
0x592A3C: call    FormHeapFree
0x592A41: add     esp, 4
0x592A44: mov     eax, esi
0x592A46: mov     ecx, dword ptr [esp+0B8h+var_C]
0x592A4D: mov     large fs:0, ecx
0x592A54: pop     ecx
0x592A55: pop     edi
0x592A56: pop     esi
0x592A57: pop     ebp
0x592A58: pop     ebx
0x592A59: add     esp, 0A4h
0x592A5F: retn
