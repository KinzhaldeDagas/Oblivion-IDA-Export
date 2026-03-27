0x581390: push    0FFFFFFFFh
0x581392: push    offset SEH_581390
0x581397: mov     eax, large fs:0
0x58139D: push    eax
0x58139E: sub     esp, 6Ch
0x5813A1: push    ebp
0x5813A2: push    esi
0x5813A3: push    edi
0x5813A4: mov     eax, ds:0B30AACh
0x5813A9: xor     eax, esp
0x5813AB: push    eax
0x5813AC: lea     eax, [esp+88h+var_C]
0x5813B0: mov     large fs:0, eax
0x5813B6: mov     ebp, ecx
0x5813B8: mov     eax, [ebp+58h]
0x5813BB: or      word ptr [eax+18h], 1
0x5813C0: lea     ecx, [esp+88h+var_3C]
0x5813C4: mov     [esp+88h+var_70], 0
0x5813CC: call    sub_959BC0
0x5813D1: mov     esi, [ebp+0]
0x5813D4: mov     eax, [esp+88h+var_28]
0x5813D8: cmp     eax, esi
0x5813DA: mov     [esp+88h+var_4], 0
0x5813E5: mov     byte ptr [esp+88h+var_2C], 0
0x5813EA: mov     byte ptr [esp+88h+var_2C+1], 1
0x5813EF: jz      short loc_581425
0x5813F1: test    eax, eax
0x5813F3: jz      short loc_581413
0x5813F5: mov     edi, eax
0x5813F7: add     eax, 4
0x5813FA: push    eax; lpAddend
0x5813FB: call    dword ptr ds:0A2807Ch
0x581401: test    eax, eax
0x581403: jnz     short loc_581413
0x581405: test    edi, edi
0x581407: jz      short loc_581413
0x581409: mov     eax, [edi]
0x58140B: mov     edx, [eax]
0x58140D: push    1
0x58140F: mov     ecx, edi
0x581411: call    edx
0x581413: test    esi, esi
0x581415: mov     [esp+88h+var_28], esi
0x581419: jz      short loc_581425
0x58141B: add     esi, 4
0x58141E: push    esi; lpAddend
0x58141F: call    dword ptr ds:0A28078h
0x581425: fld     dword ptr [ebp+2Ch]
0x581428: fldz
0x58142A: fcom    st(1)
0x58142C: fnstsw  ax
0x58142E: fstp    st(1)
0x581430: test    ah, 41h
0x581433: fldz
0x581435: jnz     short loc_58143D
0x581437: fst     [esp+88h+var_74]
0x58143B: jmp     short loc_581444
0x58143D: fld     dword ptr [ebp+2Ch]
0x581440: fstp    [esp+88h+var_74]
0x581444: fild    dword ptr ds:0B06C4Ch
0x58144A: fstp    [esp+88h+var_78]
0x58144E: fld     [esp+88h+var_74]
0x581452: fld     [esp+88h+var_78]
0x581456: fcom    st(1)
0x581458: fnstsw  ax
0x58145A: fstp    st(1)
0x58145C: test    ah, 41h
0x58145F: jnz     short loc_581478
0x581461: fstp    st
0x581463: fld     dword ptr [ebp+2Ch]
0x581466: fcomp   st(2)
0x581468: fnstsw  ax
0x58146A: test    ah, 5
0x58146D: jp      short loc_581475
0x58146F: fst     [esp+88h+var_74]
0x581473: jmp     short loc_58147C
0x581475: fld     dword ptr [ebp+2Ch]
0x581478: fstp    [esp+88h+var_74]
0x58147C: fld     dword ptr [ebp+34h]
0x58147F: fcomp   st(2)
0x581481: fnstsw  ax
0x581483: test    ah, 5
0x581486: jp      short loc_58148E
0x581488: fst     [esp+88h+var_78]
0x58148C: jmp     short loc_581495
0x58148E: fld     dword ptr [ebp+34h]
0x581491: fstp    [esp+88h+var_78]
0x581495: fild    dword ptr ds:0B06C50h
0x58149B: fstp    [esp+88h+var_6C]
0x58149F: fld     [esp+88h+var_78]
0x5814A3: fld     [esp+88h+var_6C]
0x5814A7: fcom    st(1)
0x5814A9: fnstsw  ax
0x5814AB: fstp    st(1)
0x5814AD: test    ah, 41h
0x5814B0: jnz     short loc_5814C9
0x5814B2: fstp    st
0x5814B4: fld     dword ptr [ebp+34h]
0x5814B7: fcomp   st(2)
0x5814B9: fnstsw  ax
0x5814BB: fstp    st(1)
0x5814BD: test    ah, 5
0x5814C0: jnp     short loc_5814CD
0x5814C2: fstp    st
0x5814C4: fld     dword ptr [ebp+34h]
0x5814C7: jmp     short loc_5814CD
0x5814C9: fstp    st(2)
0x5814CB: fstp    st
0x5814CD: mov     eax, [ebp+0]
0x5814D0: fstp    [esp+88h+var_78]
0x5814D4: mov     esi, [eax+0DCh]
0x5814DA: fld     [esp+88h+var_78]
0x5814DE: lea     eax, [esp+88h+var_64]
0x5814E2: push    eax
0x5814E3: lea     ecx, [esp+8Ch+var_58]
0x5814E7: push    ecx
0x5814E8: call    Double_To_SInt32
0x5814ED: fld     [esp+90h+var_74]
0x5814F1: push    eax
0x5814F2: call    Double_To_SInt32
0x5814F7: push    eax
0x5814F8: mov     ecx, esi
0x5814FA: call    sub_70D300
0x5814FF: push    0
0x581501: lea     edx, [esp+8Ch+var_64]
0x581505: push    edx
0x581506: lea     eax, [esp+90h+var_58]
0x58150A: push    eax
0x58150B: lea     ecx, [esp+94h+var_3C]
0x58150F: call    sub_959D60
0x581514: test    al, al
0x581516: jz      loc_5817A0
0x58151C: xor     eax, eax
0x58151E: cmp     [esp+88h+var_1A], ax
0x581523: jbe     loc_5817A0
0x581529: jmp     short loc_581534
0x58152B: jmp     short loc_581530
0x58152D: align 10h
0x581530: mov     eax, [esp+88h+var_74]
0x581534: mov     ecx, [esp+88h+var_20]
0x581538: mov     edi, [ecx+eax*4]
0x58153B: mov     esi, [edi]
0x58153D: add     eax, 1
0x581540: test    esi, esi
0x581542: mov     dword ptr [esp+88h+var_68], edi
0x581546: mov     [esp+88h+var_74], eax
0x58154A: jz      short loc_58157A
0x58154C: mov     edx, [esi]
0x58154E: mov     eax, [edx+4]
0x581551: mov     ecx, esi
0x581553: call    eax
0x581555: test    eax, eax
0x581557: jz      short loc_58156E
0x581559: lea     esp, [esp+0]
0x581560: cmp     eax, offset dword_B3FAB0
0x581565: jz      short loc_581585
0x581567: mov     eax, [eax+4]
0x58156A: test    eax, eax
0x58156C: jnz     short loc_581560
0x58156E: xor     al, al
0x581570: neg     al
0x581572: sbb     eax, eax
0x581574: and     eax, esi
0x581576: mov     esi, eax
0x581578: jnz     short loc_5815AE
0x58157A: mov     eax, [edi]
0x58157C: mov     esi, [eax+1Ch]
0x58157F: test    esi, esi
0x581581: jnz     short loc_581589
0x581583: jmp     short loc_5815AE
0x581585: mov     al, 1
0x581587: jmp     short loc_581570
0x581589: mov     edx, [esi]
0x58158B: mov     eax, [edx+4]
0x58158E: mov     ecx, esi
0x581590: call    eax
0x581592: test    eax, eax
0x581594: jz      short loc_5815A4
0x581596: cmp     eax, offset dword_B3FAB0
0x58159B: jz      short loc_5815DB
0x58159D: mov     eax, [eax+4]
0x5815A0: test    eax, eax
0x5815A2: jnz     short loc_581596
0x5815A4: xor     al, al
0x5815A6: neg     al
0x5815A8: sbb     eax, eax
0x5815AA: and     eax, esi
0x5815AC: mov     esi, eax
0x5815AE: xor     edi, edi
0x5815B0: test    esi, esi
0x5815B2: jz      short loc_5815DF
0x5815B4: push    esi
0x5815B5: call    sub_588E60
0x5815BA: mov     edi, eax
0x5815BC: add     esp, 4
0x5815BF: test    edi, edi
0x5815C1: jnz     short loc_5815E7
0x5815C3: test    esi, esi
0x5815C5: jz      short loc_5815DF
0x5815C7: mov     esi, [esi+1Ch]
0x5815CA: push    esi
0x5815CB: call    sub_588E60
0x5815D0: mov     edi, eax
0x5815D2: add     esp, 4
0x5815D5: test    edi, edi
0x5815D7: jz      short loc_5815C3
0x5815D9: jmp     short loc_5815E7
0x5815DB: mov     al, 1
0x5815DD: jmp     short loc_5815A6
0x5815DF: test    edi, edi
0x5815E1: jz      loc_58175E
0x5815E7: push    edi
0x5815E8: mov     ecx, ebp
0x5815EA: call    sub_57D240
0x5815EF: test    al, al
0x5815F1: jz      loc_58175E
0x5815F7: push    0FC8h
0x5815FC: mov     ecx, edi
0x5815FE: call    Tile_GetFloat
0x581603: fcomp   dword ptr ds:0A379B4h
0x581609: fnstsw  ax
0x58160B: test    ah, 44h
0x58160E: jp      loc_581705
0x581614: mov     eax, [edi+24h]
0x581617: test    eax, eax
0x581619: jz      loc_581705
0x58161F: lea     esi, [eax+0ACh]
0x581625: mov     ecx, esi
0x581627: call    sub_4784A0
0x58162C: mov     ecx, esi
0x58162E: call    sub_477F90
0x581633: mov     eax, [edi+24h]
0x581636: cmp     word ptr [eax+0B6h], 0
0x58163E: jbe     loc_581705
0x581644: mov     ecx, [eax+0B0h]
0x58164A: cmp     dword ptr [ecx], 0
0x58164D: jz      loc_581705
0x581653: cmp     word ptr [eax+0B6h], 0
0x58165B: ja      short loc_581661
0x58165D: xor     eax, eax
0x58165F: jmp     short loc_581665
0x581661: mov     edx, ecx
0x581663: mov     eax, [edx]
0x581665: push    eax
0x581666: push    offset unk_B352A4
0x58166B: call    NiRTTI_Cast
0x581670: add     esp, 8
0x581673: test    eax, eax
0x581675: jz      loc_581705
0x58167B: mov     ecx, [eax+0C0h]
0x581681: test    ecx, ecx
0x581683: mov     esi, [eax+0C4h]
0x581689: mov     edx, [eax+0C8h]
0x58168F: mov     eax, [eax+0CCh]
0x581695: mov     [esp+88h+var_4C], ecx
0x581699: mov     [esp+88h+var_48], esi
0x58169D: mov     [esp+88h+var_44], edx
0x5816A1: mov     [esp+88h+var_40], eax
0x5816A5: jnz     short loc_5816B3
0x5816A7: test    edx, edx
0x5816A9: jnz     short loc_5816B3
0x5816AB: test    esi, esi
0x5816AD: jnz     short loc_5816B3
0x5816AF: test    eax, eax
0x5816B1: jz      short loc_581705
0x5816B3: fld     dword ptr [ebp+2Ch]
0x5816B6: fstp    [esp+88h+var_6C]
0x5816BA: fld     dword ptr [ebp+34h]
0x5816BD: fstp    [esp+88h+var_78]
0x5816C1: fld     [esp+88h+var_6C]
0x5816C5: fild    [esp+88h+var_4C]
0x5816C9: fcomp   st(1)
0x5816CB: fnstsw  ax
0x5816CD: test    ah, 41h
0x5816D0: jz      loc_58175C
0x5816D6: fild    [esp+88h+var_44]
0x5816DA: fcompp
0x5816DC: fnstsw  ax
0x5816DE: test    ah, 41h
0x5816E1: jnp     loc_58175E
0x5816E7: fld     [esp+88h+var_78]
0x5816EB: fild    [esp+88h+var_48]
0x5816EF: fcomp   st(1)
0x5816F1: fnstsw  ax
0x5816F3: test    ah, 41h
0x5816F6: jz      short loc_58175C
0x5816F8: fild    [esp+88h+var_40]
0x5816FC: fcompp
0x5816FE: fnstsw  ax
0x581700: test    ah, 41h
0x581703: jnp     short loc_58175E
0x581705: test    edi, edi
0x581707: jz      short loc_58175E
0x581709: push    0FC9h
0x58170E: mov     ecx, edi
0x581710: call    Tile_GetFloat
0x581715: fcomp   dword ptr ds:0A379B4h
0x58171B: fnstsw  ax
0x58171D: test    ah, 44h
0x581720: jp      short loc_58175E
0x581722: cmp     [esp+88h+arg_0], 0
0x58172A: jnz     short loc_581775
0x58172C: push    0FA8h
0x581731: mov     ecx, edi
0x581733: call    sub_588B50
0x581738: test    eax, eax
0x58173A: jnz     short loc_581775
0x58173C: mov     esi, [edi+10h]
0x58173F: test    esi, esi
0x581741: jz      short loc_581775
0x581743: push    0FA8h
0x581748: mov     ecx, esi
0x58174A: call    sub_588B50
0x58174F: test    eax, eax
0x581751: jnz     short loc_58176F
0x581753: mov     esi, [esi+10h]
0x581756: test    esi, esi
0x581758: jnz     short loc_581743
0x58175A: jmp     short loc_581775
0x58175C: fstp    st
0x58175E: movzx   eax, [esp+88h+var_1A]
0x581763: cmp     [esp+88h+var_74], eax
0x581767: jl      loc_581530
0x58176D: jmp     short loc_5817A0
0x58176F: test    esi, esi
0x581771: jz      short loc_581775
0x581773: mov     edi, esi
0x581775: mov     edx, [edi]
0x581777: mov     eax, [edx+0Ch]
0x58177A: mov     ecx, edi
0x58177C: mov     [esp+88h+var_70], edi
0x581780: call    eax
0x581782: cmp     eax, 387h
0x581787: jnz     short loc_58179A
0x581789: mov     ecx, dword ptr [esp+88h+var_68]
0x58178D: movzx   eax, word ptr [ecx+18h]
0x581791: shr     ax, 1
0x581794: mov     [ebp+7Eh], ax
0x581798: jmp     short loc_5817A0
0x58179A: mov     word ptr [ebp+7Eh], 0FFFFh
0x5817A0: mov     eax, [ebp+58h]
0x5817A3: and     word ptr [eax+18h], 0FFFEh
0x5817A9: lea     ecx, [esp+88h+var_3C]
0x5817AD: mov     [esp+88h+var_4], 0FFFFFFFFh
0x5817B8: call    sub_959EC0
0x5817BD: mov     eax, [esp+88h+var_70]
0x5817C1: mov     ecx, dword ptr [esp+88h+var_C]
0x5817C5: mov     large fs:0, ecx
0x5817CC: pop     ecx
0x5817CD: pop     edi
0x5817CE: pop     esi
0x5817CF: pop     ebp
0x5817D0: add     esp, 78h
0x5817D3: retn    4
