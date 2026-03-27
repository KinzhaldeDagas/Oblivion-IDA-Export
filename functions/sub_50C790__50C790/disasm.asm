0x50C790: sub     esp, 8
0x50C793: mov     edx, [esp+8+l]
0x50C797: push    ebx
0x50C798: push    esi
0x50C799: mov     esi, [esp+10h+a4]
0x50C79D: lea     eax, [esp+10h+var_4]
0x50C7A1: push    eax
0x50C7A2: mov     eax, [esp+14h+arg_10]
0x50C7A6: lea     ecx, [esp+14h+var_8]
0x50C7AA: push    ecx; UInt16
0x50C7AB: mov     ecx, [esp+18h+arg_C]
0x50C7AF: push    edx; l
0x50C7B0: mov     edx, [esp+1Ch+a3]
0x50C7B4: push    eax; a6
0x50C7B5: mov     eax, [esp+20h+arg_4]
0x50C7B9: push    ecx; a5
0x50C7BA: mov     ecx, [esp+24h+a1]
0x50C7BE: push    esi; a4
0x50C7BF: push    edx; a3
0x50C7C0: push    eax; a2
0x50C7C1: xor     ebx, ebx
0x50C7C3: push    ecx; a1
0x50C7C4: mov     [esp+34h+var_4], ebx
0x50C7C8: mov     dword ptr [esp+34h+var_8], ebx
0x50C7CC: call    Script_ExtractArgs
0x50C7D1: add     esp, 24h
0x50C7D4: test    al, al
0x50C7D6: jnz     short loc_50C7DE
0x50C7D8: pop     esi
0x50C7D9: pop     ebx
0x50C7DA: add     esp, 8
0x50C7DD: retn
0x50C7DE: cmp     esi, ds:0B333C4h
0x50C7E4: jz      loc_50C8C5
0x50C7EA: cmp     esi, ebx
0x50C7EC: jz      loc_50C8C5
0x50C7F2: push    ebx; int
0x50C7F3: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C7F8: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C7FD: push    ebx; int
0x50C7FE: push    esi; void *
0x50C7FF: call    OblivionDynamicCast
0x50C804: mov     esi, eax
0x50C806: add     esp, 14h
0x50C809: cmp     esi, ebx
0x50C80B: jz      loc_50C8C5
0x50C811: cmp     [esi+58h], ebx
0x50C814: jz      loc_50C8C5
0x50C81A: mov     edx, [esi]
0x50C81C: mov     eax, [edx+330h]
0x50C822: push    edi
0x50C823: mov     ecx, esi
0x50C825: call    eax
0x50C827: mov     edi, eax
0x50C829: cmp     edi, ebx
0x50C82B: jz      short loc_50C8AB
0x50C82D: push    ebx
0x50C82E: mov     ecx, edi
0x50C830: call    sub_6135F0
0x50C835: push    eax
0x50C836: mov     ecx, edi
0x50C838: call    sub_6210D0
0x50C83D: mov     ecx, [esi+58h]
0x50C840: mov     edx, [ecx]
0x50C842: mov     eax, [edx+184h]
0x50C848: push    ebx; int
0x50C849: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x50C84E: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x50C853: push    ebx; int
0x50C854: call    eax
0x50C856: push    eax; void *
0x50C857: call    OblivionDynamicCast
0x50C85C: mov     esi, eax
0x50C85E: add     esp, 14h
0x50C861: cmp     esi, ebx
0x50C863: jz      short loc_50C8C4
0x50C865: mov     eax, [esp+14h+var_4]
0x50C869: cmp     eax, ebx
0x50C86B: mov     edi, [esi+24h]
0x50C86E: jz      short loc_50C884
0x50C870: push    eax
0x50C871: mov     ecx, edi
0x50C873: call    TESPackage_LocationData_SetReference
0x50C878: pop     edi
0x50C879: mov     [esi+3Ch], bl
0x50C87C: pop     esi
0x50C87D: mov     al, 1
0x50C87F: pop     ebx
0x50C880: add     esp, 8
0x50C883: retn
0x50C884: cmp     dword ptr [esp+14h+var_8], ebx
0x50C888: jz      short loc_50C8C4
0x50C88A: push    1
0x50C88C: mov     ecx, edi
0x50C88E: call    TESPackage_LocationData_SetType
0x50C893: mov     ecx, dword ptr [esp+14h+var_8]
0x50C897: push    ecx
0x50C898: mov     ecx, edi
0x50C89A: call    sub_569810
0x50C89F: pop     edi
0x50C8A0: mov     [esi+3Ch], bl
0x50C8A3: pop     esi
0x50C8A4: mov     al, 1
0x50C8A6: pop     ebx
0x50C8A7: add     esp, 8
0x50C8AA: retn
0x50C8AB: mov     eax, [esp+14h+var_4]
0x50C8AF: mov     ecx, dword ptr [esp+14h+var_8]
0x50C8B3: mov     edx, [esi]
0x50C8B5: mov     edx, [edx+318h]
0x50C8BB: push    eax
0x50C8BC: push    ecx
0x50C8BD: push    ebx
0x50C8BE: push    ebx
0x50C8BF: push    ebx
0x50C8C0: mov     ecx, esi
0x50C8C2: call    edx
0x50C8C4: pop     edi
0x50C8C5: pop     esi
0x50C8C6: mov     al, 1
0x50C8C8: pop     ebx
0x50C8C9: add     esp, 8
0x50C8CC: retn
