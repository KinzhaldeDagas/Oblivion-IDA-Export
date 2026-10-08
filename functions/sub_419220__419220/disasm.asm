0x419220: push    ebx
0x419221: mov     ebx, ecx
0x419223: lea     eax, [ebx+28h]
0x419226: xor     ecx, ecx
0x419228: test    eax, eax
0x41922A: jz      short sub_419243
0x41922C: lea     esp, [esp+0]
0x419230: cmp     dword ptr [eax], 0
0x419233: jz      short loc_419238
0x419235: add     ecx, 1
0x419238: mov     eax, [eax+4]
0x41923B: test    eax, eax
0x41923D: jnz     short loc_419230
0x41923F: test    ecx, ecx
0x419241: jnz     short loc_419249
0x419249: push    edi
0x41924A: mov     edi, [esp+8+arg_0]
0x41924E: mov     eax, [edi+58h]
0x419251: test    eax, 70000h
0x419256: jnz     short loc_41925F
0x419258: pop     edi
0x419259: mov     al, 1
0x41925B: pop     ebx
0x41925C: retn    4
0x41925F: mov     ecx, eax
0x419261: shr     ecx, 10h
0x419264: test    cl, 1
0x419267: jz      short loc_419282
0x419269: push    10000h
0x41926E: lea     ecx, [ebx+24h]
0x419271: call    EffectItemList_HasEffectWithFlags
0x419276: neg     al
0x419278: pop     edi
0x419279: pop     ebx
0x41927A: sbb     eax, eax
0x41927C: add     eax, 1
0x41927F: retn    4
0x419282: shr     eax, 11h
0x419285: test    al, 1
0x419287: push    esi
0x419288: jz      loc_41933B
0x41928E: mov     eax, [edi+98h]
0x419294: push    48h ; 'H'
0x419296: lea     esi, [ebx+24h]
0x419299: push    eax
0x41929A: mov     ecx, esi
0x41929C: call    EffectItemList_HasEffect
0x4192A1: test    al, al
0x4192A3: jnz     loc_419343
0x4192A9: mov     eax, [edi+60h]
0x4192AC: push    0; int
0x4192AE: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4192B3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4192B8: push    0; int
0x4192BA: push    eax; a1
0x4192BB: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4192C0: add     esp, 4
0x4192C3: push    eax; void *
0x4192C4: call    OblivionDynamicCast
0x4192C9: mov     edi, eax
0x4192CB: add     esp, 14h
0x4192CE: test    edi, edi
0x4192D0: jz      short loc_41933B
0x4192D2: test    ebx, ebx
0x4192D4: jz      short loc_41933B
0x4192D6: test    esi, esi
0x4192D8: jz      short loc_41933B
0x4192DA: lea     ebx, [ebx+0]
0x4192E0: mov     ecx, [esi+4]
0x4192E3: mov     esi, [esi+8]
0x4192E6: test    esi, esi
0x4192E8: jz      short loc_4192EF
0x4192EA: add     esi, 0FFFFFFFCh
0x4192ED: jmp     short loc_4192F1
0x4192EF: xor     esi, esi
0x4192F1: test    ecx, ecx
0x4192F3: jz      short loc_419337
0x4192F5: mov     edx, [ecx+1Ch]
0x4192F8: mov     eax, [edx+58h]
0x4192FB: shr     eax, 11h
0x4192FE: test    al, 1
0x419300: jz      short loc_419337
0x419302: push    0; int
0x419304: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x419309: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41930E: push    0; int
0x419310: call    EffectItem_GetSummonedObj?
0x419315: push    eax; a1
0x419316: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x41931B: add     esp, 4
0x41931E: push    eax; void *
0x41931F: call    OblivionDynamicCast
0x419324: add     esp, 14h
0x419327: test    eax, eax
0x419329: jz      short loc_419337
0x41932B: push    edi
0x41932C: mov     ecx, eax
0x41932E: call    TESBipedModelForm_SlotOverlap
0x419333: test    al, al
0x419335: jnz     short loc_419343
0x419337: test    esi, esi
0x419339: jnz     short loc_4192E0
0x41933B: pop     esi
0x41933C: pop     edi
0x41933D: mov     al, 1
0x41933F: pop     ebx
0x419340: retn    4
0x419343: pop     esi
0x419344: pop     edi
0x419345: xor     al, al
0x419347: pop     ebx
0x419348: retn    4
