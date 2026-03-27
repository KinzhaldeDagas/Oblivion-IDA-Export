0x7736F0: mov     eax, [esp+arg_0]
0x7736F4: cmp     eax, 88760818h
0x7736F9: ja      short loc_773741
0x7736FB: jz      short loc_77373B
0x7736FD: cmp     eax, 80070057h
0x773702: ja      short loc_77372A
0x773704: jz      short loc_773724
0x773706: cmp     eax, 80004005h
0x77370B: jz      short loc_77371E
0x77370D: cmp     eax, 8007000Eh
0x773712: jnz     def_773752; jumptable 00773752 default case, cases -2005530592,-2005530589--2005530587,-2005530584--2005530523
0x773718: mov     eax, offset aE_outofmemory; "E_OUTOFMEMORY"
0x77371D: retn
0x77371E: mov     eax, offset aE_fail; "E_FAIL"
0x773723: retn
0x773724: mov     eax, offset aE_invalidarg; "E_INVALIDARG"
0x773729: retn
0x77372A: cmp     eax, 8876017Ch
0x77372F: jnz     def_773752; jumptable 00773752 default case, cases -2005530592,-2005530589--2005530587,-2005530584--2005530523
0x773735: mov     eax, offset aD3derr_outofvi; "D3DERR_OUTOFVIDEOMEMORY"
0x77373A: retn
0x77373B: mov     eax, offset aD3derr_wrongte; "D3DERR_WRONGTEXTUREFORMAT"
0x773740: retn
0x773741: add     eax, 7789F7E7h; switch 84 cases
0x773746: cmp     eax, 53h
0x773749: ja      short def_773752; jumptable 00773752 default case, cases -2005530592,-2005530589--2005530587,-2005530584--2005530523
0x77374B: movzx   eax, ds:byte_773818[eax]
0x773752: jmp     ds:jpt_773752[eax*4]; switch jump
0x773759: mov     eax, offset aD3derr_conflic; jumptable 00773752 case -2005530591
0x77375E: retn
0x77375F: mov     eax, offset aD3derr_confl_0; jumptable 00773752 case -2005530594
0x773764: retn
0x773765: mov     eax, offset aD3derr_confl_1; jumptable 00773752 case -2005530586
0x77376A: retn
0x77376B: mov     eax, offset aD3derr_devicel; jumptable 00773752 case -2005530520
0x773770: retn
0x773771: mov     eax, offset aD3derr_devicen; jumptable 00773752 case -2005530519
0x773776: retn
0x773777: mov     eax, offset aD3derr_driveri; jumptable 00773752 case -2005530585
0x77377C: retn
0x77377D: mov     eax, offset aD3derr_invalid; jumptable 00773752 case -2005530516
0x773782: retn
0x773783: mov     eax, offset aD3derr_inval_0; jumptable 00773752 case -2005530517
0x773788: retn
0x773789: mov     eax, offset aD3derr_moredat; jumptable 00773752 case -2005530521
0x77378E: retn
0x77378F: mov     eax, offset aD3derr_notavai; jumptable 00773752 case -2005530518
0x773794: retn
0x773795: mov     eax, offset aD3derr_notfoun; jumptable 00773752 case -2005530522
0x77379A: retn
0x77379B: mov     eax, offset aD3derr_toomany; jumptable 00773752 case -2005530595
0x7737A0: retn
0x7737A1: mov     eax, offset aD3derr_unsuppo; jumptable 00773752 case -2005530596
0x7737A6: retn
0x7737A7: mov     eax, offset aD3derr_unsup_0; jumptable 00773752 case -2005530597
0x7737AC: retn
0x7737AD: mov     eax, offset aD3derr_unsup_1; jumptable 00773752 case -2005530598
0x7737B2: retn
0x7737B3: mov     eax, offset aD3derr_unsup_2; jumptable 00773752 case -2005530599
0x7737B8: retn
0x7737B9: mov     eax, offset aD3derr_unsup_3; jumptable 00773752 case -2005530593
0x7737BE: retn
0x7737BF: mov     eax, offset aD3derr_unsup_4; jumptable 00773752 case -2005530590
0x7737C4: retn
0x7737C5: mov     eax, offset aUnknown_5; jumptable 00773752 default case, cases -2005530592,-2005530589--2005530587,-2005530584--2005530523
0x7737CA: retn
