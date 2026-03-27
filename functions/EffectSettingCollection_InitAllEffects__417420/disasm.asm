0x417420: fldz
0x417422: push    0; int
0x417424: push    0FFFFFFFFh; int
0x417426: push    1000172h; int
0x41742B: push    37h ; '7'; int
0x41742D: push    ecx
0x41742E: fstp    [esp+14h+var_14]; float
0x417431: push    0; int
0x417433: push    offset aWaterBreathing; "Water Breathing"
0x417438: push    52424157h; int
0x41743D: call    EffectSettingCollection_AddFull
0x417442: fldz
0x417444: add     esp, 20h
0x417447: push    0; int
0x417449: push    0FFFFFFFFh; int
0x41744B: push    1000172h; int
0x417450: push    38h ; '8'; int
0x417452: push    ecx
0x417453: fstp    [esp+14h+var_14]; float
0x417456: push    0; int
0x417458: push    offset aWaterWalking; "Water Walking"
0x41745D: push    41574157h; int
0x417462: call    EffectSettingCollection_AddFull
0x417467: fldz
0x417469: add     esp, 20h
0x41746C: push    0; int
0x41746E: push    0FFFFFFFFh; int
0x417470: push    100007Ah; int
0x417475: push    2Bh ; '+'; int
0x417477: push    ecx
0x417478: fstp    [esp+14h+var_14]; float
0x41747B: push    0; int
0x41747D: push    offset aShield; "Shield"
0x417482: push    444C4853h; int
0x417487: call    EffectSettingCollection_AddFull
0x41748C: fldz
0x41748E: add     esp, 20h
0x417491: push    0; int
0x417493: push    0FFFFFFFFh; int
0x417495: push    100007Ah; int
0x41749A: push    3Dh ; '='; int
0x41749C: push    ecx
0x41749D: fstp    [esp+14h+var_14]; float
0x4174A0: push    0; int
0x4174A2: push    offset aFireShield; "Fire Shield"
0x4174A7: push    48534946h; int
0x4174AC: call    EffectSettingCollection_AddFull
0x4174B1: fldz
0x4174B3: add     esp, 20h
0x4174B6: push    0; int
0x4174B8: push    0FFFFFFFFh; int
0x4174BA: push    100007Ah; int
0x4174BF: push    44h ; 'D'; int
0x4174C1: push    ecx
0x4174C2: fstp    [esp+14h+var_14]; float
0x4174C5: push    0; int
0x4174C7: push    offset aLightningShiel; "Lightning Shield"
0x4174CC: push    4853494Ch; int
0x4174D1: call    EffectSettingCollection_AddFull
0x4174D6: fldz
0x4174D8: add     esp, 20h
0x4174DB: push    0; int
0x4174DD: push    0FFFFFFFFh; int
0x4174DF: push    100007Ah; int
0x4174E4: push    3Eh ; '>'; int
0x4174E6: push    ecx
0x4174E7: fstp    [esp+14h+var_14]; float
0x4174EA: push    0; int
0x4174EC: push    offset aFrostShield; "Frost Shield"
0x4174F1: push    48535246h; int
0x4174F6: call    EffectSettingCollection_AddFull
0x4174FB: fldz
0x4174FD: add     esp, 20h
0x417500: push    52485446h
0x417505: push    4C505344h; char
0x41750A: push    2; int
0x41750C: push    40h ; '@'; int
0x41750E: push    1000073h; int
0x417513: push    0Bh; int
0x417515: push    ecx
0x417516: fstp    [esp+1Ch+var_1C]; float
0x417519: push    0; int
0x41751B: push    offset aBurden; "Burden"
0x417520: push    4E445242h; int
0x417525: call    EffectSettingCollection_AddFull
0x41752A: fldz
0x41752C: add     esp, 28h
0x41752F: push    4C505344h; char
0x417534: push    1; int
0x417536: push    40h ; '@'; int
0x417538: push    1000076h; int
0x41753D: push    0Bh; int
0x41753F: push    ecx
0x417540: fstp    [esp+18h+var_18]; float
0x417543: push    0; int
0x417545: push    offset aFeather; "Feather"
0x41754A: push    52485446h; int
0x41754F: call    EffectSettingCollection_AddFull
0x417554: fldz
0x417556: add     esp, 24h
0x417559: push    0; int
0x41755B: push    0FFFFFFFFh; int
0x41755D: push    0E0h ; 'à'; int
0x417562: push    0; int
0x417564: push    ecx
0x417565: fstp    [esp+14h+var_14]; float
0x417568: push    0; int
0x41756A: push    offset aLock; "Lock"
0x41756F: push    4B434F4Ch; int
0x417574: call    EffectSettingCollection_AddFull
0x417579: fldz
0x41757B: add     esp, 20h
0x41757E: push    0; int
0x417580: push    0FFFFFFFFh; int
0x417582: push    0C0h ; 'À'; int
0x417587: push    0; int
0x417589: push    ecx
0x41758A: fstp    [esp+14h+var_14]; float
0x41758D: push    0; int
0x41758F: push    offset aOpen; "Open"
0x417594: push    4E45504Fh; int
0x417599: call    EffectSettingCollection_AddFull
0x41759E: fldz
0x4175A0: add     esp, 20h
0x4175A3: push    48534946h
0x4175A8: push    49465352h
0x4175AD: push    4C505344h; char
0x4175B2: push    3; int
0x4175B4: push    3Dh ; '='; int
0x4175B6: push    21000475h; int
0x4175BB: push    8; int
0x4175BD: push    ecx
0x4175BE: fstp    [esp+20h+var_20]; float
0x4175C1: push    2; int
0x4175C3: push    offset aFireDamage; "Fire Damage"
0x4175C8: push    47444946h; int
0x4175CD: call    EffectSettingCollection_AddFull
0x4175D2: fldz
0x4175D4: add     esp, 2Ch
0x4175D7: push    4853494Ch
0x4175DC: push    48535352h
0x4175E1: push    4C505344h; char
0x4175E6: push    3; int
0x4175E8: push    44h ; 'D'; int
0x4175EA: push    21000075h; int
0x4175EF: push    8; int
0x4175F1: push    ecx
0x4175F2: fstp    [esp+20h+var_20]; float
0x4175F5: push    2; int
0x4175F7: push    offset aShockDamage; "Shock Damage"
0x4175FC: push    47444853h; int
0x417601: call    EffectSettingCollection_AddFull
0x417606: fldz
0x417608: add     esp, 2Ch
0x41760B: push    48535246h
0x417610: push    52465352h
0x417615: push    4C505344h; char
0x41761A: push    3; int
0x41761C: push    3Eh ; '>'; int
0x41761E: push    1000075h; int
0x417623: push    8; int
0x417625: push    ecx
0x417626: fstp    [esp+20h+var_20]; float
0x417629: push    2; int
0x41762B: push    offset aFrostDamage; "Frost Damage"
0x417630: push    47445246h; int
0x417635: call    EffectSettingCollection_AddFull
0x41763A: fldz
0x41763C: add     esp, 2Ch
0x41763F: push    54414241h
0x417644: push    54414F46h
0x417649: push    54414552h
0x41764E: push    4C505344h; char
0x417653: push    4; int
0x417655: push    40h ; '@'; int
0x417657: push    100075h; int
0x41765C: push    0; int
0x41765E: push    ecx
0x41765F: fstp    [esp+24h+var_24]; float
0x417662: push    2; int
0x417664: push    offset aDamageAttribute; "Damage Attribute"
0x417669: push    54414744h; int
0x41766E: call    EffectSettingCollection_AddFull
0x417673: fldz
0x417675: add     esp, 30h
0x417678: push    45484241h
0x41767D: push    45484F46h
0x417682: push    45484552h
0x417687: push    4C505344h; char
0x41768C: push    4; int
0x41768E: push    40h ; '@'; int
0x417690: push    21000075h; int
0x417695: push    8; int
0x417697: push    ecx
0x417698: fstp    [esp+24h+var_24]; float
0x41769B: push    2; int
0x41769D: push    offset aDamageHealth; "Damage Health"
0x4176A2: push    45484744h; int
0x4176A7: call    EffectSettingCollection_AddFull
0x4176AC: fldz
0x4176AE: add     esp, 30h
0x4176B1: push    50534241h
0x4176B6: push    50534F46h
0x4176BB: push    50534552h
0x4176C0: push    4C505344h; char
0x4176C5: push    4; int
0x4176C7: push    40h ; '@'; int
0x4176C9: push    1000075h; int
0x4176CE: push    9; int
0x4176D0: push    ecx
0x4176D1: fstp    [esp+24h+var_24]; float
0x4176D4: push    2; int
0x4176D6: push    offset aDamageSpellPoi; "Damage Spell Points"
0x4176DB: push    50534744h; int
0x4176E0: call    EffectSettingCollection_AddFull
0x4176E5: fldz
0x4176E7: add     esp, 30h
0x4176EA: push    41464241h
0x4176EF: push    41464F46h
0x4176F4: push    41464552h
0x4176F9: push    4C505344h; char
0x4176FE: push    4; int
0x417700: push    40h ; '@'; int
0x417702: push    1000075h; int
0x417707: push    0Ah; int
0x417709: push    ecx
0x41770A: fstp    [esp+24h+var_24]; float
0x41770D: push    2; int
0x41770F: push    offset aDamageFatigue; "Damage Fatigue"
0x417714: push    41464744h; int
0x417719: call    EffectSettingCollection_AddFull
0x41771E: fldz
0x417720: add     esp, 30h
0x417723: push    54414241h
0x417728: push    54414F46h
0x41772D: push    54414552h
0x417732: push    4C505344h; char
0x417737: push    4; int
0x417739: push    40h ; '@'; int
0x41773B: push    100077h; int
0x417740: push    0; int
0x417742: push    ecx
0x417743: fstp    [esp+24h+var_24]; float
0x417746: push    2; int
0x417748: push    offset aDrainAttribute; "Drain Attribute"
0x41774D: push    54415244h; int
0x417752: call    EffectSettingCollection_AddFull
0x417757: fldz
0x417759: add     esp, 30h
0x41775C: push    4B534241h
0x417761: push    4B534F46h
0x417766: push    4C505344h; char
0x41776B: push    3; int
0x41776D: push    40h ; '@'; int
0x41776F: push    80077h; int
0x417774: push    0; int
0x417776: push    ecx
0x417777: fstp    [esp+20h+var_20]; float
0x41777A: push    2; int
0x41777C: push    offset aDrainSkill; "Drain Skill"
0x417781: push    4B535244h; int
0x417786: call    EffectSettingCollection_AddFull
0x41778B: fldz
0x41778D: add     esp, 2Ch
0x417790: push    45484241h
0x417795: push    45484F46h
0x41779A: push    45484552h
0x41779F: push    4C505344h; char
0x4177A4: push    4; int
0x4177A6: push    40h ; '@'; int
0x4177A8: push    1000077h; int
0x4177AD: push    8; int
0x4177AF: push    ecx
0x4177B0: fstp    [esp+24h+var_24]; float
0x4177B3: push    2; int
0x4177B5: push    offset aDrainHealth; "Drain Health"
0x4177BA: push    45485244h; int
0x4177BF: call    EffectSettingCollection_AddFull
0x4177C4: fldz
0x4177C6: add     esp, 30h
0x4177C9: push    50534241h
0x4177CE: push    50534F46h
0x4177D3: push    50534552h
0x4177D8: push    4C505344h; char
0x4177DD: push    4; int
0x4177DF: push    40h ; '@'; int
0x4177E1: push    1000077h; int
0x4177E6: push    9; int
0x4177E8: push    ecx
0x4177E9: fstp    [esp+24h+var_24]; float
0x4177EC: push    2; int
0x4177EE: push    offset aDrainSpellPoin; "Drain Spell Points"
0x4177F3: push    50535244h; int
0x4177F8: call    EffectSettingCollection_AddFull
0x4177FD: fldz
0x4177FF: add     esp, 30h
0x417802: push    41464241h
0x417807: push    41464F46h
0x41780C: push    41464552h
0x417811: push    4C505344h; char
0x417816: push    4; int
0x417818: push    40h ; '@'; int
0x41781A: push    1000077h; int
0x41781F: push    0Ah; int
0x417821: push    ecx
0x417822: fstp    [esp+24h+var_24]; float
0x417825: push    2; int
0x417827: push    offset aDrainFatigue; "Drain Fatigue"
0x41782C: push    41465244h; int
0x417831: call    EffectSettingCollection_AddFull
0x417836: fldz
0x417838: add     esp, 30h
0x41783B: push    4C505344h
0x417840: push    49465352h
0x417845: push    48534946h; char
0x41784A: push    3; int
0x41784C: push    40h ; '@'; int
0x41784E: push    100007Fh; int
0x417853: push    3Dh ; '='; int
0x417855: push    ecx
0x417856: fstp    [esp+20h+var_20]; float
0x417859: push    2; int
0x41785B: push    offset aWeaknessToFire; "Weakness to Fire"
0x417860: push    49464B57h; int
0x417865: call    EffectSettingCollection_AddFull
0x41786A: fldz
0x41786C: add     esp, 2Ch
0x41786F: push    4C505344h
0x417874: push    52465352h
0x417879: push    48535246h; char
0x41787E: push    3; int
0x417880: push    40h ; '@'; int
0x417882: push    100007Fh; int
0x417887: push    3Eh ; '>'; int
0x417889: push    ecx
0x41788A: fstp    [esp+20h+var_20]; float
0x41788D: push    2; int
0x41788F: push    offset aWeaknessToFros; "Weakness to Frost"
0x417894: push    52464B57h; int
0x417899: call    EffectSettingCollection_AddFull
0x41789E: fldz
0x4178A0: add     esp, 2Ch
0x4178A3: push    4C505344h
0x4178A8: push    48535352h
0x4178AD: push    4853494Ch; char
0x4178B2: push    3; int
0x4178B4: push    40h ; '@'; int
0x4178B6: push    100007Fh; int
0x4178BB: push    44h ; 'D'; int
0x4178BD: push    ecx
0x4178BE: fstp    [esp+20h+var_20]; float
0x4178C1: push    2; int
0x4178C3: push    offset aWeaknessToShoc; "Weakness to Shock"
0x4178C8: push    48534B57h; int
0x4178CD: call    EffectSettingCollection_AddFull
0x4178D2: fldz
0x4178D4: add     esp, 2Ch
0x4178D7: push    4C505344h
0x4178DC: push    414D5352h; char
0x4178E1: push    2; int
0x4178E3: push    40h ; '@'; int
0x4178E5: push    100007Fh; int
0x4178EA: push    40h ; '@'; int
0x4178EC: push    ecx
0x4178ED: fstp    [esp+1Ch+var_1C]; float
0x4178F0: push    2; int
0x4178F2: push    offset aWeaknessToMagi; "Weakness to Magic"
0x4178F7: push    414D4B57h; int
0x4178FC: call    EffectSettingCollection_AddFull
0x417901: fldz
0x417903: add     esp, 28h
0x417906: push    4C505344h
0x41790B: push    49445352h; char
0x417910: push    2; int
0x417912: push    40h ; '@'; int
0x417914: push    100007Fh; int
0x417919: push    3Fh ; '?'; int
0x41791B: push    ecx
0x41791C: fstp    [esp+1Ch+var_1C]; float
0x41791F: push    2; int
0x417921: push    offset aWeaknessToDise; "Weakness to Disease"
0x417926: push    49444B57h; int
0x41792B: call    EffectSettingCollection_AddFull
0x417930: fldz
0x417932: add     esp, 28h
0x417935: push    4C505344h
0x41793A: push    4F505352h; char
0x41793F: push    2; int
0x417941: push    40h ; '@'; int
0x417943: push    100007Fh; int
0x417948: push    43h ; 'C'; int
0x41794A: push    ecx
0x41794B: fstp    [esp+1Ch+var_1C]; float
0x41794E: push    2; int
0x417950: push    offset aWeaknessToPois; "Weakness to Poison"
0x417955: push    4F504B57h; int
0x41795A: call    EffectSettingCollection_AddFull
0x41795F: add     esp, 28h
0x417962: push    4C505344h
0x417967: push    574E5352h; char
0x41796C: push    2; int
0x41796E: push    40h ; '@'; int
0x417970: push    100007Fh; int
0x417975: push    41h ; 'A'; int
0x417977: push    ecx
0x417978: fldz
0x41797A: fstp    [esp+1Ch+var_1C]; float
0x41797D: push    2; int
0x41797F: push    offset aWeaknessToNorm; "Weakness to Normal Weapons"
0x417984: push    574E4B57h; int
0x417989: call    EffectSettingCollection_AddFull
0x41798E: fldz
0x417990: add     esp, 28h
0x417993: push    48535246h
0x417998: push    4853494Ch
0x41799D: push    48534946h
0x4179A2: push    444C4853h
0x4179A7: push    4C505344h; char
0x4179AC: push    5; int
0x4179AE: push    40h ; '@'; int
0x4179B0: push    75h ; 'u'; int
0x4179B2: push    0; int
0x4179B4: push    ecx
0x4179B5: fstp    [esp+28h+var_28]; float
0x4179B8: push    2; int
0x4179BA: push    offset aDisintegrateAr; "Disintegrate Armor"
0x4179BF: push    52414944h; int
0x4179C4: call    EffectSettingCollection_AddFull
0x4179C9: fldz
0x4179CB: add     esp, 34h
0x4179CE: push    48535246h
0x4179D3: push    4853494Ch
0x4179D8: push    48534946h
0x4179DD: push    444C4853h
0x4179E2: push    4C505344h; char
0x4179E7: push    5; int
0x4179E9: push    40h ; '@'; int
0x4179EB: push    75h ; 'u'; int
0x4179ED: push    0; int
0x4179EF: push    ecx
0x4179F0: fstp    [esp+28h+var_28]; float
0x4179F3: push    2; int
0x4179F5: push    offset aDisintegrateWe; "Disintegrate Weapons"
0x4179FA: push    45574944h; int
0x4179FF: call    EffectSettingCollection_AddFull
0x417A04: fldz
0x417A06: add     esp, 34h
0x417A09: push    0; int
0x417A0B: push    3Fh ; '?'; int
0x417A0D: push    10000092h; int
0x417A12: push    0; int
0x417A14: push    ecx
0x417A15: fstp    [esp+14h+var_14]; float
0x417A18: push    2; int
0x417A1A: push    offset aVampirism; "Vampirism"
0x417A1F: push    504D4156h; int
0x417A24: call    EffectSettingCollection_AddFull
0x417A29: fldz
0x417A2B: add     esp, 20h
0x417A2E: push    0; int
0x417A30: push    0FFFFFFFFh; int
0x417A32: push    14h; int
0x417A34: push    0; int
0x417A36: push    ecx
0x417A37: fstp    [esp+14h+var_14]; float
0x417A3A: push    2; int
0x417A3C: push    offset aSunDamage; "Sun Damage"
0x417A41: push    47445553h; int
0x417A46: call    EffectSettingCollection_AddFull
0x417A4B: fldz
0x417A4D: add     esp, 20h
0x417A50: push    0; int
0x417A52: push    0FFFFFFFFh; int
0x417A54: push    1000112h; int
0x417A59: push    39h ; '9'; int
0x417A5B: push    ecx
0x417A5C: fstp    [esp+14h+var_14]; float
0x417A5F: push    2; int
0x417A61: push    offset aStuntedMagicka; "Stunted Magicka"
0x417A66: push    414D5453h; int
0x417A6B: call    EffectSettingCollection_AddFull
0x417A70: add     esp, 20h
0x417A73: push    4F505543h; char
0x417A78: push    1; int
0x417A7A: push    43h ; 'C'; int
0x417A7C: push    offset loc_800000; int
0x417A81: fldz
0x417A83: push    0; int
0x417A85: push    ecx
0x417A86: fstp    [esp+18h+var_18]; float
0x417A89: push    2; int
0x417A8B: push    offset aPoisonInfo; "Poison Info"
0x417A90: push    4E534F50h; int
0x417A95: call    EffectSettingCollection_AddFull
0x417A9A: fldz
0x417A9C: add     esp, 24h
0x417A9F: push    49445543h; char
0x417AA4: push    1; int
0x417AA6: push    3Fh ; '?'; int
0x417AA8: push    offset loc_800000; int
0x417AAD: push    0; int
0x417AAF: push    ecx
0x417AB0: fstp    [esp+18h+var_18]; float
0x417AB3: push    2; int
0x417AB5: push    offset aDiseaseInfo; "Disease Info"
0x417ABA: push    45534944h; int
0x417ABF: call    EffectSettingCollection_AddFull
0x417AC4: fldz
0x417AC6: add     esp, 24h
0x417AC9: push    45484241h
0x417ACE: push    45484F46h
0x417AD3: push    45484552h
0x417AD8: push    4C505344h; char
0x417ADD: push    4; int
0x417ADF: push    40h ; '@'; int
0x417AE1: push    21000075h; int
0x417AE6: push    8; int
0x417AE8: push    ecx
0x417AE9: fstp    [esp+24h+var_24]; float
0x417AEC: push    2; int
0x417AEE: push    offset aMehrunesDagonC; "Mehrunes Dagon Custom Effect"
0x417AF3: push    594D5544h; int
0x417AF8: call    EffectSettingCollection_AddFull
0x417AFD: fldz
0x417AFF: add     esp, 30h
0x417B02: push    0; int
0x417B04: push    0FFFFFFFFh; int
0x417B06: push    1000172h; int
0x417B0B: push    2Fh ; '/'; int
0x417B0D: push    ecx
0x417B0E: fstp    [esp+14h+var_14]; float
0x417B11: push    3; int
0x417B13: push    offset aInvisibility; "Invisibility"
0x417B18: push    49564E49h; int
0x417B1D: call    EffectSettingCollection_AddFull
0x417B22: fldz
0x417B24: add     esp, 20h
0x417B27: push    0; int
0x417B29: push    0FFFFFFFFh; int
0x417B2B: push    100007Ah; int
0x417B30: push    2Eh ; '.'; int
0x417B32: push    ecx
0x417B33: fstp    [esp+14h+var_14]; float
0x417B36: push    3; int
0x417B38: push    offset aChameleon; "Chameleon"
0x417B3D: push    4C4D4843h; int
0x417B42: call    EffectSettingCollection_AddFull
0x417B47: fldz
0x417B49: add     esp, 20h
0x417B4C: push    4C505344h
0x417B51: push    41505543h; char
0x417B56: push    2; int
0x417B58: push    42h ; 'B'; int
0x417B5A: push    1000173h; int
0x417B5F: push    30h ; '0'; int
0x417B61: push    ecx
0x417B62: fstp    [esp+1Ch+var_1C]; float
0x417B65: push    3; int
0x417B67: push    offset aParalyze; "Paralyze"
0x417B6C: push    41524150h; int
0x417B71: call    EffectSettingCollection_AddFull
0x417B76: add     esp, 28h
0x417B79: push    4C505344h; char
0x417B7E: push    1; int
0x417B80: push    40h ; '@'; int
0x417B82: push    1000173h; int
0x417B87: push    31h ; '1'; int
0x417B89: fldz
0x417B8B: push    ecx
0x417B8C: fstp    [esp+18h+var_18]; float
0x417B8F: push    3; int
0x417B91: push    offset aSilence; "Silence"
0x417B96: push    434E4C53h; int
0x417B9B: call    EffectSettingCollection_AddFull
0x417BA0: fldz
0x417BA2: add     esp, 24h
0x417BA5: push    4C505344h; char
0x417BAA: push    1; int
0x417BAC: push    40h ; '@'; int
0x417BAE: push    1000062h; int
0x417BB3: push    6; int
0x417BB5: push    ecx
0x417BB6: fstp    [esp+18h+var_18]; float
0x417BB9: push    3; int
0x417BBB: push    offset aCharm; "Charm"
0x417BC0: push    4D524843h; int
0x417BC5: call    EffectSettingCollection_AddFull
0x417BCA: fldz
0x417BCC: add     esp, 24h
0x417BCF: push    594C4152h
0x417BD4: push    4C505344h; char
0x417BD9: push    2; int
0x417BDB: push    40h ; '@'; int
0x417BDD: push    41000066h; int
0x417BE2: push    22h ; '"'; int
0x417BE4: push    ecx
0x417BE5: fstp    [esp+1Ch+var_1C]; float
0x417BE8: push    3; int
0x417BEA: push    offset aDemoralize; "Demoralize"
0x417BEF: push    4F4D4544h; int
0x417BF4: call    EffectSettingCollection_AddFull
0x417BF9: fldz
0x417BFB: add     esp, 28h
0x417BFE: push    4F4D4544h
0x417C03: push    4C505344h; char
0x417C08: push    2; int
0x417C0A: push    40h ; '@'; int
0x417C0C: push    1000062h; int
0x417C11: push    22h ; '"'; int
0x417C13: push    ecx
0x417C14: fstp    [esp+1Ch+var_1C]; float
0x417C17: push    3; int
0x417C19: push    offset aRally; "Rally"
0x417C1E: push    594C4152h; int
0x417C23: call    EffectSettingCollection_AddFull
0x417C28: fldz
0x417C2A: add     esp, 28h
0x417C2D: push    4D4C4143h
0x417C32: push    4C505344h; char
0x417C37: push    2; int
0x417C39: push    40h ; '@'; int
0x417C3B: push    41000062h; int
0x417C40: push    21h ; '!'; int
0x417C42: push    ecx
0x417C43: fstp    [esp+1Ch+var_1C]; float
0x417C46: push    3; int
0x417C48: push    offset aFrenzy; "Frenzy"
0x417C4D: push    5A4E5246h; int
0x417C52: call    EffectSettingCollection_AddFull
0x417C57: fldz
0x417C59: add     esp, 28h
0x417C5C: push    5A4E5246h
0x417C61: push    4C505344h; char
0x417C66: push    2; int
0x417C68: push    40h ; '@'; int
0x417C6A: push    41000066h; int
0x417C6F: push    21h ; '!'; int
0x417C71: push    ecx
0x417C72: fstp    [esp+1Ch+var_1C]; float
0x417C75: push    3; int
0x417C77: push    offset aCalm; "Calm"
0x417C7C: push    4D4C4143h; int
0x417C81: call    EffectSettingCollection_AddFull
0x417C86: add     esp, 28h
0x417C89: push    0; int
0x417C8B: push    0FFFFFFFFh; int
0x417C8D: push    1000112h; int
0x417C92: push    29h ; ')'; int
0x417C94: fldz
0x417C96: push    ecx
0x417C97: fstp    [esp+14h+var_14]; float
0x417C9A: push    3; int
0x417C9C: push    offset aNightEye; "Night-Eye"
0x417CA1: push    4559454Eh; int
0x417CA6: call    EffectSettingCollection_AddFull
0x417CAB: fldz
0x417CAD: add     esp, 20h
0x417CB0: push    0; int
0x417CB2: push    0FFFFFFFFh; int
0x417CB4: push    80000072h; int
0x417CB9: push    0; int
0x417CBB: push    ecx
0x417CBC: fstp    [esp+14h+var_14]; float
0x417CBF: push    3; int
0x417CC1: push    offset aLight; "Light"
0x417CC6: push    5448474Ch; int
0x417CCB: call    EffectSettingCollection_AddFull
0x417CD0: fldz
0x417CD2: add     esp, 20h
0x417CD5: push    0; int
0x417CD7: push    0FFFFFFFFh; int
0x417CD9: push    81000072h; int
0x417CDE: push    46h ; 'F'; int
0x417CE0: push    ecx
0x417CE1: fstp    [esp+14h+var_14]; float
0x417CE4: push    3; int
0x417CE6: push    offset aDarkness; "Darkness"
0x417CEB: push    4B524144h; int
0x417CF0: call    EffectSettingCollection_AddFull
0x417CF5: fldz
0x417CF7: add     esp, 20h
0x417CFA: push    0; int
0x417CFC: push    40h ; '@'; int
0x417CFE: push    0F0h ; 'ð'; int
0x417D03: push    0; int
0x417D05: push    ecx
0x417D06: fstp    [esp+14h+var_14]; float
0x417D09: push    4; int
0x417D0B: push    offset aDispel; "Dispel"
0x417D10: push    4C505344h; int
0x417D15: call    EffectSettingCollection_AddFull
0x417D1A: fldz
0x417D1C: add     esp, 20h
0x417D1F: push    4C505344h; char
0x417D24: push    1; int
0x417D26: push    40h ; '@'; int
0x417D28: push    163h; int
0x417D2D: push    0; int
0x417D2F: push    ecx
0x417D30: fstp    [esp+18h+var_18]; float
0x417D33: push    4; int
0x417D35: push    offset aSoulTrap; "Soul Trap"
0x417D3A: push    50525453h; int
0x417D3F: call    EffectSettingCollection_AddFull
0x417D44: fldz
0x417D46: add     esp, 24h
0x417D49: push    0; int
0x417D4B: push    0FFFFFFFFh; int
0x417D4D: push    81000242h; int
0x417D52: push    3Ch ; '<'; int
0x417D54: push    ecx
0x417D55: fstp    [esp+14h+var_14]; float
0x417D58: push    4; int
0x417D5A: push    offset aTelekinesis; "Telekinesis"
0x417D5F: push    454C4554h; int
0x417D64: call    EffectSettingCollection_AddFull
0x417D69: fldz
0x417D6B: add     esp, 20h
0x417D6E: push    0; int
0x417D70: push    0FFFFFFFFh; int
0x417D72: push    81000012h; int
0x417D77: push    3Ah ; ':'; int
0x417D79: push    ecx
0x417D7A: fstp    [esp+14h+var_14]; float
0x417D7D: push    4; int
0x417D7F: push    offset aDetectLife; "Detect Life"
0x417D84: push    54435444h; int
0x417D89: call    EffectSettingCollection_AddFull
0x417D8E: add     esp, 20h
0x417D91: fldz
0x417D93: push    0; int
0x417D95: push    40h ; '@'; int
0x417D97: push    1000072h; int
0x417D9C: push    34h ; '4'; int
0x417D9E: push    ecx
0x417D9F: fstp    [esp+14h+var_14]; float
0x417DA2: push    4; int
0x417DA4: push    offset aSpellAbsorptio; "Spell Absorption"
0x417DA9: push    53424153h; int
0x417DAE: call    EffectSettingCollection_AddFull
0x417DB3: fldz
0x417DB5: add     esp, 20h
0x417DB8: push    0; int
0x417DBA: push    0FFFFFFFFh; int
0x417DBC: push    100007Ah; int
0x417DC1: push    35h ; '5'; int
0x417DC3: push    ecx
0x417DC4: fstp    [esp+14h+var_14]; float
0x417DC7: push    4; int
0x417DC9: push    offset aReflect; "Reflect"
0x417DCE: push    434C4652h; int
0x417DD3: call    EffectSettingCollection_AddFull
0x417DD8: fldz
0x417DDA: add     esp, 20h
0x417DDD: push    0; int
0x417DDF: push    0FFFFFFFFh; int
0x417DE1: push    100001Ah; int
0x417DE6: push    3Bh ; ';'; int
0x417DE8: push    ecx
0x417DE9: fstp    [esp+14h+var_14]; float
0x417DEC: push    4; int
0x417DEE: push    offset aReflectDamage; "Reflect Damage"
0x417DF3: push    47444552h; int
0x417DF8: call    EffectSettingCollection_AddFull
0x417DFD: fldz
0x417DFF: add     esp, 20h
0x417E02: push    0; int
0x417E04: push    0FFFFFFFFh; int
0x417E06: push    100070h; int
0x417E0B: push    0; int
0x417E0D: push    ecx
0x417E0E: fstp    [esp+14h+var_14]; float
0x417E11: push    5; int
0x417E13: push    offset aRestoreAttribu; "Restore Attribute"
0x417E18: push    54414552h; int
0x417E1D: call    EffectSettingCollection_AddFull
0x417E22: fldz
0x417E24: add     esp, 20h
0x417E27: push    0; int
0x417E29: push    0FFFFFFFFh; int
0x417E2B: push    1000070h; int
0x417E30: push    8; int
0x417E32: push    ecx
0x417E33: fstp    [esp+14h+var_14]; float
0x417E36: push    5; int
0x417E38: push    offset aRestoreHealth; "Restore Health"
0x417E3D: push    45484552h; int
0x417E42: call    EffectSettingCollection_AddFull
0x417E47: fldz
0x417E49: add     esp, 20h
0x417E4C: push    0; int
0x417E4E: push    0FFFFFFFFh; int
0x417E50: push    1000070h; int
0x417E55: push    9; int
0x417E57: push    ecx
0x417E58: fstp    [esp+14h+var_14]; float
0x417E5B: push    5; int
0x417E5D: push    offset aRestoreSpellPo; "Restore Spell Points"
0x417E62: push    50534552h; int
0x417E67: call    EffectSettingCollection_AddFull
0x417E6C: fldz
0x417E6E: add     esp, 20h
0x417E71: push    0; int
0x417E73: push    0FFFFFFFFh; int
0x417E75: push    1000070h; int
0x417E7A: push    0Ah; int
0x417E7C: push    ecx
0x417E7D: fstp    [esp+14h+var_14]; float
0x417E80: push    5; int
0x417E82: push    offset aRestoreFatigue; "Restore Fatigue"
0x417E87: push    41464552h; int
0x417E8C: call    EffectSettingCollection_AddFull
0x417E91: fldz
0x417E93: add     esp, 20h
0x417E96: push    0; int
0x417E98: push    0FFFFFFFFh; int
0x417E9A: push    100072h; int
0x417E9F: push    0; int
0x417EA1: push    ecx
0x417EA2: fstp    [esp+14h+var_14]; float
0x417EA5: push    5; int
0x417EA7: push    offset aFortifyAttribu; "Fortify Attribute"
0x417EAC: push    54414F46h; int
0x417EB1: call    EffectSettingCollection_AddFull
0x417EB6: fldz
0x417EB8: add     esp, 20h
0x417EBB: push    0; int
0x417EBD: push    0FFFFFFFFh; int
0x417EBF: push    80072h; int
0x417EC4: push    0; int
0x417EC6: push    ecx
0x417EC7: fstp    [esp+14h+var_14]; float
0x417ECA: push    5; int
0x417ECC: push    offset aFortifySkill; "Fortify Skill"
0x417ED1: push    4B534F46h; int
0x417ED6: call    EffectSettingCollection_AddFull
0x417EDB: fldz
0x417EDD: add     esp, 20h
0x417EE0: push    0; int
0x417EE2: push    0FFFFFFFFh; int
0x417EE4: push    1000072h; int
0x417EE9: push    8; int
0x417EEB: push    ecx
0x417EEC: fstp    [esp+14h+var_14]; float
0x417EEF: push    5; int
0x417EF1: push    offset aFortifyHealth; "Fortify Health"
0x417EF6: push    45484F46h; int
0x417EFB: call    EffectSettingCollection_AddFull
0x417F00: fldz
0x417F02: add     esp, 20h
0x417F05: push    0; int
0x417F07: push    0FFFFFFFFh; int
0x417F09: push    1000072h; int
0x417F0E: push    9; int
0x417F10: push    ecx
0x417F11: fstp    [esp+14h+var_14]; float
0x417F14: push    5; int
0x417F16: push    offset aFortifySpellPo; "Fortify Spell Points"
0x417F1B: push    50534F46h; int
0x417F20: call    EffectSettingCollection_AddFull
0x417F25: fldz
0x417F27: add     esp, 20h
0x417F2A: push    0; int
0x417F2C: push    0FFFFFFFFh; int
0x417F2E: push    1000072h; int
0x417F33: push    0Ah; int
0x417F35: push    ecx
0x417F36: fstp    [esp+14h+var_14]; float
0x417F39: push    5; int
0x417F3B: push    offset aFortifyFatigue; "Fortify Fatigue"
0x417F40: push    41464F46h; int
0x417F45: call    EffectSettingCollection_AddFull
0x417F4A: fldz
0x417F4C: add     esp, 20h
0x417F4F: push    4B535244h
0x417F54: push    4B534241h
0x417F59: push    4C505344h; char
0x417F5E: push    3; int
0x417F60: push    40h ; '@'; int
0x417F62: push    80027h; int
0x417F67: push    0; int
0x417F69: push    ecx
0x417F6A: fstp    [esp+20h+var_20]; float
0x417F6D: push    5; int
0x417F6F: push    offset aAbsorbSkill; "Absorb Skill"
0x417F74: push    4B534241h; int
0x417F79: call    EffectSettingCollection_AddFull
0x417F7E: add     esp, 2Ch
0x417F81: push    54414744h
0x417F86: push    54415244h
0x417F8B: push    54414241h
0x417F90: fldz
0x417F92: push    4C505344h; char
0x417F97: push    4; int
0x417F99: push    40h ; '@'; int
0x417F9B: push    100027h; int
0x417FA0: push    0; int
0x417FA2: push    ecx
0x417FA3: fstp    [esp+24h+var_24]; float
0x417FA6: push    5; int
0x417FA8: push    offset aAbsorbAttribut; "Absorb Attribute"
0x417FAD: push    54414241h; int
0x417FB2: call    EffectSettingCollection_AddFull
0x417FB7: fldz
0x417FB9: add     esp, 30h
0x417FBC: push    594D5544h
0x417FC1: push    45484744h
0x417FC6: push    45485244h
0x417FCB: push    45484241h
0x417FD0: push    4C505344h; char
0x417FD5: push    4; int
0x417FD7: push    40h ; '@'; int
0x417FD9: push    1000025h; int
0x417FDE: push    8; int
0x417FE0: push    ecx
0x417FE1: fstp    [esp+28h+var_28]; float
0x417FE4: push    5; int
0x417FE6: push    offset aAbsorbHealth; "Absorb Health"
0x417FEB: push    45484241h; int
0x417FF0: call    EffectSettingCollection_AddFull
0x417FF5: fldz
0x417FF7: add     esp, 34h
0x417FFA: push    41464744h
0x417FFF: push    41465244h
0x418004: push    41464241h
0x418009: push    4C505344h; char
0x41800E: push    4; int
0x418010: push    40h ; '@'; int
0x418012: push    1000025h; int
0x418017: push    0Ah; int
0x418019: push    ecx
0x41801A: fstp    [esp+24h+var_24]; float
0x41801D: push    5; int
0x41801F: push    offset aAbsorbFatigue; "Absorb Fatigue"
0x418024: push    41464241h; int
0x418029: call    EffectSettingCollection_AddFull
0x41802E: fldz
0x418030: add     esp, 30h
0x418033: push    50534744h
0x418038: push    50535244h
0x41803D: push    50534241h
0x418042: push    4C505344h; char
0x418047: push    4; int
0x418049: push    40h ; '@'; int
0x41804B: push    1000025h; int
0x418050: push    9; int
0x418052: push    ecx
0x418053: fstp    [esp+24h+var_24]; float
0x418056: push    5; int
0x418058: push    offset aAbsorbSpellPoi; "Absorb Spell Points"
0x41805D: push    50534241h; int
0x418062: call    EffectSettingCollection_AddFull
0x418067: fldz
0x418069: add     esp, 30h
0x41806C: push    0; int
0x41806E: push    0FFFFFFFFh; int
0x418070: push    100007Ah; int
0x418075: push    3Dh ; '='; int
0x418077: push    ecx
0x418078: fstp    [esp+14h+var_14]; float
0x41807B: push    5; int
0x41807D: push    offset aResistFire; "Resist Fire"
0x418082: push    49465352h; int
0x418087: call    EffectSettingCollection_AddFull
0x41808C: fldz
0x41808E: add     esp, 20h
0x418091: push    0; int
0x418093: push    0FFFFFFFFh; int
0x418095: push    100007Ah; int
0x41809A: push    3Eh ; '>'; int
0x41809C: push    ecx
0x41809D: fstp    [esp+14h+var_14]; float
0x4180A0: push    5; int
0x4180A2: push    offset aResistFrost; "Resist Frost"
0x4180A7: push    52465352h; int
0x4180AC: call    EffectSettingCollection_AddFull
0x4180B1: fldz
0x4180B3: add     esp, 20h
0x4180B6: push    0; int
0x4180B8: push    0FFFFFFFFh; int
0x4180BA: push    100007Ah; int
0x4180BF: push    44h ; 'D'; int
0x4180C1: push    ecx
0x4180C2: fstp    [esp+14h+var_14]; float
0x4180C5: push    5; int
0x4180C7: push    offset aResistShock; "Resist Shock"
0x4180CC: push    48535352h; int
0x4180D1: call    EffectSettingCollection_AddFull
0x4180D6: fldz
0x4180D8: add     esp, 20h
0x4180DB: push    0; int
0x4180DD: push    0FFFFFFFFh; int
0x4180DF: push    100007Ah; int
0x4180E4: push    40h ; '@'; int
0x4180E6: push    ecx
0x4180E7: fstp    [esp+14h+var_14]; float
0x4180EA: push    5; int
0x4180EC: push    offset aResistMagic; "Resist Magic"
0x4180F1: push    414D5352h; int
0x4180F6: call    EffectSettingCollection_AddFull
0x4180FB: fldz
0x4180FD: add     esp, 20h
0x418100: push    0; int
0x418102: push    0FFFFFFFFh; int
0x418104: push    100007Ah; int
0x418109: push    3Fh ; '?'; int
0x41810B: push    ecx
0x41810C: fstp    [esp+14h+var_14]; float
0x41810F: push    5; int
0x418111: push    offset aResistDisease; "Resist Disease"
0x418116: push    49445352h; int
0x41811B: call    EffectSettingCollection_AddFull
0x418120: fldz
0x418122: add     esp, 20h
0x418125: push    0; int
0x418127: push    0FFFFFFFFh; int
0x418129: push    100007Ah; int
0x41812E: push    43h ; 'C'; int
0x418130: push    ecx
0x418131: fstp    [esp+14h+var_14]; float
0x418134: push    5; int
0x418136: push    offset aResistPoison; "Resist Poison"
0x41813B: push    4F505352h; int
0x418140: call    EffectSettingCollection_AddFull
0x418145: fldz
0x418147: add     esp, 20h
0x41814A: push    0; int
0x41814C: push    0FFFFFFFFh; int
0x41814E: push    100007Ah; int
0x418153: push    42h ; 'B'; int
0x418155: push    ecx
0x418156: fstp    [esp+14h+var_14]; float
0x418159: push    5; int
0x41815B: push    offset aResistParalysi; "Resist Paralysis"
0x418160: push    41505352h; int
0x418165: call    EffectSettingCollection_AddFull
0x41816A: fldz
0x41816C: add     esp, 20h
0x41816F: push    0; int
0x418171: push    0FFFFFFFFh; int
0x418173: push    100007Ah; int
0x418178: push    41h ; 'A'; int
0x41817A: push    ecx
0x41817B: fstp    [esp+14h+var_14]; float
0x41817E: push    5; int
0x418180: push    offset aResistNormalWe; "Resist Normal Weapons"
0x418185: push    574E5352h; int
0x41818A: call    EffectSettingCollection_AddFull
0x41818F: add     esp, 20h
0x418192: push    0; int
0x418194: push    0FFFFFFFFh; int
0x418196: push    100017Ah; int
0x41819B: push    47h ; 'G'; int
0x41819D: fldz
0x41819F: push    ecx
0x4181A0: fstp    [esp+14h+var_14]; float
0x4181A3: push    5; int
0x4181A5: push    offset aResistWaterDam; "Resist Water Damage"
0x4181AA: push    44575352h; int
0x4181AF: call    EffectSettingCollection_AddFull
0x4181B4: fldz
0x4181B6: add     esp, 20h
0x4181B9: push    0; int
0x4181BB: push    0FFFFFFFFh; int
0x4181BD: push    1F0h; int
0x4181C2: push    0; int
0x4181C4: push    ecx
0x4181C5: fstp    [esp+14h+var_14]; float
0x4181C8: push    5; int
0x4181CA: push    offset aCureDisease; "Cure Disease"
0x4181CF: push    49445543h; int
0x4181D4: call    EffectSettingCollection_AddFull
0x4181D9: fldz
0x4181DB: add     esp, 20h
0x4181DE: push    0; int
0x4181E0: push    0FFFFFFFFh; int
0x4181E2: push    1F0h; int
0x4181E7: push    0; int
0x4181E9: push    ecx
0x4181EA: fstp    [esp+14h+var_14]; float
0x4181ED: push    5; int
0x4181EF: push    offset aCurePoison; "Cure Poison"
0x4181F4: push    4F505543h; int
0x4181F9: call    EffectSettingCollection_AddFull
0x4181FE: fldz
0x418200: add     esp, 20h
0x418203: push    0; int
0x418205: push    0FFFFFFFFh; int
0x418207: push    1F0h; int
0x41820C: push    0; int
0x41820E: push    ecx
0x41820F: fstp    [esp+14h+var_14]; float
0x418212: push    5; int
0x418214: push    offset aCureParalysis; "Cure Paralysis"
0x418219: push    41505543h; int
0x41821E: call    EffectSettingCollection_AddFull
0x418223: fldz
0x418225: add     esp, 20h
0x418228: push    0; int
0x41822A: push    0FFFFFFFFh; int
0x41822C: push    1000012h; int
0x418231: push    28h ; '('; int
0x418233: push    ecx
0x418234: fstp    [esp+14h+var_14]; float
0x418237: push    5; int
0x418239: push    offset aFortifyMagicka; "Fortify Magicka Multiplier"
0x41823E: push    4D4D4F46h; int
0x418243: call    EffectSettingCollection_AddFull
0x418248: fldz
0x41824A: add     esp, 20h
0x41824D: push    0; int
0x41824F: push    0FFFFFFFFh; int
0x418251: push    40112h; int
0x418256: push    0; int
0x418258: push    ecx
0x418259: fstp    [esp+14h+var_14]; float
0x41825C: push    1; int
0x41825E: push    offset aSummonGhost; "Summon Ghost"
0x418263: push    4F48475Ah; int
0x418268: call    EffectSettingCollection_AddFull
0x41826D: fldz
0x41826F: add     esp, 20h
0x418272: push    0; int
0x418274: push    0FFFFFFFFh; int
0x418276: push    40112h; int
0x41827B: push    0; int
0x41827D: push    ecx
0x41827E: fstp    [esp+14h+var_14]; float
0x418281: push    1; int
0x418283: push    offset aSummonLich; "Summon Lich"
0x418288: push    43494C5Ah; int
0x41828D: call    EffectSettingCollection_AddFull
0x418292: add     esp, 20h
0x418295: push    0; int
0x418297: fldz
0x418299: push    0FFFFFFFFh; int
0x41829B: push    40112h; int
0x4182A0: push    0; int
0x4182A2: push    ecx
0x4182A3: fstp    [esp+14h+var_14]; float
0x4182A6: push    1; int
0x4182A8: push    offset aSummonSkeleton; "Summon Skeleton"
0x4182AD: push    454B535Ah; int
0x4182B2: call    EffectSettingCollection_AddFull
0x4182B7: fldz
0x4182B9: add     esp, 20h
0x4182BC: push    0; int
0x4182BE: push    0FFFFFFFFh; int
0x4182C0: push    40112h; int
0x4182C5: push    0; int
0x4182C7: push    ecx
0x4182C8: fstp    [esp+14h+var_14]; float
0x4182CB: push    1; int
0x4182CD: push    offset aSummonSkelet_0; "Summon Skeleton Archer"
0x4182D2: push    414B535Ah; int
0x4182D7: call    EffectSettingCollection_AddFull
0x4182DC: fldz
0x4182DE: add     esp, 20h
0x4182E1: push    0; int
0x4182E3: push    0FFFFFFFFh; int
0x4182E5: push    40112h; int
0x4182EA: push    0; int
0x4182EC: push    ecx
0x4182ED: fstp    [esp+14h+var_14]; float
0x4182F0: push    1; int
0x4182F2: push    offset aSummonSkelet_1; "Summon Skeleton Champion"
0x4182F7: push    434B535Ah; int
0x4182FC: call    EffectSettingCollection_AddFull
0x418301: fldz
0x418303: add     esp, 20h
0x418306: push    0; int
0x418308: push    0FFFFFFFFh; int
0x41830A: push    40112h; int
0x41830F: push    0; int
0x418311: push    ecx
0x418312: fstp    [esp+14h+var_14]; float
0x418315: push    1; int
0x418317: push    offset aSummonSkelet_2; "Summon Skeleton Hero"
0x41831C: push    484B535Ah; int
0x418321: call    EffectSettingCollection_AddFull
0x418326: fldz
0x418328: add     esp, 20h
0x41832B: push    0; int
0x41832D: push    0FFFFFFFFh; int
0x41832F: push    40112h; int
0x418334: push    0; int
0x418336: push    ecx
0x418337: fstp    [esp+14h+var_14]; float
0x41833A: push    1; int
0x41833C: push    offset aSummonWraith; "Summon Wraith"
0x418341: push    4152575Ah; int
0x418346: call    EffectSettingCollection_AddFull
0x41834B: fldz
0x41834D: add     esp, 20h
0x418350: push    0; int
0x418352: push    0FFFFFFFFh; int
0x418354: push    40112h; int
0x418359: push    0; int
0x41835B: push    ecx
0x41835C: fstp    [esp+14h+var_14]; float
0x41835F: push    1; int
0x418361: push    offset aSummonWraithLo; "Summon Wraith Lord"
0x418366: push    4C52575Ah; int
0x41836B: call    EffectSettingCollection_AddFull
0x418370: fldz
0x418372: add     esp, 20h
0x418375: push    0; int
0x418377: push    0FFFFFFFFh; int
0x418379: push    40112h; int
0x41837E: push    0; int
0x418380: push    ecx
0x418381: fstp    [esp+14h+var_14]; float
0x418384: push    1; int
0x418386: push    offset aSummonZombie; "Summon Zombie"
0x41838B: push    4D4F5A5Ah; int
0x418390: call    EffectSettingCollection_AddFull
0x418395: fldz
0x418397: add     esp, 20h
0x41839A: push    0; int
0x41839C: push    0FFFFFFFFh; int
0x41839E: push    40112h; int
0x4183A3: push    0; int
0x4183A5: push    ecx
0x4183A6: fstp    [esp+14h+var_14]; float
0x4183A9: push    1; int
0x4183AB: push    offset aSummonHeadless; "Summon Headless Zombie"
0x4183B0: push    5A44485Ah; int
0x4183B5: call    EffectSettingCollection_AddFull
0x4183BA: fldz
0x4183BC: add     esp, 20h
0x4183BF: push    0; int
0x4183C1: push    0FFFFFFFFh; int
0x4183C3: push    40112h; int
0x4183C8: push    0; int
0x4183CA: push    ecx
0x4183CB: fstp    [esp+14h+var_14]; float
0x4183CE: push    1; int
0x4183D0: push    offset aSummonFireAtro; "Summon Fire Atronach"
0x4183D5: push    4149465Ah; int
0x4183DA: call    EffectSettingCollection_AddFull
0x4183DF: fldz
0x4183E1: add     esp, 20h
0x4183E4: push    0; int
0x4183E6: push    0FFFFFFFFh; int
0x4183E8: push    40112h; int
0x4183ED: push    0; int
0x4183EF: push    ecx
0x4183F0: fstp    [esp+14h+var_14]; float
0x4183F3: push    1; int
0x4183F5: push    offset aSummonFrostAtr; "Summon Frost Atronach"
0x4183FA: push    4152465Ah; int
0x4183FF: call    EffectSettingCollection_AddFull
0x418404: fldz
0x418406: add     esp, 20h
0x418409: push    0; int
0x41840B: push    0FFFFFFFFh; int
0x41840D: push    40112h; int
0x418412: push    0; int
0x418414: push    ecx
0x418415: fstp    [esp+14h+var_14]; float
0x418418: push    1; int
0x41841A: push    offset aSummonStormAtr; "Summon Storm Atronach"
0x41841F: push    4154535Ah; int
0x418424: call    EffectSettingCollection_AddFull
0x418429: fldz
0x41842B: add     esp, 20h
0x41842E: push    0; int
0x418430: push    0FFFFFFFFh; int
0x418432: push    40112h; int
0x418437: push    0; int
0x418439: push    ecx
0x41843A: fstp    [esp+14h+var_14]; float
0x41843D: push    1; int
0x41843F: push    offset aSummonDaedroth; "Summon Daedroth"
0x418444: push    4541445Ah; int
0x418449: call    EffectSettingCollection_AddFull
0x41844E: fldz
0x418450: add     esp, 20h
0x418453: push    0; int
0x418455: push    0FFFFFFFFh; int
0x418457: push    40112h; int
0x41845C: push    0; int
0x41845E: push    ecx
0x41845F: fstp    [esp+14h+var_14]; float
0x418462: push    1; int
0x418464: push    offset aSummonDremora; "Summon Dremora"
0x418469: push    4552445Ah; int
0x41846E: call    EffectSettingCollection_AddFull
0x418473: fldz
0x418475: add     esp, 20h
0x418478: push    0; int
0x41847A: push    0FFFFFFFFh; int
0x41847C: push    40112h; int
0x418481: push    0; int
0x418483: push    ecx
0x418484: fstp    [esp+14h+var_14]; float
0x418487: push    1; int
0x418489: push    offset aSummonDremoraL; "Summon Dremora Lord"
0x41848E: push    4C52445Ah; int
0x418493: call    EffectSettingCollection_AddFull
0x418498: fldz
0x41849A: add     esp, 20h
0x41849D: push    0; int
0x41849F: push    0FFFFFFFFh; int
0x4184A1: push    40112h; int
0x4184A6: push    0; int
0x4184A8: push    ecx
0x4184A9: fstp    [esp+14h+var_14]; float
0x4184AC: push    1; int
0x4184AE: push    offset aSummonScamp; "Summon Scamp"
0x4184B3: push    4143535Ah; int
0x4184B8: call    EffectSettingCollection_AddFull
0x4184BD: fldz
0x4184BF: add     esp, 20h
0x4184C2: push    0; int
0x4184C4: push    0FFFFFFFFh; int
0x4184C6: push    40112h; int
0x4184CB: push    0; int
0x4184CD: push    ecx
0x4184CE: fstp    [esp+14h+var_14]; float
0x4184D1: push    1; int
0x4184D3: push    offset aSummonClannfea; "Summon Clannfear"
0x4184D8: push    414C435Ah; int
0x4184DD: call    EffectSettingCollection_AddFull
0x4184E2: fldz
0x4184E4: add     esp, 20h
0x4184E7: push    0; int
0x4184E9: push    0FFFFFFFFh; int
0x4184EB: push    40112h; int
0x4184F0: push    0; int
0x4184F2: push    ecx
0x4184F3: fstp    [esp+14h+var_14]; float
0x4184F6: push    1; int
0x4184F8: push    offset aSummonSpiderDa; "Summon Spider Daedra"
0x4184FD: push    4450535Ah; int
0x418502: call    EffectSettingCollection_AddFull
0x418507: fldz
0x418509: add     esp, 20h
0x41850C: push    0; int
0x41850E: push    0FFFFFFFFh; int
0x418510: push    40112h; int
0x418515: push    0; int
0x418517: push    ecx
0x418518: fstp    [esp+14h+var_14]; float
0x41851B: push    1; int
0x41851D: push    offset aSummonXivilai; "Summon Xivilai"
0x418522: push    5649585Ah; int
0x418527: call    EffectSettingCollection_AddFull
0x41852C: fldz
0x41852E: add     esp, 20h
0x418531: push    0; int
0x418533: push    0FFFFFFFFh; int
0x418535: push    40112h; int
0x41853A: push    0; int
0x41853C: push    ecx
0x41853D: fstp    [esp+14h+var_14]; float
0x418540: push    1; int
0x418542: push    offset aExtraSummon01; "Extra Summon 01"
0x418547: push    3130305Ah; int
0x41854C: call    EffectSettingCollection_AddFull
0x418551: fldz
0x418553: add     esp, 20h
0x418556: push    0; int
0x418558: push    0FFFFFFFFh; int
0x41855A: push    40112h; int
0x41855F: push    0; int
0x418561: push    ecx
0x418562: fstp    [esp+14h+var_14]; float
0x418565: push    1; int
0x418567: push    offset aExtraSummon02; "Extra Summon 02"
0x41856C: push    3230305Ah; int
0x418571: call    EffectSettingCollection_AddFull
0x418576: add     esp, 20h
0x418579: push    0; int
0x41857B: push    0FFFFFFFFh; int
0x41857D: push    40112h; int
0x418582: push    0; int
0x418584: fldz
0x418586: push    ecx
0x418587: fstp    [esp+14h+var_14]; float
0x41858A: push    1; int
0x41858C: push    offset aExtraSummon03; "Extra Summon 03"
0x418591: push    3330305Ah; int
0x418596: call    EffectSettingCollection_AddFull
0x41859B: fldz
0x41859D: add     esp, 20h
0x4185A0: push    0; int
0x4185A2: push    0FFFFFFFFh; int
0x4185A4: push    40112h; int
0x4185A9: push    0; int
0x4185AB: push    ecx
0x4185AC: fstp    [esp+14h+var_14]; float
0x4185AF: push    1; int
0x4185B1: push    offset aExtraSummon04; "Extra Summon 04"
0x4185B6: push    3430305Ah; int
0x4185BB: call    EffectSettingCollection_AddFull
0x4185C0: fldz
0x4185C2: add     esp, 20h
0x4185C5: push    0; int
0x4185C7: push    0FFFFFFFFh; int
0x4185C9: push    40112h; int
0x4185CE: push    0; int
0x4185D0: push    ecx
0x4185D1: fstp    [esp+14h+var_14]; float
0x4185D4: push    1; int
0x4185D6: push    offset aExtraSummon05; "Extra Summon 05"
0x4185DB: push    3530305Ah; int
0x4185E0: call    EffectSettingCollection_AddFull
0x4185E5: fldz
0x4185E7: add     esp, 20h
0x4185EA: push    0; int
0x4185EC: push    0FFFFFFFFh; int
0x4185EE: push    40112h; int
0x4185F3: push    0; int
0x4185F5: push    ecx
0x4185F6: fstp    [esp+14h+var_14]; float
0x4185F9: push    1; int
0x4185FB: push    offset aExtraSummon06; "Extra Summon 06"
0x418600: push    3630305Ah; int
0x418605: call    EffectSettingCollection_AddFull
0x41860A: fldz
0x41860C: add     esp, 20h
0x41860F: push    0; int
0x418611: push    0FFFFFFFFh; int
0x418613: push    40112h; int
0x418618: push    0; int
0x41861A: push    ecx
0x41861B: fstp    [esp+14h+var_14]; float
0x41861E: push    1; int
0x418620: push    offset aExtraSummon07; "Extra Summon 07"
0x418625: push    3730305Ah; int
0x41862A: call    EffectSettingCollection_AddFull
0x41862F: fldz
0x418631: add     esp, 20h
0x418634: push    0; int
0x418636: push    0FFFFFFFFh; int
0x418638: push    40112h; int
0x41863D: push    0; int
0x41863F: push    ecx
0x418640: fstp    [esp+14h+var_14]; float
0x418643: push    1; int
0x418645: push    offset aExtraSummon08; "Extra Summon 08"
0x41864A: push    3830305Ah; int
0x41864F: call    EffectSettingCollection_AddFull
0x418654: fldz
0x418656: add     esp, 20h
0x418659: push    0; int
0x41865B: push    0FFFFFFFFh; int
0x41865D: push    40112h; int
0x418662: push    0; int
0x418664: push    ecx
0x418665: fstp    [esp+14h+var_14]; float
0x418668: push    1; int
0x41866A: push    offset aExtraSummon09; "Extra Summon 09"
0x41866F: push    3930305Ah; int
0x418674: call    EffectSettingCollection_AddFull
0x418679: add     esp, 20h
0x41867C: push    0; int
0x41867E: fldz
0x418680: push    0FFFFFFFFh; int
0x418682: push    40112h; int
0x418687: push    0; int
0x418689: push    ecx
0x41868A: fstp    [esp+14h+var_14]; float
0x41868D: push    1; int
0x41868F: push    offset aExtraSummon10; "Extra Summon 10"
0x418694: push    3031305Ah; int
0x418699: call    EffectSettingCollection_AddFull
0x41869E: fldz
0x4186A0: add     esp, 20h
0x4186A3: push    0; int
0x4186A5: push    0FFFFFFFFh; int
0x4186A7: push    40112h; int
0x4186AC: push    0; int
0x4186AE: push    ecx
0x4186AF: fstp    [esp+14h+var_14]; float
0x4186B2: push    1; int
0x4186B4: push    offset aExtraSummon11; "Extra Summon 11"
0x4186B9: push    3131305Ah; int
0x4186BE: call    EffectSettingCollection_AddFull
0x4186C3: fldz
0x4186C5: add     esp, 20h
0x4186C8: push    0; int
0x4186CA: push    0FFFFFFFFh; int
0x4186CC: push    40112h; int
0x4186D1: push    0; int
0x4186D3: push    ecx
0x4186D4: fstp    [esp+14h+var_14]; float
0x4186D7: push    1; int
0x4186D9: push    offset aExtraSummon12; "Extra Summon 12"
0x4186DE: push    3231305Ah; int
0x4186E3: call    EffectSettingCollection_AddFull
0x4186E8: fldz
0x4186EA: add     esp, 20h
0x4186ED: push    0; int
0x4186EF: push    0FFFFFFFFh; int
0x4186F1: push    40112h; int
0x4186F6: push    0; int
0x4186F8: push    ecx
0x4186F9: fstp    [esp+14h+var_14]; float
0x4186FC: push    1; int
0x4186FE: push    offset aExtraSummon13; "Extra Summon 13"
0x418703: push    3331305Ah; int
0x418708: call    EffectSettingCollection_AddFull
0x41870D: fldz
0x41870F: add     esp, 20h
0x418712: push    0; int
0x418714: push    0FFFFFFFFh; int
0x418716: push    40112h; int
0x41871B: push    0; int
0x41871D: push    ecx
0x41871E: fstp    [esp+14h+var_14]; float
0x418721: push    1; int
0x418723: push    offset aExtraSummon14; "Extra Summon 14"
0x418728: push    3431305Ah; int
0x41872D: call    EffectSettingCollection_AddFull
0x418732: fldz
0x418734: add     esp, 20h
0x418737: push    0; int
0x418739: push    0FFFFFFFFh; int
0x41873B: push    40112h; int
0x418740: push    0; int
0x418742: push    ecx
0x418743: fstp    [esp+14h+var_14]; float
0x418746: push    1; int
0x418748: push    offset aExtraSummon15; "Extra Summon 15"
0x41874D: push    3531305Ah; int
0x418752: call    EffectSettingCollection_AddFull
0x418757: fldz
0x418759: add     esp, 20h
0x41875C: push    0; int
0x41875E: push    0FFFFFFFFh; int
0x418760: push    40112h; int
0x418765: push    0; int
0x418767: push    ecx
0x418768: fstp    [esp+14h+var_14]; float
0x41876B: push    1; int
0x41876D: push    offset aExtraSummon16; "Extra Summon 16"
0x418772: push    3631305Ah; int
0x418777: call    EffectSettingCollection_AddFull
0x41877C: fldz
0x41877E: add     esp, 20h
0x418781: push    0; int
0x418783: push    0FFFFFFFFh; int
0x418785: push    40112h; int
0x41878A: push    0; int
0x41878C: push    ecx
0x41878D: fstp    [esp+14h+var_14]; float
0x418790: push    1; int
0x418792: push    offset aExtraSummon17; "Extra Summon 17"
0x418797: push    3731305Ah; int
0x41879C: call    EffectSettingCollection_AddFull
0x4187A1: fldz
0x4187A3: add     esp, 20h
0x4187A6: push    0; int
0x4187A8: push    0FFFFFFFFh; int
0x4187AA: push    40112h; int
0x4187AF: push    0; int
0x4187B1: push    ecx
0x4187B2: fstp    [esp+14h+var_14]; float
0x4187B5: push    1; int
0x4187B7: push    offset aExtraSummon18; "Extra Summon 18"
0x4187BC: push    3831305Ah; int
0x4187C1: call    EffectSettingCollection_AddFull
0x4187C6: fldz
0x4187C8: add     esp, 20h
0x4187CB: push    0; int
0x4187CD: push    0FFFFFFFFh; int
0x4187CF: push    40112h; int
0x4187D4: push    0; int
0x4187D6: push    ecx
0x4187D7: fstp    [esp+14h+var_14]; float
0x4187DA: push    1; int
0x4187DC: push    offset aExtraSummon19; "Extra Summon 19"
0x4187E1: push    3931305Ah; int
0x4187E6: call    EffectSettingCollection_AddFull
0x4187EB: fldz
0x4187ED: add     esp, 20h
0x4187F0: push    0; int
0x4187F2: push    0FFFFFFFFh; int
0x4187F4: push    40112h; int
0x4187F9: push    0; int
0x4187FB: push    ecx
0x4187FC: fstp    [esp+14h+var_14]; float
0x4187FF: push    1; int
0x418801: push    offset aExtraSummon20; "Extra Summon 20"
0x418806: push    3032305Ah; int
0x41880B: call    EffectSettingCollection_AddFull
0x418810: fldz
0x418812: add     esp, 20h
0x418815: push    4C505344h; char
0x41881A: push    1; int
0x41881C: push    0FFFFFFFFh; int
0x41881E: push    40000062h; int
0x418823: push    0; int
0x418825: push    ecx
0x418826: fstp    [esp+18h+var_18]; float
0x418829: push    3; int
0x41882B: push    offset aCommandHumanoi; "Command Humanoid"
0x418830: push    55484F43h; int
0x418835: call    EffectSettingCollection_AddFull
0x41883A: fldz
0x41883C: add     esp, 24h
0x41883F: push    4C505344h; char
0x418844: push    1; int
0x418846: push    0FFFFFFFFh; int
0x418848: push    40000062h; int
0x41884D: push    0; int
0x41884F: push    ecx
0x418850: fstp    [esp+18h+var_18]; float
0x418853: push    3; int
0x418855: push    offset aCommandCreatur; "Command Creature"
0x41885A: push    52434F43h; int
0x41885F: call    EffectSettingCollection_AddFull
0x418864: add     esp, 24h
0x418867: push    0; int
0x418869: push    0FFFFFFFFh; int
0x41886B: push    10112h; int
0x418870: push    0; int
0x418872: push    ecx
0x418873: fldz
0x418875: fstp    [esp+14h+var_14]; float
0x418878: push    1; int
0x41887A: push    offset aBoundAxe; "Bound Axe"
0x41887F: push    58415742h; int
0x418884: call    EffectSettingCollection_AddFull
0x418889: fldz
0x41888B: add     esp, 20h
0x41888E: push    0; int
0x418890: push    0FFFFFFFFh; int
0x418892: push    10112h; int
0x418897: push    0; int
0x418899: push    ecx
0x41889A: fstp    [esp+14h+var_14]; float
0x41889D: push    1; int
0x41889F: push    offset aBoundBow; "Bound Bow"
0x4188A4: push    4F425742h; int
0x4188A9: call    EffectSettingCollection_AddFull
0x4188AE: fldz
0x4188B0: add     esp, 20h
0x4188B3: push    0; int
0x4188B5: push    0FFFFFFFFh; int
0x4188B7: push    10112h; int
0x4188BC: push    0; int
0x4188BE: push    ecx
0x4188BF: fstp    [esp+14h+var_14]; float
0x4188C2: push    1; int
0x4188C4: push    offset aBoundDagger; "Bound Dagger"
0x4188C9: push    41445742h; int
0x4188CE: call    EffectSettingCollection_AddFull
0x4188D3: fldz
0x4188D5: add     esp, 20h
0x4188D8: push    0; int
0x4188DA: push    0FFFFFFFFh; int
0x4188DC: push    10112h; int
0x4188E1: push    0; int
0x4188E3: push    ecx
0x4188E4: fstp    [esp+14h+var_14]; float
0x4188E7: push    1; int
0x4188E9: push    offset aBoundMace; "Bound Mace"
0x4188EE: push    414D5742h; int
0x4188F3: call    EffectSettingCollection_AddFull
0x4188F8: fldz
0x4188FA: add     esp, 20h
0x4188FD: push    0; int
0x4188FF: push    0FFFFFFFFh; int
0x418901: push    10112h; int
0x418906: push    0; int
0x418908: push    ecx
0x418909: fstp    [esp+14h+var_14]; float
0x41890C: push    1; int
0x41890E: push    offset aBoundSword; "Bound Sword"
0x418913: push    57535742h; int
0x418918: call    EffectSettingCollection_AddFull
0x41891D: fldz
0x41891F: add     esp, 20h
0x418922: push    0; int
0x418924: push    0FFFFFFFFh; int
0x418926: push    20112h; int
0x41892B: push    0; int
0x41892D: push    ecx
0x41892E: fstp    [esp+14h+var_14]; float
0x418931: push    1; int
0x418933: push    offset aBoundBoots; "Bound Boots"
0x418938: push    4F424142h; int
0x41893D: call    EffectSettingCollection_AddFull
0x418942: fldz
0x418944: add     esp, 20h
0x418947: push    0; int
0x418949: push    0FFFFFFFFh; int
0x41894B: push    20112h; int
0x418950: push    0; int
0x418952: push    ecx
0x418953: fstp    [esp+14h+var_14]; float
0x418956: push    1; int
0x418958: push    offset aBoundCuirass; "Bound Cuirass"
0x41895D: push    55434142h; int
0x418962: call    EffectSettingCollection_AddFull
0x418967: add     esp, 20h
0x41896A: push    0; int
0x41896C: push    0FFFFFFFFh; int
0x41896E: fldz
0x418970: push    20112h; int
0x418975: push    0; int
0x418977: push    ecx
0x418978: fstp    [esp+14h+var_14]; float
0x41897B: push    1; int
0x41897D: push    offset aBoundGauntlets; "Bound Gauntlets"
0x418982: push    41474142h; int
0x418987: call    EffectSettingCollection_AddFull
0x41898C: fldz
0x41898E: add     esp, 20h
0x418991: push    0; int
0x418993: push    0FFFFFFFFh; int
0x418995: push    20112h; int
0x41899A: push    0; int
0x41899C: push    ecx
0x41899D: fstp    [esp+14h+var_14]; float
0x4189A0: push    1; int
0x4189A2: push    offset aBoundGreaves; "Bound Greaves"
0x4189A7: push    52474142h; int
0x4189AC: call    EffectSettingCollection_AddFull
0x4189B1: fldz
0x4189B3: add     esp, 20h
0x4189B6: push    0; int
0x4189B8: push    0FFFFFFFFh; int
0x4189BA: push    20112h; int
0x4189BF: push    0; int
0x4189C1: push    ecx
0x4189C2: fstp    [esp+14h+var_14]; float
0x4189C5: push    1; int
0x4189C7: push    offset aBoundHelmet; "Bound Helmet"
0x4189CC: push    45484142h; int
0x4189D1: call    EffectSettingCollection_AddFull
0x4189D6: fldz
0x4189D8: add     esp, 20h
0x4189DB: push    0; int
0x4189DD: push    0FFFFFFFFh; int
0x4189DF: push    20112h; int
0x4189E4: push    0; int
0x4189E6: push    ecx
0x4189E7: fstp    [esp+14h+var_14]; float
0x4189EA: push    1; int
0x4189EC: push    offset aBoundShield; "Bound Shield"
0x4189F1: push    48534142h; int
0x4189F6: call    EffectSettingCollection_AddFull
0x4189FB: fldz
0x4189FD: add     esp, 20h
0x418A00: push    0; int
0x418A02: push    0FFFFFFFFh; int
0x418A04: push    20112h; int
0x418A09: push    0; int
0x418A0B: push    ecx
0x418A0C: fstp    [esp+14h+var_14]; float
0x418A0F: push    1; int
0x418A11: push    offset aBoundArmorExtr; "Bound Armor Extra 01"
0x418A16: push    31304142h; int
0x418A1B: call    EffectSettingCollection_AddFull
0x418A20: fldz
0x418A22: add     esp, 20h
0x418A25: push    0; int
0x418A27: push    0FFFFFFFFh; int
0x418A29: push    20112h; int
0x418A2E: push    0; int
0x418A30: push    ecx
0x418A31: fstp    [esp+14h+var_14]; float
0x418A34: push    1; int
0x418A36: push    offset aBoundArmorEx_0; "Bound Armor Extra 02"
0x418A3B: push    32304142h; int
0x418A40: call    EffectSettingCollection_AddFull
0x418A45: fldz
0x418A47: add     esp, 20h
0x418A4A: push    0; int
0x418A4C: push    0FFFFFFFFh; int
0x418A4E: push    20112h; int
0x418A53: push    0; int
0x418A55: push    ecx
0x418A56: fstp    [esp+14h+var_14]; float
0x418A59: push    1; int
0x418A5B: push    offset aBoundArmorEx_1; "Bound Armor Extra 03"
0x418A60: push    33304142h; int
0x418A65: call    EffectSettingCollection_AddFull
0x418A6A: fldz
0x418A6C: add     esp, 20h
0x418A6F: push    0; int
0x418A71: push    0FFFFFFFFh; int
0x418A73: push    20112h; int
0x418A78: push    0; int
0x418A7A: push    ecx
0x418A7B: fstp    [esp+14h+var_14]; float
0x418A7E: push    1; int
0x418A80: push    offset aBoundArmorEx_2; "Bound Armor Extra 04"
0x418A85: push    34304142h; int
0x418A8A: call    EffectSettingCollection_AddFull
0x418A8F: fldz
0x418A91: add     esp, 20h
0x418A94: push    0; int
0x418A96: push    0FFFFFFFFh; int
0x418A98: push    20112h; int
0x418A9D: push    0; int
0x418A9F: push    ecx
0x418AA0: fstp    [esp+14h+var_14]; float
0x418AA3: push    1; int
0x418AA5: push    offset aBoundArmorEx_3; "Bound Armor Extra 05"
0x418AAA: push    35304142h; int
0x418AAF: call    EffectSettingCollection_AddFull
0x418AB4: fldz
0x418AB6: add     esp, 20h
0x418AB9: push    0; int
0x418ABB: push    0FFFFFFFFh; int
0x418ABD: push    20112h; int
0x418AC2: push    0; int
0x418AC4: push    ecx
0x418AC5: fstp    [esp+14h+var_14]; float
0x418AC8: push    1; int
0x418ACA: push    offset aBoundArmorEx_4; "Bound Armor Extra 06"
0x418ACF: push    36304142h; int
0x418AD4: call    EffectSettingCollection_AddFull
0x418AD9: fldz
0x418ADB: add     esp, 20h
0x418ADE: push    0; int
0x418AE0: push    0FFFFFFFFh; int
0x418AE2: push    20112h; int
0x418AE7: push    0; int
0x418AE9: push    ecx
0x418AEA: fstp    [esp+14h+var_14]; float
0x418AED: push    1; int
0x418AEF: push    offset aBoundArmorEx_5; "Bound Armor Extra 07"
0x418AF4: push    37304142h; int
0x418AF9: call    EffectSettingCollection_AddFull
0x418AFE: fldz
0x418B00: add     esp, 20h
0x418B03: push    0; int
0x418B05: push    0FFFFFFFFh; int
0x418B07: push    20112h; int
0x418B0C: push    0; int
0x418B0E: push    ecx
0x418B0F: fstp    [esp+14h+var_14]; float
0x418B12: push    1; int
0x418B14: push    offset aBoundArmorEx_6; "Bound Armor Extra 08"
0x418B19: push    38304142h; int
0x418B1E: call    EffectSettingCollection_AddFull
0x418B23: fldz
0x418B25: add     esp, 20h
0x418B28: push    0; int
0x418B2A: push    0FFFFFFFFh; int
0x418B2C: push    20112h; int
0x418B31: push    0; int
0x418B33: push    ecx
0x418B34: fstp    [esp+14h+var_14]; float
0x418B37: push    1; int
0x418B39: push    offset aBoundArmorEx_7; "Bound Armor Extra 09"
0x418B3E: push    39304142h; int
0x418B43: call    EffectSettingCollection_AddFull
0x418B48: fldz
0x418B4A: add     esp, 20h
0x418B4D: push    0; int
0x418B4F: push    0FFFFFFFFh; int
0x418B51: push    20112h; int
0x418B56: push    0; int
0x418B58: push    ecx
0x418B59: fstp    [esp+14h+var_14]; float
0x418B5C: push    1; int
0x418B5E: push    offset aBoundArmorEx_8; "Bound Armor Extra 10"
0x418B63: push    30314142h; int
0x418B68: call    EffectSettingCollection_AddFull
0x418B6D: fldz
0x418B6F: add     esp, 20h
0x418B72: push    0; int
0x418B74: push    0FFFFFFFFh; int
0x418B76: push    10112h; int
0x418B7B: push    0; int
0x418B7D: push    ecx
0x418B7E: fstp    [esp+14h+var_14]; float
0x418B81: push    1; int
0x418B83: push    offset aBoundWeaponExt; "Bound Weapon Extra 01"
0x418B88: push    31305742h; int
0x418B8D: call    EffectSettingCollection_AddFull
0x418B92: fldz
0x418B94: add     esp, 20h
0x418B97: push    0; int
0x418B99: push    0FFFFFFFFh; int
0x418B9B: push    10112h; int
0x418BA0: push    0; int
0x418BA2: push    ecx
0x418BA3: fstp    [esp+14h+var_14]; float
0x418BA6: push    1; int
0x418BA8: push    offset aBoundWeaponE_0; "Bound Weapon Extra 02"
0x418BAD: push    32305742h; int
0x418BB2: call    EffectSettingCollection_AddFull
0x418BB7: fldz
0x418BB9: add     esp, 20h
0x418BBC: push    0; int
0x418BBE: push    0FFFFFFFFh; int
0x418BC0: push    10112h; int
0x418BC5: push    0; int
0x418BC7: push    ecx
0x418BC8: fstp    [esp+14h+var_14]; float
0x418BCB: push    1; int
0x418BCD: push    offset aBoundWeaponE_1; "Bound Weapon Extra 03"
0x418BD2: push    33305742h; int
0x418BD7: call    EffectSettingCollection_AddFull
0x418BDC: fldz
0x418BDE: add     esp, 20h
0x418BE1: push    0; int
0x418BE3: push    0FFFFFFFFh; int
0x418BE5: push    10112h; int
0x418BEA: push    0; int
0x418BEC: push    ecx
0x418BED: fstp    [esp+14h+var_14]; float
0x418BF0: push    1; int
0x418BF2: push    offset aBoundWeaponE_2; "Bound Weapon Extra 04"
0x418BF7: push    34305742h; int
0x418BFC: call    EffectSettingCollection_AddFull
0x418C01: fldz
0x418C03: add     esp, 20h
0x418C06: push    0; int
0x418C08: push    0FFFFFFFFh; int
0x418C0A: push    10112h; int
0x418C0F: push    0; int
0x418C11: push    ecx
0x418C12: fstp    [esp+14h+var_14]; float
0x418C15: push    1; int
0x418C17: push    offset aBoundWeaponE_3; "Bound Weapon Extra 05"
0x418C1C: push    35305742h; int
0x418C21: call    EffectSettingCollection_AddFull
0x418C26: fldz
0x418C28: add     esp, 20h
0x418C2B: push    0; int
0x418C2D: push    0FFFFFFFFh; int
0x418C2F: push    10112h; int
0x418C34: push    0; int
0x418C36: push    ecx
0x418C37: fstp    [esp+14h+var_14]; float
0x418C3A: push    1; int
0x418C3C: push    offset aBoundWeaponE_4; "Bound Weapon Extra 06"
0x418C41: push    36305742h; int
0x418C46: call    EffectSettingCollection_AddFull
0x418C4B: add     esp, 20h
0x418C4E: push    0; int
0x418C50: push    0FFFFFFFFh; int
0x418C52: push    10112h; int
0x418C57: push    0; int
0x418C59: push    ecx
0x418C5A: fldz
0x418C5C: fstp    [esp+14h+var_14]; float
0x418C5F: push    1; int
0x418C61: push    offset aBoundWeaponE_5; "Bound Weapon Extra 07"
0x418C66: push    37305742h; int
0x418C6B: call    EffectSettingCollection_AddFull
0x418C70: fldz
0x418C72: add     esp, 20h
0x418C75: push    0; int
0x418C77: push    0FFFFFFFFh; int
0x418C79: push    10112h; int
0x418C7E: push    0; int
0x418C80: push    ecx
0x418C81: fstp    [esp+14h+var_14]; float
0x418C84: push    1; int
0x418C86: push    offset aBoundWeaponE_6; "Bound Weapon Extra 08"
0x418C8B: push    38305742h; int
0x418C90: call    EffectSettingCollection_AddFull
0x418C95: fldz
0x418C97: add     esp, 20h
0x418C9A: push    0; int
0x418C9C: push    0FFFFFFFFh; int
0x418C9E: push    10112h; int
0x418CA3: push    0; int
0x418CA5: push    ecx
0x418CA6: fstp    [esp+14h+var_14]; float
0x418CA9: push    1; int
0x418CAB: push    offset aBoundWeaponE_7; "Bound Weapon Extra 09"
0x418CB0: push    39305742h; int
0x418CB5: call    EffectSettingCollection_AddFull
0x418CBA: fldz
0x418CBC: add     esp, 20h
0x418CBF: push    0; int
0x418CC1: push    0FFFFFFFFh; int
0x418CC3: push    10112h; int
0x418CC8: push    0; int
0x418CCA: push    ecx
0x418CCB: fstp    [esp+14h+var_14]; float
0x418CCE: push    1; int
0x418CD0: push    offset aBoundWeaponE_8; "Bound Weapon Extra 10"
0x418CD5: push    30315742h; int
0x418CDA: call    EffectSettingCollection_AddFull
0x418CDF: fldz
0x418CE1: add     esp, 20h
0x418CE4: push    594C4152h
0x418CE9: push    4C505344h; char
0x418CEE: push    2; int
0x418CF0: push    40h ; '@'; int
0x418CF2: push    40000063h; int
0x418CF7: push    0; int
0x418CF9: push    ecx
0x418CFA: fstp    [esp+1Ch+var_1C]; float
0x418CFD: push    1; int
0x418CFF: push    offset aTurnUndead; "Turn Undead"
0x418D04: push    4E525554h; int
0x418D09: call    EffectSettingCollection_AddFull
0x418D0E: fldz
0x418D10: add     esp, 28h
0x418D13: push    4C505344h; char
0x418D18: push    1; int
0x418D1A: push    0FFFFFFFFh; int
0x418D1C: push    170h; int
0x418D21: push    0; int
0x418D23: push    ecx
0x418D24: fstp    [esp+18h+var_18]; float
0x418D27: push    6; int
0x418D29: push    offset aScriptEffect; "Script Effect"
0x418D2E: push    46464553h; int
0x418D33: call    EffectSettingCollection_AddFull
0x418D38: fldz
0x418D3A: add     esp, 24h
0x418D3D: push    0; int
0x418D3F: push    0FFFFFFFFh; int
0x418D41: push    20112h; int
0x418D46: push    0; int
0x418D48: push    ecx
0x418D49: fstp    [esp+14h+var_14]; float
0x418D4C: push    1; int
0x418D4E: push    offset aSummonMythicDa; "Summon Mythic Dawn Armor"
0x418D53: push    4854594Dh; int
0x418D58: call    EffectSettingCollection_AddFull
0x418D5D: fldz
0x418D5F: add     esp, 20h
0x418D62: push    0; int
0x418D64: push    0FFFFFFFFh; int
0x418D66: push    20112h; int
0x418D6B: push    0; int
0x418D6D: push    ecx
0x418D6E: fstp    [esp+14h+var_14]; float
0x418D71: push    1; int
0x418D73: push    offset aSummonMythic_0; "Summon Mythic Dawn Helm"
0x418D78: push    4C48594Dh; int
0x418D7D: call    EffectSettingCollection_AddFull
0x418D82: fldz
0x418D84: add     esp, 20h
0x418D87: push    0; int
0x418D89: push    0FFFFFFFFh; int
0x418D8B: push    10000360h; int
0x418D90: push    0; int
0x418D92: push    ecx
0x418D93: fstp    [esp+14h+var_14]; float
0x418D96: push    1; int
0x418D98: push    offset aReanimate; "Reanimate"
0x418D9D: push    4E414552h; int
0x418DA2: call    EffectSettingCollection_AddFull
0x418DA7: add     esp, 20h
0x418DAA: retn
