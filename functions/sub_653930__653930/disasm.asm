0x653930: mov     eax, [esp+arg_0]
0x653934: sub     esp, 0Ch
0x653937: test    eax, eax
0x653939: push    esi
0x65393A: mov     esi, ecx
0x65393C: jz      loc_6540F0
0x653942: push    ebx
0x653943: push    ebp
0x653944: push    edi
0x653945: push    0; int
0x653947: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65394C: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x653951: push    0; int
0x653953: push    eax; void *
0x653954: call    OblivionDynamicCast
0x653959: mov     edi, eax
0x65395B: add     esp, 14h
0x65395E: test    edi, edi
0x653960: mov     [esp+1Ch+var_9], 1
0x653965: jz      loc_6540BE
0x65396B: mov     eax, [esi]
0x65396D: mov     edx, [eax+18h]
0x653970: push    0
0x653972: push    edi
0x653973: mov     ecx, esi
0x653975: call    edx
0x653977: mov     eax, [esi]
0x653979: mov     edx, [eax+184h]
0x65397F: mov     ecx, esi
0x653981: call    edx
0x653983: mov     ebx, eax
0x653985: mov     eax, [esi]
0x653987: mov     edx, [eax+574h]
0x65398D: mov     ecx, esi
0x65398F: call    edx
0x653991: test    ebx, ebx
0x653993: jz      loc_6540BE
0x653999: cmp     dword ptr [ebx+18h], 0FFFFFFFFh
0x65399D: jz      loc_6540BE
0x6539A3: mov     ecx, ds:0B333C4h; this
0x6539A9: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x6539AE: test    al, al
0x6539B0: jnz     short loc_6539C0
0x6539B2: mov     eax, ds:0B333C4h
0x6539B7: cmp     byte ptr [eax+610h], 0
0x6539BE: jz      short loc_6539D0
0x6539C0: test    byte ptr [ebx+1Eh], 1
0x6539C4: jnz     loc_6540BE
0x6539CA: lea     ebx, [ebx+0]
0x6539D0: mov     edx, [esi]
0x6539D2: mov     eax, [edx+184h]
0x6539D8: mov     ecx, esi
0x6539DA: call    eax
0x6539DC: mov     ebx, eax
0x6539DE: test    ebx, ebx
0x6539E0: jz      loc_6540BE
0x6539E6: mov     edx, [esi]
0x6539E8: mov     eax, [edx+180h]
0x6539EE: mov     ebp, [ebx+18h]
0x6539F1: mov     ecx, esi
0x6539F3: call    eax
0x6539F5: mov     ecx, ds:0B152B0h[ebp*4]
0x6539FC: mov     eax, [ecx+eax*4]
0x6539FF: cmp     eax, 2Ch; switch 45 cases
0x653A02: ja      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653A08: movzx   edx, ds:byte_654170[eax]
0x653A0F: jmp     ds:jpt_653A0F[edx*4]; switch jump
0x653A16: mov     ecx, [ebx+24h]; jumptable 00653A0F case 0
0x653A19: xor     ebp, ebp
0x653A1B: test    ecx, ecx
0x653A1D: jz      short loc_653A26
0x653A1F: call    sub_5697E0
0x653A24: mov     ebp, eax
0x653A26: mov     eax, [esi+30h]
0x653A29: test    eax, eax
0x653A2B: jz      short loc_653A38
0x653A2D: cmp     dword ptr [esi+0C0h], 0
0x653A34: jnz     short loc_653A38
0x653A36: mov     ebp, eax
0x653A38: mov     eax, [esi]
0x653A3A: mov     edx, [eax+36Ch]
0x653A40: mov     ecx, esi
0x653A42: call    edx
0x653A44: test    eax, eax
0x653A46: jz      short loc_653A74
0x653A48: fld     dword ptr ds:0A30634h
0x653A4E: push    ecx
0x653A4F: fstp    [esp+14h+var_14]; float
0x653A52: push    0; char
0x653A54: push    edi; int
0x653A55: mov     ecx, edi
0x653A57: call    sub_5E0380
0x653A5C: mov     ecx, eax
0x653A5E: call    sub_566DC0
0x653A63: test    al, al
0x653A65: jnz     short loc_653A74
0x653A67: mov     eax, [esi]
0x653A69: mov     edx, [eax+1B0h]
0x653A6F: push    edi
0x653A70: mov     ecx, esi
0x653A72: call    edx
0x653A74: mov     eax, [esi]
0x653A76: mov     edx, [eax+58Ch]
0x653A7C: push    0FFFFFFFFh
0x653A7E: push    1
0x653A80: push    1
0x653A82: push    edi
0x653A83: mov     ecx, esi
0x653A85: call    edx
0x653A87: mov     eax, [edi]
0x653A89: mov     edx, [eax+18Ch]
0x653A8F: mov     ecx, edi
0x653A91: call    edx
0x653A93: test    eax, eax
0x653A95: jnz     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653A9B: mov     ecx, edi
0x653A9D: call    sub_5E0380
0x653AA2: test    eax, eax
0x653AA4: jz      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653AAA: mov     ecx, edi
0x653AAC: call    sub_5E0380
0x653AB1: cmp     byte ptr [eax+20h], 6
0x653AB5: jz      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653ABB: fld     dword ptr ds:0A30634h
0x653AC1: push    ecx
0x653AC2: fstp    [esp+20h+var_20]; float
0x653AC5: push    0; char
0x653AC7: push    edi; int
0x653AC8: mov     ecx, edi
0x653ACA: call    sub_5E0380
0x653ACF: mov     ecx, eax
0x653AD1: call    sub_566DC0
0x653AD6: test    al, al
0x653AD8: jz      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653ADE: mov     ecx, [edi+58h]
0x653AE1: mov     eax, [ecx]
0x653AE3: mov     edx, [eax+8]
0x653AE6: call    edx
0x653AE8: cmp     eax, 1
0x653AEB: jnz     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653AF1: test    ebp, ebp
0x653AF3: jz      short loc_653B04
0x653AF5: mov     ecx, ebp
0x653AF7: call    sub_4D74B0
0x653AFC: test    al, al
0x653AFE: jnz     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B04: mov     [esp+1Ch+var_9], 1
0x653B09: jmp     loc_653E18
0x653B0E: push    edi; jumptable 00653A0F case 2
0x653B0F: mov     ecx, esi
0x653B11: call    sub_64EE60
0x653B16: mov     [esp+1Ch+var_9], al
0x653B1A: jmp     loc_653E18
0x653B1F: mov     eax, [esi]; jumptable 00653A0F case 41
0x653B21: mov     edx, [eax+53Ch]
0x653B27: push    edi
0x653B28: mov     ecx, esi
0x653B2A: call    edx
0x653B2C: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B31: mov     eax, [esi]; jumptable 00653A0F case 12
0x653B33: mov     edx, [eax+584h]
0x653B39: push    edi
0x653B3A: mov     ecx, esi
0x653B3C: call    edx
0x653B3E: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B43: mov     eax, [esi]; jumptable 00653A0F case 43
0x653B45: mov     edx, [eax+188h]
0x653B4B: push    2
0x653B4D: push    edi
0x653B4E: mov     ecx, esi
0x653B50: call    edx
0x653B52: jmp     loc_653E18
0x653B57: mov     eax, [esi]; jumptable 00653A0F case 27
0x653B59: mov     edx, [eax+548h]
0x653B5F: push    edi
0x653B60: mov     ecx, esi
0x653B62: call    edx
0x653B64: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B69: mov     eax, [esi]; jumptable 00653A0F case 28
0x653B6B: mov     edx, [eax+550h]
0x653B71: push    edi
0x653B72: mov     ecx, esi
0x653B74: call    edx
0x653B76: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B7B: mov     eax, [esi]; jumptable 00653A0F case 37
0x653B7D: mov     edx, [eax+588h]
0x653B83: push    0
0x653B85: push    1
0x653B87: push    edi
0x653B88: mov     ecx, esi
0x653B8A: call    edx
0x653B8C: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653B91: mov     eax, [esi]; jumptable 00653A0F case 26
0x653B93: mov     edx, [eax+54Ch]
0x653B99: push    edi
0x653B9A: mov     ecx, esi
0x653B9C: call    edx
0x653B9E: jmp     loc_653E18
0x653BA3: mov     eax, [esi]; jumptable 00653A0F case 29
0x653BA5: mov     edx, [eax+590h]
0x653BAB: push    edi
0x653BAC: mov     ecx, esi
0x653BAE: call    edx
0x653BB0: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653BB5: mov     eax, [esi]; jumptable 00653A0F case 30
0x653BB7: mov     edx, [eax+530h]
0x653BBD: push    edi
0x653BBE: mov     ecx, esi
0x653BC0: call    edx
0x653BC2: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653BC7: cmp     dword ptr [esi+2Ch], 0; jumptable 00653A0F case 13
0x653BCB: jnz     short loc_653BDA
0x653BCD: mov     eax, [esi]
0x653BCF: mov     edx, [eax+558h]
0x653BD5: push    edi
0x653BD6: mov     ecx, esi
0x653BD8: call    edx
0x653BDA: mov     eax, [esi+2Ch]
0x653BDD: test    eax, eax
0x653BDF: jz      short loc_653C3E
0x653BE1: mov     eax, [eax+8]
0x653BE4: shr     eax, 5
0x653BE7: test    al, 1
0x653BE9: jnz     short loc_653C3E
0x653BEB: mov     ecx, [esi+8]
0x653BEE: call    sub_566DB0
0x653BF3: test    eax, eax
0x653BF5: mov     [esp+1Ch+var_4], eax
0x653BF9: fild    [esp+1Ch+var_4]
0x653BFD: jge     short loc_653C05
0x653BFF: fadd    dword ptr ds:0A2FC78h
0x653C05: fstp    [esp+1Ch+var_8]
0x653C09: fld1
0x653C0B: fcomp   [esp+1Ch+var_8]
0x653C0F: fnstsw  ax
0x653C11: test    ah, 41h
0x653C14: jnz     short loc_653C20
0x653C16: fld     dword ptr ds:0A57A64h
0x653C1C: fstp    [esp+1Ch+var_8]
0x653C20: mov     ecx, [esi+2Ch]
0x653C23: push    0
0x653C25: push    ecx
0x653C26: mov     ecx, edi
0x653C28: call    TesObjectREF_GetDistance
0x653C2D: fld     [esp+1Ch+var_8]
0x653C31: fcompp
0x653C33: fnstsw  ax
0x653C35: test    ah, 1
0x653C38: jnz     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653C3E: add     dword ptr [esi+4], 1
0x653C42: jmp     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653C47: cmp     dword ptr [esi+2Ch], 0; jumptable 00653A0F case 14
0x653C4B: jnz     short loc_653C5A
0x653C4D: mov     edx, [esi]
0x653C4F: mov     eax, [edx+558h]
0x653C55: push    edi
0x653C56: mov     ecx, esi
0x653C58: call    eax
0x653C5A: mov     ecx, [esi+2Ch]
0x653C5D: test    ecx, ecx
0x653C5F: jnz     short loc_653C69
0x653C61: add     dword ptr [esi+4], 1
0x653C65: test    ecx, ecx
0x653C67: jz      short loc_653C90
0x653C69: mov     edx, [ecx]
0x653C6B: mov     eax, [edx+190h]
0x653C71: call    eax
0x653C73: test    al, al
0x653C75: jz      short loc_653C90
0x653C77: cmp     byte ptr [ebx+20h], 2
0x653C7B: jnz     short loc_653C90
0x653C7D: mov     eax, [esi+8]
0x653C80: mov     edx, [esi]
0x653C82: mov     edx, [edx+84h]
0x653C88: push    1
0x653C8A: push    eax
0x653C8B: push    edi
0x653C8C: mov     ecx, esi
0x653C8E: call    edx
0x653C90: push    edi
0x653C91: mov     ecx, esi
0x653C93: call    sub_64EE60
0x653C98: mov     ecx, edi
0x653C9A: call    sub_5E0380
0x653C9F: test    eax, eax
0x653CA1: jz      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653CA7: push    edi
0x653CA8: mov     ecx, edi
0x653CAA: call    sub_5E0380
0x653CAF: mov     ecx, eax
0x653CB1: call    sub_5687D0
0x653CB6: test    al, al
0x653CB8: jz      def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653CBE: mov     ecx, [edi+58h]
0x653CC1: mov     eax, [ecx]
0x653CC3: mov     edx, [eax+8]
0x653CC6: call    edx
0x653CC8: cmp     eax, 1
0x653CCB: jnz     def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653CD1: mov     [esp+1Ch+var_9], al
0x653CD5: jmp     loc_653E18
0x653CDA: add     dword ptr [esi+4], 1; jumptable 00653A0F cases 1,4
0x653CDE: jmp     loc_653E18
0x653CE3: push    edi; jumptable 00653A0F case 5
0x653CE4: mov     ecx, esi
0x653CE6: call    sub_64EE20
0x653CEB: mov     [esp+1Ch+var_9], al
0x653CEF: jmp     loc_653E18
0x653CF4: mov     eax, [esi]; jumptable 00653A0F case 6
0x653CF6: mov     edx, [eax+36Ch]
0x653CFC: mov     ecx, esi
0x653CFE: call    edx
0x653D00: test    eax, eax
0x653D02: jz      short loc_653D11
0x653D04: mov     eax, [esi]
0x653D06: mov     edx, [eax+1B0h]
0x653D0C: push    edi
0x653D0D: mov     ecx, esi
0x653D0F: call    edx
0x653D11: fld     dword ptr ds:0A71E4Ch
0x653D17: push    1
0x653D19: push    ecx
0x653D1A: fstp    [esp+24h+var_24]
0x653D1D: push    edi
0x653D1E: mov     ecx, esi
0x653D20: call    sub_64EC50
0x653D25: mov     [esp+1Ch+var_9], al
0x653D29: jmp     loc_653E18
0x653D2E: mov     eax, [esi]; jumptable 00653A0F case 7
0x653D30: mov     edx, [eax+36Ch]
0x653D36: mov     ecx, esi
0x653D38: call    edx
0x653D3A: test    eax, eax
0x653D3C: jz      short loc_653D4B
0x653D3E: mov     eax, [esi]
0x653D40: mov     edx, [eax+1B0h]
0x653D46: push    edi
0x653D47: mov     ecx, esi
0x653D49: call    edx
0x653D4B: push    edi
0x653D4C: mov     ecx, esi
0x653D4E: call    sub_64E320
0x653D53: mov     [esp+1Ch+var_9], al
0x653D57: jmp     loc_653E18
0x653D5C: mov     eax, [esi]; jumptable 00653A0F case 9
0x653D5E: fld     [esp+1Ch+arg_4]
0x653D62: mov     edx, [eax+56Ch]
0x653D68: push    ecx
0x653D69: fstp    [esp+20h+var_20]
0x653D6C: push    edi
0x653D6D: mov     ecx, esi
0x653D6F: call    edx
0x653D71: mov     [esp+1Ch+var_9], al
0x653D75: jmp     loc_653E18
0x653D7A: mov     eax, [esi]; jumptable 00653A0F case 8
0x653D7C: mov     edx, [eax+36Ch]
0x653D82: mov     ecx, esi
0x653D84: call    edx
0x653D86: test    eax, eax
0x653D88: jz      short loc_653D97
0x653D8A: mov     eax, [esi]
0x653D8C: mov     edx, [eax+1B0h]
0x653D92: push    edi
0x653D93: mov     ecx, esi
0x653D95: call    edx
0x653D97: mov     eax, [esi]
0x653D99: mov     edx, [eax+518h]
0x653D9F: push    edi
0x653DA0: mov     ecx, esi
0x653DA2: call    edx
0x653DA4: jmp     short def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653DA6: mov     eax, [esi]; jumptable 00653A0F case 15
0x653DA8: mov     edx, [eax+36Ch]
0x653DAE: mov     ecx, esi
0x653DB0: call    edx
0x653DB2: test    eax, eax
0x653DB4: jz      short loc_653DC3
0x653DB6: mov     eax, [esi]
0x653DB8: mov     edx, [eax+1B0h]
0x653DBE: push    edi
0x653DBF: mov     ecx, esi
0x653DC1: call    edx
0x653DC3: mov     eax, [esi]
0x653DC5: mov     edx, [eax+19Ch]
0x653DCB: push    0FFFFFFFFh
0x653DCD: push    1
0x653DCF: push    0
0x653DD1: push    edi
0x653DD2: mov     ecx, esi
0x653DD4: call    edx
0x653DD6: jmp     short def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653DD8: mov     eax, [esi]; jumptable 00653A0F case 10
0x653DDA: mov     edx, [eax+36Ch]
0x653DE0: mov     ecx, esi
0x653DE2: call    edx
0x653DE4: test    eax, eax
0x653DE6: jz      short loc_653DF5
0x653DE8: mov     eax, [esi]
0x653DEA: mov     edx, [eax+1B0h]
0x653DF0: push    edi
0x653DF1: mov     ecx, esi
0x653DF3: call    edx
0x653DF5: mov     eax, [esi]
0x653DF7: mov     edx, [eax+1A0h]
0x653DFD: push    edi
0x653DFE: mov     ecx, esi
0x653E00: call    edx
0x653E02: jmp     short def_653A0F; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653E04: mov     eax, [esi]; jumptable 00653A0F cases 18,23
0x653E06: mov     edx, [eax+188h]
0x653E0C: push    1
0x653E0E: push    edi
0x653E0F: mov     ecx, esi
0x653E11: call    edx
0x653E13: mov     [esp+1Ch+var_9], 0; jumptable 00653A0F default case, cases 3,11,16,17,19-22,24,25,31-36,38-40,42,44
0x653E18: mov     ecx, edi; this
0x653E1A: call    Actor__GetProcessLevel
0x653E1F: cmp     eax, 1
0x653E22: jnz     loc_6540B3
0x653E28: mov     eax, [esi]
0x653E2A: mov     edx, [eax+184h]
0x653E30: mov     ecx, esi
0x653E32: call    edx
0x653E34: mov     ebx, eax
0x653E36: test    ebx, ebx
0x653E38: jz      loc_6540B3
0x653E3E: mov     eax, [esi]
0x653E40: mov     edx, [eax+180h]
0x653E46: mov     ebp, [ebx+18h]
0x653E49: mov     ecx, esi
0x653E4B: call    edx
0x653E4D: mov     ecx, ds:0B152B0h[ebp*4]
0x653E54: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x653E58: jnz     loc_6540B3
0x653E5E: mov     eax, [ebx+18h]
0x653E61: test    eax, eax
0x653E63: jnz     short loc_653E7C
0x653E65: fld     dword ptr ds:0A30634h
0x653E6B: push    ecx
0x653E6C: fstp    [esp+20h+var_20]; float
0x653E6F: push    eax; char
0x653E70: push    edi; int
0x653E71: mov     ecx, ebx
0x653E73: call    sub_566DC0
0x653E78: test    al, al
0x653E7A: jmp     short loc_653E92
0x653E7C: cmp     eax, 3
0x653E7F: jz      loc_6540F7
0x653E85: mov     al, [ebx+20h]
0x653E88: cmp     al, 3
0x653E8A: jz      loc_6540F7
0x653E90: cmp     al, 4
0x653E92: jz      loc_6540F7
0x653E98: mov     edx, [esi]
0x653E9A: mov     eax, [edx+194h]
0x653EA0: push    edi
0x653EA1: mov     ecx, esi
0x653EA3: call    eax
0x653EA5: push    400h
0x653EAA: lea     ebp, [edi+44h]
0x653EAD: push    ebp
0x653EAE: push    ebx
0x653EAF: call    Script_AddEventToExtraScript
0x653EB4: add     esp, 0Ch
0x653EB7: mov     ecx, ebx
0x653EB9: call    sub_565DF0
0x653EBE: test    al, al
0x653EC0: jz      short loc_653ED5
0x653EC2: mov     ecx, offset TimeGlobals
0x653EC7: call    TimeGlobals_GetGameDay
0x653ECC: mov     ecx, ebp
0x653ECE: push    eax
0x653ECF: push    ebx
0x653ED0: call    sub_41FFC0
0x653ED5: cmp     dword ptr [ebx+30h], 0
0x653ED9: jnz     loc_6540B3
0x653EDF: cmp     dword ptr [esi+0C0h], 0
0x653EE6: mov     dword ptr [esi+2Ch], 0
0x653EED: jz      short loc_653F21
0x653EEF: mov     edx, [esi]
0x653EF1: mov     eax, [edx+388h]
0x653EF7: mov     ecx, esi
0x653EF9: call    eax
0x653EFB: test    al, al
0x653EFD: jnz     short loc_653F21
0x653EFF: mov     ecx, [esi+0C0h]
0x653F05: test    ecx, ecx
0x653F07: jz      short loc_653F12
0x653F09: mov     edx, [ecx]
0x653F0B: mov     eax, [edx+10h]
0x653F0E: push    1
0x653F10: call    eax
0x653F12: mov     dword ptr [esi+0C0h], 0
0x653F1C: jmp     loc_65405E
0x653F21: mov     ecx, [esi+8]
0x653F24: call    sub_5660A0
0x653F29: test    al, al
0x653F2B: jz      loc_65405E
0x653F31: mov     ebx, [esi+8]
0x653F34: mov     ecx, ebx
0x653F36: mov     [esp+1Ch+var_4], ebx
0x653F3A: call    sub_567770
0x653F3F: test    al, al
0x653F41: jz      loc_654032
0x653F47: mov     edx, [edi]
0x653F49: mov     eax, [edx+44h]
0x653F4C: push    30000h
0x653F51: mov     ecx, edi
0x653F53: call    eax
0x653F55: mov     ecx, ebp
0x653F57: call    ExtraDataList__GetExtraPackage
0x653F5C: test    eax, eax
0x653F5E: jz      loc_653FED
0x653F64: mov     ebx, [edi+58h]
0x653F67: mov     ecx, ebp
0x653F69: call    ExtraDataList__GetExtraPackage
0x653F6E: mov     [ebx+8], eax
0x653F71: mov     ecx, [edi+58h]
0x653F74: mov     edx, [ecx+8]
0x653F77: push    edx
0x653F78: mov     ecx, edi
0x653F7A: call    sub_5E8DE0
0x653F7F: mov     ebx, [edi+58h]
0x653F82: mov     ecx, ebp
0x653F84: call    sub_41FB40
0x653F89: mov     [ebx+4], eax
0x653F8C: mov     eax, [edi+58h]
0x653F8F: mov     ebx, [eax]
0x653F91: mov     ecx, ebp
0x653F93: mov     [esp+10h+arg_0], eax
0x653F97: add     ebx, 0D0h ; 'Ð'
0x653F9D: call    sub_41FB60
0x653FA2: mov     ecx, [esp+10h+arg_0]
0x653FA6: push    eax
0x653FA7: mov     eax, [ebx]
0x653FA9: call    eax
0x653FAB: mov     ebx, [edi]
0x653FAD: mov     ecx, ebp
0x653FAF: add     ebx, 17Ch
0x653FB5: call    sub_41FB80
0x653FBA: mov     edx, [ebx]
0x653FBC: mov     ecx, edi
0x653FBE: push    eax
0x653FBF: call    edx
0x653FC1: mov     eax, [edi+58h]
0x653FC4: mov     ebx, [eax]
0x653FC6: mov     ecx, ebp
0x653FC8: mov     [esp+18h+var_4], eax
0x653FCC: add     ebx, 394h
0x653FD2: call    sub_41FBA0
0x653FD7: mov     ecx, [esp+18h+var_4]
0x653FDB: push    eax
0x653FDC: mov     eax, [ebx]
0x653FDE: call    eax
0x653FE0: mov     ecx, ebp
0x653FE2: call    sub_4246D0
0x653FE7: mov     ebx, [esp+1Ch+var_4]
0x653FEB: jmp     short loc_654039
0x653FED: mov     ecx, [edi+58h]
0x653FF0: xor     ebp, ebp
0x653FF2: mov     [ecx+8], ebp
0x653FF5: mov     edx, [edi+58h]
0x653FF8: mov     [edx+4], ebp
0x653FFB: mov     ecx, [edi+58h]
0x653FFE: mov     eax, [ecx]
0x654000: mov     edx, [eax+0D0h]
0x654006: push    ebp
0x654007: call    edx
0x654009: mov     eax, [edi]
0x65400B: mov     edx, [eax+17Ch]
0x654011: push    ebp
0x654012: mov     ecx, edi
0x654014: call    edx
0x654016: mov     ecx, [edi+58h]
0x654019: mov     eax, [ecx]
0x65401B: mov     edx, [eax+394h]
0x654021: push    ebp
0x654022: call    edx
0x654024: mov     ecx, [edi+58h]
0x654027: mov     eax, [ecx]
0x654029: mov     edx, [eax+18h]
0x65402C: push    ebp
0x65402D: push    edi
0x65402E: call    edx
0x654030: jmp     short loc_654039
0x654032: mov     dword ptr [esi+8], 0
0x654039: test    ebx, ebx
0x65403B: jz      short loc_654048
0x65403D: mov     eax, [ebx]
0x65403F: mov     edx, [eax+10h]
0x654042: push    1
0x654044: mov     ecx, ebx
0x654046: call    edx
0x654048: cmp     byte ptr [esi+0D0h], 0
0x65404F: jnz     short loc_65405E
0x654051: mov     eax, [esi]
0x654053: mov     edx, [eax+194h]
0x654059: push    edi
0x65405A: mov     ecx, esi
0x65405C: call    edx
0x65405E: mov     eax, [esi+44h]
0x654061: xor     ebx, ebx
0x654063: cmp     eax, ebx
0x654065: jz      short loc_654070
0x654067: push    eax
0x654068: call    FormHeapFree
0x65406D: add     esp, 4
0x654070: mov     [esi+44h], ebx
0x654073: mov     [esi+24h], ebx
0x654076: lea     ebx, [esi+3Ch]
0x654079: lea     esp, [esp+0]
0x654080: cmp     dword ptr [ebx+4], 0
0x654084: jnz     short loc_65408B
0x654086: cmp     dword ptr [ebx], 0
0x654089: jz      short loc_6540A4
0x65408B: mov     ebp, [ebx]
0x65408D: test    ebp, ebp
0x65408F: jz      short loc_65409A
0x654091: push    ebp
0x654092: call    FormHeapFree
0x654097: add     esp, 4
0x65409A: push    ebp
0x65409B: mov     ecx, ebx
0x65409D: call    BSSimpleList_Remove
0x6540A2: jmp     short loc_654080
0x6540A4: lea     ecx, [esi+4Ch]
0x6540A7: mov     dword ptr [esi+30h], 0
0x6540AE: call    BSSimpleList_Clear
0x6540B3: cmp     [esp+1Ch+var_9], 0
0x6540B8: jnz     loc_6539D0
0x6540BE: cmp     byte ptr ds:0B15800h, 0
0x6540C5: jz      short loc_6540DF
0x6540C7: test    edi, edi
0x6540C9: jz      short loc_6540DF
0x6540CB: mov     ecx, ds:0B3BF80h
0x6540D1: test    ecx, ecx
0x6540D3: jz      short loc_6540DF
0x6540D5: push    edi
0x6540D6: call    sub_6825C0
0x6540DB: test    al, al
0x6540DD: jnz     short loc_6540ED
0x6540DF: mov     eax, [esp+1Ch+arg_0]
0x6540E3: mov     ecx, [eax+58h]
0x6540E6: mov     edx, [ecx]
0x6540E8: mov     eax, [edx+20h]
0x6540EB: call    eax
0x6540ED: pop     edi
0x6540EE: pop     ebp
0x6540EF: pop     ebx
0x6540F0: pop     esi
0x6540F1: add     esp, 0Ch
0x6540F4: retn    8
0x6540F7: mov     eax, [esi]
0x6540F9: mov     edx, [eax+188h]
0x6540FF: push    0FFFFFFFFh
0x654101: push    edi
0x654102: mov     ecx, esi
0x654104: call    edx
0x654106: pop     edi
0x654107: pop     ebp
0x654108: pop     ebx
0x654109: pop     esi
0x65410A: add     esp, 0Ch
0x65410D: retn    8
