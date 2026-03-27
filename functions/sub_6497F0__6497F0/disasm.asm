0x6497F0: sub     esp, 174h
0x6497F6: mov     eax, ds:0B30AACh
0x6497FB: xor     eax, esp
0x6497FD: mov     [esp+174h+var_4], eax
0x649804: push    ebx
0x649805: push    ebp
0x649806: push    esi
0x649807: push    edi; int
0x649808: mov     edi, [esp+184h+arg_0]
0x64980F: test    edi, edi
0x649811: mov     esi, ecx
0x649813: mov     [esp+184h+var_164], edi
0x649817: jz      loc_64A299
0x64981D: mov     ecx, offset TimeGlobals
0x649822: call    TimeGlobals_GetGameHour
0x649827: fstp    [esp+184h+var_168]
0x64982B: push    0; int
0x64982D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x649832: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x649837: push    0; int
0x649839: push    edi; void *
0x64983A: call    OblivionDynamicCast
0x64983F: mov     edi, eax
0x649841: add     esp, 14h
0x649844: test    edi, edi
0x649846: jz      loc_64A25E
0x64984C: mov     eax, [esi]
0x64984E: mov     edx, [eax+18h]
0x649851: mov     ebp, [esi+8]
0x649854: push    0
0x649856: push    edi
0x649857: mov     ecx, esi
0x649859: call    edx
0x64985B: test    al, al
0x64985D: jz      short loc_6498A2
0x64985F: mov     eax, [esi]
0x649861: mov     edx, [eax+3C0h]
0x649867: push    edi
0x649868: mov     ecx, esi
0x64986A: call    edx
0x64986C: mov     ebp, [esi+8]
0x64986F: mov     ecx, edi
0x649871: call    sub_5E7BE0
0x649876: mov     eax, [esi]
0x649878: mov     edx, [eax+55Ch]
0x64987E: push    edi
0x64987F: mov     ecx, esi
0x649881: call    edx
0x649883: mov     eax, [esi+8]
0x649886: mov     ebx, [eax+28h]
0x649889: test    ebx, ebx
0x64988B: jz      short loc_6498A2
0x64988D: mov     ecx, ebx
0x64988F: call    TargetData__GetTargetType
0x649894: test    eax, eax
0x649896: jz      short loc_6498A2
0x649898: mov     ecx, ebx
0x64989A: call    sub_452A60
0x64989F: mov     [esi+38h], eax
0x6498A2: mov     eax, [esi+8]
0x6498A5: test    eax, eax
0x6498A7: jz      loc_64A25E
0x6498AD: cmp     dword ptr [eax+18h], 0FFFFFFFFh
0x6498B1: jz      loc_64A25E
0x6498B7: mov     ecx, ds:0B333C4h; this
0x6498BD: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x6498C2: test    al, al
0x6498C4: jnz     short loc_6498D4
0x6498C6: mov     ecx, ds:0B333C4h
0x6498CC: cmp     [ecx+610h], al
0x6498D2: jz      short loc_6498E1
0x6498D4: mov     edx, [esi+8]
0x6498D7: test    byte ptr [edx+1Eh], 1
0x6498DB: jnz     loc_64A25E
0x6498E1: mov     ecx, esi
0x6498E3: call    sub_644CE0
0x6498E8: mov     ecx, [esi+8]
0x6498EB: mov     edx, [ecx+18h]
0x6498EE: mov     eax, [esi+4]
0x6498F1: mov     ebx, ds:0B152B0h[edx*4]
0x6498F8: mov     eax, [ebx+eax*4]
0x6498FB: cmp     eax, 2Bh; switch 44 cases
0x6498FE: ja      def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649904: jmp     ds:jpt_649904[eax*4]; switch jump
0x64990B: fld     dword ptr ds:0A30634h; jumptable 00649904 case 0
0x649911: mov     ebx, [esi+30h]
0x649914: push    ecx
0x649915: fstp    [esp+188h+var_188]; float
0x649918: push    0; char
0x64991A: push    edi; int
0x64991B: mov     dword ptr [esp+190h+var_174], ebx
0x64991F: call    sub_566DC0
0x649924: test    al, al
0x649926: jnz     loc_649BB4
0x64992C: cmp     dword ptr [esi+34h], 0
0x649930: jnz     short loc_649987
0x649932: mov     ebp, [esi]
0x649934: push    edi
0x649935: lea     ecx, [esp+188h+var_160]
0x649939: push    ecx
0x64993A: mov     ecx, [esi+8]
0x64993D: add     ebp, 3DCh
0x649943: call    sub_566B30
0x649948: mov     ecx, [esi+8]
0x64994B: push    edi
0x64994C: mov     ebx, eax
0x64994E: call    sub_566940
0x649953: mov     ecx, [esi+8]
0x649956: push    eax
0x649957: push    edi
0x649958: call    sub_566A40
0x64995D: mov     edx, [ebx]
0x64995F: mov     ecx, [ebx+4]
0x649962: push    eax
0x649963: sub     esp, 0Ch
0x649966: mov     eax, esp
0x649968: mov     [eax], edx
0x64996A: mov     edx, [ebx+8]
0x64996D: mov     [eax+4], ecx
0x649970: mov     [eax+8], edx
0x649973: mov     eax, [ebp+0]
0x649976: push    edi
0x649977: mov     ecx, esi
0x649979: call    eax
0x64997B: test    al, al
0x64997D: jz      loc_64A299
0x649983: mov     ebx, dword ptr [esp+184h+var_174]
0x649987: push    3Ah ; ':'; a1
0x649989: call    TESForm_LookupByFormID
0x64998E: add     esp, 4
0x649991: mov     ecx, offset TimeGlobals
0x649996: mov     ebp, eax
0x649998: call    TimeGlobals_GetGameHour
0x64999D: fstp    [esp+184h+var_16C]
0x6499A1: fld     [esp+184h+var_16C]
0x6499A5: mov     ecx, edi; this
0x6499A7: fstp    [esp+184h+var_174]
0x6499AB: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6499B0: fcomp   [esp+184h+var_174]
0x6499B4: fnstsw  ax
0x6499B6: test    ah, 41h
0x6499B9: jnz     short loc_6499C9
0x6499BB: fld     [esp+184h+var_16C]
0x6499BF: fadd    qword ptr ds:0A2F920h
0x6499C5: fstp    [esp+184h+var_16C]
0x6499C9: fld     [esp+184h+var_16C]
0x6499CD: mov     ecx, edi; this
0x6499CF: fstp    [esp+184h+var_174]
0x6499D3: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6499D8: fsubr   [esp+184h+var_174]
0x6499DC: mov     ecx, [esi+8]
0x6499DF: push    1
0x6499E1: push    edi
0x6499E2: fstp    [esp+18Ch+var_16C]
0x6499E6: fld     dword ptr [ebp+24h]
0x6499E9: fdivr   qword ptr ds:0A2F938h
0x6499EF: fmul    [esp+18Ch+var_16C]
0x6499F3: fstp    [esp+18Ch+var_16C]
0x6499F7: call    sub_5677B0
0x6499FC: mov     ecx, [esi+8]
0x6499FF: fstp    dword ptr [esp+184h+var_174]
0x649A03: cmp     byte ptr [ecx+20h], 5
0x649A07: jnz     short loc_649A0F
0x649A09: fldz
0x649A0B: fstp    dword ptr [esp+184h+var_174]
0x649A0F: fld     dword ptr [esp+184h+var_174]
0x649A13: mov     ebp, [esi]
0x649A15: sub     esp, 8
0x649A18: fstp    [esp+18Ch+var_188]
0x649A1C: add     ebp, 418h
0x649A22: fld     [esp+18Ch+var_16C]
0x649A26: fstp    [esp+18Ch+var_18C]
0x649A29: push    edi
0x649A2A: call    sub_566940
0x649A2F: mov     ecx, [esi+8]
0x649A32: push    eax
0x649A33: push    edi
0x649A34: call    sub_566A40
0x649A39: push    eax
0x649A3A: push    edi
0x649A3B: lea     ecx, [esp+198h+var_13C]
0x649A3F: push    ecx
0x649A40: mov     ecx, [esi+8]
0x649A43: call    sub_566B30
0x649A48: mov     edx, [ebp+0]
0x649A4B: push    eax
0x649A4C: push    edi
0x649A4D: mov     ecx, esi
0x649A4F: call    edx
0x649A51: mov     ecx, [edi+58h]
0x649A54: mov     eax, [ecx]
0x649A56: mov     edx, [eax+8]
0x649A59: call    edx
0x649A5B: cmp     eax, 3
0x649A5E: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649A64: fld     dword ptr ds:0A30634h
0x649A6A: push    ecx
0x649A6B: mov     ecx, [esi+8]
0x649A6E: fstp    [esp+188h+var_188]; float
0x649A71: push    0; char
0x649A73: push    edi; int
0x649A74: call    sub_566DC0
0x649A79: test    al, al
0x649A7B: jz      def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649A81: cmp     byte ptr [esi+84h], 0
0x649A88: jnz     short loc_649AE4
0x649A8A: mov     ecx, [esi+8]
0x649A8D: call    sub_565DD0
0x649A92: test    al, al
0x649A94: jz      short loc_649ADD
0x649A96: mov     eax, [edi]
0x649A98: fld     dword ptr ds:0A5B6C0h
0x649A9E: mov     edx, [eax+174h]
0x649AA4: push    edi; a7
0x649AA5: push    offset sub_645A30; a6
0x649AAA: push    ecx
0x649AAB: mov     ecx, edi
0x649AAD: fstp    [esp+190h+a5]; a5
0x649AB0: call    edx
0x649AB2: fld     dword ptr ds:0A5B6C0h
0x649AB8: push    eax; a4
0x649AB9: mov     eax, [edi]
0x649ABB: mov     edx, [eax+174h]
0x649AC1: push    ecx
0x649AC2: mov     ecx, edi
0x649AC4: fstp    [esp+198h+a3+4]; a3
0x649AC7: call    edx
0x649AC9: push    eax; a2
0x649ACA: mov     ecx, edi; this
0x649ACC: call    TESObjectREFR_GetParentCell
0x649AD1: mov     ecx, ds:0B33A98h
0x649AD7: push    eax; a1
0x649AD8: call    sub_446B90
0x649ADD: mov     byte ptr [esi+84h], 1
0x649AE4: mov     ecx, [esi+8]
0x649AE7: call    sub_565DE0
0x649AEC: test    al, al
0x649AEE: jz      short loc_649B37
0x649AF0: mov     eax, [edi]
0x649AF2: fld     dword ptr ds:0A5B6C0h
0x649AF8: mov     edx, [eax+174h]
0x649AFE: push    edi; a7
0x649AFF: push    offset sub_645AF0; a6
0x649B04: push    ecx
0x649B05: mov     ecx, edi
0x649B07: fstp    [esp+190h+a5]; a5
0x649B0A: call    edx
0x649B0C: fld     dword ptr ds:0A5B6C0h
0x649B12: push    eax; a4
0x649B13: mov     eax, [edi]
0x649B15: mov     edx, [eax+174h]
0x649B1B: push    ecx
0x649B1C: mov     ecx, edi
0x649B1E: fstp    [esp+198h+a3+4]; a3
0x649B21: call    edx
0x649B23: push    eax; a2
0x649B24: mov     ecx, edi; this
0x649B26: call    TESObjectREFR_GetParentCell
0x649B2B: mov     ecx, ds:0B33A98h
0x649B31: push    eax; a1
0x649B32: call    sub_446B90
0x649B37: mov     eax, [esi]
0x649B39: mov     edx, [eax+188h]
0x649B3F: push    1
0x649B41: push    edi
0x649B42: mov     ecx, esi
0x649B44: call    edx
0x649B46: test    ebx, ebx
0x649B48: jz      short loc_649B5E
0x649B4A: mov     eax, [ebx]
0x649B4C: mov     edx, [eax+170h]
0x649B52: mov     ecx, ebx
0x649B54: call    edx
0x649B56: cmp     eax, ds:0B35EB0h
0x649B5C: jz      short loc_649B7A
0x649B5E: mov     eax, [esi+8]
0x649B61: mov     ecx, [eax+24h]
0x649B64: test    ecx, ecx
0x649B66: jz      def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649B6C: call    sub_569740
0x649B71: cmp     eax, 3
0x649B74: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649B7A: test    ebx, ebx
0x649B7C: jz      short loc_649B83
0x649B7E: fld     dword ptr [ebx+28h]
0x649B81: jmp     short loc_649B97
0x649B83: mov     edx, [edi]
0x649B85: mov     edx, [edx+0F0h]
0x649B8B: lea     eax, [esp+184h+var_154]
0x649B8F: push    eax
0x649B90: mov     ecx, edi
0x649B92: call    edx
0x649B94: fld     dword ptr [eax+8]
0x649B97: mov     eax, [edi]
0x649B99: fstp    dword ptr [esp+184h+var_174]
0x649B9D: fld     dword ptr [esp+184h+var_174]
0x649BA1: mov     edx, [eax+1E8h]
0x649BA7: push    ecx
0x649BA8: mov     ecx, edi
0x649BAA: fstp    [esp+188h+var_188]
0x649BAD: call    edx
0x649BAF: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649BB4: cmp     byte ptr [esi+84h], 0
0x649BBB: jnz     short loc_649C17
0x649BBD: mov     ecx, [esi+8]
0x649BC0: call    sub_565DD0
0x649BC5: test    al, al
0x649BC7: jz      short loc_649C10
0x649BC9: mov     eax, [edi]
0x649BCB: fld     dword ptr ds:0A5B6C0h
0x649BD1: mov     edx, [eax+174h]
0x649BD7: push    edi; a7
0x649BD8: push    offset sub_645A30; a6
0x649BDD: push    ecx
0x649BDE: mov     ecx, edi
0x649BE0: fstp    [esp+190h+a5]; a5
0x649BE3: call    edx
0x649BE5: fld     dword ptr ds:0A5B6C0h
0x649BEB: push    eax; a4
0x649BEC: mov     eax, [edi]
0x649BEE: mov     edx, [eax+174h]
0x649BF4: push    ecx
0x649BF5: mov     ecx, edi
0x649BF7: fstp    [esp+198h+a3+4]; a3
0x649BFA: call    edx
0x649BFC: push    eax; a2
0x649BFD: mov     ecx, edi; this
0x649BFF: call    TESObjectREFR_GetParentCell
0x649C04: mov     ecx, ds:0B33A98h
0x649C0A: push    eax; a1
0x649C0B: call    sub_446B90
0x649C10: mov     byte ptr [esi+84h], 1
0x649C17: mov     ecx, [esi+8]
0x649C1A: call    sub_565DE0
0x649C1F: test    al, al
0x649C21: jz      short loc_649C6A
0x649C23: mov     eax, [edi]
0x649C25: fld     dword ptr ds:0A5B6C0h
0x649C2B: mov     edx, [eax+174h]
0x649C31: push    edi; a7
0x649C32: push    offset sub_645AF0; a6
0x649C37: push    ecx
0x649C38: mov     ecx, edi
0x649C3A: fstp    [esp+190h+a5]; a5
0x649C3D: call    edx
0x649C3F: fld     dword ptr ds:0A5B6C0h
0x649C45: push    eax; a4
0x649C46: mov     eax, [edi]
0x649C48: mov     edx, [eax+174h]
0x649C4E: push    ecx
0x649C4F: mov     ecx, edi
0x649C51: fstp    [esp+198h+a3+4]; a3
0x649C54: call    edx
0x649C56: push    eax; a2
0x649C57: mov     ecx, edi; this
0x649C59: call    TESObjectREFR_GetParentCell
0x649C5E: mov     ecx, ds:0B33A98h
0x649C64: push    eax; a1
0x649C65: call    sub_446B90
0x649C6A: test    ebx, ebx
0x649C6C: jz      short loc_649C82
0x649C6E: mov     eax, [ebx]
0x649C70: mov     edx, [eax+170h]
0x649C76: mov     ecx, ebx
0x649C78: call    edx
0x649C7A: cmp     eax, ds:0B35EB0h
0x649C80: jz      short loc_649C96
0x649C82: mov     eax, [esi+8]
0x649C85: mov     ecx, [eax+24h]
0x649C88: test    ecx, ecx
0x649C8A: jz      short loc_649CCB
0x649C8C: call    sub_569740
0x649C91: cmp     eax, 3
0x649C94: jnz     short loc_649CCB
0x649C96: test    ebx, ebx
0x649C98: jz      short loc_649C9F
0x649C9A: fld     dword ptr [ebx+28h]
0x649C9D: jmp     short loc_649CB3
0x649C9F: mov     edx, [edi]
0x649CA1: mov     edx, [edx+0F0h]
0x649CA7: lea     eax, [esp+184h+var_148]
0x649CAB: push    eax
0x649CAC: mov     ecx, edi
0x649CAE: call    edx
0x649CB0: fld     dword ptr [eax+8]
0x649CB3: mov     eax, [edi]
0x649CB5: fstp    dword ptr [esp+184h+var_174]
0x649CB9: fld     dword ptr [esp+184h+var_174]
0x649CBD: mov     edx, [eax+1E8h]
0x649CC3: push    ecx
0x649CC4: mov     ecx, edi
0x649CC6: fstp    [esp+188h+var_188]
0x649CC9: call    edx
0x649CCB: mov     eax, [esi]
0x649CCD: mov     edx, [eax+188h]
0x649CD3: push    1
0x649CD5: push    edi
0x649CD6: mov     ecx, esi
0x649CD8: call    edx
0x649CDA: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649CDF: mov     eax, [esi]; jumptable 00649904 case 27
0x649CE1: mov     edx, [eax+548h]
0x649CE7: push    edi
0x649CE8: mov     ecx, esi
0x649CEA: call    edx
0x649CEC: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649CF1: mov     eax, [esi]; jumptable 00649904 case 41
0x649CF3: mov     edx, [eax+53Ch]
0x649CF9: push    edi
0x649CFA: mov     ecx, esi
0x649CFC: call    edx
0x649CFE: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D03: mov     eax, [esi]; jumptable 00649904 case 35
0x649D05: mov     edx, [eax+534h]
0x649D0B: push    edi
0x649D0C: mov     ecx, esi
0x649D0E: call    edx
0x649D10: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D15: mov     eax, [esi]; jumptable 00649904 case 43
0x649D17: mov     edx, [eax+188h]
0x649D1D: push    2
0x649D1F: push    edi
0x649D20: mov     ecx, esi
0x649D22: call    edx
0x649D24: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D29: mov     eax, [esi]; jumptable 00649904 case 10
0x649D2B: mov     edx, [eax+1A0h]
0x649D31: push    edi
0x649D32: mov     ecx, esi
0x649D34: call    edx
0x649D36: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D3B: mov     eax, [esi]; jumptable 00649904 case 36
0x649D3D: mov     edx, [eax+538h]
0x649D43: push    edi
0x649D44: mov     ecx, esi
0x649D46: call    edx
0x649D48: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D4D: mov     eax, [esi]; jumptable 00649904 case 37
0x649D4F: mov     edx, [eax+80h]
0x649D55: push    1
0x649D57: push    edi
0x649D58: mov     ecx, esi
0x649D5A: call    edx
0x649D5C: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D61: mov     eax, [esi]; jumptable 00649904 case 28
0x649D63: mov     edx, [eax+550h]
0x649D69: push    edi
0x649D6A: mov     ecx, esi
0x649D6C: call    edx
0x649D6E: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D73: mov     eax, [esi]; jumptable 00649904 case 26
0x649D75: mov     edx, [eax+54Ch]
0x649D7B: push    edi
0x649D7C: mov     ecx, esi
0x649D7E: call    edx
0x649D80: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D85: mov     eax, [esi]; jumptable 00649904 case 40
0x649D87: mov     edx, [eax+540h]
0x649D8D: push    edi
0x649D8E: mov     ecx, esi
0x649D90: call    edx
0x649D92: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649D97: mov     eax, [esi]; jumptable 00649904 case 29
0x649D99: mov     edx, [eax+520h]
0x649D9F: push    edi
0x649DA0: mov     ecx, esi
0x649DA2: call    edx
0x649DA4: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649DA9: mov     eax, [esi]; jumptable 00649904 case 30
0x649DAB: mov     edx, [eax+530h]
0x649DB1: push    edi
0x649DB2: mov     ecx, esi
0x649DB4: call    edx
0x649DB6: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649DBB: cmp     dword ptr [esi+2Ch], 0; jumptable 00649904 case 17
0x649DBF: jnz     short loc_649DCE
0x649DC1: mov     eax, [esi]
0x649DC3: mov     edx, [eax+558h]
0x649DC9: push    edi
0x649DCA: mov     ecx, esi
0x649DCC: call    edx
0x649DCE: mov     ecx, [esi+2Ch]
0x649DD1: test    ecx, ecx
0x649DD3: jz      short loc_649DFE
0x649DD5: cmp     ecx, ds:0B333C4h
0x649DDB: jz      short loc_649DFE
0x649DDD: mov     eax, [ecx]
0x649DDF: mov     edx, [eax+190h]
0x649DE5: call    edx
0x649DE7: test    al, al
0x649DE9: jz      short loc_649DFE
0x649DEB: mov     ecx, [esi+8]
0x649DEE: mov     eax, [esi]
0x649DF0: mov     edx, [eax+84h]
0x649DF6: push    1
0x649DF8: push    ecx
0x649DF9: push    edi
0x649DFA: mov     ecx, esi
0x649DFC: call    edx
0x649DFE: mov     eax, [esi]
0x649E00: mov     edx, [eax+188h]
0x649E06: push    1
0x649E08: push    edi
0x649E09: mov     ecx, esi
0x649E0B: call    edx
0x649E0D: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E12: mov     eax, [esi]; jumptable 00649904 case 14
0x649E14: mov     edx, [eax+51Ch]
0x649E1A: push    0
0x649E1C: push    edi
0x649E1D: mov     ecx, esi
0x649E1F: call    edx
0x649E21: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E26: mov     eax, [esi]; jumptable 00649904 case 3
0x649E28: mov     edx, [eax+524h]
0x649E2E: push    edi
0x649E2F: mov     ecx, esi
0x649E31: call    edx
0x649E33: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E38: mov     ecx, edi; jumptable 00649904 case 12
0x649E3A: call    sub_5EAE70
0x649E3F: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E44: mov     eax, [esi]; jumptable 00649904 case 8
0x649E46: mov     edx, [eax+518h]
0x649E4C: push    edi
0x649E4D: mov     ecx, esi
0x649E4F: call    edx
0x649E51: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E56: mov     eax, [esi]; jumptable 00649904 case 15
0x649E58: mov     edx, [eax+19Ch]
0x649E5E: push    0FFFFFFFFh
0x649E60: push    1
0x649E62: push    0
0x649E64: push    edi
0x649E65: mov     ecx, esi
0x649E67: call    edx
0x649E69: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E6E: mov     eax, [esi]; jumptable 00649904 case 2
0x649E70: mov     edx, [eax+51Ch]
0x649E76: push    1
0x649E78: push    edi
0x649E79: mov     ecx, esi
0x649E7B: call    edx
0x649E7D: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E82: mov     eax, [esi]; jumptable 00649904 case 24
0x649E84: mov     edx, [eax+564h]
0x649E8A: push    edi
0x649E8B: mov     ecx, esi
0x649E8D: call    edx
0x649E8F: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649E94: mov     eax, [esi]; jumptable 00649904 case 23
0x649E96: mov     edx, [eax+560h]
0x649E9C: push    edi
0x649E9D: mov     ecx, esi
0x649E9F: call    edx
0x649EA1: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649EA6: cmp     edx, 1Ah; jumptable 00649904 case 1
0x649EA9: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649EAF: mov     eax, [esi]
0x649EB1: mov     edx, [eax+188h]
0x649EB7: push    0FFFFFFFFh
0x649EB9: push    edi
0x649EBA: mov     ecx, esi
0x649EBC: call    edx
0x649EBE: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649EC3: call    sub_579440; jumptable 00649904 case 4
0x649EC8: cmp     eax, edi
0x649ECA: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649ED0: mov     eax, [esi+8]
0x649ED3: movsx   ecx, byte ptr [eax+20h]
0x649ED7: mov     eax, ds:0B12988h[ecx*4]
0x649EDE: push    eax
0x649EDF: mov     ecx, edi; this
0x649EE1: call    TESObjectREFR_GetName
0x649EE6: push    eax
0x649EE7: lea     edx, [esp+18Ch+Format]
0x649EEB: push    offset aSIsSleepingWit; "%s is sleeping with %s"
0x649EF0: push    edx
0x649EF1: call    __sprintf
0x649EF6: lea     eax, [esp+194h+Format]
0x649EFA: push    eax; Format
0x649EFB: call    Interface_ConsolePrint
0x649F00: add     esp, 14h
0x649F03: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649F08: call    sub_579440; jumptable 00649904 case 5
0x649F0D: cmp     eax, edi
0x649F0F: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649F15: mov     ecx, [esi+8]
0x649F18: movsx   edx, byte ptr [ecx+20h]
0x649F1C: mov     eax, ds:0B12988h[edx*4]
0x649F23: push    eax
0x649F24: mov     ecx, edi; this
0x649F26: call    TESObjectREFR_GetName
0x649F2B: push    eax
0x649F2C: lea     eax, [esp+18Ch+Format]
0x649F30: push    offset aSIsEatingWithS; "%s is eating with %s"
0x649F35: push    eax
0x649F36: call    __sprintf
0x649F3B: lea     ecx, [esp+194h+Format]
0x649F3F: push    ecx; Format
0x649F40: call    Interface_ConsolePrint
0x649F45: add     esp, 14h
0x649F48: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649F4D: mov     edx, [esi]; jumptable 00649904 case 6
0x649F4F: mov     eax, [edx+198h]
0x649F55: push    0
0x649F57: push    0FFFFFFFFh
0x649F59: push    1
0x649F5B: push    edi
0x649F5C: mov     ecx, esi
0x649F5E: call    eax
0x649F60: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649F65: mov     edx, [esi]; jumptable 00649904 case 32
0x649F67: mov     eax, [edx+52Ch]
0x649F6D: jmp     loc_64A0E5
0x649F72: cmp     dword ptr [esi+2Ch], 0; jumptable 00649904 case 13
0x649F76: jnz     short loc_649F85
0x649F78: mov     edx, [esi]
0x649F7A: mov     eax, [edx+558h]
0x649F80: push    edi
0x649F81: mov     ecx, esi
0x649F83: call    eax
0x649F85: mov     eax, [esi+2Ch]
0x649F88: test    eax, eax
0x649F8A: jz      loc_64A0A8
0x649F90: mov     ecx, [eax+8]
0x649F93: shr     ecx, 5
0x649F96: test    cl, 1
0x649F99: jnz     loc_64A0A8
0x649F9F: test    byte ptr [ebp+1Eh], 1
0x649FA3: jz      short loc_649FDF
0x649FA5: mov     ecx, ds:0B333C4h
0x649FAB: push    edi
0x649FAC: call    sub_663A60
0x649FB1: test    al, al
0x649FB3: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649FB9: mov     ecx, ds:0B333C4h
0x649FBF: call    sub_663A00
0x649FC4: cmp     eax, ds:0B36A80h
0x649FCA: jge     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649FD0: mov     ecx, [esi+8]
0x649FD3: push    0
0x649FD5: call    sub_5668E0
0x649FDA: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649FDF: mov     al, [ebp+20h]
0x649FE2: cmp     al, 12h
0x649FE4: jz      def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x649FEA: cmp     al, 1
0x649FEC: mov     ecx, [ebp+28h]
0x649FEF: jnz     short loc_64A034
0x649FF1: call    sub_452A60
0x649FF6: mov     edx, [esi+2Ch]
0x649FF9: mov     dword ptr [esp+184h+var_174], eax
0x649FFD: fild    dword ptr [esp+184h+var_174]
0x64A001: push    0; unk000
0x64A003: push    edx; a2
0x64A004: mov     ecx, edi; this
0x64A006: fstp    dword ptr [esp+18Ch+var_174]
0x64A00A: call    TesObjectREF_GetDistance
0x64A00F: fld     dword ptr [esp+184h+var_174]
0x64A013: fcompp
0x64A015: fnstsw  ax
0x64A017: test    ah, 1
0x64A01A: jnz     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A020: mov     eax, [esi]
0x64A022: mov     edx, [eax+188h]
0x64A028: push    1
0x64A02A: push    edi
0x64A02B: mov     ecx, esi
0x64A02D: call    edx
0x64A02F: jmp     def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A034: call    sub_452A60
0x64A039: test    eax, eax
0x64A03B: mov     dword ptr [esp+184h+var_174], eax
0x64A03F: jg      short loc_64A049
0x64A041: mov     dword ptr [esp+184h+var_174], 0C8h ; 'È'
0x64A049: mov     ecx, edi; this
0x64A04B: call    TESObjectREFR_GetParentCell
0x64A050: test    eax, eax
0x64A052: jz      short loc_64A074
0x64A054: mov     ecx, edi; this
0x64A056: call    TESObjectREFR_GetParentCell
0x64A05B: mov     ecx, eax; this
0x64A05D: call    TESObjectCELL_IsInterior
0x64A062: test    al, al
0x64A064: jz      short loc_64A074
0x64A066: mov     ecx, offset flt_B36AA0
0x64A06B: call    GameSetting_GetSafeFloatPointer
0x64A070: fld     dword ptr [eax]
0x64A072: jmp     short loc_64A084
0x64A074: mov     ecx, offset flt_B36A98
0x64A079: call    GameSetting_GetSafeFloatPointer
0x64A07E: fild    dword ptr [esp+184h+var_174]
0x64A082: fmul    dword ptr [eax]
0x64A084: mov     eax, [esi+2Ch]
0x64A087: fstp    dword ptr [esp+184h+var_174]
0x64A08B: push    0; unk000
0x64A08D: push    eax; a2
0x64A08E: mov     ecx, edi; this
0x64A090: call    TesObjectREF_GetDistance
0x64A095: fld     dword ptr [esp+184h+var_174]
0x64A099: fmul    qword ptr ds:0A2FAA0h
0x64A09F: fcompp
0x64A0A1: fnstsw  ax
0x64A0A3: test    ah, 1
0x64A0A6: jnz     short def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A0A8: mov     edx, [esi]
0x64A0AA: mov     eax, [edx+188h]
0x64A0B0: push    1
0x64A0B2: push    edi
0x64A0B3: mov     ecx, esi
0x64A0B5: call    eax
0x64A0B7: jmp     short def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A0B9: movsx   eax, byte ptr [ecx+20h]; jumptable 00649904 case 7
0x64A0BD: add     eax, 0FFFFFFFFh; switch 16 cases
0x64A0C0: cmp     eax, 0Fh
0x64A0C3: ja      short def_649904; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A0C5: movzx   ecx, ds:byte_64A36C[eax]
0x64A0CC: jmp     ds:jpt_64A0CC[ecx*4]; switch jump
0x64A0D3: mov     edx, [esi]; jumptable 0064A0CC cases 1,2,7,16
0x64A0D5: mov     eax, [edx+508h]
0x64A0DB: jmp     short loc_64A0E5
0x64A0DD: mov     edx, [esi]; jumptable 00649904 case 9
0x64A0DF: mov     eax, [edx+514h]
0x64A0E5: push    edi
0x64A0E6: mov     ecx, esi
0x64A0E8: call    eax
0x64A0EA: mov     ecx, edi; jumptable 00649904 default case, cases 11,16,18-22,25,31,33,34,38,39,42
0x64A0EC: call    Actor__GetProcessLevel
0x64A0F1: cmp     eax, 3
0x64A0F4: jnz     loc_64A25E
0x64A0FA: mov     eax, [esi+8]
0x64A0FD: test    eax, eax
0x64A0FF: jz      loc_64A25E
0x64A105: mov     ecx, [eax+18h]
0x64A108: mov     edx, [esi+4]
0x64A10B: mov     eax, ds:0B152B0h[ecx*4]
0x64A112: cmp     dword ptr [eax+edx*4], 2Ch ; ','
0x64A116: jnz     loc_64A25E
0x64A11C: mov     edx, [esi]
0x64A11E: mov     eax, [edx+14Ch]
0x64A124: push    0
0x64A126: mov     ecx, esi
0x64A128: call    eax
0x64A12A: mov     ecx, [esi+8]
0x64A12D: test    ecx, ecx
0x64A12F: jz      short loc_64A161
0x64A131: cmp     dword ptr [ecx+18h], 0
0x64A135: jnz     short loc_64A161
0x64A137: fld     dword ptr ds:0A30634h
0x64A13D: push    ecx
0x64A13E: fstp    [esp+188h+var_188]; float
0x64A141: push    0; char
0x64A143: push    edi; int
0x64A144: call    sub_566DC0
0x64A149: test    al, al
0x64A14B: jnz     short loc_64A161
0x64A14D: mov     edx, [esi]
0x64A14F: mov     eax, [edx+188h]
0x64A155: push    0FFFFFFFFh
0x64A157: push    edi
0x64A158: mov     ecx, esi
0x64A15A: call    eax
0x64A15C: jmp     loc_64A299
0x64A161: mov     ecx, [esi+8]
0x64A164: push    400h
0x64A169: lea     ebx, [edi+44h]
0x64A16C: push    ebx
0x64A16D: push    ecx
0x64A16E: call    Script_AddEventToExtraScript
0x64A173: mov     ecx, [esi+8]
0x64A176: add     esp, 0Ch
0x64A179: test    ecx, ecx
0x64A17B: jz      short loc_64A19C
0x64A17D: call    sub_565DF0
0x64A182: test    al, al
0x64A184: jz      short loc_64A19C
0x64A186: mov     ecx, offset TimeGlobals
0x64A18B: call    TimeGlobals_GetGameDay
0x64A190: mov     edx, [esi+8]
0x64A193: mov     ecx, ebx
0x64A195: push    eax
0x64A196: push    edx
0x64A197: call    sub_41FFC0
0x64A19C: mov     ecx, [esi+8]
0x64A19F: test    ecx, ecx
0x64A1A1: jz      short loc_64A1B3
0x64A1A3: call    sub_5660A0
0x64A1A8: test    al, al
0x64A1AA: jz      short loc_64A1B3
0x64A1AC: mov     ecx, edi; int
0x64A1AE: call    sub_5EAE70
0x64A1B3: call    sub_579440
0x64A1B8: cmp     eax, edi
0x64A1BA: jnz     short loc_64A1EF
0x64A1BC: mov     eax, [esi+8]
0x64A1BF: movsx   ecx, byte ptr [eax+20h]
0x64A1C3: mov     eax, ds:0B12988h[ecx*4]
0x64A1CA: push    eax
0x64A1CB: mov     ecx, edi; this
0x64A1CD: call    TESObjectREFR_GetName
0x64A1D2: push    eax
0x64A1D3: lea     edx, [esp+18Ch+Format]
0x64A1D7: push    offset aSIsDoneWithS; "%s is done with %s"
0x64A1DC: push    edx
0x64A1DD: call    __sprintf
0x64A1E2: lea     eax, [esp+194h+Format]
0x64A1E6: push    eax; Format
0x64A1E7: call    Interface_ConsolePrint
0x64A1EC: add     esp, 14h
0x64A1EF: mov     eax, [esi+44h]
0x64A1F2: test    eax, eax
0x64A1F4: jz      short loc_64A1FF
0x64A1F6: push    eax
0x64A1F7: call    FormHeapFree
0x64A1FC: add     esp, 4
0x64A1FF: mov     dword ptr [esi+44h], 0
0x64A206: lea     ebp, [esi+3Ch]
0x64A209: lea     esp, [esp+0]
0x64A210: cmp     dword ptr [ebp+4], 0
0x64A214: jnz     short loc_64A21C
0x64A216: cmp     dword ptr [ebp+0], 0
0x64A21A: jz      short loc_64A236
0x64A21C: mov     ebx, [ebp+0]
0x64A21F: test    ebx, ebx
0x64A221: jz      short loc_64A22C
0x64A223: push    ebx
0x64A224: call    FormHeapFree
0x64A229: add     esp, 4
0x64A22C: push    ebx
0x64A22D: mov     ecx, ebp
0x64A22F: call    BSSimpleList_Remove
0x64A234: jmp     short loc_64A210
0x64A236: mov     ebx, [esi+8]
0x64A239: test    ebx, ebx
0x64A23B: jz      short loc_64A25E
0x64A23D: cmp     dword ptr [ebx+30h], 0
0x64A241: jnz     short loc_64A25E
0x64A243: push    edi
0x64A244: mov     ecx, esi
0x64A246: call    sub_648E40
0x64A24B: fld     [esp+184h+var_168]
0x64A24F: cmp     ebx, [esi+8]
0x64A252: fstp    dword ptr [esi+0Ch]
0x64A255: jz      short loc_64A25E
0x64A257: mov     dword ptr [esi+4], 0
0x64A25E: cmp     byte ptr ds:0B15800h, 0
0x64A265: jz      short loc_64A28B
0x64A267: test    edi, edi
0x64A269: jz      short loc_64A28B
0x64A26B: mov     ecx, ds:0B3BF80h
0x64A271: test    ecx, ecx
0x64A273: jz      short loc_64A28B
0x64A275: push    edi
0x64A276: call    sub_6825C0
0x64A27B: test    al, al
0x64A27D: jnz     short loc_64A299
0x64A27F: mov     ecx, ds:0B3BF80h
0x64A285: push    edi
0x64A286: call    sub_6826D0
0x64A28B: mov     ecx, [esp+184h+var_164]
0x64A28F: mov     ecx, [ecx+58h]
0x64A292: mov     edx, [ecx]
0x64A294: mov     eax, [edx+20h]
0x64A297: call    eax
0x64A299: mov     ecx, [esp+184h+var_4]
0x64A2A0: pop     edi
0x64A2A1: pop     esi
0x64A2A2: pop     ebp
0x64A2A3: pop     ebx
0x64A2A4: xor     ecx, esp
0x64A2A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x64A2AB: add     esp, 174h
0x64A2B1: retn    4
