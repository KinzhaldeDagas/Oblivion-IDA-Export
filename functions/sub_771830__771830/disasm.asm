0x771830: mov     eax, [esp+arg_0]
0x771834: add     eax, 0FFFFFFFFh; switch 6 cases
0x771837: cmp     eax, 5
0x77183A: push    ebx
0x77183B: mov     bl, 1
0x77183D: ja      def_771843
0x771843: jmp     ds:jpt_771843[eax*4]; switch jump
0x77184A: mov     ecx, ds:0B42754h; jumptable 00771843 case 1
0x771850: mov     eax, [esp+4+arg_4]
0x771854: fld     dword ptr [ecx+0A04h]
0x77185A: fmul    dword ptr [eax+10h]
0x77185D: fld     dword ptr [ecx+0A00h]
0x771863: fmul    dword ptr [eax]
0x771865: faddp   st(1), st
0x771867: fld     dword ptr [ecx+0A08h]
0x77186D: fmul    dword ptr [eax+20h]
0x771870: faddp   st(1), st
0x771872: fstp    dword ptr ds:0B42760h
0x771878: fld     dword ptr [ecx+0A14h]
0x77187E: fmul    dword ptr [eax+10h]
0x771881: fld     dword ptr [eax]
0x771883: fmul    dword ptr [ecx+0A10h]
0x771889: faddp   st(1), st
0x77188B: fld     dword ptr [ecx+0A18h]
0x771891: fmul    dword ptr [eax+20h]
0x771894: faddp   st(1), st
0x771896: fstp    dword ptr ds:0B42770h
0x77189C: fld     dword ptr [eax+10h]
0x77189F: fmul    dword ptr [ecx+0A24h]
0x7718A5: fld     dword ptr [ecx+0A20h]
0x7718AB: fmul    dword ptr [eax]
0x7718AD: faddp   st(1), st
0x7718AF: fld     dword ptr [ecx+0A28h]
0x7718B5: fmul    dword ptr [eax+20h]
0x7718B8: faddp   st(1), st
0x7718BA: fstp    dword ptr ds:0B42780h
0x7718C0: fld     dword ptr [ecx+0A00h]
0x7718C6: fmul    dword ptr [eax+4]
0x7718C9: fld     dword ptr [ecx+0A04h]
0x7718CF: fmul    dword ptr [eax+14h]
0x7718D2: faddp   st(1), st
0x7718D4: fld     dword ptr [eax+24h]
0x7718D7: fmul    dword ptr [ecx+0A08h]
0x7718DD: faddp   st(1), st
0x7718DF: fstp    dword ptr ds:0B42764h
0x7718E5: fld     dword ptr [ecx+0A14h]
0x7718EB: fmul    dword ptr [eax+14h]
0x7718EE: fld     dword ptr [ecx+0A10h]
0x7718F4: fmul    dword ptr [eax+4]
0x7718F7: faddp   st(1), st
0x7718F9: fld     dword ptr [ecx+0A18h]
0x7718FF: fmul    dword ptr [eax+24h]
0x771902: faddp   st(1), st
0x771904: fstp    dword ptr ds:0B42774h
0x77190A: fld     dword ptr [ecx+0A20h]
0x771910: fmul    dword ptr [eax+4]
0x771913: fld     dword ptr [eax+14h]
0x771916: fmul    dword ptr [ecx+0A24h]
0x77191C: faddp   st(1), st
0x77191E: fld     dword ptr [eax+24h]
0x771921: fmul    dword ptr [ecx+0A28h]
0x771927: faddp   st(1), st
0x771929: fstp    dword ptr ds:0B42784h
0x77192F: fld     dword ptr [ecx+0A00h]
0x771935: fmul    dword ptr [eax+8]
0x771938: fld     dword ptr [ecx+0A04h]
0x77193E: fmul    dword ptr [eax+18h]
0x771941: faddp   st(1), st
0x771943: fld     dword ptr [ecx+0A08h]
0x771949: fmul    dword ptr [eax+28h]
0x77194C: faddp   st(1), st
0x77194E: fstp    dword ptr ds:0B42768h
0x771954: fld     dword ptr [eax+8]
0x771957: fmul    dword ptr [ecx+0A10h]
0x77195D: fld     dword ptr [ecx+0A14h]
0x771963: fmul    dword ptr [eax+18h]
0x771966: faddp   st(1), st
0x771968: fld     dword ptr [ecx+0A18h]
0x77196E: fmul    dword ptr [eax+28h]
0x771971: faddp   st(1), st
0x771973: fstp    dword ptr ds:0B42778h
0x771979: fld     dword ptr [ecx+0A24h]
0x77197F: fmul    dword ptr [eax+18h]
0x771982: fld     dword ptr [ecx+0A20h]
0x771988: fmul    dword ptr [eax+8]
0x77198B: faddp   st(1), st
0x77198D: fld     dword ptr [ecx+0A28h]
0x771993: fmul    dword ptr [eax+28h]
0x771996: faddp   st(1), st
0x771998: fstp    dword ptr ds:0B42788h
0x77199E: fld     dword ptr [ecx+0A34h]
0x7719A4: fmul    dword ptr [eax+10h]
0x7719A7: fld     dword ptr [eax]
0x7719A9: fmul    dword ptr [ecx+0A30h]
0x7719AF: faddp   st(1), st
0x7719B1: fld     dword ptr [ecx+0A38h]
0x7719B7: fmul    dword ptr [eax+20h]
0x7719BA: faddp   st(1), st
0x7719BC: fadd    dword ptr [eax+30h]
0x7719BF: fstp    dword ptr ds:0B42790h
0x7719C5: fld     dword ptr [ecx+0A34h]
0x7719CB: fmul    dword ptr [eax+14h]
0x7719CE: fld     dword ptr [ecx+0A30h]
0x7719D4: fmul    dword ptr [eax+4]
0x7719D7: faddp   st(1), st
0x7719D9: fld     dword ptr [ecx+0A38h]
0x7719DF: fmul    dword ptr [eax+24h]
0x7719E2: faddp   st(1), st
0x7719E4: fadd    dword ptr [eax+34h]
0x7719E7: fstp    dword ptr ds:0B42794h
0x7719ED: fld     dword ptr [eax+8]
0x7719F0: fmul    dword ptr [ecx+0A30h]
0x7719F6: fld     dword ptr [ecx+0A34h]
0x7719FC: fmul    dword ptr [eax+18h]
0x7719FF: faddp   st(1), st
0x771A01: fld     dword ptr [ecx+0A38h]
0x771A07: fmul    dword ptr [eax+28h]
0x771A0A: faddp   st(1), st
0x771A0C: fadd    dword ptr [eax+38h]
0x771A0F: fstp    dword ptr ds:0B42798h
0x771A15: mov     al, bl
0x771A17: fldz
0x771A19: pop     ebx
0x771A1A: fst     dword ptr ds:0B4276Ch
0x771A20: fst     dword ptr ds:0B4277Ch
0x771A26: fst     dword ptr ds:0B4278Ch
0x771A2C: fstp    dword ptr ds:0B4279Ch
0x771A32: retn    8
0x771A35: mov     eax, [esp+4+arg_4]; jumptable 00771843 case 2
0x771A39: mov     ecx, ds:0B42754h
0x771A3F: fld     dword ptr [eax+10h]
0x771A42: fmul    dword ptr [ecx+0A04h]
0x771A48: fld     dword ptr [ecx+0A00h]
0x771A4E: fmul    dword ptr [eax]
0x771A50: faddp   st(1), st
0x771A52: fld     dword ptr [ecx+0A08h]
0x771A58: fmul    dword ptr [eax+20h]
0x771A5B: faddp   st(1), st
0x771A5D: fstp    dword ptr ds:0B42760h
0x771A63: fld     dword ptr [ecx+0A14h]
0x771A69: fmul    dword ptr [eax+10h]
0x771A6C: fld     dword ptr [eax]
0x771A6E: fmul    dword ptr [ecx+0A10h]
0x771A74: faddp   st(1), st
0x771A76: fld     dword ptr [ecx+0A18h]
0x771A7C: fmul    dword ptr [eax+20h]
0x771A7F: faddp   st(1), st
0x771A81: fstp    dword ptr ds:0B42770h
0x771A87: fld     dword ptr [eax+10h]
0x771A8A: fmul    dword ptr [ecx+0A24h]
0x771A90: fld     dword ptr [ecx+0A20h]
0x771A96: fmul    dword ptr [eax]
0x771A98: faddp   st(1), st
0x771A9A: fld     dword ptr [ecx+0A28h]
0x771AA0: fmul    dword ptr [eax+20h]
0x771AA3: faddp   st(1), st
0x771AA5: fstp    dword ptr ds:0B42780h
0x771AAB: fld     dword ptr [eax+14h]
0x771AAE: fmul    dword ptr [ecx+0A04h]
0x771AB4: fld     dword ptr [ecx+0A00h]
0x771ABA: fmul    dword ptr [eax+4]
0x771ABD: faddp   st(1), st
0x771ABF: fld     dword ptr [eax+24h]
0x771AC2: fmul    dword ptr [ecx+0A08h]
0x771AC8: faddp   st(1), st
0x771ACA: fstp    dword ptr ds:0B42764h
0x771AD0: fld     dword ptr [ecx+0A14h]
0x771AD6: fmul    dword ptr [eax+14h]
0x771AD9: fld     dword ptr [ecx+0A10h]
0x771ADF: fmul    dword ptr [eax+4]
0x771AE2: faddp   st(1), st
0x771AE4: fld     dword ptr [ecx+0A18h]
0x771AEA: fmul    dword ptr [eax+24h]
0x771AED: faddp   st(1), st
0x771AEF: fstp    dword ptr ds:0B42774h
0x771AF5: fld     dword ptr [ecx+0A20h]
0x771AFB: fmul    dword ptr [eax+4]
0x771AFE: fld     dword ptr [eax+14h]
0x771B01: fmul    dword ptr [ecx+0A24h]
0x771B07: faddp   st(1), st
0x771B09: fld     dword ptr [eax+24h]
0x771B0C: fmul    dword ptr [ecx+0A28h]
0x771B12: faddp   st(1), st
0x771B14: fstp    dword ptr ds:0B42784h
0x771B1A: fld     dword ptr [ecx+0A00h]
0x771B20: fmul    dword ptr [eax+8]
0x771B23: fld     dword ptr [eax+18h]
0x771B26: fmul    dword ptr [ecx+0A04h]
0x771B2C: faddp   st(1), st
0x771B2E: fld     dword ptr [ecx+0A08h]
0x771B34: fmul    dword ptr [eax+28h]
0x771B37: faddp   st(1), st
0x771B39: fstp    dword ptr ds:0B42768h
0x771B3F: fld     dword ptr [eax+8]
0x771B42: fmul    dword ptr [ecx+0A10h]
0x771B48: fld     dword ptr [ecx+0A14h]
0x771B4E: fmul    dword ptr [eax+18h]
0x771B51: faddp   st(1), st
0x771B53: fld     dword ptr [ecx+0A18h]
0x771B59: fmul    dword ptr [eax+28h]
0x771B5C: faddp   st(1), st
0x771B5E: fstp    dword ptr ds:0B42778h
0x771B64: fld     dword ptr [ecx+0A24h]
0x771B6A: fmul    dword ptr [eax+18h]
0x771B6D: fld     dword ptr [ecx+0A20h]
0x771B73: fmul    dword ptr [eax+8]
0x771B76: faddp   st(1), st
0x771B78: fld     dword ptr [ecx+0A28h]
0x771B7E: fmul    dword ptr [eax+28h]
0x771B81: faddp   st(1), st
0x771B83: fstp    dword ptr ds:0B42788h
0x771B89: fld     dword ptr [eax+10h]
0x771B8C: fmul    dword ptr [ecx+0A34h]
0x771B92: fld     dword ptr [ecx+0A30h]
0x771B98: fmul    dword ptr [eax]
0x771B9A: faddp   st(1), st
0x771B9C: fld     dword ptr [ecx+0A38h]
0x771BA2: fmul    dword ptr [eax+20h]
0x771BA5: faddp   st(1), st
0x771BA7: fadd    dword ptr [eax+30h]
0x771BAA: fstp    dword ptr ds:0B42790h
0x771BB0: fld     dword ptr [ecx+0A30h]
0x771BB6: fmul    dword ptr [eax+4]
0x771BB9: fld     dword ptr [eax+14h]
0x771BBC: fmul    dword ptr [ecx+0A34h]
0x771BC2: faddp   st(1), st
0x771BC4: fld     dword ptr [eax+24h]
0x771BC7: fmul    dword ptr [ecx+0A38h]
0x771BCD: faddp   st(1), st
0x771BCF: fadd    dword ptr [eax+34h]
0x771BD2: fstp    dword ptr ds:0B42794h
0x771BD8: fld     dword ptr [ecx+0A34h]
0x771BDE: fmul    dword ptr [eax+18h]
0x771BE1: fld     dword ptr [ecx+0A30h]
0x771BE7: fmul    dword ptr [eax+8]
0x771BEA: jmp     loc_7719FF
0x771BEF: mov     eax, [esp+4+arg_4]; jumptable 00771843 case 3
0x771BF3: mov     ecx, ds:0B42754h
0x771BF9: fld     dword ptr [eax+10h]
0x771BFC: fmul    dword ptr [ecx+0A04h]
0x771C02: fld     dword ptr [ecx+0A00h]
0x771C08: fmul    dword ptr [eax]
0x771C0A: faddp   st(1), st
0x771C0C: fld     dword ptr [ecx+0A08h]
0x771C12: fmul    dword ptr [eax+20h]
0x771C15: faddp   st(1), st
0x771C17: fstp    dword ptr ds:0B42760h
0x771C1D: fld     dword ptr [eax+10h]
0x771C20: fmul    dword ptr [ecx+0A14h]
0x771C26: fld     dword ptr [ecx+0A10h]
0x771C2C: fmul    dword ptr [eax]
0x771C2E: faddp   st(1), st
0x771C30: fld     dword ptr [ecx+0A18h]
0x771C36: fmul    dword ptr [eax+20h]
0x771C39: faddp   st(1), st
0x771C3B: fstp    dword ptr ds:0B42770h
0x771C41: fld     dword ptr [ecx+0A24h]
0x771C47: fmul    dword ptr [eax+10h]
0x771C4A: fld     dword ptr [eax]
0x771C4C: fmul    dword ptr [ecx+0A20h]
0x771C52: faddp   st(1), st
0x771C54: fld     dword ptr [ecx+0A28h]
0x771C5A: fmul    dword ptr [eax+20h]
0x771C5D: faddp   st(1), st
0x771C5F: fstp    dword ptr ds:0B42780h
0x771C65: fld     dword ptr [ecx+0A00h]
0x771C6B: fmul    dword ptr [eax+4]
0x771C6E: fld     dword ptr [eax+14h]
0x771C71: fmul    dword ptr [ecx+0A04h]
0x771C77: faddp   st(1), st
0x771C79: fld     dword ptr [ecx+0A08h]
0x771C7F: fmul    dword ptr [eax+24h]
0x771C82: faddp   st(1), st
0x771C84: fstp    dword ptr ds:0B42764h
0x771C8A: fld     dword ptr [ecx+0A10h]
0x771C90: fmul    dword ptr [eax+4]
0x771C93: fld     dword ptr [eax+14h]
0x771C96: fmul    dword ptr [ecx+0A14h]
0x771C9C: faddp   st(1), st
0x771C9E: fld     dword ptr [eax+24h]
0x771CA1: fmul    dword ptr [ecx+0A18h]
0x771CA7: faddp   st(1), st
0x771CA9: fstp    dword ptr ds:0B42774h
0x771CAF: fld     dword ptr [ecx+0A24h]
0x771CB5: fmul    dword ptr [eax+14h]
0x771CB8: fld     dword ptr [ecx+0A20h]
0x771CBE: fmul    dword ptr [eax+4]
0x771CC1: faddp   st(1), st
0x771CC3: fld     dword ptr [ecx+0A28h]
0x771CC9: fmul    dword ptr [eax+24h]
0x771CCC: faddp   st(1), st
0x771CCE: fstp    dword ptr ds:0B42784h
0x771CD4: fld     dword ptr [ecx+0A00h]
0x771CDA: fmul    dword ptr [eax+8]
0x771CDD: fld     dword ptr [ecx+0A04h]
0x771CE3: fmul    dword ptr [eax+18h]
0x771CE6: faddp   st(1), st
0x771CE8: fld     dword ptr [ecx+0A08h]
0x771CEE: fmul    dword ptr [eax+28h]
0x771CF1: faddp   st(1), st
0x771CF3: fstp    dword ptr ds:0B42768h
0x771CF9: fld     dword ptr [ecx+0A14h]
0x771CFF: fmul    dword ptr [eax+18h]
0x771D02: fld     dword ptr [ecx+0A10h]
0x771D08: fmul    dword ptr [eax+8]
0x771D0B: faddp   st(1), st
0x771D0D: fld     dword ptr [ecx+0A18h]
0x771D13: fmul    dword ptr [eax+28h]
0x771D16: faddp   st(1), st
0x771D18: fstp    dword ptr ds:0B42778h
0x771D1E: fld     dword ptr [eax+8]
0x771D21: fmul    dword ptr [ecx+0A20h]
0x771D27: fld     dword ptr [ecx+0A24h]
0x771D2D: fmul    dword ptr [eax+18h]
0x771D30: faddp   st(1), st
0x771D32: fld     dword ptr [ecx+0A28h]
0x771D38: fmul    dword ptr [eax+28h]
0x771D3B: faddp   st(1), st
0x771D3D: fstp    dword ptr ds:0B42788h
0x771D43: fld     dword ptr [eax+30h]
0x771D46: fstp    dword ptr ds:0B42790h
0x771D4C: fld     dword ptr [eax+34h]
0x771D4F: fstp    dword ptr ds:0B42794h
0x771D55: fld     dword ptr [eax+38h]
0x771D58: jmp     loc_771A0F
0x771D5D: push    40h ; '@'; jumptable 00771843 case 4
0x771D5F: push    0
0x771D61: push    offset flt_B42760
0x771D66: call    __memset
0x771D6B: fld     dword ptr ds:0A3D65Ch
0x771D71: fst     dword ptr ds:0B42774h
0x771D77: add     esp, 0Ch
0x771D7A: fst     dword ptr ds:0B42780h
0x771D80: mov     al, bl
0x771D82: fst     dword ptr ds:0B42790h
0x771D88: pop     ebx
0x771D89: fstp    dword ptr ds:0B42794h
0x771D8F: retn    8
0x771D92: mov     ecx, ds:0B42754h; jumptable 00771843 case 5
0x771D98: mov     eax, [esp+4+arg_4]
0x771D9C: fld     dword ptr [ecx+0A04h]
0x771DA2: fmul    dword ptr [eax+10h]
0x771DA5: fld     dword ptr [eax]
0x771DA7: fmul    dword ptr [ecx+0A00h]
0x771DAD: faddp   st(1), st
0x771DAF: fld     dword ptr [ecx+0A08h]
0x771DB5: fmul    dword ptr [eax+20h]
0x771DB8: faddp   st(1), st
0x771DBA: fstp    dword ptr ds:0B42760h
0x771DC0: fld     dword ptr [eax+10h]
0x771DC3: fmul    dword ptr [ecx+0A14h]
0x771DC9: fld     dword ptr [ecx+0A10h]
0x771DCF: fmul    dword ptr [eax]
0x771DD1: faddp   st(1), st
0x771DD3: fld     dword ptr [ecx+0A18h]
0x771DD9: fmul    dword ptr [eax+20h]
0x771DDC: faddp   st(1), st
0x771DDE: fstp    dword ptr ds:0B42770h
0x771DE4: fld     dword ptr [eax+10h]
0x771DE7: fmul    dword ptr [ecx+0A24h]
0x771DED: fld     dword ptr [ecx+0A20h]
0x771DF3: fmul    dword ptr [eax]
0x771DF5: faddp   st(1), st
0x771DF7: fld     dword ptr [ecx+0A28h]
0x771DFD: fmul    dword ptr [eax+20h]
0x771E00: faddp   st(1), st
0x771E02: fstp    dword ptr ds:0B42780h
0x771E08: fld     dword ptr [ecx+0A04h]
0x771E0E: fmul    dword ptr [eax+14h]
0x771E11: fld     dword ptr [eax+4]
0x771E14: fmul    dword ptr [ecx+0A00h]
0x771E1A: faddp   st(1), st
0x771E1C: fld     dword ptr [eax+24h]
0x771E1F: fmul    dword ptr [ecx+0A08h]
0x771E25: faddp   st(1), st
0x771E27: fstp    dword ptr ds:0B42764h
0x771E2D: fld     dword ptr [eax+14h]
0x771E30: fmul    dword ptr [ecx+0A14h]
0x771E36: fld     dword ptr [ecx+0A10h]
0x771E3C: fmul    dword ptr [eax+4]
0x771E3F: faddp   st(1), st
0x771E41: fld     dword ptr [eax+24h]
0x771E44: fmul    dword ptr [ecx+0A18h]
0x771E4A: faddp   st(1), st
0x771E4C: fstp    dword ptr ds:0B42774h
0x771E52: fld     dword ptr [eax+14h]
0x771E55: fmul    dword ptr [ecx+0A24h]
0x771E5B: fld     dword ptr [ecx+0A20h]
0x771E61: fmul    dword ptr [eax+4]
0x771E64: faddp   st(1), st
0x771E66: fld     dword ptr [ecx+0A28h]
0x771E6C: fmul    dword ptr [eax+24h]
0x771E6F: faddp   st(1), st
0x771E71: fstp    dword ptr ds:0B42784h
0x771E77: fld     dword ptr [eax+8]
0x771E7A: fmul    dword ptr [ecx+0A00h]
0x771E80: fld     dword ptr [ecx+0A04h]
0x771E86: fmul    dword ptr [eax+18h]
0x771E89: faddp   st(1), st
0x771E8B: fld     dword ptr [ecx+0A08h]
0x771E91: fmul    dword ptr [eax+28h]
0x771E94: faddp   st(1), st
0x771E96: fstp    dword ptr ds:0B42768h
0x771E9C: fld     dword ptr [ecx+0A10h]
0x771EA2: fmul    dword ptr [eax+8]
0x771EA5: fld     dword ptr [ecx+0A14h]
0x771EAB: fmul    dword ptr [eax+18h]
0x771EAE: faddp   st(1), st
0x771EB0: fld     dword ptr [ecx+0A18h]
0x771EB6: fmul    dword ptr [eax+28h]
0x771EB9: faddp   st(1), st
0x771EBB: fstp    dword ptr ds:0B42778h
0x771EC1: fld     dword ptr [eax+18h]
0x771EC4: fmul    dword ptr [ecx+0A24h]
0x771ECA: fld     dword ptr [eax+8]
0x771ECD: fmul    dword ptr [ecx+0A20h]
0x771ED3: jmp     loc_771D30
0x771ED8: mov     eax, [esp+4+arg_4]; jumptable 00771843 case 6
0x771EDC: mov     ecx, ds:0B42754h
0x771EE2: fld     dword ptr [eax+10h]
0x771EE5: fmul    dword ptr [ecx+0A04h]
0x771EEB: fld     dword ptr [eax]
0x771EED: fmul    dword ptr [ecx+0A00h]
0x771EF3: faddp   st(1), st
0x771EF5: fld     dword ptr [ecx+0A08h]
0x771EFB: fmul    dword ptr [eax+20h]
0x771EFE: faddp   st(1), st
0x771F00: fstp    dword ptr ds:0B42760h
0x771F06: fld     dword ptr [ecx+0A14h]
0x771F0C: fmul    dword ptr [eax+10h]
0x771F0F: fld     dword ptr [eax]
0x771F11: fmul    dword ptr [ecx+0A10h]
0x771F17: faddp   st(1), st
0x771F19: fld     dword ptr [ecx+0A18h]
0x771F1F: fmul    dword ptr [eax+20h]
0x771F22: faddp   st(1), st
0x771F24: fstp    dword ptr ds:0B42770h
0x771F2A: fld     dword ptr [eax+10h]
0x771F2D: fmul    dword ptr [ecx+0A24h]
0x771F33: fld     dword ptr [ecx+0A20h]
0x771F39: fmul    dword ptr [eax]
0x771F3B: faddp   st(1), st
0x771F3D: fld     dword ptr [ecx+0A28h]
0x771F43: fmul    dword ptr [eax+20h]
0x771F46: faddp   st(1), st
0x771F48: fstp    dword ptr ds:0B42780h
0x771F4E: fld     dword ptr [eax+14h]
0x771F51: fmul    dword ptr [ecx+0A04h]
0x771F57: fld     dword ptr [ecx+0A00h]
0x771F5D: fmul    dword ptr [eax+4]
0x771F60: faddp   st(1), st
0x771F62: fld     dword ptr [eax+24h]
0x771F65: fmul    dword ptr [ecx+0A08h]
0x771F6B: faddp   st(1), st
0x771F6D: fstp    dword ptr ds:0B42764h
0x771F73: fld     dword ptr [ecx+0A14h]
0x771F79: fmul    dword ptr [eax+14h]
0x771F7C: fld     dword ptr [ecx+0A10h]
0x771F82: fmul    dword ptr [eax+4]
0x771F85: faddp   st(1), st
0x771F87: fld     dword ptr [ecx+0A18h]
0x771F8D: fmul    dword ptr [eax+24h]
0x771F90: faddp   st(1), st
0x771F92: fstp    dword ptr ds:0B42774h
0x771F98: fld     dword ptr [ecx+0A20h]
0x771F9E: fmul    dword ptr [eax+4]
0x771FA1: fld     dword ptr [eax+14h]
0x771FA4: fmul    dword ptr [ecx+0A24h]
0x771FAA: faddp   st(1), st
0x771FAC: fld     dword ptr [eax+24h]
0x771FAF: fmul    dword ptr [ecx+0A28h]
0x771FB5: faddp   st(1), st
0x771FB7: fstp    dword ptr ds:0B42784h
0x771FBD: fld     dword ptr [eax+8]
0x771FC0: fmul    dword ptr [ecx+0A00h]
0x771FC6: fld     dword ptr [eax+18h]
0x771FC9: fmul    dword ptr [ecx+0A04h]
0x771FCF: faddp   st(1), st
0x771FD1: fld     dword ptr [ecx+0A08h]
0x771FD7: fmul    dword ptr [eax+28h]
0x771FDA: faddp   st(1), st
0x771FDC: fstp    dword ptr ds:0B42768h
0x771FE2: fld     dword ptr [eax+8]
0x771FE5: fmul    dword ptr [ecx+0A10h]
0x771FEB: fld     dword ptr [ecx+0A14h]
0x771FF1: fmul    dword ptr [eax+18h]
0x771FF4: faddp   st(1), st
0x771FF6: fld     dword ptr [ecx+0A18h]
0x771FFC: fmul    dword ptr [eax+28h]
0x771FFF: faddp   st(1), st
0x772001: fstp    dword ptr ds:0B42778h
0x772007: fld     dword ptr [ecx+0A24h]
0x77200D: fmul    dword ptr [eax+18h]
0x772010: fld     dword ptr [ecx+0A20h]
0x772016: fmul    dword ptr [eax+8]
0x772019: jmp     loc_771D30
