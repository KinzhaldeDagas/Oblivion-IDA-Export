0x62B420: push    0FFFFFFFFh
0x62B422: push    offset SEH_62B420
0x62B427: mov     eax, large fs:0
0x62B42D: push    eax
0x62B42E: sub     esp, 10h
0x62B431: push    ebx
0x62B432: push    ebp
0x62B433: push    esi
0x62B434: push    edi
0x62B435: mov     eax, ds:0B30AACh
0x62B43A: xor     eax, esp
0x62B43C: push    eax
0x62B43D: lea     eax, [esp+30h+var_C]
0x62B441: mov     large fs:0, eax
0x62B447: mov     ebp, ecx
0x62B449: mov     eax, [ebp+0]
0x62B44C: mov     edx, [eax+184h]
0x62B452: call    edx
0x62B454: mov     ebx, eax
0x62B456: mov     ecx, [ebx+28h]
0x62B459: xor     esi, esi
0x62B45B: xor     edi, edi
0x62B45D: cmp     ecx, esi
0x62B45F: jz      short loc_62B47D
0x62B461: push    esi; int
0x62B462: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x62B467: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62B46C: push    esi; int
0x62B46D: call    sub_569E70
0x62B472: push    eax; void *
0x62B473: call    OblivionDynamicCast
0x62B478: add     esp, 14h
0x62B47B: mov     edi, eax
0x62B47D: cmp     edi, esi
0x62B47F: mov     [esp+30h+var_1C], esi
0x62B483: jnz     short loc_62B4D8
0x62B485: mov     edi, [ebp+148h]
0x62B48B: cmp     edi, esi
0x62B48D: jz      loc_62B51E
0x62B493: lea     ecx, [esp+30h+var_18]
0x62B497: mov     [ebp+148h], esi
0x62B49D: call    TESPackage_TargetData_constr
0x62B4A2: cmp     edi, esi
0x62B4A4: mov     [esp+30h+var_4], esi
0x62B4A8: jz      short loc_62B4AF
0x62B4AA: lea     eax, [edi-18h]
0x62B4AD: jmp     short loc_62B4B1
0x62B4AF: xor     eax, eax
0x62B4B1: push    eax
0x62B4B2: lea     ecx, [esp+34h+var_18]
0x62B4B6: call    TESPackage_TargetData_SetTargetForm
0x62B4BB: lea     eax, [esp+30h+var_18]
0x62B4BF: push    eax
0x62B4C0: mov     ecx, ebx
0x62B4C2: call    TESPackage_SetTarget
0x62B4C7: lea     ecx, [esp+30h+var_18]; void *
0x62B4CB: mov     [esp+30h+var_4], 0FFFFFFFFh
0x62B4D3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x62B4D8: mov     eax, [ebp+30h]
0x62B4DB: cmp     eax, esi
0x62B4DD: jnz     short loc_62B4EB
0x62B4DF: mov     ecx, [ebx+24h]
0x62B4E2: cmp     ecx, esi
0x62B4E4: jz      short loc_62B4EF
0x62B4E6: call    sub_5697E0
0x62B4EB: mov     [esp+30h+var_1C], eax
0x62B4EF: mov     esi, [esp+30h+arg_0]
0x62B4F3: mov     ecx, esi
0x62B4F5: call    Actor_GetCurrentAction
0x62B4FA: cmp     eax, 0FFFFFFFFh
0x62B4FD: jnz     short loc_62B559
0x62B4FF: cmp     byte ptr [ebx+20h], 1Ch
0x62B503: jz      short loc_62B515
0x62B505: push    0
0x62B507: lea     ecx, [edi+0Ch]
0x62B50A: call    EffectItemList_GetItemByIndex2
0x62B50F: cmp     dword ptr [eax+10h], 0
0x62B513: jnz     short loc_62B559
0x62B515: test    esi, esi
0x62B517: jz      short loc_62B530
0x62B519: lea     eax, [esi+68h]
0x62B51C: jmp     short loc_62B532
0x62B51E: mov     edx, [ebp+0]
0x62B521: mov     eax, [esp+30h+arg_0]
0x62B525: mov     edx, [edx+188h]
0x62B52B: push    1
0x62B52D: push    eax
0x62B52E: jmp     short loc_62B59C
0x62B530: xor     eax, eax
0x62B532: push    0
0x62B534: push    eax
0x62B535: push    edi
0x62B536: lea     ecx, [esi+5Ch]
0x62B539: call    MagicCaster_CastMagicItem
0x62B53E: fld     dword ptr ds:0A3D65Ch
0x62B544: push    1; float
0x62B546: push    ecx
0x62B547: mov     ecx, esi
0x62B549: fstp    [esp+38h+var_38]; float
0x62B54C: call    sub_5F25F0
0x62B551: cmp     byte ptr [ebx+20h], 1Ch
0x62B555: jnz     short loc_62B5A0
0x62B557: jmp     short loc_62B590
0x62B559: mov     ecx, esi
0x62B55B: call    Actor_GetCurrentAction
0x62B560: cmp     eax, 0FFFFFFFFh
0x62B563: jnz     short loc_62B5A0
0x62B565: mov     edi, [esp+30h+var_1C]
0x62B569: test    edi, edi
0x62B56B: jz      short loc_62B590
0x62B56D: mov     eax, [edi]
0x62B56F: mov     edx, [eax+190h]
0x62B575: mov     ecx, edi
0x62B577: call    edx
0x62B579: test    al, al
0x62B57B: jz      short loc_62B590
0x62B57D: cmp     edi, esi
0x62B57F: jz      short loc_62B590
0x62B581: mov     ecx, [edi+58h]
0x62B584: mov     eax, [ecx]
0x62B586: mov     edx, [eax+178h]
0x62B58C: push    0
0x62B58E: call    edx
0x62B590: mov     eax, [ebp+0]
0x62B593: mov     edx, [eax+188h]
0x62B599: push    1
0x62B59B: push    esi
0x62B59C: mov     ecx, ebp
0x62B59E: call    edx
0x62B5A0: mov     ecx, dword ptr [esp+30h+var_C]
0x62B5A4: mov     large fs:0, ecx
0x62B5AB: pop     ecx
0x62B5AC: pop     edi
0x62B5AD: pop     esi
0x62B5AE: pop     ebp
0x62B5AF: pop     ebx
0x62B5B0: add     esp, 1Ch
0x62B5B3: retn    4
