0x61D4B0: push    ebx
0x61D4B1: push    esi
0x61D4B2: mov     esi, ecx
0x61D4B4: mov     ecx, [esi+3Ch]; this
0x61D4B7: call    Actor_IsCreature
0x61D4BC: test    al, al
0x61D4BE: mov     bl, [esp+8+arg_8]
0x61D4C2: jz      short loc_61D4C8
0x61D4C4: test    bl, bl
0x61D4C6: jmp     short loc_61D502
0x61D4C8: test    bl, bl
0x61D4CA: jnz     short loc_61D508
0x61D4CC: mov     eax, [esi+70h]
0x61D4CF: cmp     eax, 7
0x61D4D2: jz      loc_61D5AA
0x61D4D8: cmp     eax, 0Ch
0x61D4DB: jz      loc_61D5AA
0x61D4E1: mov     eax, [esi+6Ch]
0x61D4E4: cmp     eax, 8
0x61D4E7: jz      loc_61D5AA
0x61D4ED: cmp     eax, 9
0x61D4F0: jz      loc_61D5AA
0x61D4F6: cmp     eax, 5
0x61D4F9: jz      loc_61D5AA
0x61D4FF: cmp     eax, 6
0x61D502: jz      loc_61D5AA
0x61D508: mov     eax, [esi+3Ch]
0x61D50B: push    ebp; a5
0x61D50C: mov     ebp, [esp+0Ch+a3]
0x61D510: push    0; a4
0x61D512: push    ebp; a3
0x61D513: push    eax; a2
0x61D514: call    TESObjectREFR_GetDistanceBetween?
0x61D519: fcomp   qword ptr ds:0A529C0h
0x61D51F: add     esp, 0Ch
0x61D522: fnstsw  ax
0x61D524: test    ah, 41h
0x61D527: jnp     short loc_61D52D
0x61D529: test    bl, bl
0x61D52B: jz      short loc_61D5A9
0x61D52D: mov     ebx, [esi+3Ch]
0x61D530: push    edi
0x61D531: mov     edi, [ebx]
0x61D533: push    0
0x61D535: push    0
0x61D537: push    1
0x61D539: push    1
0x61D53B: mov     ecx, esi
0x61D53D: add     edi, 318h
0x61D543: call    sub_6135F0
0x61D548: push    eax
0x61D549: mov     eax, [edi]
0x61D54B: mov     ecx, ebx
0x61D54D: call    eax
0x61D54F: mov     ecx, [esi+3Ch]
0x61D552: push    0; int
0x61D554: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x61D559: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x61D55E: push    0; int
0x61D560: call    sub_5E0380
0x61D565: push    eax; void *
0x61D566: call    OblivionDynamicCast
0x61D56B: add     esp, 14h
0x61D56E: test    eax, eax
0x61D570: pop     edi
0x61D571: jz      short loc_61D5A9
0x61D573: push    ebp
0x61D574: mov     ecx, eax
0x61D576: call    sub_626C90
0x61D57B: push    6
0x61D57D: mov     ecx, esi
0x61D57F: mov     [esi+12Ch], ebp
0x61D585: call    sub_619920
0x61D58A: fld     dword ptr [esi+44h]
0x61D58D: fstp    dword ptr [esi+0D4h]
0x61D593: fld     [esp+0Ch+arg_4]
0x61D597: fstp    dword ptr [esi+0D8h]
0x61D59D: fld     dword ptr ds:0A30634h
0x61D5A3: fstp    dword ptr [esi+0DCh]
0x61D5A9: pop     ebp
0x61D5AA: pop     esi
0x61D5AB: pop     ebx
0x61D5AC: retn    0Ch
