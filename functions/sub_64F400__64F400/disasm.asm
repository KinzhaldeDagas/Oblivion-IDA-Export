0x64F400: sub     esp, 0Ch
0x64F403: push    ebx
0x64F404: push    esi
0x64F405: push    edi
0x64F406: mov     edi, ecx
0x64F408: mov     ebx, [edi+8]
0x64F40B: mov     ecx, [ebx+28h]
0x64F40E: mov     [esp+18h+var_4], edi
0x64F412: call    sub_569E60
0x64F417: mov     esi, [esp+18h+arg_0]
0x64F41B: mov     ecx, esi
0x64F41D: mov     [esp+18h+friendlyFight_], eax
0x64F421: mov     [esp+18h+var_9], 0
0x64F426: call    Actor_GetBaseClass
0x64F42B: mov     ecx, eax
0x64F42D: call    TESClass__IsGuardClass
0x64F432: test    al, al
0x64F434: jnz     loc_64F5C5
0x64F43A: mov     ebx, [ebx+3Ch]
0x64F43D: test    ebx, ebx
0x64F43F: mov     [esp+18h+arg_0], ebx
0x64F443: jz      loc_64F5C1
0x64F449: push    ebp
0x64F44A: lea     ebx, [ebx+0]
0x64F450: mov     eax, [esp+1Ch+arg_0]
0x64F454: mov     ebx, [eax]
0x64F456: test    ebx, ebx
0x64F458: jz      loc_64F58E
0x64F45E: mov     edi, [ebx+8]
0x64F461: xor     ebp, ebp
0x64F463: test    edi, edi
0x64F465: jz      short loc_64F48E
0x64F467: mov     edx, [edi]
0x64F469: mov     eax, [edx+190h]
0x64F46F: mov     ecx, edi
0x64F471: call    eax
0x64F473: test    al, al
0x64F475: jz      short loc_64F48E
0x64F477: push    ebp; int
0x64F478: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64F47D: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64F482: push    ebp; int
0x64F483: push    edi; void *
0x64F484: call    OblivionDynamicCast
0x64F489: add     esp, 14h
0x64F48C: mov     ebp, eax
0x64F48E: cmp     byte ptr [ebx+10h], 0
0x64F492: jnz     short loc_64F4DB
0x64F494: fild    dword ptr ds:0B36A50h
0x64F49A: mov     edx, [esi]
0x64F49C: mov     eax, [edx+174h]
0x64F4A2: push    ebx; a7
0x64F4A3: push    offset sub_62E890; a6
0x64F4A8: push    ecx
0x64F4A9: mov     ecx, esi
0x64F4AB: fstp    [esp+28h+a5]; a5
0x64F4AE: call    eax
0x64F4B0: fild    dword ptr ds:0B36A50h
0x64F4B6: mov     edx, [esi]
0x64F4B8: push    eax; a4
0x64F4B9: mov     eax, [edx+174h]
0x64F4BF: push    ecx
0x64F4C0: mov     ecx, esi
0x64F4C2: fstp    [esp+30h+a3]; a3
0x64F4C5: call    eax
0x64F4C7: push    eax; a2
0x64F4C8: mov     ecx, esi; this
0x64F4CA: call    TESObjectREFR_GetParentCell
0x64F4CF: mov     ecx, ds:0B33A98h
0x64F4D5: push    eax; a1
0x64F4D6: call    sub_446B90
0x64F4DB: cmp     [esp+1Ch+var_9], 0
0x64F4E0: jnz     loc_64F577
0x64F4E6: cmp     dword ptr [ebx+4], 2
0x64F4EA: jle     short loc_64F52D
0x64F4EC: test    ebp, ebp
0x64F4EE: jz      loc_64F577
0x64F4F4: mov     edi, [esp+1Ch+friendlyFight_]
0x64F4F8: push    64h ; 'd'
0x64F4FA: push    0
0x64F4FC: push    0
0x64F4FE: push    1
0x64F500: push    0
0x64F502: push    edi
0x64F503: mov     ecx, esi
0x64F505: call    TesObjectREF_GetDistance
0x64F50A: mov     edx, [esi]
0x64F50C: mov     eax, [edx+284h]
0x64F512: push    ecx
0x64F513: fstp    [esp+30h+a3]
0x64F516: push    21h ; '!'
0x64F518: mov     ecx, esi
0x64F51A: call    eax
0x64F51C: mov     edx, [esi]
0x64F51E: push    eax
0x64F51F: mov     eax, [edx+224h]
0x64F525: push    ebp
0x64F526: mov     ecx, esi
0x64F528: call    eax
0x64F52A: push    eax
0x64F52B: jmp     short loc_64F558
0x64F52D: mov     edi, [esp+1Ch+friendlyFight_]
0x64F531: push    64h ; 'd'; responsibility
0x64F533: push    0; a7
0x64F535: push    0; a6
0x64F537: push    0; a5
0x64F539: push    0
0x64F53B: push    edi
0x64F53C: mov     ecx, esi
0x64F53E: call    TesObjectREF_GetDistance
0x64F543: mov     edx, [esi]
0x64F545: mov     eax, [edx+284h]
0x64F54B: push    ecx
0x64F54C: fstp    [esp+30h+a3]
0x64F54F: push    21h ; '!'
0x64F551: mov     ecx, esi
0x64F553: call    eax
0x64F555: push    eax; distanceToTarget
0x64F556: push    0; aggressionStat
0x64F558: mov     edx, [esi]
0x64F55A: mov     eax, [edx+224h]
0x64F560: push    edi; friendlyFight?
0x64F561: mov     ecx, esi
0x64F563: call    eax
0x64F565: push    eax; disposition
0x64F566: call    shouldActorFight
0x64F56B: add     esp, 20h
0x64F56E: test    eax, eax
0x64F570: jle     short loc_64F577
0x64F572: mov     [esp+1Ch+var_9], 1
0x64F577: mov     ecx, [esp+1Ch+arg_0]
0x64F57B: mov     eax, [ecx+4]
0x64F57E: test    eax, eax
0x64F580: mov     edi, [esp+1Ch+var_4]
0x64F584: mov     [esp+1Ch+arg_0], eax
0x64F588: jnz     loc_64F450
0x64F58E: cmp     [esp+1Ch+var_9], 0
0x64F593: pop     ebp
0x64F594: jz      short loc_64F5C1
0x64F596: mov     eax, [esp+18h+friendlyFight_]
0x64F59A: mov     edx, [edi]
0x64F59C: mov     edx, [edx+228h]
0x64F5A2: push    1
0x64F5A4: push    0
0x64F5A6: push    0
0x64F5A8: push    0
0x64F5AA: push    0
0x64F5AC: push    0
0x64F5AE: push    0
0x64F5B0: push    0
0x64F5B2: push    eax
0x64F5B3: push    esi
0x64F5B4: mov     ecx, edi
0x64F5B6: call    edx
0x64F5B8: pop     edi
0x64F5B9: pop     esi
0x64F5BA: pop     ebx
0x64F5BB: add     esp, 0Ch
0x64F5BE: retn    4
0x64F5C1: push    3
0x64F5C3: jmp     short loc_64F5C7
0x64F5C5: push    1
0x64F5C7: mov     eax, [edi]
0x64F5C9: mov     edx, [eax+188h]
0x64F5CF: push    esi
0x64F5D0: mov     ecx, edi
0x64F5D2: call    edx
0x64F5D4: pop     edi
0x64F5D5: pop     esi
0x64F5D6: pop     ebx
0x64F5D7: add     esp, 0Ch
0x64F5DA: retn    4
