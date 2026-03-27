0x8067F0: push    0FFFFFFFFh
0x8067F2: push    offset SEH_8067F0
0x8067F7: mov     eax, large fs:0
0x8067FD: push    eax
0x8067FE: sub     esp, 30h
0x806801: push    ebx
0x806802: push    ebp
0x806803: push    esi
0x806804: push    edi
0x806805: mov     eax, ds:0B30AACh
0x80680A: xor     eax, esp
0x80680C: push    eax
0x80680D: lea     eax, [esp+50h+var_C]
0x806811: mov     large fs:0, eax
0x806817: mov     ebp, ecx
0x806819: mov     eax, [ebp+0]
0x80681C: mov     edx, [eax+80h]
0x806822: call    edx
0x806824: mov     eax, ds:0B42E90h
0x806829: xor     edi, edi
0x80682B: mov     [esp+50h+var_38], eax
0x80682F: mov     [esp+50h+var_30], edi
0x806833: mov     ebx, [esp+50h+arg_C]
0x806837: mov     esi, [ebx+18h]
0x80683A: cmp     esi, edi
0x80683C: mov     [esp+50h+var_4], edi
0x806840: mov     [esp+50h+var_39], 0
0x806845: jz      short loc_80686A
0x806847: mov     edx, [esi]
0x806849: mov     eax, [edx+54h]
0x80684C: mov     ecx, esi
0x80684E: call    eax
0x806850: cmp     eax, 1
0x806853: jl      short loc_80686A
0x806855: mov     edx, [esi]
0x806857: mov     eax, [edx+54h]
0x80685A: mov     ecx, esi
0x80685C: call    eax
0x80685E: cmp     eax, 0Ah
0x806861: jg      short loc_80686A
0x806863: mov     eax, 1
0x806868: jmp     short loc_80686C
0x80686A: xor     eax, eax
0x80686C: neg     eax
0x80686E: sbb     eax, eax
0x806870: and     eax, esi
0x806872: mov     [esp+50h+arg_C], eax
0x806876: mov     edi, 0
0x80687B: jz      short loc_8068AC
0x80687D: test    esi, esi
0x80687F: jz      short loc_8068A4
0x806881: mov     edx, [esi]
0x806883: mov     eax, [edx+54h]
0x806886: mov     ecx, esi
0x806888: call    eax
0x80688A: cmp     eax, 5
0x80688D: jl      short loc_8068A4
0x80688F: mov     edx, [esi]
0x806891: mov     eax, [edx+54h]
0x806894: mov     ecx, esi
0x806896: call    eax
0x806898: cmp     eax, 0Ah
0x80689B: jg      short loc_8068A4
0x80689D: mov     edi, 1
0x8068A2: jmp     short loc_8068A6
0x8068A4: xor     edi, edi
0x8068A6: neg     edi
0x8068A8: sbb     edi, edi
0x8068AA: and     edi, esi
0x8068AC: test    esi, esi
0x8068AE: jnz     short loc_8068CB
0x8068B0: mov     eax, ds:0B42E8Ch
0x8068B5: test    eax, eax
0x8068B7: jz      short loc_8068C4
0x8068B9: push    esi
0x8068BA: push    offset aAttemptingTo_2; "Attempting to render geometry with a sh"...
0x8068BF: call    eax ; dword_B42E8C
0x8068C1: add     esp, 8
0x8068C4: xor     eax, eax
0x8068C6: jmp     loc_807264
0x8068CB: mov     eax, [ebx+8]
0x8068CE: fld1
0x8068D0: test    eax, eax
0x8068D2: jz      loc_806972
0x8068D8: test    byte ptr [eax+18h], 1
0x8068DC: jz      loc_806972
0x8068E2: fld     dword ptr [esi+20h]
0x8068E5: fstp    [esp+50h+var_34]
0x8068E9: fcom    [esp+50h+var_34]
0x8068ED: fnstsw  ax
0x8068EF: test    ah, 41h
0x8068F2: jnz     short loc_806972
0x8068F4: mov     ecx, ds:0B46498h
0x8068FA: fstp    st
0x8068FC: fld     dword ptr [esi+20h]
0x8068FF: mov     edx, ds:0B4649Ch
0x806905: mov     eax, ds:0B464A0h
0x80690A: fstp    [esp+50h+var_34]
0x80690E: mov     [esp+50h+var_1C], ecx
0x806912: fld     [esp+50h+var_1C]
0x806916: mov     ecx, ds:0B464A4h
0x80691C: fstp    [esp+50h+var_2C]
0x806920: mov     [esp+50h+var_18], edx
0x806924: fld     [esp+50h+var_18]
0x806928: mov     edx, [esp+50h+var_2C]
0x80692C: fstp    [esp+50h+var_28]
0x806930: mov     [esp+50h+var_14], eax
0x806934: fld     [esp+50h+var_14]
0x806938: mov     eax, [esp+50h+var_28]
0x80693C: fstp    [esp+50h+var_24]
0x806940: fld     [esp+50h+var_34]
0x806944: mov     [esp+50h+var_10], ecx
0x806948: mov     ecx, [esp+50h+var_24]
0x80694C: fstp    [esp+50h+var_20]
0x806950: mov     ds:0B46498h, edx
0x806956: mov     edx, [esp+50h+var_20]
0x80695A: mov     ds:0B4649Ch, eax
0x80695F: mov     ds:0B464A0h, ecx
0x806965: mov     ds:0B464A4h, edx
0x80696B: mov     [esp+50h+var_39], 1
0x806970: jmp     short loc_80697D
0x806972: push    ecx
0x806973: mov     ecx, esi
0x806975: fstp    [esp+54h+var_54]; float
0x806978: call    sub_7E2430
0x80697D: cmp     [esp+50h+arg_C], 0
0x806982: mov     esi, [esp+50h+arg_0]
0x806986: jz      loc_806A3E
0x80698C: movzx   eax, word ptr ds:0B42EACh
0x806993: sub     eax, 1
0x806996: jz      short loc_8069C8
0x806998: sub     eax, 1
0x80699B: jnz     loc_806A3E
0x8069A1: mov     ecx, [esp+50h+arg_C]
0x8069A5: mov     eax, [ecx]
0x8069A7: mov     edx, [eax+60h]
0x8069AA: push    esi
0x8069AB: call    edx
0x8069AD: movzx   eax, ax
0x8069B0: cmp     ax, 10h
0x8069B4: jbe     short loc_8069BB
0x8069B6: mov     eax, 10h
0x8069BB: movzx   eax, ax
0x8069BE: shl     eax, 4
0x8069C1: add     eax, offset unk_B2DE00
0x8069C6: jmp     short loc_8069EA
0x8069C8: mov     ecx, [esp+50h+arg_C]
0x8069CC: call    sub_7ED5D0
0x8069D1: movzx   eax, ax
0x8069D4: cmp     ax, 0Ah
0x8069D8: jbe     short loc_8069DF
0x8069DA: mov     eax, 0Ah
0x8069DF: movzx   eax, ax
0x8069E2: shl     eax, 4
0x8069E5: add     eax, offset unk_B2DD50
0x8069EA: mov     edx, [eax]
0x8069EC: sub     esp, 10h
0x8069EF: mov     ecx, esp
0x8069F1: mov     [ecx], edx
0x8069F3: mov     edx, [eax+4]
0x8069F6: mov     [ecx+4], edx
0x8069F9: mov     edx, [eax+8]
0x8069FC: mov     eax, [eax+0Ch]
0x8069FF: mov     [ecx+8], edx
0x806A02: push    0
0x806A04: mov     [ecx+0Ch], eax
0x806A07: call    sub_7ECAE0
0x806A0C: mov     ecx, ds:0B25AD0h
0x806A12: mov     edx, ds:0B25AD4h
0x806A18: add     esp, 4
0x806A1B: mov     eax, esp
0x806A1D: mov     [eax], ecx
0x806A1F: mov     ecx, ds:0B25AD8h
0x806A25: mov     [eax+4], edx
0x806A28: mov     edx, ds:0B25ADCh
0x806A2E: mov     [eax+8], ecx
0x806A31: push    19h
0x806A33: mov     [eax+0Ch], edx
0x806A36: call    sub_7ECAE0
0x806A3B: add     esp, 14h
0x806A3E: mov     eax, [esp+50h+var_38]
0x806A42: add     eax, 0FFFFFFB4h; switch 221 cases
0x806A45: cmp     eax, 0DCh
0x806A4A: ja      def_806A57; jumptable 00806A57 default case, cases 78,79,81,83-86,89,90,92,94-97,100,101,103,105-108,111,112,114,116-121,124-127,130-135,138-141,144-148,151-154,157-161,164-167,170-175,178-181,184-188,191-194,197-201,204-207,210-214,217-220,223-233,235,236,238-247,249,250,252-268,271-278,280,281,283-285,287,288,290-292,294,295
0x806A50: movzx   eax, ds:byte_807370[eax]
0x806A57: jmp     ds:jpt_806A57[eax*4]; switch jump
0x806A5E: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 76
0x806A62: push    edi
0x806A63: push    ebx
0x806A64: push    ecx
0x806A65: push    esi
0x806A66: mov     ecx, ebp
0x806A68: call    sub_8736F0
0x806A6D: xor     esi, esi
0x806A6F: jmp     loc_807023
0x806A74: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 77
0x806A78: push    edi
0x806A79: push    ebx
0x806A7A: push    edx
0x806A7B: push    esi
0x806A7C: mov     ecx, ebp
0x806A7E: call    sub_8738A0
0x806A83: mov     esi, 1
0x806A88: jmp     loc_807023
0x806A8D: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 80
0x806A91: push    edi
0x806A92: push    ebx
0x806A93: push    eax
0x806A94: push    esi
0x806A95: mov     ecx, ebp
0x806A97: call    sub_873AA0
0x806A9C: mov     esi, 2
0x806AA1: jmp     loc_807023
0x806AA6: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 82
0x806AAA: push    edi
0x806AAB: push    ebx
0x806AAC: push    ecx
0x806AAD: push    esi
0x806AAE: mov     ecx, ebp
0x806AB0: call    sub_873C50
0x806AB5: mov     esi, 3
0x806ABA: jmp     loc_807023
0x806ABF: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 87
0x806AC3: push    edi
0x806AC4: push    ebx
0x806AC5: push    edx
0x806AC6: push    esi
0x806AC7: mov     ecx, ebp
0x806AC9: call    sub_873E50
0x806ACE: mov     esi, 4
0x806AD3: jmp     loc_807023
0x806AD8: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 88
0x806ADC: push    edi
0x806ADD: push    ebx
0x806ADE: push    eax
0x806ADF: push    esi
0x806AE0: mov     ecx, ebp
0x806AE2: call    sub_874090
0x806AE7: mov     esi, 5
0x806AEC: jmp     loc_807023
0x806AF1: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 91
0x806AF5: push    edi
0x806AF6: push    ebx
0x806AF7: push    ecx
0x806AF8: push    esi
0x806AF9: mov     ecx, ebp
0x806AFB: call    sub_874310
0x806B00: mov     esi, 6
0x806B05: jmp     loc_807023
0x806B0A: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 93
0x806B0E: push    edi
0x806B0F: push    ebx
0x806B10: push    edx
0x806B11: push    esi
0x806B12: mov     ecx, ebp
0x806B14: call    sub_874550
0x806B19: mov     esi, 7
0x806B1E: jmp     loc_807023
0x806B23: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 98
0x806B27: push    edi
0x806B28: push    ebx
0x806B29: push    eax
0x806B2A: push    esi
0x806B2B: mov     ecx, ebp
0x806B2D: call    sub_8747D0
0x806B32: mov     esi, 8
0x806B37: jmp     loc_807023
0x806B3C: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 99
0x806B40: push    edi
0x806B41: push    ebx
0x806B42: push    ecx
0x806B43: push    esi
0x806B44: mov     ecx, ebp
0x806B46: call    sub_874980
0x806B4B: mov     esi, 9
0x806B50: jmp     loc_807023
0x806B55: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 102
0x806B59: push    edi
0x806B5A: push    ebx
0x806B5B: push    edx
0x806B5C: push    esi
0x806B5D: mov     ecx, ebp
0x806B5F: call    sub_874B80
0x806B64: mov     esi, 0Ah
0x806B69: jmp     loc_807023
0x806B6E: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 104
0x806B72: push    edi
0x806B73: push    ebx
0x806B74: push    eax
0x806B75: push    esi
0x806B76: mov     ecx, ebp
0x806B78: call    sub_874D30
0x806B7D: mov     esi, 0Bh
0x806B82: jmp     loc_807023
0x806B87: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 109
0x806B8B: push    edi
0x806B8C: push    ebx
0x806B8D: push    ecx
0x806B8E: push    esi
0x806B8F: mov     ecx, ebp
0x806B91: call    sub_874F30
0x806B96: mov     esi, 0Ch
0x806B9B: jmp     loc_807023
0x806BA0: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 110
0x806BA4: push    edi
0x806BA5: push    ebx
0x806BA6: push    edx
0x806BA7: push    esi
0x806BA8: mov     ecx, ebp
0x806BAA: call    sub_875170
0x806BAF: mov     esi, 0Dh
0x806BB4: jmp     loc_807023
0x806BB9: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 113
0x806BBD: push    edi
0x806BBE: push    ebx
0x806BBF: push    eax
0x806BC0: push    esi
0x806BC1: mov     ecx, ebp
0x806BC3: call    sub_8753F0
0x806BC8: mov     esi, 0Eh
0x806BCD: jmp     loc_807023
0x806BD2: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 115
0x806BD6: push    edi
0x806BD7: push    ebx
0x806BD8: push    ecx
0x806BD9: push    esi
0x806BDA: mov     ecx, ebp
0x806BDC: call    sub_875630
0x806BE1: mov     esi, 0Fh
0x806BE6: jmp     loc_807023
0x806BEB: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 122
0x806BEF: push    edi
0x806BF0: push    ebx
0x806BF1: push    edx
0x806BF2: push    esi
0x806BF3: mov     ecx, ebp
0x806BF5: call    sub_8758B0
0x806BFA: mov     esi, 10h
0x806BFF: jmp     loc_807023
0x806C04: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 123
0x806C08: push    edi
0x806C09: push    ebx
0x806C0A: push    eax
0x806C0B: push    esi
0x806C0C: mov     ecx, ebp
0x806C0E: call    sub_875A10
0x806C13: mov     esi, 11h
0x806C18: jmp     loc_807023
0x806C1D: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 128
0x806C21: push    edi
0x806C22: push    ebx
0x806C23: push    ecx
0x806C24: push    esi
0x806C25: mov     ecx, ebp
0x806C27: call    sub_875BD0
0x806C2C: mov     esi, 12h
0x806C31: jmp     loc_807023
0x806C36: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 129
0x806C3A: push    edi
0x806C3B: push    ebx
0x806C3C: push    edx
0x806C3D: push    esi
0x806C3E: mov     ecx, ebp
0x806C40: call    sub_875D30
0x806C45: mov     esi, 13h
0x806C4A: jmp     loc_807023
0x806C4F: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 136
0x806C53: push    edi
0x806C54: push    ebx
0x806C55: push    eax
0x806C56: push    esi
0x806C57: mov     ecx, ebp
0x806C59: call    sub_875EF0
0x806C5E: mov     esi, 14h
0x806C63: jmp     loc_807023
0x806C68: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 137
0x806C6C: push    edi
0x806C6D: push    ebx
0x806C6E: push    ecx
0x806C6F: push    esi
0x806C70: mov     ecx, ebp
0x806C72: call    sub_8760F0
0x806C77: mov     esi, 15h
0x806C7C: jmp     loc_807023
0x806C81: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 142
0x806C85: push    edi
0x806C86: push    ebx
0x806C87: push    edx
0x806C88: push    esi
0x806C89: mov     ecx, ebp
0x806C8B: call    sub_876340
0x806C90: mov     esi, 16h
0x806C95: jmp     loc_807023
0x806C9A: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 143
0x806C9E: push    edi
0x806C9F: push    ebx
0x806CA0: push    eax
0x806CA1: push    esi
0x806CA2: mov     ecx, ebp
0x806CA4: call    sub_876540
0x806CA9: mov     esi, 17h
0x806CAE: jmp     loc_807023
0x806CB3: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 149
0x806CB7: push    edi
0x806CB8: push    ebx
0x806CB9: push    ecx
0x806CBA: push    esi
0x806CBB: mov     ecx, ebp
0x806CBD: call    sub_876790
0x806CC2: mov     esi, 18h
0x806CC7: jmp     loc_807023
0x806CCC: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 150
0x806CD0: push    edi
0x806CD1: push    ebx
0x806CD2: push    edx
0x806CD3: push    esi
0x806CD4: mov     ecx, ebp
0x806CD6: call    sub_876940
0x806CDB: mov     esi, 19h
0x806CE0: jmp     loc_807023
0x806CE5: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 155
0x806CE9: push    edi
0x806CEA: push    ebx
0x806CEB: push    eax
0x806CEC: push    esi
0x806CED: mov     ecx, ebp
0x806CEF: call    sub_876B40
0x806CF4: mov     esi, 1Ah
0x806CF9: jmp     loc_807023
0x806CFE: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 156
0x806D02: push    edi
0x806D03: push    ebx
0x806D04: push    ecx
0x806D05: push    esi
0x806D06: mov     ecx, ebp
0x806D08: call    sub_876CF0
0x806D0D: mov     esi, 1Bh
0x806D12: jmp     loc_807023
0x806D17: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 162
0x806D1B: push    edi
0x806D1C: push    ebx
0x806D1D: push    edx
0x806D1E: push    esi
0x806D1F: mov     ecx, ebp
0x806D21: call    sub_876EF0
0x806D26: mov     esi, 1Ch
0x806D2B: jmp     loc_807023
0x806D30: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 163
0x806D34: push    edi
0x806D35: push    ebx
0x806D36: push    eax
0x806D37: push    esi
0x806D38: mov     ecx, ebp
0x806D3A: call    sub_877130
0x806D3F: mov     esi, 1Dh
0x806D44: jmp     loc_807023
0x806D49: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 168
0x806D4D: push    edi
0x806D4E: push    ebx
0x806D4F: push    ecx
0x806D50: push    esi
0x806D51: mov     ecx, ebp
0x806D53: call    sub_8773B0
0x806D58: mov     esi, 1Eh
0x806D5D: jmp     loc_807023
0x806D62: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 169
0x806D66: push    edi
0x806D67: push    ebx
0x806D68: push    edx
0x806D69: push    esi
0x806D6A: mov     ecx, ebp
0x806D6C: call    sub_8775F0
0x806D71: mov     esi, 1Fh
0x806D76: jmp     loc_807023
0x806D7B: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 176
0x806D7F: push    edi
0x806D80: push    ebx
0x806D81: push    eax
0x806D82: push    esi
0x806D83: mov     ecx, ebp
0x806D85: call    sub_877870
0x806D8A: mov     esi, 20h ; ' '
0x806D8F: jmp     loc_807023
0x806D94: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 177
0x806D98: push    edi
0x806D99: push    ebx
0x806D9A: push    ecx
0x806D9B: push    esi
0x806D9C: mov     ecx, ebp
0x806D9E: call    sub_877A20
0x806DA3: mov     esi, 21h ; '!'
0x806DA8: jmp     loc_807023
0x806DAD: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 182
0x806DB1: push    edi
0x806DB2: push    ebx
0x806DB3: push    edx
0x806DB4: push    esi
0x806DB5: mov     ecx, ebp
0x806DB7: call    sub_877C30
0x806DBC: mov     esi, 22h ; '"'
0x806DC1: jmp     loc_807023
0x806DC6: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 183
0x806DCA: push    edi
0x806DCB: push    ebx
0x806DCC: push    eax
0x806DCD: push    esi
0x806DCE: mov     ecx, ebp
0x806DD0: call    sub_877DE0
0x806DD5: mov     esi, 23h ; '#'
0x806DDA: jmp     loc_807023
0x806DDF: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 189
0x806DE3: push    edi
0x806DE4: push    ebx
0x806DE5: push    ecx
0x806DE6: push    esi
0x806DE7: mov     ecx, ebp
0x806DE9: call    sub_877FF0
0x806DEE: mov     esi, 24h ; '$'
0x806DF3: jmp     loc_807023
0x806DF8: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 190
0x806DFC: push    edi
0x806DFD: push    ebx
0x806DFE: push    edx
0x806DFF: push    esi
0x806E00: mov     ecx, ebp
0x806E02: call    sub_878240
0x806E07: mov     esi, 25h ; '%'
0x806E0C: jmp     loc_807023
0x806E11: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 195
0x806E15: push    edi
0x806E16: push    ebx
0x806E17: push    eax
0x806E18: push    esi
0x806E19: mov     ecx, ebp
0x806E1B: call    sub_8784C0
0x806E20: mov     esi, 26h ; '&'
0x806E25: jmp     loc_807023
0x806E2A: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 196
0x806E2E: push    edi
0x806E2F: push    ebx
0x806E30: push    ecx
0x806E31: push    esi
0x806E32: mov     ecx, ebp
0x806E34: call    sub_878710
0x806E39: mov     esi, 27h ; '''
0x806E3E: jmp     loc_807023
0x806E43: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 202
0x806E47: push    edi
0x806E48: push    ebx
0x806E49: push    edx
0x806E4A: push    esi
0x806E4B: mov     ecx, ebp
0x806E4D: call    sub_878990
0x806E52: mov     esi, 28h ; '('
0x806E57: jmp     loc_807023
0x806E5C: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 203
0x806E60: push    edi
0x806E61: push    ebx
0x806E62: push    eax
0x806E63: push    esi
0x806E64: mov     ecx, ebp
0x806E66: call    sub_878B40
0x806E6B: mov     esi, 29h ; ')'
0x806E70: jmp     loc_807023
0x806E75: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 208
0x806E79: push    edi
0x806E7A: push    ebx
0x806E7B: push    ecx
0x806E7C: push    esi
0x806E7D: mov     ecx, ebp
0x806E7F: call    sub_878D50
0x806E84: mov     esi, 2Ah ; '*'
0x806E89: jmp     loc_807023
0x806E8E: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 209
0x806E92: push    edi
0x806E93: push    ebx
0x806E94: push    edx
0x806E95: push    esi
0x806E96: mov     ecx, ebp
0x806E98: call    sub_878F00
0x806E9D: mov     esi, 2Bh ; '+'
0x806EA2: jmp     loc_807023
0x806EA7: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 215
0x806EAB: push    edi
0x806EAC: push    ebx
0x806EAD: push    eax
0x806EAE: push    esi
0x806EAF: mov     ecx, ebp
0x806EB1: call    sub_879110
0x806EB6: mov     esi, 2Ch ; ','
0x806EBB: jmp     loc_807023
0x806EC0: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 216
0x806EC4: push    edi
0x806EC5: push    ebx
0x806EC6: push    ecx
0x806EC7: push    esi
0x806EC8: mov     ecx, ebp
0x806ECA: call    sub_879360
0x806ECF: mov     esi, 2Dh ; '-'
0x806ED4: jmp     loc_807023
0x806ED9: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 221
0x806EDD: push    edi
0x806EDE: push    ebx
0x806EDF: push    edx
0x806EE0: push    esi
0x806EE1: mov     ecx, ebp
0x806EE3: call    sub_8795E0
0x806EE8: mov     esi, 2Eh ; '.'
0x806EED: jmp     loc_807023
0x806EF2: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 222
0x806EF6: push    edi
0x806EF7: push    ebx
0x806EF8: push    eax
0x806EF9: push    esi
0x806EFA: mov     ecx, ebp
0x806EFC: call    sub_879830
0x806F01: mov     esi, 2Fh ; '/'
0x806F06: jmp     loc_807023
0x806F0B: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 234
0x806F0F: push    edi
0x806F10: push    ebx
0x806F11: push    ecx
0x806F12: push    esi
0x806F13: mov     ecx, ebp
0x806F15: call    sub_879AB0
0x806F1A: mov     esi, 30h ; '0'
0x806F1F: jmp     loc_807023
0x806F24: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 237
0x806F28: push    edi
0x806F29: push    ebx
0x806F2A: push    edx
0x806F2B: push    esi
0x806F2C: mov     ecx, ebp
0x806F2E: call    sub_879C40
0x806F33: mov     esi, 31h ; '1'
0x806F38: jmp     loc_807023
0x806F3D: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 248
0x806F41: push    edi
0x806F42: push    ebx
0x806F43: push    eax
0x806F44: push    esi
0x806F45: mov     ecx, ebp
0x806F47: call    sub_879DD0
0x806F4C: mov     esi, 32h ; '2'
0x806F51: jmp     loc_807023
0x806F56: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 251
0x806F5A: push    edi
0x806F5B: push    ebx
0x806F5C: push    ecx
0x806F5D: push    esi
0x806F5E: mov     ecx, ebp
0x806F60: call    sub_879F60
0x806F65: mov     esi, 33h ; '3'
0x806F6A: jmp     loc_807023
0x806F6F: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 269
0x806F73: push    edi
0x806F74: push    ebx
0x806F75: push    edx
0x806F76: push    esi
0x806F77: mov     ecx, ebp
0x806F79: call    sub_87A0F0
0x806F7E: mov     esi, 34h ; '4'
0x806F83: jmp     loc_807023
0x806F88: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 270
0x806F8C: push    edi
0x806F8D: push    ebx
0x806F8E: push    eax
0x806F8F: push    esi
0x806F90: mov     ecx, ebp
0x806F92: call    sub_87A1E0
0x806F97: mov     esi, 35h ; '5'
0x806F9C: jmp     loc_807023
0x806FA1: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 279
0x806FA5: push    edi
0x806FA6: push    ebx
0x806FA7: push    ecx
0x806FA8: push    esi
0x806FA9: mov     ecx, ebp
0x806FAB: call    sub_87A2D0
0x806FB0: mov     esi, 36h ; '6'
0x806FB5: jmp     short loc_807023
0x806FB7: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 282
0x806FBB: push    edi
0x806FBC: push    ebx
0x806FBD: push    edx
0x806FBE: push    esi
0x806FBF: mov     ecx, ebp
0x806FC1: call    sub_87A420
0x806FC6: mov     esi, 37h ; '7'
0x806FCB: jmp     short loc_807023
0x806FCD: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 286
0x806FD1: push    edi
0x806FD2: push    ebx
0x806FD3: push    eax
0x806FD4: push    esi
0x806FD5: mov     ecx, ebp
0x806FD7: call    sub_87A570
0x806FDC: mov     esi, 38h ; '8'
0x806FE1: jmp     short loc_807023
0x806FE3: mov     ecx, [esp+50h+arg_4]; jumptable 00806A57 case 289
0x806FE7: push    edi
0x806FE8: push    ebx
0x806FE9: push    ecx
0x806FEA: push    esi
0x806FEB: mov     ecx, ebp
0x806FED: call    sub_87A750
0x806FF2: mov     esi, 39h ; '9'
0x806FF7: jmp     short loc_807023
0x806FF9: mov     edx, [esp+50h+arg_4]; jumptable 00806A57 case 293
0x806FFD: push    edi
0x806FFE: push    ebx
0x806FFF: push    edx
0x807000: push    esi
0x807001: mov     ecx, ebp
0x807003: call    sub_87A930
0x807008: mov     esi, 3Ah ; ':'
0x80700D: jmp     short loc_807023
0x80700F: mov     eax, [esp+50h+arg_4]; jumptable 00806A57 case 296
0x807013: push    edi
0x807014: push    ebx
0x807015: push    eax
0x807016: push    esi
0x807017: mov     ecx, ebp
0x807019: call    sub_87AAC0
0x80701E: mov     esi, 3Bh ; ';'
0x807023: mov     eax, [esp+50h+var_38]
0x807027: test    eax, eax
0x807029: jl      loc_8070B5
0x80702F: cmp     eax, 1A3h
0x807034: jge     short loc_8070B5
0x807036: push    0
0x807038: movzx   edi, si
0x80703B: mov     ecx, ds:0B47620h[edi*4]
0x807042: push    0
0x807044: push    1Ch
0x807046: call    sub_76C730
0x80704B: mov     ecx, [esp+50h+var_38]
0x80704F: add     ecx, 0FFFFFEF1h
0x807055: cmp     ecx, 1Ah
0x807058: ja      short loc_807060
0x80705A: push    0
0x80705C: push    0Fh
0x80705E: jmp     short loc_8070A2
0x807060: mov     eax, [esp+50h+var_38]
0x807064: cmp     eax, 19Eh
0x807069: jz      short loc_80709E
0x80706B: cmp     eax, 19Fh
0x807070: jz      short loc_80709E
0x807072: cmp     eax, 0Ah
0x807075: jz      short loc_80709E
0x807077: cmp     eax, 0Bh
0x80707A: jz      short loc_80709E
0x80707C: test    eax, eax
0x80707E: push    0
0x807080: jnz     short loc_80708B
0x807082: mov     ecx, ds:0B47660h
0x807088: push    eax
0x807089: jmp     short loc_8070AB
0x80708B: cmp     eax, 1
0x80708E: jnz     short loc_80709A
0x807090: mov     ecx, ds:0B47668h
0x807096: push    0
0x807098: jmp     short loc_8070AB
0x80709A: push    7
0x80709C: jmp     short loc_8070A2
0x80709E: push    0
0x8070A0: push    8
0x8070A2: mov     edi, ds:0B47620h[edi*4]
0x8070A9: mov     ecx, edi
0x8070AB: push    0A8h ; '¨'
0x8070B0: call    sub_76C730
0x8070B5: cmp     word ptr ds:0B42EACh, 4
0x8070BD: movzx   eax, si
0x8070C0: mov     edi, ds:0B47620h[eax*4]
0x8070C7: lea     esi, ds:0B47620h[eax*4]
0x8070CE: jnz     loc_807162
0x8070D4: cmp     dword ptr [edi+30h], 0
0x8070D8: jnz     short loc_8070E2
0x8070DA: call    sub_772DF0
0x8070DF: mov     [edi+30h], eax
0x8070E2: mov     ecx, [edi+30h]
0x8070E5: push    0
0x8070E7: push    1
0x8070E9: push    34h ; '4'
0x8070EB: call    sub_772CD0
0x8070F0: mov     edi, [esi]
0x8070F2: cmp     dword ptr [edi+30h], 0
0x8070F6: jnz     short loc_807100
0x8070F8: call    sub_772DF0
0x8070FD: mov     [edi+30h], eax
0x807100: mov     ecx, [edi+30h]
0x807103: push    0
0x807105: push    8
0x807107: push    38h ; '8'
0x807109: call    sub_772CD0
0x80710E: mov     edi, [esi]
0x807110: cmp     dword ptr [edi+30h], 0
0x807114: jnz     short loc_80711E
0x807116: call    sub_772DF0
0x80711B: mov     [edi+30h], eax
0x80711E: mov     ecx, [edi+30h]
0x807121: push    0
0x807123: push    7
0x807125: push    37h ; '7'
0x807127: call    sub_772CD0
0x80712C: mov     edi, [esi]
0x80712E: cmp     dword ptr [edi+30h], 0
0x807132: jnz     short loc_80713C
0x807134: call    sub_772DF0
0x807139: mov     [edi+30h], eax
0x80713C: mov     ecx, [edi+30h]
0x80713F: push    0
0x807141: push    1
0x807143: push    35h ; '5'
0x807145: call    sub_772CD0
0x80714A: mov     edi, [esi]
0x80714C: cmp     dword ptr [edi+30h], 0
0x807150: jnz     short loc_80715A
0x807152: call    sub_772DF0
0x807157: mov     [edi+30h], eax
0x80715A: push    0
0x80715C: push    1
0x80715E: push    36h ; '6'
0x807160: jmp     short loc_807176
0x807162: cmp     dword ptr [edi+30h], 0
0x807166: jnz     short loc_807170
0x807168: call    sub_772DF0
0x80716D: mov     [edi+30h], eax
0x807170: push    0
0x807172: push    0
0x807174: push    34h ; '4'
0x807176: mov     ecx, [edi+30h]
0x807179: call    sub_772CD0
0x80717E: mov     eax, [esp+50h+var_38]
0x807182: lea     edx, [eax-33h]
0x807185: cmp     edx, 15Fh
0x80718B: ja      short loc_807203
0x80718D: mov     eax, ds:0B42EB8h
0x807192: test    eax, eax
0x807194: jz      short loc_8071E1
0x807196: cmp     byte ptr [eax+6], 0
0x80719A: jz      short loc_8071E1
0x80719C: cmp     [esp+50h+var_39], 0
0x8071A1: mov     ecx, [esi]
0x8071A3: push    0
0x8071A5: jnz     short loc_8071B2
0x8071A7: push    0
0x8071A9: push    1Bh
0x8071AB: call    sub_76C730
0x8071B0: jmp     short loc_8071CC
0x8071B2: push    1
0x8071B4: push    1Bh
0x8071B6: call    sub_76C730
0x8071BB: mov     ebp, [ebp+18h]
0x8071BE: mov     ebx, [ebx+8]
0x8071C1: mov     eax, [ebp+0]
0x8071C4: mov     edx, [eax+8]
0x8071C7: push    ebx
0x8071C8: mov     ecx, ebp
0x8071CA: call    edx
0x8071CC: mov     ecx, [esi]
0x8071CE: push    0
0x8071D0: push    4
0x8071D2: push    17h
0x8071D4: call    sub_76C730
0x8071D9: push    0
0x8071DB: push    1
0x8071DD: push    0Eh
0x8071DF: jmp     short loc_80721E
0x8071E1: mov     ecx, [esi]
0x8071E3: push    0
0x8071E5: push    1
0x8071E7: push    1Bh
0x8071E9: call    sub_76C730
0x8071EE: mov     ecx, [esi]
0x8071F0: push    0
0x8071F2: push    3
0x8071F4: push    17h
0x8071F6: call    sub_76C730
0x8071FB: push    0
0x8071FD: push    0
0x8071FF: push    0Eh
0x807201: jmp     short loc_80721E
0x807203: add     eax, 0FFFFFFFEh
0x807206: cmp     eax, 0DCh ; 'Ü'
0x80720B: ja      short loc_807227
0x80720D: cmp     [esp+50h+var_39], 0
0x807212: push    0
0x807214: jz      short loc_80721A
0x807216: push    1
0x807218: jmp     short loc_80721C
0x80721A: push    0
0x80721C: push    1Bh
0x80721E: mov     esi, [esi]
0x807220: mov     ecx, esi
0x807222: call    sub_76C730
0x807227: mov     eax, ds:0B42EB8h
0x80722C: test    eax, eax
0x80722E: jz      short loc_80723E
0x807230: cmp     byte ptr [eax+7], 0
0x807234: jnz     short loc_80723E
0x807236: fldz
0x807238: fstp    dword ptr ds:0B4668Ch
0x80723E: xor     eax, eax
0x807240: jmp     short loc_807264
0x807242: mov     eax, [esp+50h+arg_18]; jumptable 00806A57 default case, cases 78,79,81,83-86,89,90,92,94-97,100,101,103,105-108,111,112,114,116-121,124-127,130-135,138-141,144-148,151-154,157-161,164-167,170-175,178-181,184-188,191-194,197-201,204-207,210-214,217-220,223-233,235,236,238-247,249,250,252-268,271-278,280,281,283-285,287,288,290-292,294,295
0x807246: mov     ecx, [esp+50h+arg_14]
0x80724A: mov     edx, [esp+50h+arg_10]
0x80724E: push    eax
0x80724F: mov     eax, [esp+54h+arg_8]
0x807253: push    ecx
0x807254: mov     ecx, [esp+58h+arg_4]
0x807258: push    edx
0x807259: push    ebx
0x80725A: push    eax
0x80725B: push    ecx
0x80725C: push    esi
0x80725D: mov     ecx, ebp
0x80725F: call    sub_7C9F30
0x807264: mov     ecx, [esp+50h+var_C]
0x807268: mov     large fs:0, ecx
0x80726F: pop     ecx
0x807270: pop     edi
0x807271: pop     esi
0x807272: pop     ebp
0x807273: pop     ebx
0x807274: add     esp, 3Ch
0x807277: retn    1Ch
