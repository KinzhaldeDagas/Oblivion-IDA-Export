0x584500: sub     esp, 8
0x584503: push    esi
0x584504: push    edi
0x584505: mov     edi, ecx
0x584507: movzx   eax, byte ptr [edi]
0x58450A: and     eax, 7Fh
0x58450D: xor     esi, esi
0x58450F: cmp     eax, 4; switch 5 cases
0x584512: ja      def_584518
0x584518: jmp     ds:jpt_584518[eax*4]; switch jump
0x58451F: mov     ecx, [esp+10h+arg_4]; jumptable 00584518 case 0
0x584523: call    sub_488DF0
0x584528: mov     ecx, [esp+10h+arg_0]
0x58452C: mov     esi, eax
0x58452E: call    sub_488DF0
0x584533: push    esi; unsigned __int8 *
0x584534: push    eax; unsigned __int8 *
0x584535: call    __mbsicmp
0x58453A: add     esp, 8
0x58453D: mov     esi, eax
0x58453F: jmp     def_584518
0x584544: mov     ecx, [esp+10h+arg_0]; jumptable 00584518 case 1
0x584548: push    0
0x58454A: push    0
0x58454C: push    0
0x58454E: call    sub_488E50
0x584553: fstp    [esp+10h+var_8]
0x584557: mov     ecx, [esp+10h+arg_4]
0x58455B: push    0
0x58455D: push    0
0x58455F: push    0
0x584561: call    sub_488E50
0x584566: fsubr   [esp+10h+var_8]
0x58456A: jmp     short loc_5845E6
0x58456C: mov     ecx, [esp+10h+arg_0]; jumptable 00584518 case 2
0x584570: push    0
0x584572: push    0
0x584574: push    0
0x584576: call    sub_485260
0x58457B: fstp    [esp+10h+var_8]
0x58457F: mov     ecx, [esp+10h+arg_4]
0x584583: push    0
0x584585: push    0
0x584587: push    0
0x584589: call    sub_485260
0x58458E: fsubr   [esp+10h+var_8]
0x584592: jmp     short loc_5845E6
0x584594: mov     ecx, [esp+10h+arg_0]; jumptable 00584518 case 3
0x584598: push    0
0x58459A: push    0
0x58459C: push    0
0x58459E: call    sub_4891C0
0x5845A3: fstp    [esp+10h+var_8]
0x5845A7: mov     ecx, [esp+10h+arg_4]
0x5845AB: push    0
0x5845AD: push    0
0x5845AF: push    0
0x5845B1: call    sub_4891C0
0x5845B6: fsubr   [esp+10h+var_8]
0x5845BA: jmp     short loc_5845E6
0x5845BC: mov     ecx, [esp+10h+arg_0]; jumptable 00584518 case 4
0x5845C0: push    0
0x5845C2: push    0
0x5845C4: push    0
0x5845C6: push    1
0x5845C8: call    ContainerEntryExtraData_GetHealthFracOrUses
0x5845CD: fstp    [esp+10h+var_8]
0x5845D1: mov     ecx, [esp+10h+arg_4]
0x5845D5: push    0
0x5845D7: push    0
0x5845D9: push    0
0x5845DB: push    1
0x5845DD: call    ContainerEntryExtraData_GetHealthFracOrUses
0x5845E2: fsubr   [esp+10h+var_8]
0x5845E6: fstp    [esp+10h+arg_0]
0x5845EA: fldz
0x5845EC: fld     [esp+10h+arg_0]
0x5845F0: fcom    st(1)
0x5845F2: fnstsw  ax
0x5845F4: test    ah, 5
0x5845F7: jp      short loc_584602
0x5845F9: fstp    st(1)
0x5845FB: or      esi, 0FFFFFFFFh
0x5845FE: fstp    st
0x584600: jmp     short def_584518
0x584602: fcompp
0x584604: fnstsw  ax
0x584606: test    ah, 41h
0x584609: jnz     short def_584518
0x58460B: mov     esi, 1
