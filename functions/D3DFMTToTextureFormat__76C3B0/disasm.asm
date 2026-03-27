0x76C3B0: mov     edx, [esp+a1]
0x76C3B4: cmp     edx, 31545844h
0x76C3BA: push    esi
0x76C3BB: push    edi
0x76C3BC: jg      loc_76C570
0x76C3C2: jz      loc_76C569
0x76C3C8: lea     eax, [edx-14h]; switch 98 cases
0x76C3CB: cmp     eax, 61h
0x76C3CE: ja      D3DFMTToTextureFormat___def_76C3DB; jumptable 0076C3DB default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-109
0x76C3D4: movzx   eax, ds:byte_76C660[eax]
0x76C3DB: jmp     ds:jpt_76C3DB[eax*4]; switch jump
0x76C3E2: mov     esi, offset unk_B26598; jumptable 0076C3DB case 20
0x76C3E7: jmp     loc_76C593
0x76C3EC: mov     esi, offset unk_B265E0; jumptable 0076C3DB case 21
0x76C3F1: jmp     loc_76C593
0x76C3F6: mov     esi, offset unk_B26628; jumptable 0076C3DB case 22
0x76C3FB: jmp     loc_76C593
0x76C400: mov     esi, offset unk_B263E8; jumptable 0076C3DB case 23
0x76C405: jmp     loc_76C593
0x76C40A: mov     esi, offset unk_B264C0; jumptable 0076C3DB case 24
0x76C40F: jmp     loc_76C593
0x76C414: mov     esi, offset unk_B26478; jumptable 0076C3DB case 25
0x76C419: jmp     loc_76C593
0x76C41E: mov     esi, offset unk_B26508; jumptable 0076C3DB case 26
0x76C423: jmp     loc_76C593
0x76C428: mov     esi, offset unk_B262C8; jumptable 0076C3DB case 27
0x76C42D: jmp     loc_76C593
0x76C432: mov     esi, offset unk_B26280; jumptable 0076C3DB case 28
0x76C437: jmp     loc_76C593
0x76C43C: mov     esi, offset unk_B26310; jumptable 0076C3DB case 29
0x76C441: jmp     loc_76C593
0x76C446: mov     esi, offset unk_B26550; jumptable 0076C3DB case 30
0x76C44B: jmp     loc_76C593
0x76C450: mov     esi, offset unk_B266B8; jumptable 0076C3DB case 31
0x76C455: jmp     loc_76C593
0x76C45A: mov     esi, offset unk_B25E00; jumptable 0076C3DB case 32
0x76C45F: jmp     loc_76C593
0x76C464: mov     esi, offset unk_B26670; jumptable 0076C3DB case 33
0x76C469: jmp     loc_76C593
0x76C46E: mov     esi, offset unk_B26748; jumptable 0076C3DB case 34
0x76C473: jmp     loc_76C593
0x76C478: mov     esi, offset unk_B26700; jumptable 0076C3DB case 35
0x76C47D: jmp     loc_76C593
0x76C482: mov     esi, offset unk_B260D0; jumptable 0076C3DB cases 36,113
0x76C487: jmp     loc_76C593
0x76C48C: mov     esi, offset unk_B267D8; jumptable 0076C3DB case 40
0x76C491: jmp     loc_76C593
0x76C496: mov     esi, offset unk_B25D70; jumptable 0076C3DB case 41
0x76C49B: jmp     loc_76C593
0x76C4A0: mov     esi, offset unk_B26820; jumptable 0076C3DB case 50
0x76C4A5: jmp     loc_76C593
0x76C4AA: mov     esi, offset unk_B26868; jumptable 0076C3DB case 81
0x76C4AF: jmp     loc_76C593
0x76C4B4: mov     esi, offset unk_B268B0; jumptable 0076C3DB case 51
0x76C4B9: jmp     loc_76C593
0x76C4BE: mov     esi, offset unk_B268F8; jumptable 0076C3DB case 52
0x76C4C3: jmp     loc_76C593
0x76C4C8: mov     esi, offset unk_B25F20; jumptable 0076C3DB case 60
0x76C4CD: jmp     loc_76C593
0x76C4D2: mov     esi, offset unk_B26940; jumptable 0076C3DB case 63
0x76C4D7: jmp     loc_76C593
0x76C4DC: mov     esi, offset unk_B26988; jumptable 0076C3DB case 64
0x76C4E1: jmp     loc_76C593
0x76C4E6: mov     esi, (offset stru_B26AF0.unk08+88h); jumptable 0076C3DB case 110
0x76C4EB: jmp     loc_76C593
0x76C4F0: mov     esi, offset stru_B26AF0; jumptable 0076C3DB case 117
0x76C4F5: jmp     loc_76C593
0x76C4FA: mov     esi, offset unk_B26790; jumptable 0076C3DB case 61
0x76C4FF: jmp     loc_76C593
0x76C504: mov     esi, offset unk_B26A18; jumptable 0076C3DB case 62
0x76C509: jmp     loc_76C593
0x76C50E: mov     esi, offset unk_B269D0; jumptable 0076C3DB case 67
0x76C513: jmp     short loc_76C593
0x76C515: mov     esi, (offset stru_B26AF0.format+0CCh); jumptable 0076C3DB cases 70,80
0x76C51A: jmp     short loc_76C593
0x76C51C: mov     esi, (offset stru_B26AF0.unk10+110h); jumptable 0076C3DB case 71
0x76C521: jmp     short loc_76C593
0x76C523: mov     esi, (offset stru_B26AF0.unk14+154h); jumptable 0076C3DB case 73
0x76C528: jmp     short loc_76C593
0x76C52A: mov     esi, (offset stru_B26AF0.unk18+198h); jumptable 0076C3DB case 75
0x76C52F: jmp     short loc_76C593
0x76C531: mov     esi, (offset stru_B26AF0.unk20+220h); jumptable 0076C3DB case 77
0x76C536: jmp     short loc_76C593
0x76C538: mov     esi, (offset stru_B26AF0.unk24+264h); jumptable 0076C3DB case 79
0x76C53D: jmp     short loc_76C593
0x76C53F: mov     esi, (offset stru_B26AF0.unk04+44h); jumptable 0076C3DB cases 82,83
0x76C544: jmp     short loc_76C593
0x76C546: mov     esi, offset unk_B261F0; jumptable 0076C3DB case 111
0x76C54B: jmp     short loc_76C593
0x76C54D: mov     esi, offset unk_B26160; jumptable 0076C3DB case 112
0x76C552: jmp     short loc_76C593
0x76C554: mov     esi, offset unk_B26118; jumptable 0076C3DB case 114
0x76C559: jmp     short loc_76C593
0x76C55B: mov     esi, offset unk_B261A8; jumptable 0076C3DB case 115
0x76C560: jmp     short loc_76C593
0x76C562: mov     esi, offset unk_B26088; jumptable 0076C3DB case 116
0x76C567: jmp     short loc_76C593
0x76C569: mov     esi, offset unk_B25FB0
0x76C56E: jmp     short loc_76C593
0x76C570: cmp     edx, 33545844h
0x76C576: jz      short loc_76C58E
0x76C578: cmp     edx, 35545844h
0x76C57E: jz      short loc_76C587
0x76C580: mov     esi, offset unk_B26AA8; jumptable 0076C3DB default case, cases 37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-109
0x76C585: jmp     short loc_76C593
0x76C587: mov     esi, offset unk_B26040
0x76C58C: jmp     short loc_76C593
0x76C58E: mov     esi, offset unk_B25FF8
0x76C593: mov     eax, [esp+8+a2]
0x76C597: mov     ecx, 11h
0x76C59C: mov     edi, eax
0x76C59E: rep movsd
0x76C5A0: pop     edi
0x76C5A1: mov     [eax+0Ch], edx
0x76C5A4: mov     dword ptr [eax+10h], 0
0x76C5AB: pop     esi
0x76C5AC: retn
