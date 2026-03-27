0x607420: mov     eax, [esp+arg_4]
0x607424: push    esi
0x607425: mov     esi, ecx
0x607427: mov     ecx, [esp+4+arg_0]
0x60742B: push    eax
0x60742C: push    ecx
0x60742D: mov     ecx, esi
0x60742F: call    MobileObject_LinkModifierForm
0x607434: mov     eax, [esi+78h]
0x607437: test    eax, eax
0x607439: jz      short loc_60745E
0x60743B: push    0; int
0x60743D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x607442: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x607447: push    0; int
0x607449: push    eax; a1
0x60744A: call    TESForm_LookupByFormID
0x60744F: add     esp, 4
0x607452: push    eax; void *
0x607453: call    OblivionDynamicCast
0x607458: add     esp, 14h
0x60745B: mov     [esi+78h], eax
0x60745E: mov     eax, [esi+7Ch]
0x607461: test    eax, eax
0x607463: jz      short loc_607488
0x607465: push    0; int
0x607467: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x60746C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x607471: push    0; int
0x607473: push    eax; a1
0x607474: call    TESForm_LookupByFormID
0x607479: add     esp, 4
0x60747C: push    eax; void *
0x60747D: call    OblivionDynamicCast
0x607482: add     esp, 14h
0x607485: mov     [esi+7Ch], eax
0x607488: mov     eax, [esi+84h]
0x60748E: test    eax, eax
0x607490: jz      short loc_6074B8
0x607492: push    0; int
0x607494: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x607499: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x60749E: push    0; int
0x6074A0: push    eax; a1
0x6074A1: call    TESForm_LookupByFormID
0x6074A6: add     esp, 4
0x6074A9: push    eax; void *
0x6074AA: call    OblivionDynamicCast
0x6074AF: add     esp, 14h
0x6074B2: mov     [esi+84h], eax
0x6074B8: mov     eax, [esi+5Ch]
0x6074BB: test    eax, eax
0x6074BD: jz      short loc_6074F7
0x6074BF: mov     ecx, [eax]
0x6074C1: cmp     ecx, 1
0x6074C4: jz      short loc_6074CA
0x6074C6: test    ecx, ecx
0x6074C8: jnz     short loc_6074F7
0x6074CA: mov     eax, [eax+28h]
0x6074CD: test    eax, eax
0x6074CF: jz      short loc_6074F7
0x6074D1: push    0; int
0x6074D3: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6074D8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6074DD: push    0; int
0x6074DF: push    eax; a1
0x6074E0: call    TESForm_LookupByFormID
0x6074E5: add     esp, 4
0x6074E8: push    eax; void *
0x6074E9: call    OblivionDynamicCast
0x6074EE: mov     edx, [esi+5Ch]
0x6074F1: add     esp, 14h
0x6074F4: mov     [edx+28h], eax
0x6074F7: mov     ecx, esi; this
0x6074F9: call    Actor__GetProcessLevel
0x6074FE: push    eax
0x6074FF: push    esi
0x607500: mov     ecx, offset ActorProcessManager_ptr
0x607505: call    sub_674550
0x60750A: push    0
0x60750C: push    0
0x60750E: push    0
0x607510: mov     ecx, esi; this
0x607512: call    Actor__GetProcessLevel
0x607517: push    eax
0x607518: push    esi
0x607519: mov     ecx, offset ActorProcessManager_ptr
0x60751E: call    sub_673A90
0x607523: pop     esi
0x607524: retn    8
