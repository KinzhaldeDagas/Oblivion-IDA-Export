0x48B1D0: sub     esp, 24h
0x48B1D3: push    ebx
0x48B1D4: push    ebp
0x48B1D5: push    esi
0x48B1D6: mov     esi, [esp+30h+a3]
0x48B1DA: mov     eax, [esi]
0x48B1DC: mov     edx, [eax+170h]
0x48B1E2: push    edi
0x48B1E3: xor     ebp, ebp
0x48B1E5: push    ebp; int
0x48B1E6: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x48B1EB: mov     ebx, ecx
0x48B1ED: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B1F2: push    ebp; int
0x48B1F3: mov     ecx, esi
0x48B1F5: mov     [esp+44h+var_24], ebx
0x48B1F9: call    edx
0x48B1FB: push    eax; void *
0x48B1FC: call    OblivionDynamicCast
0x48B201: add     esp, 14h
0x48B204: push    ebp; int
0x48B205: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x48B20A: mov     edi, eax
0x48B20C: mov     eax, [esi]
0x48B20E: mov     edx, [eax+170h]
0x48B214: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B219: push    ebp; int
0x48B21A: mov     ecx, esi
0x48B21C: call    edx
0x48B21E: push    eax; void *
0x48B21F: call    OblivionDynamicCast
0x48B224: add     esp, 14h
0x48B227: cmp     edi, ebp
0x48B229: mov     [esp+34h+var_C], eax
0x48B22D: jz      short loc_48B24A
0x48B22F: mov     ecx, edi; this
0x48B231: call    TESCreature__GetSoulLevel
0x48B236: push    eax
0x48B237: mov     [esp+38h+var_14], eax
0x48B23B: call    Actor__GetSoulValueFromLevel
0x48B240: mov     [esp+38h+a3], eax
0x48B244: fild    [esp+38h+a3]
0x48B248: jmp     short loc_48B261
0x48B24A: push    5
0x48B24C: mov     [esp+38h+var_14], 5
0x48B254: call    Actor__GetSoulValueFromLevel
0x48B259: mov     [esp+38h+a3], eax
0x48B25D: fild    [esp+38h+a3]
0x48B261: mov     ecx, [ebx+4]; this
0x48B264: fstp    [esp+38h+var_1C]
0x48B268: add     esp, 4
0x48B26B: cmp     ecx, ebp
0x48B26D: mov     [esp+34h+a3], ebp
0x48B271: mov     [esp+34h+var_18], ebp
0x48B275: jz      short loc_48B27E
0x48B277: call    TESObjectREFR_GetContainer
0x48B27C: jmp     short loc_48B280
0x48B27E: xor     eax, eax
0x48B280: add     eax, 8
0x48B283: cmp     eax, ebp
0x48B285: mov     [esp+34h+var_20], eax
0x48B289: jz      loc_48B3BA
0x48B28F: nop
0x48B290: mov     eax, [esp+34h+var_20]
0x48B294: mov     esi, [eax]
0x48B296: test    esi, esi
0x48B298: jz      loc_48B3A7
0x48B29E: mov     ecx, [esi+4]
0x48B2A1: push    0; int
0x48B2A3: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x48B2A8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B2AD: push    0; int
0x48B2AF: push    ecx; void *
0x48B2B0: call    OblivionDynamicCast
0x48B2B5: mov     ebx, eax
0x48B2B7: add     esp, 14h
0x48B2BA: test    ebx, ebx
0x48B2BC: jz      loc_48B3A7
0x48B2C2: mov     edx, [esp+34h+var_24]
0x48B2C6: mov     eax, [edx]
0x48B2C8: test    eax, eax
0x48B2CA: mov     dl, 1
0x48B2CC: jz      short loc_48B2EE
0x48B2CE: mov     edi, edi
0x48B2D0: test    dl, dl
0x48B2D2: jz      loc_48B42C
0x48B2D8: mov     ecx, [eax]
0x48B2DA: test    ecx, ecx
0x48B2DC: jz      short loc_48B2E7
0x48B2DE: cmp     [ecx+8], ebx
0x48B2E1: jnz     short loc_48B2E7
0x48B2E3: xor     dl, dl
0x48B2E5: jmp     short loc_48B2EA
0x48B2E7: mov     eax, [eax+4]
0x48B2EA: test    eax, eax
0x48B2EC: jnz     short loc_48B2D0
0x48B2EE: xor     ebp, ebp
0x48B2F0: test    ebp, ebp
0x48B2F2: mov     edi, [esi]
0x48B2F4: jz      short loc_48B2F9
0x48B2F6: add     edi, [ebp+4]
0x48B2F9: cmp     byte ptr [ebx+70h], 0
0x48B2FD: jnz     loc_48B3A7
0x48B303: test    ebp, ebp
0x48B305: jz      short loc_48B339
0x48B307: mov     eax, [esp+34h+var_20]
0x48B30B: mov     ecx, [eax]
0x48B30D: cmp     dword ptr [ecx], 0
0x48B310: jge     loc_48B3A7
0x48B316: mov     esi, [ebp+0]
0x48B319: test    esi, esi
0x48B31B: mov     edi, [ebp+4]
0x48B31E: jz      short loc_48B339
0x48B320: mov     ecx, [esi]
0x48B322: test    ecx, ecx
0x48B324: jz      short loc_48B335
0x48B326: call    ExtraDataList_GetExtraSoul
0x48B32B: test    eax, eax
0x48B32D: jz      short loc_48B339
0x48B32F: mov     esi, [esi+4]
0x48B332: sub     edi, 1
0x48B335: test    esi, esi
0x48B337: jnz     short loc_48B320
0x48B339: test    edi, edi
0x48B33B: jle     short loc_48B3A7
0x48B33D: cmp     [esp+34h+var_C], 0
0x48B342: jz      short loc_48B34F
0x48B344: mov     edx, [ebp+8]
0x48B347: cmp     edx, ds:0B35EE0h
0x48B34D: jnz     short loc_48B3A7
0x48B34F: movzx   eax, byte ptr [ebx+71h]
0x48B353: push    eax
0x48B354: call    Actor__GetSoulValueFromLevel
0x48B359: mov     [esp+38h+var_10], eax
0x48B35D: add     esp, 4
0x48B360: fild    [esp+34h+var_10]
0x48B364: fstp    [esp+34h+var_10]
0x48B368: fld     [esp+34h+var_10]
0x48B36C: fld     [esp+34h+var_1C]
0x48B370: fcompp
0x48B372: fnstsw  ax
0x48B374: test    ah, 41h
0x48B377: jp      short loc_48B3A7
0x48B379: mov     eax, [esp+34h+a3]
0x48B37D: test    eax, eax
0x48B37F: jz      short loc_48B3A3
0x48B381: movzx   eax, byte ptr [eax+71h]
0x48B385: push    eax
0x48B386: call    Actor__GetSoulValueFromLevel
0x48B38B: mov     [esp+38h+var_4], eax
0x48B38F: add     esp, 4
0x48B392: fild    [esp+34h+var_4]
0x48B396: fld     [esp+34h+var_10]
0x48B39A: fcompp
0x48B39C: fnstsw  ax
0x48B39E: test    ah, 5
0x48B3A1: jp      short loc_48B3A7
0x48B3A3: mov     [esp+34h+a3], ebx
0x48B3A7: mov     eax, [esp+34h+var_20]
0x48B3AB: mov     eax, [eax+4]
0x48B3AE: test    eax, eax
0x48B3B0: mov     [esp+34h+var_20], eax
0x48B3B4: jnz     loc_48B290
0x48B3BA: mov     ecx, [esp+34h+var_24]
0x48B3BE: mov     eax, [ecx]
0x48B3C0: test    eax, eax
0x48B3C2: mov     [esp+34h+var_20], eax
0x48B3C6: jz      loc_48B54D
0x48B3CC: lea     esp, [esp+0]
0x48B3D0: mov     edx, [esp+34h+var_20]
0x48B3D4: mov     ebx, [edx]
0x48B3D6: test    ebx, ebx
0x48B3D8: jz      loc_48B4EC
0x48B3DE: mov     eax, [ebx+8]
0x48B3E1: push    0; int
0x48B3E3: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x48B3E8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B3ED: push    0; int
0x48B3EF: push    eax; void *
0x48B3F0: call    OblivionDynamicCast
0x48B3F5: mov     edi, eax
0x48B3F7: add     esp, 14h
0x48B3FA: test    edi, edi
0x48B3FC: mov     [esp+34h+var_4], edi
0x48B400: jz      loc_48B4EC
0x48B406: cmp     byte ptr [edi+70h], 0
0x48B40A: jnz     loc_48B4EC
0x48B410: cmp     dword ptr [ebx+4], 0
0x48B414: jz      loc_48B4EC
0x48B41A: mov     ecx, [esp+34h+var_24]
0x48B41E: mov     ecx, [ecx+4]; this
0x48B421: test    ecx, ecx
0x48B423: jz      short loc_48B43B
0x48B425: call    TESObjectREFR_GetContainer
0x48B42A: jmp     short loc_48B43D
0x48B42C: test    eax, eax
0x48B42E: jz      loc_48B2EE
0x48B434: mov     ebp, [eax]
0x48B436: jmp     loc_48B2F0
0x48B43B: xor     eax, eax
0x48B43D: push    edi; a2
0x48B43E: mov     ecx, eax; this
0x48B440: call    TESContainer_HasForm
0x48B445: test    al, al
0x48B447: jnz     loc_48B4EC
0x48B44D: mov     esi, [ebx]
0x48B44F: test    esi, esi
0x48B451: mov     ebp, [ebx+4]
0x48B454: jz      short loc_48B47E
0x48B456: mov     edi, [esi]
0x48B458: test    edi, edi
0x48B45A: jz      short loc_48B47A
0x48B45C: mov     ecx, edi
0x48B45E: call    ExtraDataList_GetExtraSoul
0x48B463: test    eax, eax
0x48B465: jz      short loc_48B47A
0x48B467: mov     ecx, edi
0x48B469: call    ExtraDataList_GetExtraCount
0x48B46E: mov     esi, [esi+4]
0x48B471: movsx   edx, ax
0x48B474: sub     ebp, edx
0x48B476: test    esi, esi
0x48B478: jnz     short loc_48B456
0x48B47A: mov     edi, [esp+34h+var_4]
0x48B47E: test    ebp, ebp
0x48B480: jle     short loc_48B4EC
0x48B482: cmp     [esp+34h+var_C], 0
0x48B487: jz      short loc_48B494
0x48B489: mov     eax, [ebx+8]
0x48B48C: cmp     eax, ds:0B35EE0h
0x48B492: jnz     short loc_48B4EC
0x48B494: movzx   eax, byte ptr [edi+71h]
0x48B498: push    eax
0x48B499: call    Actor__GetSoulValueFromLevel
0x48B49E: mov     [esp+38h+var_4], eax
0x48B4A2: add     esp, 4
0x48B4A5: fild    [esp+34h+var_4]
0x48B4A9: fstp    [esp+34h+var_10]
0x48B4AD: fld     [esp+34h+var_10]
0x48B4B1: fld     [esp+34h+var_1C]
0x48B4B5: fcompp
0x48B4B7: fnstsw  ax
0x48B4B9: test    ah, 41h
0x48B4BC: jp      short loc_48B4EC
0x48B4BE: mov     eax, [esp+34h+var_18]
0x48B4C2: test    eax, eax
0x48B4C4: jz      short loc_48B4E8
0x48B4C6: movzx   eax, byte ptr [eax+71h]
0x48B4CA: push    eax
0x48B4CB: call    Actor__GetSoulValueFromLevel
0x48B4D0: mov     [esp+38h+var_4], eax
0x48B4D4: add     esp, 4
0x48B4D7: fild    [esp+34h+var_4]
0x48B4DB: fld     [esp+34h+var_10]
0x48B4DF: fcompp
0x48B4E1: fnstsw  ax
0x48B4E3: test    ah, 5
0x48B4E6: jp      short loc_48B4EC
0x48B4E8: mov     [esp+34h+var_18], edi
0x48B4EC: mov     ecx, [esp+34h+var_20]
0x48B4F0: mov     eax, [ecx+4]
0x48B4F3: test    eax, eax
0x48B4F5: mov     [esp+34h+var_20], eax
0x48B4F9: jnz     loc_48B3D0
0x48B4FF: mov     edi, [esp+34h+var_18]
0x48B503: test    edi, edi
0x48B505: jz      short loc_48B54D
0x48B507: mov     eax, [esp+34h+a3]
0x48B50B: cmp     edi, eax
0x48B50D: jz      short loc_48B54D
0x48B50F: test    eax, eax
0x48B511: jz      short loc_48B549
0x48B513: movzx   ecx, byte ptr [edi+71h]
0x48B517: movzx   esi, byte ptr [eax+71h]
0x48B51B: push    ecx
0x48B51C: call    Actor__GetSoulValueFromLevel
0x48B521: mov     [esp+38h+var_4], eax
0x48B525: push    esi
0x48B526: fild    [esp+3Ch+var_4]
0x48B52A: fstp    qword ptr [esp+3Ch+var_C]
0x48B52E: call    Actor__GetSoulValueFromLevel
0x48B533: mov     [esp+3Ch+var_4], eax
0x48B537: fild    [esp+3Ch+var_4]
0x48B53B: add     esp, 8
0x48B53E: fcomp   qword ptr [esp+34h+var_C]
0x48B542: fnstsw  ax
0x48B544: test    ah, 41h
0x48B547: jnz     short loc_48B54D
0x48B549: mov     [esp+34h+a3], edi
0x48B54D: mov     edx, [esp+34h+var_24]
0x48B551: mov     eax, [edx]
0x48B553: mov     ebx, [esp+34h+a3]
0x48B557: xor     ebp, ebp
0x48B559: cmp     eax, ebp
0x48B55B: mov     dl, 1
0x48B55D: jz      short loc_48B57A
0x48B55F: nop
0x48B560: test    dl, dl
0x48B562: jz      short loc_48B59A
0x48B564: mov     ecx, [eax]
0x48B566: cmp     ecx, ebp
0x48B568: jz      short loc_48B573
0x48B56A: cmp     [ecx+8], ebx
0x48B56D: jnz     short loc_48B573
0x48B56F: xor     dl, dl
0x48B571: jmp     short loc_48B576
0x48B573: mov     eax, [eax+4]
0x48B576: cmp     eax, ebp
0x48B578: jnz     short loc_48B560
0x48B57A: xor     edi, edi
0x48B57C: xor     esi, esi
0x48B57E: cmp     ebx, ebp
0x48B580: jz      short loc_48B5A6
0x48B582: push    0Ch; Size
0x48B584: call    FormHeapAlloc
0x48B589: add     esp, 4
0x48B58C: cmp     eax, ebp
0x48B58E: jz      short loc_48B5A2
0x48B590: mov     [eax+8], ebp
0x48B593: mov     [eax], ebp
0x48B595: mov     [eax+4], ebp
0x48B598: jmp     short loc_48B5A4
0x48B59A: cmp     eax, ebp
0x48B59C: jz      short loc_48B57A
0x48B59E: mov     edi, [eax]
0x48B5A0: jmp     short loc_48B57C
0x48B5A2: xor     eax, eax
0x48B5A4: mov     esi, eax
0x48B5A6: cmp     edi, ebp
0x48B5A8: jz      short loc_48B5C2
0x48B5AA: mov     eax, [esp+34h+var_14]
0x48B5AE: push    eax
0x48B5AF: mov     ecx, edi
0x48B5B1: call    CreateSoulExtraData
0x48B5B6: pop     edi
0x48B5B7: pop     esi
0x48B5B8: pop     ebp
0x48B5B9: mov     al, 1
0x48B5BB: pop     ebx
0x48B5BC: add     esp, 24h
0x48B5BF: retn    4
0x48B5C2: cmp     ebx, ebp
0x48B5C4: jz      short loc_48B60A
0x48B5C6: mov     edi, [esp+34h+var_24]
0x48B5CA: mov     [esi+8], ebx
0x48B5CD: mov     ecx, [edi+4]; this
0x48B5D0: cmp     ecx, ebp
0x48B5D2: jz      short loc_48B5DB
0x48B5D4: call    TESObjectREFR_GetContainer
0x48B5D9: jmp     short loc_48B5DD
0x48B5DB: xor     eax, eax
0x48B5DD: push    ebx
0x48B5DE: mov     ecx, eax
0x48B5E0: call    TESContainer_GetFormCount
0x48B5E5: mov     ecx, [esp+34h+var_14]
0x48B5E9: push    ecx
0x48B5EA: mov     ecx, esi
0x48B5EC: mov     [esi+4], eax
0x48B5EF: call    CreateSoulExtraData
0x48B5F4: push    1
0x48B5F6: push    esi
0x48B5F7: mov     ecx, edi
0x48B5F9: call    ContainerExtraData_AddEntry
0x48B5FE: pop     edi
0x48B5FF: pop     esi
0x48B600: pop     ebp
0x48B601: mov     al, 1
0x48B603: pop     ebx
0x48B604: add     esp, 24h
0x48B607: retn    4
0x48B60A: mov     esi, [esp+34h+var_24]
0x48B60E: mov     ecx, [esi+4]
0x48B611: mov     edx, [ecx]
0x48B613: mov     eax, [edx+190h]
0x48B619: call    eax
0x48B61B: test    al, al
0x48B61D: jz      short loc_48B646
0x48B61F: mov     ecx, [esi+4]
0x48B622: cmp     ecx, ds:0B333C4h
0x48B628: jnz     short loc_48B646
0x48B62A: fld     dword ptr ds:0A30634h
0x48B630: mov     edx, ds:0B38C28h
0x48B636: push    ecx
0x48B637: fstp    [esp+38h+duration]; duration
0x48B63A: push    1; unk2
0x48B63C: push    ebp; unk1
0x48B63D: push    edx; string
0x48B63E: call    GameUI_QueueMessage
0x48B643: add     esp, 10h
0x48B646: pop     edi
0x48B647: pop     esi
0x48B648: pop     ebp
0x48B649: xor     al, al
0x48B64B: pop     ebx
0x48B64C: add     esp, 24h
0x48B64F: retn    4
