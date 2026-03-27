0x6B0350: mov     ecx, [esp+arg_0]
0x6B0354: xor     eax, eax
0x6B0356: cmp     ecx, 1Eh; switch 31 cases
0x6B0359: ja      def_6B0366; jumptable 006B0366 default case, cases 14-29
0x6B035F: movzx   ecx, ds:byte_6B07CC[ecx]
0x6B0366: jmp     ds:jpt_6B0366[ecx*4]; switch jump
0x6B036D: fld     [esp+arg_4]; jumptable 006B0366 cases 0,30
0x6B0371: fcomp   qword ptr ds:0A68FE0h
0x6B0377: fnstsw  ax
0x6B0379: test    ah, 5
0x6B037C: jp      short loc_6B038F
0x6B037E: mov     ecx, ds:0B33A98h
0x6B0384: push    offset aCstonestatic; "CStoneStatic"
0x6B0389: call    sub_447490
0x6B038E: retn
0x6B038F: mov     ecx, offset unk_B1625C
0x6B0394: call    GameSetting_GetSafeFloatPointer
0x6B0399: fld     [esp+arg_4]
0x6B039D: fld     dword ptr [eax]
0x6B039F: fcompp
0x6B03A1: fnstsw  ax
0x6B03A3: test    ah, 41h
0x6B03A6: jnz     short loc_6B03B9
0x6B03A8: mov     ecx, ds:0B33A98h
0x6B03AE: push    offset aCstonesmall; "CStoneSmall"
0x6B03B3: call    sub_447490
0x6B03B8: retn
0x6B03B9: mov     ecx, offset unk_B16264
0x6B03BE: call    GameSetting_GetSafeFloatPointer
0x6B03C3: fld     [esp+arg_4]
0x6B03C7: fld     dword ptr [eax]
0x6B03C9: mov     ecx, ds:0B33A98h
0x6B03CF: fcompp
0x6B03D1: fnstsw  ax
0x6B03D3: test    ah, 41h
0x6B03D6: jnz     short loc_6B03E3
0x6B03D8: push    offset aCstonemedium; "CStoneMedium"
0x6B03DD: call    sub_447490
0x6B03E2: retn
0x6B03E3: push    offset aCstonelarge; "CStoneLarge"
0x6B03E8: call    sub_447490
0x6B03ED: retn
0x6B03EE: mov     ecx, offset unk_B1626C; jumptable 006B0366 case 2
0x6B03F3: call    GameSetting_GetSafeFloatPointer
0x6B03F8: fld     [esp+arg_4]
0x6B03FC: fld     dword ptr [eax]
0x6B03FE: fcompp
0x6B0400: fnstsw  ax
0x6B0402: test    ah, 41h
0x6B0405: jnz     short loc_6B0418
0x6B0407: mov     ecx, ds:0B33A98h
0x6B040D: push    offset aCearthsmall; "CEarthSmall"
0x6B0412: call    sub_447490
0x6B0417: retn
0x6B0418: mov     ecx, offset unk_B16274
0x6B041D: call    GameSetting_GetSafeFloatPointer
0x6B0422: fld     [esp+arg_4]
0x6B0426: fld     dword ptr [eax]
0x6B0428: mov     ecx, ds:0B33A98h
0x6B042E: fcompp
0x6B0430: fnstsw  ax
0x6B0432: test    ah, 41h
0x6B0435: jnz     short loc_6B0442
0x6B0437: push    offset aCearthmedium; "CEarthMedium"
0x6B043C: call    sub_447490
0x6B0441: retn
0x6B0442: push    offset aCearthlarge; "CEarthLarge"
0x6B0447: call    sub_447490
0x6B044C: retn
0x6B044D: fld     dword ptr ds:0A5977Ch; jumptable 006B0366 case 4
0x6B0453: fld     [esp+arg_4]
0x6B0457: fcom    st(1)
0x6B0459: fnstsw  ax
0x6B045B: fstp    st(1)
0x6B045D: test    ah, 5
0x6B0460: jp      short loc_6B0475
0x6B0462: mov     ecx, ds:0B33A98h
0x6B0468: fstp    st
0x6B046A: push    offset aCgrasssmall; "CGrassSmall"
0x6B046F: call    sub_447490
0x6B0474: retn
0x6B0475: fcomp   dword ptr ds:0A77740h
0x6B047B: mov     ecx, ds:0B33A98h
0x6B0481: fnstsw  ax
0x6B0483: test    ah, 5
0x6B0486: jp      short loc_6B0493
0x6B0488: push    offset aCgrassmedium; "CGrassMedium"
0x6B048D: call    sub_447490
0x6B0492: retn
0x6B0493: push    offset aCgrasslarge; "CGrassLarge"
0x6B0498: call    sub_447490
0x6B049D: retn
0x6B049E: fld     [esp+arg_4]; jumptable 006B0366 case 5
0x6B04A2: fcomp   qword ptr ds:0A68FE0h
0x6B04A8: fnstsw  ax
0x6B04AA: test    ah, 5
0x6B04AD: jp      short loc_6B04C0
0x6B04AF: mov     ecx, ds:0B33A98h
0x6B04B5: push    offset aCmetalstatic; "CMetalStatic"
0x6B04BA: call    sub_447490
0x6B04BF: retn
0x6B04C0: mov     ecx, offset unk_B1629C
0x6B04C5: call    GameSetting_GetSafeFloatPointer
0x6B04CA: fld     [esp+arg_4]
0x6B04CE: fld     dword ptr [eax]
0x6B04D0: fcompp
0x6B04D2: fnstsw  ax
0x6B04D4: test    ah, 41h
0x6B04D7: jnz     short loc_6B04EA
0x6B04D9: mov     ecx, ds:0B33A98h
0x6B04DF: push    offset aCmetalsmall; "CMetalSmall"
0x6B04E4: call    sub_447490
0x6B04E9: retn
0x6B04EA: mov     ecx, offset unk_B162A4
0x6B04EF: call    GameSetting_GetSafeFloatPointer
0x6B04F4: fld     [esp+arg_4]
0x6B04F8: fld     dword ptr [eax]
0x6B04FA: mov     ecx, ds:0B33A98h
0x6B0500: fcompp
0x6B0502: fnstsw  ax
0x6B0504: test    ah, 41h
0x6B0507: jnz     short loc_6B0514
0x6B0509: push    offset aCmetalmedium; "CMetalMedium"
0x6B050E: call    sub_447490
0x6B0513: retn
0x6B0514: push    offset aCmetallarge; "CMetalLarge"
0x6B0519: call    sub_447490
0x6B051E: retn
0x6B051F: fld     [esp+arg_4]; jumptable 006B0366 case 9
0x6B0523: fcomp   qword ptr ds:0A68FE0h
0x6B0529: fnstsw  ax
0x6B052B: test    ah, 5
0x6B052E: jp      short loc_6B0541
0x6B0530: mov     ecx, ds:0B33A98h
0x6B0536: push    offset aCwoodstatic; "CWoodStatic"
0x6B053B: call    sub_447490
0x6B0540: retn
0x6B0541: mov     ecx, offset unk_B1624C
0x6B0546: call    GameSetting_GetSafeFloatPointer
0x6B054B: fld     [esp+arg_4]
0x6B054F: fld     dword ptr [eax]
0x6B0551: fcompp
0x6B0553: fnstsw  ax
0x6B0555: test    ah, 41h
0x6B0558: jz      loc_6B06CA
0x6B055E: mov     ecx, offset unk_B16254
0x6B0563: call    GameSetting_GetSafeFloatPointer
0x6B0568: fld     [esp+arg_4]
0x6B056C: fld     dword ptr [eax]
0x6B056E: mov     ecx, ds:0B33A98h
0x6B0574: fcompp
0x6B0576: fnstsw  ax
0x6B0578: test    ah, 41h
0x6B057B: jnz     short loc_6B0588
0x6B057D: push    offset aCwoodmedium; "CWoodMedium"
0x6B0582: call    sub_447490
0x6B0587: retn
0x6B0588: push    offset aCwoodlarge; "CWoodLarge"
0x6B058D: call    sub_447490
0x6B0592: retn
0x6B0593: mov     ecx, offset unk_B162AC; jumptable 006B0366 case 1
0x6B0598: call    GameSetting_GetSafeFloatPointer
0x6B059D: fld     [esp+arg_4]
0x6B05A1: fld     dword ptr [eax]
0x6B05A3: fcompp
0x6B05A5: fnstsw  ax
0x6B05A7: test    ah, 41h
0x6B05AA: jnz     short loc_6B05BD
0x6B05AC: mov     ecx, ds:0B33A98h
0x6B05B2: push    offset aCclothsmall; "CClothSmall"
0x6B05B7: call    sub_447490
0x6B05BC: retn
0x6B05BD: mov     ecx, offset unk_B162B4
0x6B05C2: call    GameSetting_GetSafeFloatPointer
0x6B05C7: fld     [esp+arg_4]
0x6B05CB: fld     dword ptr [eax]
0x6B05CD: mov     ecx, ds:0B33A98h
0x6B05D3: fcompp
0x6B05D5: fnstsw  ax
0x6B05D7: test    ah, 41h
0x6B05DA: jnz     short loc_6B05E7
0x6B05DC: push    offset aCclothmedium; "CClothMedium"
0x6B05E1: call    sub_447490
0x6B05E6: retn
0x6B05E7: push    offset aCclothlarge; "CClothLarge"
0x6B05EC: call    sub_447490
0x6B05F1: retn
0x6B05F2: mov     ecx, ds:0B33A98h; jumptable 006B0366 case 6
0x6B05F8: push    offset aCorganicsmall; "COrganicSmall"
0x6B05FD: call    sub_447490
0x6B0602: retn
0x6B0603: mov     ecx, offset unk_B1627C; jumptable 006B0366 case 7
0x6B0608: call    GameSetting_GetSafeFloatPointer
0x6B060D: fld     [esp+arg_4]
0x6B0611: fld     dword ptr [eax]
0x6B0613: fcompp
0x6B0615: fnstsw  ax
0x6B0617: test    ah, 41h
0x6B061A: jnz     short loc_6B062D
0x6B061C: mov     ecx, ds:0B33A98h
0x6B0622: push    offset aCskinsmall; "CSkinSmall"
0x6B0627: call    sub_447490
0x6B062C: retn
0x6B062D: mov     ecx, offset unk_B16284
0x6B0632: call    GameSetting_GetSafeFloatPointer
0x6B0637: fld     [esp+arg_4]
0x6B063B: fld     dword ptr [eax]
0x6B063D: mov     ecx, ds:0B33A98h
0x6B0643: fcompp
0x6B0645: fnstsw  ax
0x6B0647: test    ah, 41h
0x6B064A: jnz     short loc_6B0657
0x6B064C: push    offset aCskinmedium; "CSkinMedium"
0x6B0651: call    sub_447490
0x6B0656: retn
0x6B0657: push    offset aCskinlarge; "CSkinLarge"
0x6B065C: call    sub_447490
0x6B0661: retn
0x6B0662: fld     dword ptr ds:0A5977Ch; jumptable 006B0366 case 3
0x6B0668: fld     [esp+arg_4]
0x6B066C: fcom    st(1)
0x6B066E: fnstsw  ax
0x6B0670: fstp    st(1)
0x6B0672: test    ah, 5
0x6B0675: jp      short loc_6B068A
0x6B0677: mov     ecx, ds:0B33A98h
0x6B067D: fstp    st
0x6B067F: push    offset aCglasssmall; "CGlassSmall"
0x6B0684: call    sub_447490
0x6B0689: retn
0x6B068A: fcomp   qword ptr ds:0A492F0h
0x6B0690: mov     ecx, ds:0B33A98h
0x6B0696: fnstsw  ax
0x6B0698: test    ah, 5
0x6B069B: jp      short loc_6B06A8
0x6B069D: push    offset aCglassmedium; "CGlassMedium"
0x6B06A2: call    sub_447490
0x6B06A7: retn
0x6B06A8: push    offset aCglasslarge; "CGlassLarge"
0x6B06AD: call    sub_447490
0x6B06B2: retn
0x6B06B3: fld     dword ptr ds:0A5977Ch; jumptable 006B0366 case 8
0x6B06B9: fld     [esp+arg_4]
0x6B06BD: fcom    st(1)
0x6B06BF: fnstsw  ax
0x6B06C1: fstp    st(1)
0x6B06C3: test    ah, 5
0x6B06C6: jp      short loc_6B06DB
0x6B06C8: fstp    st
0x6B06CA: mov     ecx, ds:0B33A98h
0x6B06D0: push    offset aCwoodsmall; "CWoodSmall"
0x6B06D5: call    sub_447490
0x6B06DA: retn
0x6B06DB: fcomp   qword ptr ds:0A492F0h
0x6B06E1: mov     ecx, ds:0B33A98h
0x6B06E7: fnstsw  ax
0x6B06E9: test    ah, 5
0x6B06EC: jp      loc_6B0588
0x6B06F2: push    offset aCwoodmedium; "CWoodMedium"
0x6B06F7: call    sub_447490
0x6B06FC: retn
0x6B06FD: mov     ecx, offset unk_B1628C; jumptable 006B0366 case 13
0x6B0702: call    GameSetting_GetSafeFloatPointer
0x6B0707: fld     [esp+arg_4]
0x6B070B: fld     dword ptr [eax]
0x6B070D: fcompp
0x6B070F: fnstsw  ax
0x6B0711: test    ah, 41h
0x6B0714: jnz     short loc_6B0727
0x6B0716: mov     ecx, ds:0B33A98h
0x6B071C: push    offset aCchainsmall; "CChainSmall"
0x6B0721: call    sub_447490
0x6B0726: retn
0x6B0727: mov     ecx, offset unk_B1628C
0x6B072C: call    GameSetting_GetSafeFloatPointer
0x6B0731: fld     [esp+arg_4]
0x6B0735: fld     dword ptr [eax]
0x6B0737: mov     ecx, ds:0B33A98h
0x6B073D: fcompp
0x6B073F: fnstsw  ax
0x6B0741: test    ah, 41h
0x6B0744: jnz     short loc_6B0751
0x6B0746: push    offset aCchainmedium; "CChainMedium"
0x6B074B: call    sub_447490
0x6B0750: retn
0x6B0751: push    offset aCchainlarge; "CChainLarge"
0x6B0756: call    sub_447490
0x6B075B: retn
0x6B075C: mov     ecx, ds:0B33A98h; jumptable 006B0366 case 10
0x6B0762: push    offset aCspecialheavys; "CSpecialHeavyStone"
0x6B0767: call    sub_447490
0x6B076C: retn
0x6B076D: mov     ecx, ds:0B33A98h; jumptable 006B0366 case 11
0x6B0773: push    offset aCspecialheavym; "CSpecialHeavyMetal"
0x6B0778: call    sub_447490
0x6B077D: retn
0x6B077E: mov     ecx, ds:0B33A98h; jumptable 006B0366 case 12
0x6B0784: push    offset aCspecialheavyw; "CSpecialHeavyWood"
0x6B0789: call    sub_447490
0x6B078E: retn; jumptable 006B0366 default case, cases 14-29
