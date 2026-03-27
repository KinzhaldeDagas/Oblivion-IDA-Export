0x659010: sub     esp, 15Ch
0x659016: mov     eax, ds:0B30AACh
0x65901B: xor     eax, esp
0x65901D: mov     [esp+15Ch+var_4], eax
0x659024: mov     eax, [esp+15Ch+arg_0]
0x65902B: test    eax, eax
0x65902D: push    esi
0x65902E: mov     esi, ecx
0x659030: mov     [esp+160h+var_150], eax
0x659034: jz      loc_6598CF
0x65903A: push    ebx
0x65903B: push    ebp
0x65903C: push    edi; int
0x65903D: push    0; int
0x65903F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x659044: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x659049: push    0; int
0x65904B: push    eax; void *
0x65904C: call    OblivionDynamicCast
0x659051: add     esp, 14h
0x659054: mov     ecx, offset TimeGlobals
0x659059: mov     edi, eax
0x65905B: call    TimeGlobals_GetGameHour
0x659060: fstp    [esp+16Ch+var_14C]
0x659064: test    edi, edi
0x659066: jz      loc_659891
0x65906C: mov     eax, [esi]
0x65906E: mov     edx, [eax+18h]
0x659071: push    0
0x659073: push    edi
0x659074: mov     ecx, esi
0x659076: call    edx
0x659078: test    al, al
0x65907A: jz      short loc_65909D
0x65907C: mov     eax, [esi]
0x65907E: mov     edx, [eax+3C0h]
0x659084: push    edi
0x659085: mov     ecx, esi
0x659087: call    edx
0x659089: mov     ecx, edi
0x65908B: call    sub_5E7BE0
0x659090: mov     eax, [esi]
0x659092: mov     edx, [eax+55Ch]
0x659098: push    edi
0x659099: mov     ecx, esi
0x65909B: call    edx
0x65909D: mov     eax, [esi+8]
0x6590A0: test    eax, eax
0x6590A2: mov     ebp, eax
0x6590A4: jz      loc_659891
0x6590AA: cmp     dword ptr [eax+18h], 0FFFFFFFFh
0x6590AE: jz      loc_659891
0x6590B4: mov     ecx, ds:0B333C4h; this
0x6590BA: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x6590BF: test    al, al
0x6590C1: jnz     short loc_6590D1
0x6590C3: mov     eax, ds:0B333C4h
0x6590C8: cmp     byte ptr [eax+610h], 0
0x6590CF: jz      short loc_6590DB
0x6590D1: test    byte ptr [ebp+1Eh], 1
0x6590D5: jnz     loc_659891
0x6590DB: mov     ecx, esi
0x6590DD: call    sub_644CE0
0x6590E2: mov     eax, [esi+8]
0x6590E5: mov     ecx, [eax+24h]
0x6590E8: mov     eax, [eax+18h]
0x6590EB: mov     edx, [esi+4]
0x6590EE: mov     ebx, ds:0B152B0h[eax*4]
0x6590F5: mov     edx, [ebx+edx*4]
0x6590F8: cmp     edx, 2Bh; switch 44 cases
0x6590FB: mov     dword ptr [esp+16Ch+var_15C], 0
0x659103: ja      def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659109: movzx   edx, ds:byte_65995C[edx]
0x659110: jmp     ds:jpt_659110[edx*4]; switch jump
0x659117: test    ecx, ecx; jumptable 00659110 case 0
0x659119: jz      short loc_659124
0x65911B: call    sub_5697E0
0x659120: mov     ebx, eax
0x659122: jmp     short loc_659128
0x659124: mov     ebx, dword ptr [esp+16Ch+var_15C]
0x659128: fld     dword ptr ds:0A30634h
0x65912E: push    ecx
0x65912F: mov     ecx, [esi+8]
0x659132: fstp    [esp+170h+var_170]; float
0x659135: push    0; char
0x659137: push    edi; int
0x659138: call    sub_566DC0
0x65913D: test    al, al
0x65913F: jnz     loc_65920F
0x659145: push    3Ah ; ':'; a1
0x659147: call    TESForm_LookupByFormID
0x65914C: add     esp, 4
0x65914F: mov     ecx, offset TimeGlobals
0x659154: mov     ebp, eax
0x659156: call    TimeGlobals_GetGameHour
0x65915B: fstp    [esp+16Ch+var_154]
0x65915F: fld     [esp+16Ch+var_154]
0x659163: mov     ecx, edi; this
0x659165: fstp    [esp+16Ch+var_15C]
0x659169: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x65916E: fcomp   [esp+16Ch+var_15C]
0x659172: fnstsw  ax
0x659174: test    ah, 41h
0x659177: jnz     short loc_659187
0x659179: fld     [esp+16Ch+var_154]
0x65917D: fadd    qword ptr ds:0A2F920h
0x659183: fstp    [esp+16Ch+var_154]
0x659187: fld     [esp+16Ch+var_154]
0x65918B: mov     ecx, edi; this
0x65918D: fstp    [esp+16Ch+var_15C]
0x659191: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x659196: fsubr   [esp+16Ch+var_15C]
0x65919A: mov     ecx, [esi+8]
0x65919D: push    1
0x65919F: push    edi
0x6591A0: fstp    [esp+174h+var_154]
0x6591A4: fld     dword ptr [ebp+24h]
0x6591A7: fdivr   qword ptr ds:0A2F938h
0x6591AD: fmul    [esp+174h+var_154]
0x6591B1: fstp    [esp+174h+var_154]
0x6591B5: call    sub_5677B0
0x6591BA: mov     ecx, [esi+8]
0x6591BD: fstp    dword ptr [esp+16Ch+var_15C]
0x6591C1: cmp     byte ptr [ecx+20h], 5
0x6591C5: jnz     short loc_6591CD
0x6591C7: fldz
0x6591C9: fstp    dword ptr [esp+16Ch+var_15C]
0x6591CD: fld     dword ptr [esp+16Ch+var_15C]
0x6591D1: mov     ebp, [esi]
0x6591D3: sub     esp, 8
0x6591D6: fstp    [esp+174h+var_170]
0x6591DA: add     ebp, 418h
0x6591E0: fld     [esp+174h+var_154]
0x6591E4: fstp    [esp+174h+var_174]
0x6591E7: push    edi
0x6591E8: call    sub_566940
0x6591ED: mov     ecx, [esi+8]
0x6591F0: push    eax
0x6591F1: push    edi
0x6591F2: call    sub_566A40
0x6591F7: mov     ecx, [esi+8]
0x6591FA: push    eax
0x6591FB: push    edi
0x6591FC: lea     eax, [esp+180h+var_148]
0x659200: push    eax
0x659201: call    sub_566B30
0x659206: mov     edx, [ebp+0]
0x659209: push    eax
0x65920A: push    edi
0x65920B: mov     ecx, esi
0x65920D: call    edx
0x65920F: mov     ecx, [edi+58h]
0x659212: mov     eax, [ecx]
0x659214: mov     edx, [eax+8]
0x659217: call    edx
0x659219: cmp     eax, 2
0x65921C: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659222: fld     dword ptr ds:0A30634h
0x659228: push    ecx
0x659229: mov     ecx, [esi+8]
0x65922C: fstp    [esp+170h+var_170]; float
0x65922F: push    0; char
0x659231: push    edi; int
0x659232: call    sub_566DC0
0x659237: test    al, al
0x659239: jz      def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65923F: cmp     byte ptr [esi+84h], 0
0x659246: jnz     short loc_6592A2
0x659248: mov     ecx, [esi+8]
0x65924B: call    sub_565DD0
0x659250: test    al, al
0x659252: jz      short loc_65929B
0x659254: mov     eax, [edi]
0x659256: fld     dword ptr ds:0A5B6C0h
0x65925C: mov     edx, [eax+174h]
0x659262: push    edi; a7
0x659263: push    offset sub_645A30; a6
0x659268: push    ecx
0x659269: mov     ecx, edi
0x65926B: fstp    [esp+178h+a5]; a5
0x65926E: call    edx
0x659270: fld     dword ptr ds:0A5B6C0h
0x659276: push    eax; a4
0x659277: mov     eax, [edi]
0x659279: mov     edx, [eax+174h]
0x65927F: push    ecx
0x659280: mov     ecx, edi
0x659282: fstp    [esp+180h+a3]; a3
0x659285: call    edx
0x659287: push    eax; a2
0x659288: mov     ecx, edi; this
0x65928A: call    TESObjectREFR_GetParentCell
0x65928F: mov     ecx, ds:0B33A98h
0x659295: push    eax; a1
0x659296: call    sub_446B90
0x65929B: mov     byte ptr [esi+84h], 1
0x6592A2: mov     ecx, [esi+8]
0x6592A5: call    sub_565DE0
0x6592AA: test    al, al
0x6592AC: jz      short loc_6592F5
0x6592AE: mov     eax, [edi]
0x6592B0: fld     dword ptr ds:0A5B6C0h
0x6592B6: mov     edx, [eax+174h]
0x6592BC: push    edi; a7
0x6592BD: push    offset sub_645AF0; a6
0x6592C2: push    ecx
0x6592C3: mov     ecx, edi
0x6592C5: fstp    [esp+178h+a5]; a5
0x6592C8: call    edx
0x6592CA: fld     dword ptr ds:0A5B6C0h
0x6592D0: push    eax; a4
0x6592D1: mov     eax, [edi]
0x6592D3: mov     edx, [eax+174h]
0x6592D9: push    ecx
0x6592DA: mov     ecx, edi
0x6592DC: fstp    [esp+180h+a3]; a3
0x6592DF: call    edx
0x6592E1: push    eax; a2
0x6592E2: mov     ecx, edi; this
0x6592E4: call    TESObjectREFR_GetParentCell
0x6592E9: mov     ecx, ds:0B33A98h
0x6592EF: push    eax; a1
0x6592F0: call    sub_446B90
0x6592F5: mov     eax, [esi]
0x6592F7: mov     edx, [eax+188h]
0x6592FD: push    1
0x6592FF: push    edi
0x659300: mov     ecx, esi
0x659302: call    edx
0x659304: test    ebx, ebx
0x659306: jz      short loc_65931C
0x659308: mov     eax, [ebx]
0x65930A: mov     edx, [eax+170h]
0x659310: mov     ecx, ebx
0x659312: call    edx
0x659314: cmp     eax, ds:0B35EB0h
0x65931A: jz      short loc_659338
0x65931C: mov     eax, [esi+8]
0x65931F: mov     ecx, [eax+24h]
0x659322: test    ecx, ecx
0x659324: jz      def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65932A: call    sub_569740
0x65932F: cmp     eax, 3
0x659332: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659338: test    ebx, ebx
0x65933A: jz      short loc_659341
0x65933C: fld     dword ptr [ebx+28h]
0x65933F: jmp     short loc_659355
0x659341: mov     edx, [edi]
0x659343: mov     edx, [edx+0F0h]
0x659349: lea     eax, [esp+16Ch+var_13C]
0x65934D: push    eax
0x65934E: mov     ecx, edi
0x659350: call    edx
0x659352: fld     dword ptr [eax+8]
0x659355: mov     eax, [edi]
0x659357: fstp    dword ptr [esp+16Ch+var_15C]
0x65935B: fld     dword ptr [esp+16Ch+var_15C]
0x65935F: mov     edx, [eax+1E8h]
0x659365: push    ecx
0x659366: mov     ecx, edi
0x659368: fstp    [esp+170h+var_170]
0x65936B: call    edx
0x65936D: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659372: mov     eax, [esi]; jumptable 00659110 case 30
0x659374: mov     edx, [eax+530h]
0x65937A: push    edi
0x65937B: mov     ecx, esi
0x65937D: call    edx
0x65937F: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659384: mov     eax, [esi]; jumptable 00659110 case 35
0x659386: mov     edx, [eax+534h]
0x65938C: push    edi
0x65938D: mov     ecx, esi
0x65938F: call    edx
0x659391: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659396: mov     eax, [esi]; jumptable 00659110 case 41
0x659398: mov     edx, [eax+53Ch]
0x65939E: push    edi
0x65939F: mov     ecx, esi
0x6593A1: call    edx
0x6593A3: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6593A8: cmp     dword ptr [esi+2Ch], 0; jumptable 00659110 case 17
0x6593AC: jnz     short loc_6593BB
0x6593AE: mov     eax, [esi]
0x6593B0: mov     edx, [eax+558h]
0x6593B6: push    edi
0x6593B7: mov     ecx, esi
0x6593B9: call    edx
0x6593BB: mov     eax, [esi+2Ch]
0x6593BE: test    eax, eax
0x6593C0: jz      short loc_6593DA
0x6593C2: cmp     eax, ds:0B333C4h
0x6593C8: jz      short loc_6593DA
0x6593CA: mov     eax, [esi]
0x6593CC: mov     edx, [eax+84h]
0x6593D2: push    1
0x6593D4: push    ebp
0x6593D5: push    edi
0x6593D6: mov     ecx, esi
0x6593D8: call    edx
0x6593DA: mov     eax, [esi]
0x6593DC: mov     edx, [eax+188h]
0x6593E2: push    1
0x6593E4: push    edi
0x6593E5: mov     ecx, esi
0x6593E7: call    edx
0x6593E9: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6593EE: mov     eax, [esi]; jumptable 00659110 case 27
0x6593F0: mov     edx, [eax+548h]
0x6593F6: push    edi
0x6593F7: mov     ecx, esi
0x6593F9: call    edx
0x6593FB: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659400: mov     eax, [esi]; jumptable 00659110 case 43
0x659402: mov     edx, [eax+188h]
0x659408: push    2
0x65940A: push    edi
0x65940B: mov     ecx, esi
0x65940D: call    edx
0x65940F: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659414: mov     eax, [esi]; jumptable 00659110 case 28
0x659416: mov     edx, [eax+550h]
0x65941C: push    edi
0x65941D: mov     ecx, esi
0x65941F: call    edx
0x659421: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659426: mov     eax, [esi]; jumptable 00659110 case 26
0x659428: mov     edx, [eax+54Ch]
0x65942E: push    edi
0x65942F: mov     ecx, esi
0x659431: call    edx
0x659433: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659438: mov     eax, [esi]; jumptable 00659110 case 10
0x65943A: mov     edx, [eax+1A0h]
0x659440: push    edi
0x659441: mov     ecx, esi
0x659443: call    edx
0x659445: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65944A: mov     eax, [esi]; jumptable 00659110 case 40
0x65944C: mov     edx, [eax+540h]
0x659452: push    edi
0x659453: mov     ecx, esi
0x659455: call    edx
0x659457: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65945C: mov     eax, [esi]; jumptable 00659110 case 36
0x65945E: mov     edx, [eax+538h]
0x659464: push    edi
0x659465: mov     ecx, esi
0x659467: call    edx
0x659469: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65946E: mov     eax, [esi]; jumptable 00659110 case 29
0x659470: mov     edx, [eax+520h]
0x659476: push    edi
0x659477: mov     ecx, esi
0x659479: call    edx
0x65947B: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659480: mov     eax, [esi]; jumptable 00659110 case 32
0x659482: mov     edx, [eax+52Ch]
0x659488: push    edi
0x659489: mov     ecx, esi
0x65948B: call    edx
0x65948D: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659492: mov     eax, [esi]; jumptable 00659110 case 9
0x659494: mov     edx, [eax+514h]
0x65949A: push    edi
0x65949B: mov     ecx, esi
0x65949D: call    edx
0x65949F: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6594A4: mov     eax, [esi]; jumptable 00659110 case 24
0x6594A6: mov     edx, [eax+564h]
0x6594AC: push    edi
0x6594AD: mov     ecx, esi
0x6594AF: call    edx
0x6594B1: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6594B6: mov     eax, [esi]; jumptable 00659110 case 23
0x6594B8: mov     edx, [eax+560h]
0x6594BE: push    edi
0x6594BF: mov     ecx, esi
0x6594C1: call    edx
0x6594C3: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6594C8: mov     eax, [esi]; jumptable 00659110 case 14
0x6594CA: mov     edx, [eax+51Ch]
0x6594D0: push    0
0x6594D2: push    edi
0x6594D3: mov     ecx, esi
0x6594D5: call    edx
0x6594D7: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6594DC: mov     eax, [esi]; jumptable 00659110 case 3
0x6594DE: mov     edx, [eax+524h]
0x6594E4: push    edi
0x6594E5: mov     ecx, esi
0x6594E7: call    edx
0x6594E9: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6594EE: mov     eax, [esi]; jumptable 00659110 case 8
0x6594F0: mov     edx, [eax+518h]
0x6594F6: push    edi
0x6594F7: mov     ecx, esi
0x6594F9: call    edx
0x6594FB: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659500: mov     eax, [esi]; jumptable 00659110 case 15
0x659502: mov     edx, [eax+19Ch]
0x659508: push    0FFFFFFFFh
0x65950A: push    1
0x65950C: push    0
0x65950E: push    edi
0x65950F: mov     ecx, esi
0x659511: call    edx
0x659513: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659518: mov     eax, [esi]; jumptable 00659110 case 2
0x65951A: mov     edx, [eax+51Ch]
0x659520: push    1
0x659522: push    edi
0x659523: mov     ecx, esi
0x659525: call    edx
0x659527: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65952C: cmp     eax, 1Ah; jumptable 00659110 case 1
0x65952F: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659535: mov     eax, [esi]
0x659537: mov     edx, [eax+188h]
0x65953D: push    0FFFFFFFFh
0x65953F: push    edi
0x659540: mov     ecx, esi
0x659542: call    edx
0x659544: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659549: call    sub_579440; jumptable 00659110 case 4
0x65954E: cmp     eax, edi
0x659550: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659556: mov     eax, [esi+8]
0x659559: movsx   ecx, byte ptr [eax+20h]
0x65955D: mov     eax, ds:0B12988h[ecx*4]
0x659564: push    eax
0x659565: mov     ecx, edi; this
0x659567: call    TESObjectREFR_GetName
0x65956C: push    eax
0x65956D: lea     edx, [esp+174h+Format]
0x659571: push    offset aSIsSleepingWit; "%s is sleeping with %s"
0x659576: push    edx
0x659577: call    __sprintf
0x65957C: lea     eax, [esp+17Ch+Format]
0x659580: push    eax; Format
0x659581: call    Interface_ConsolePrint
0x659586: add     esp, 14h
0x659589: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65958E: call    sub_579440; jumptable 00659110 case 5
0x659593: cmp     eax, edi
0x659595: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x65959B: mov     ecx, [esi+8]
0x65959E: movsx   edx, byte ptr [ecx+20h]
0x6595A2: mov     eax, ds:0B12988h[edx*4]
0x6595A9: push    eax
0x6595AA: mov     ecx, edi; this
0x6595AC: call    TESObjectREFR_GetName
0x6595B1: push    eax
0x6595B2: lea     eax, [esp+174h+Format]
0x6595B6: push    offset aSIsEatingWithS; "%s is eating with %s"
0x6595BB: push    eax
0x6595BC: call    __sprintf
0x6595C1: lea     ecx, [esp+17Ch+Format]
0x6595C5: push    ecx; Format
0x6595C6: call    Interface_ConsolePrint
0x6595CB: add     esp, 14h
0x6595CE: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6595D3: mov     edx, [esi]; jumptable 00659110 case 6
0x6595D5: mov     eax, [edx+198h]
0x6595DB: push    0
0x6595DD: push    0FFFFFFFFh
0x6595DF: push    1
0x6595E1: push    edi
0x6595E2: mov     ecx, esi
0x6595E4: call    eax
0x6595E6: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6595EB: cmp     dword ptr [esi+2Ch], 0; jumptable 00659110 case 13
0x6595EF: jnz     short loc_6595FE
0x6595F1: mov     edx, [esi]
0x6595F3: mov     eax, [edx+558h]
0x6595F9: push    edi
0x6595FA: mov     ecx, esi
0x6595FC: call    eax
0x6595FE: mov     eax, [esi+2Ch]
0x659601: test    eax, eax
0x659603: jz      loc_659706
0x659609: mov     ecx, [eax+8]
0x65960C: shr     ecx, 5
0x65960F: test    cl, 1
0x659612: jnz     loc_659706
0x659618: test    byte ptr [ebp+1Eh], 1
0x65961C: jz      short loc_659657
0x65961E: mov     ecx, ds:0B333C4h
0x659624: push    edi
0x659625: call    sub_663A60
0x65962A: test    al, al
0x65962C: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659632: mov     ecx, ds:0B333C4h
0x659638: call    sub_663A00
0x65963D: cmp     eax, ds:0B36A80h
0x659643: jge     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659649: push    0
0x65964B: mov     ecx, ebp
0x65964D: call    sub_5668E0
0x659652: jmp     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659657: mov     al, [ebp+20h]
0x65965A: cmp     al, 12h
0x65965C: jz      loc_659706
0x659662: cmp     al, 1
0x659664: jnz     short loc_6596A9
0x659666: mov     ecx, [ebp+28h]
0x659669: call    sub_452A60
0x65966E: mov     edx, [esi+2Ch]
0x659671: mov     dword ptr [esp+16Ch+var_15C], eax
0x659675: fild    dword ptr [esp+16Ch+var_15C]
0x659679: push    0; unk000
0x65967B: push    edx; a2
0x65967C: mov     ecx, edi; this
0x65967E: fstp    dword ptr [esp+174h+var_15C]
0x659682: call    TesObjectREF_GetDistance
0x659687: fld     dword ptr [esp+16Ch+var_15C]
0x65968B: fcompp
0x65968D: fnstsw  ax
0x65968F: test    ah, 1
0x659692: jnz     def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659698: mov     eax, [esi]
0x65969A: mov     edx, [eax+188h]
0x6596A0: push    1
0x6596A2: push    edi
0x6596A3: mov     ecx, esi
0x6596A5: call    edx
0x6596A7: jmp     short def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x6596A9: mov     eax, [esi+8]
0x6596AC: mov     ecx, [eax+28h]
0x6596AF: call    sub_452A60
0x6596B4: mov     ecx, edi; this
0x6596B6: call    TESObjectREFR_GetParentCell
0x6596BB: test    eax, eax
0x6596BD: jz      short loc_6596D6
0x6596BF: mov     ecx, edi; this
0x6596C1: call    TESObjectREFR_GetParentCell
0x6596C6: mov     ecx, eax; this
0x6596C8: call    TESObjectCELL_IsInterior
0x6596CD: test    al, al
0x6596CF: mov     ecx, offset flt_B36AA0
0x6596D4: jnz     short loc_6596DB
0x6596D6: mov     ecx, offset flt_B36A98
0x6596DB: call    GameSetting_GetSafeFloatPointer
0x6596E0: fld     dword ptr [eax]
0x6596E2: mov     ecx, [esi+2Ch]
0x6596E5: fstp    dword ptr [esp+16Ch+var_15C]
0x6596E9: push    0; unk000
0x6596EB: push    ecx; a2
0x6596EC: mov     ecx, edi; this
0x6596EE: call    TesObjectREF_GetDistance
0x6596F3: fld     dword ptr [esp+16Ch+var_15C]
0x6596F7: fmul    qword ptr ds:0A2FAA0h
0x6596FD: fcompp
0x6596FF: fnstsw  ax
0x659701: test    ah, 1
0x659704: jnz     short def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659706: mov     edx, [esi]
0x659708: mov     eax, [edx+188h]
0x65970E: push    1
0x659710: push    edi
0x659711: mov     ecx, esi
0x659713: call    eax
0x659715: jmp     short def_659110; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659717: mov     edx, [esi]; jumptable 00659110 case 7
0x659719: mov     eax, [edx+508h]
0x65971F: push    edi
0x659720: mov     ecx, esi
0x659722: call    eax
0x659724: mov     ecx, edi; jumptable 00659110 default case, cases 11,12,16,18-22,25,31,33,34,37-39,42
0x659726: call    Actor__GetProcessLevel
0x65972B: cmp     eax, 2
0x65972E: jnz     loc_659891
0x659734: mov     eax, [esi+8]
0x659737: test    eax, eax
0x659739: jz      loc_659891
0x65973F: mov     ecx, [eax+18h]
0x659742: mov     edx, [esi+4]
0x659745: mov     eax, ds:0B152B0h[ecx*4]
0x65974C: cmp     dword ptr [eax+edx*4], 2Ch ; ','
0x659750: jnz     loc_659891
0x659756: mov     edx, [esi]
0x659758: mov     eax, [edx+14Ch]
0x65975E: push    0
0x659760: mov     ecx, esi
0x659762: call    eax
0x659764: mov     ecx, [esi+8]
0x659767: test    ecx, ecx
0x659769: jz      short loc_65979B
0x65976B: cmp     dword ptr [ecx+18h], 0
0x65976F: jnz     short loc_65979B
0x659771: fld     dword ptr ds:0A30634h
0x659777: push    ecx
0x659778: fstp    [esp+170h+var_170]; float
0x65977B: push    0; char
0x65977D: push    edi; int
0x65977E: call    sub_566DC0
0x659783: test    al, al
0x659785: jnz     short loc_65979B
0x659787: mov     edx, [esi]
0x659789: mov     eax, [edx+188h]
0x65978F: push    0FFFFFFFFh
0x659791: push    edi
0x659792: mov     ecx, esi
0x659794: call    eax
0x659796: jmp     loc_6598CC
0x65979B: mov     ecx, [esi+8]
0x65979E: push    400h
0x6597A3: lea     ebp, [edi+44h]
0x6597A6: push    ebp
0x6597A7: push    ecx
0x6597A8: call    Script_AddEventToExtraScript
0x6597AD: mov     ecx, [esi+8]
0x6597B0: add     esp, 0Ch
0x6597B3: test    ecx, ecx
0x6597B5: jz      short loc_6597D6
0x6597B7: call    sub_565DF0
0x6597BC: test    al, al
0x6597BE: jz      short loc_6597D6
0x6597C0: mov     ecx, offset TimeGlobals
0x6597C5: call    TimeGlobals_GetGameDay
0x6597CA: mov     edx, [esi+8]
0x6597CD: mov     ecx, ebp
0x6597CF: push    eax
0x6597D0: push    edx
0x6597D1: call    sub_41FFC0
0x6597D6: mov     ecx, [esi+8]
0x6597D9: test    ecx, ecx
0x6597DB: jz      short loc_6597ED
0x6597DD: call    sub_5660A0
0x6597E2: test    al, al
0x6597E4: jz      short loc_6597ED
0x6597E6: mov     ecx, edi; int
0x6597E8: call    sub_5EAE70
0x6597ED: call    sub_579440
0x6597F2: cmp     eax, edi
0x6597F4: jnz     short loc_659829
0x6597F6: mov     eax, [esi+8]
0x6597F9: movsx   ecx, byte ptr [eax+20h]
0x6597FD: mov     eax, ds:0B12988h[ecx*4]
0x659804: push    eax
0x659805: mov     ecx, edi; this
0x659807: call    TESObjectREFR_GetName
0x65980C: push    eax
0x65980D: lea     edx, [esp+174h+Format]
0x659811: push    offset aSIsDoneWithS; "%s is done with %s"
0x659816: push    edx
0x659817: call    __sprintf
0x65981C: lea     eax, [esp+17Ch+Format]
0x659820: push    eax; Format
0x659821: call    Interface_ConsolePrint
0x659826: add     esp, 14h
0x659829: mov     eax, [esi+44h]
0x65982C: test    eax, eax
0x65982E: jz      short loc_659839
0x659830: push    eax
0x659831: call    FormHeapFree
0x659836: add     esp, 4
0x659839: mov     dword ptr [esi+44h], 0
0x659840: lea     ebp, [esi+3Ch]
0x659843: cmp     dword ptr [ebp+4], 0
0x659847: jnz     short loc_65984F
0x659849: cmp     dword ptr [ebp+0], 0
0x65984D: jz      short loc_659869
0x65984F: mov     ebx, [ebp+0]
0x659852: test    ebx, ebx
0x659854: jz      short loc_65985F
0x659856: push    ebx
0x659857: call    FormHeapFree
0x65985C: add     esp, 4
0x65985F: push    ebx
0x659860: mov     ecx, ebp
0x659862: call    BSSimpleList_Remove
0x659867: jmp     short loc_659843
0x659869: mov     ebp, [esi+8]
0x65986C: test    ebp, ebp
0x65986E: jz      short loc_659891
0x659870: cmp     dword ptr [ebp+30h], 0
0x659874: jnz     short loc_659891
0x659876: push    edi
0x659877: mov     ecx, esi
0x659879: call    sub_648E40
0x65987E: fld     [esp+16Ch+var_14C]
0x659882: cmp     ebp, [esi+8]
0x659885: fstp    dword ptr [esi+0Ch]
0x659888: jz      short loc_659891
0x65988A: mov     dword ptr [esi+4], 0
0x659891: cmp     byte ptr ds:0B15800h, 0
0x659898: jz      short loc_6598BE
0x65989A: test    edi, edi
0x65989C: jz      short loc_6598BE
0x65989E: mov     ecx, ds:0B3BF80h
0x6598A4: test    ecx, ecx
0x6598A6: jz      short loc_6598BE
0x6598A8: push    edi
0x6598A9: call    sub_6825C0
0x6598AE: test    al, al
0x6598B0: jnz     short loc_6598CC
0x6598B2: mov     ecx, ds:0B3BF80h
0x6598B8: push    edi
0x6598B9: call    sub_6826D0
0x6598BE: mov     ecx, [esp+16Ch+var_150]
0x6598C2: mov     ecx, [ecx+58h]
0x6598C5: mov     edx, [ecx]
0x6598C7: mov     eax, [edx+20h]
0x6598CA: call    eax
0x6598CC: pop     edi
0x6598CD: pop     ebp
0x6598CE: pop     ebx
0x6598CF: mov     ecx, [esp+160h+var_4]
0x6598D6: pop     esi
0x6598D7: xor     ecx, esp
0x6598D9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6598DE: add     esp, 15Ch
0x6598E4: retn    4
