0x4AE220: push    0FFFFFFFFh
0x4AE222: push    offset SEH_4AE220
0x4AE227: mov     eax, large fs:0
0x4AE22D: push    eax
0x4AE22E: sub     esp, 8
0x4AE231: push    ebx
0x4AE232: push    ebp
0x4AE233: push    esi
0x4AE234: push    edi
0x4AE235: mov     eax, ds:0B30AACh
0x4AE23A: xor     eax, esp
0x4AE23C: push    eax
0x4AE23D: lea     eax, [esp+28h+var_C]
0x4AE241: mov     large fs:0, eax
0x4AE247: mov     esi, ecx
0x4AE249: mov     eax, [esp+28h+arg_4]
0x4AE24D: push    0; int
0x4AE24F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4AE254: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4AE259: push    0; int
0x4AE25B: push    eax; void *
0x4AE25C: call    OblivionDynamicCast
0x4AE261: mov     edi, eax
0x4AE263: mov     eax, [esp+3Ch+arg_0]
0x4AE267: add     esp, 14h
0x4AE26A: test    eax, eax
0x4AE26C: mov     [esp+28h+arg_4], edi
0x4AE270: jz      loc_4AE4A4
0x4AE276: test    edi, edi
0x4AE278: jz      loc_4AE4A4
0x4AE27E: mov     ecx, [eax+8]
0x4AE281: shr     ecx, 0Dh
0x4AE284: test    cl, 1
0x4AE287: jnz     loc_4AE46D
0x4AE28D: cmp     dword ptr [esi-8], 0
0x4AE291: jz      loc_4AE46D
0x4AE297: mov     ecx, offset TimeGlobals
0x4AE29C: call    sub_402DC0
0x4AE2A1: mov     bl, [eax+esi-4]
0x4AE2A5: test    bl, bl
0x4AE2A7: jbe     loc_4AE46D
0x4AE2AD: push    0; Seed
0x4AE2AF: call    GetRandomLargeInteger?
0x4AE2B4: cdq
0x4AE2B5: mov     ecx, 64h ; 'd'
0x4AE2BA: idiv    ecx
0x4AE2BC: movzx   eax, bl
0x4AE2BF: add     esp, 4
0x4AE2C2: cmp     edx, eax
0x4AE2C4: jge     loc_4AE46D
0x4AE2CA: mov     ebp, [esi-8]
0x4AE2CD: push    0; int
0x4AE2CF: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x4AE2D4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AE2D9: push    0; int
0x4AE2DB: push    ebp; void *
0x4AE2DC: call    OblivionDynamicCast
0x4AE2E1: add     esp, 14h
0x4AE2E4: test    eax, eax
0x4AE2E6: jz      short loc_4AE2ED
0x4AE2E8: mov     edi, [eax+4]
0x4AE2EB: jmp     short loc_4AE2EF
0x4AE2ED: xor     edi, edi
0x4AE2EF: xor     ebx, ebx
0x4AE2F1: cmp     edi, ebx
0x4AE2F3: jz      loc_4AE3B1
0x4AE2F9: push    14h; Size
0x4AE2FB: call    FormHeapAlloc
0x4AE300: add     esp, 4
0x4AE303: mov     [esp+28h+string], eax
0x4AE307: cmp     eax, ebx
0x4AE309: mov     [esp+28h+var_4], ebx
0x4AE30D: jz      short loc_4AE31A
0x4AE30F: mov     ecx, eax
0x4AE311: call    ExtraDataList_constr
0x4AE316: mov     esi, eax
0x4AE318: jmp     short loc_4AE31C
0x4AE31A: xor     esi, esi
0x4AE31C: push    1
0x4AE31E: mov     ecx, esi
0x4AE320: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4AE328: call    ExtraDataList_SetExtraCount
0x4AE32D: cmp     esi, ebx
0x4AE32F: jz      short loc_4AE39B
0x4AE331: mov     ecx, esi
0x4AE333: call    ExtraDataList_GetExtraScript
0x4AE338: test    eax, eax
0x4AE33A: jnz     short loc_4AE39B
0x4AE33C: push    edi
0x4AE33D: mov     ecx, esi
0x4AE33F: call    ExtraDataList_AddScript
0x4AE344: mov     ecx, esi
0x4AE346: call    ExtraDataList_GetExtraScript
0x4AE34B: mov     ecx, eax
0x4AE34D: call    Script_CreateEventList
0x4AE352: push    eax
0x4AE353: mov     ecx, esi
0x4AE355: call    ExtraDataList_SetScriptEventList
0x4AE35A: push    58h ; 'X'; Size
0x4AE35C: call    FormHeapAlloc
0x4AE361: add     esp, 4
0x4AE364: mov     [esp+28h+string], eax
0x4AE368: cmp     eax, ebx
0x4AE36A: mov     [esp+28h+var_4], 1
0x4AE372: jz      short loc_4AE37D
0x4AE374: mov     ecx, eax
0x4AE376: call    TESObjectREFR_constr
0x4AE37B: mov     ebx, eax
0x4AE37D: push    0; ArgList
0x4AE37F: push    0; int
0x4AE381: mov     ecx, esi; this
0x4AE383: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4AE38B: call    ExtraDataList_GetExtraScriptEventList
0x4AE390: push    eax; int
0x4AE391: push    ebx; int
0x4AE392: mov     ecx, edi; int
0x4AE394: call    Script_Run
0x4AE399: xor     ebx, ebx
0x4AE39B: mov     edi, [esp+28h+arg_4]
0x4AE39F: mov     edx, [edi]
0x4AE3A1: mov     eax, [edx+114h]
0x4AE3A7: push    1
0x4AE3A9: push    esi
0x4AE3AA: push    ebp
0x4AE3AB: mov     ecx, edi
0x4AE3AD: call    eax
0x4AE3AF: jmp     short loc_4AE3C2
0x4AE3B1: mov     ecx, [esp+28h+arg_4]
0x4AE3B5: push    1
0x4AE3B7: push    ebx
0x4AE3B8: push    ebp
0x4AE3B9: call    TESObjectREFR_AddItem_Abbrev
0x4AE3BE: mov     edi, [esp+28h+arg_4]
0x4AE3C2: cmp     edi, ds:0B333C4h
0x4AE3C8: jnz     loc_4AE499
0x4AE3CE: mov     [esp+28h+string], ebx
0x4AE3D2: mov     [esp+28h+var_10], bx
0x4AE3D7: mov     [esp+28h+var_E], bx
0x4AE3DC: mov     eax, [ebp+28h]
0x4AE3DF: cmp     eax, ebx
0x4AE3E1: mov     [esp+28h+var_4], 2
0x4AE3E9: jnz     short loc_4AE3F0
0x4AE3EB: mov     eax, offset EmptyString
0x4AE3F0: mov     ecx, ds:0B35820h
0x4AE3F6: push    eax; ArgList
0x4AE3F7: push    ecx; Format
0x4AE3F8: lea     edx, [esp+30h+string]
0x4AE3FC: push    edx; int
0x4AE3FD: call    BSStringT_Static_Format
0x4AE402: fld     dword ptr ds:0A31E2Ch
0x4AE408: mov     edi, [esp+34h+string]
0x4AE40C: fstp    [esp+34h+duration]; duration
0x4AE410: add     esp, 8
0x4AE413: push    1; unk2
0x4AE415: push    ebx; unk1
0x4AE416: push    edi; string
0x4AE417: call    GameUI_QueueMessage
0x4AE41C: mov     eax, ds:0B33398h
0x4AE421: mov     ecx, [eax+24h]
0x4AE424: add     esp, 10h
0x4AE427: cmp     ecx, ebx
0x4AE429: jz      short loc_4AE45A
0x4AE42B: push    1
0x4AE42D: push    121h
0x4AE432: push    offset aItmpickuporgan; "ITMPickupOrganic"
0x4AE437: call    PlaySound???
0x4AE43C: mov     esi, eax
0x4AE43E: cmp     esi, ebx
0x4AE440: jz      short loc_4AE45A
0x4AE442: push    ebx
0x4AE443: mov     ecx, esi
0x4AE445: call    sub_6B7190
0x4AE44A: mov     ecx, esi; this
0x4AE44C: call    sub_6B73E0
0x4AE451: push    esi
0x4AE452: call    FormHeapFree
0x4AE457: add     esp, 4
0x4AE45A: push    edi
0x4AE45B: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4AE463: call    FormHeapFree
0x4AE468: add     esp, 4
0x4AE46B: jmp     short loc_4AE499
0x4AE46D: cmp     edi, ds:0B333C4h
0x4AE473: jnz     short loc_4AE499
0x4AE475: fld     dword ptr ds:0A31E2Ch
0x4AE47B: push    ecx
0x4AE47C: mov     ecx, ds:0B35828h
0x4AE482: fstp    [esp+2Ch+duration]; duration
0x4AE485: push    1; unk2
0x4AE487: push    0; unk1
0x4AE489: push    ecx; string
0x4AE48A: call    GameUI_QueueMessage
0x4AE48F: push    1Eh; int
0x4AE491: call    sub_57DE50
0x4AE496: add     esp, 14h
0x4AE499: mov     ecx, [esp+28h+arg_0]
0x4AE49D: push    1
0x4AE49F: call    sub_46AA00
0x4AE4A4: mov     al, 1
0x4AE4A6: mov     ecx, [esp+28h+var_C]
0x4AE4AA: mov     large fs:0, ecx
0x4AE4B1: pop     ecx
0x4AE4B2: pop     edi
0x4AE4B3: pop     esi
0x4AE4B4: pop     ebp
0x4AE4B5: pop     ebx
0x4AE4B6: add     esp, 14h
0x4AE4B9: retn    14h
