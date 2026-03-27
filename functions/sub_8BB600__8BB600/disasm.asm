0x8BB600: push    ebx
0x8BB601: mov     ebx, [esp+4+arg_4]
0x8BB605: push    esi
0x8BB606: mov     esi, ecx
0x8BB608: mov     eax, [esi]
0x8BB60A: push    ebx
0x8BB60B: lea     ecx, [esp+0Ch+arg_4]
0x8BB60F: push    ecx
0x8BB610: mov     ecx, esi
0x8BB612: call    dword ptr [eax+10h]
0x8BB615: cmp     byte ptr [eax], 0
0x8BB618: jz      short loc_8BB67D
0x8BB61A: push    edi
0x8BB61B: mov     edi, [esp+14h+var_4]
0x8BB61F: cmp     edi, 3; switch 4 cases
0x8BB622: mov     eax, offset EmptyString
0x8BB627: mov     byte ptr [esp+14h], 0
0x8BB62C: ja      short def_8BB62E
0x8BB62E: jmp     ds:jpt_8BB62E[edi*4]; switch jump
0x8BB635: mov     eax, offset aReport; jumptable 008BB62E case 0
0x8BB63A: jmp     short def_8BB62E
0x8BB63C: mov     eax, offset aWarning; jumptable 008BB62E case 1
0x8BB641: jmp     short def_8BB62E
0x8BB643: mov     eax, offset aAssert; jumptable 008BB62E case 2
0x8BB648: jmp     short loc_8BB64F
0x8BB64A: mov     eax, offset aError; jumptable 008BB62E case 3
0x8BB64F: mov     byte ptr [esp+14h], 1
