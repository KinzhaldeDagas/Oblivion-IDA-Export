0x505C80: push    ecx
0x505C81: push    esi
0x505C82: push    edi
0x505C83: mov     edi, [esp+0Ch+a4]
0x505C87: push    0; int
0x505C89: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x505C8E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x505C93: push    0; int
0x505C95: push    edi; void *
0x505C96: mov     dword ptr [esp+20h+var_4], 0
0x505C9E: call    OblivionDynamicCast
0x505CA3: mov     esi, eax
0x505CA5: add     esp, 14h
0x505CA8: test    esi, esi
0x505CAA: jz      short loc_505CE0
0x505CAC: mov     ecx, [esp+0Ch+l]
0x505CB0: mov     edx, [esp+0Ch+arg_10]
0x505CB4: lea     eax, [esp+0Ch+var_4]
0x505CB8: push    eax; UInt16
0x505CB9: mov     eax, [esp+10h+arg_C]
0x505CBD: push    ecx; l
0x505CBE: mov     ecx, [esp+14h+a3]
0x505CC2: push    edx; a6
0x505CC3: mov     edx, [esp+18h+arg_4]
0x505CC7: push    eax; a5
0x505CC8: mov     eax, [esp+1Ch+a1]
0x505CCC: push    edi; a4
0x505CCD: push    ecx; a3
0x505CCE: push    edx; a2
0x505CCF: push    eax; a1
0x505CD0: call    Script_ExtractArgs
0x505CD5: add     esp, 20h
0x505CD8: test    al, al
0x505CDA: jnz     short loc_505CE0
0x505CDC: pop     edi
0x505CDD: pop     esi
0x505CDE: pop     ecx
0x505CDF: retn
0x505CE0: cmp     byte ptr ds:0B361ACh, 0
0x505CE7: jz      short loc_505CFE
0x505CE9: mov     ecx, esi
0x505CEB: call    sub_5FAA70
0x505CF0: push    eax
0x505CF1: push    offset aActorBarterGol; "Actor Barter Gold is  %d "
0x505CF6: call    Interface_ConsolePrint
0x505CFB: add     esp, 8
0x505CFE: pop     edi
0x505CFF: mov     al, 1
0x505D01: pop     esi
0x505D02: pop     ecx
0x505D03: retn
