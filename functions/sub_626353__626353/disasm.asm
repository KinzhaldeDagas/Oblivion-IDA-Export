0x626353: mov     [esi+48h], edx
0x626356: call    TESForm_LoadFormIDFromCurrentSaveGame
0x62635B: mov     ecx, dword ptr [esp+arg_24.member.type]
0x62635F: push    4; a2
0x626361: lea     edx, [esp+4+arg_24.member.flags]
0x626365: mov     [esi+5Ch], ecx
0x626368: push    edx; a1
0x626369: mov     ecx, esi
0x62636B: call    TESForm_LoadFormIDFromCurrentSaveGame
0x626370: mov     eax, [esp+8+arg_24.vtbl]
0x626374: push    4; a2
0x626376: lea     ecx, [esp+0Ch+arg_24.member]
0x62637A: push    ecx; a1
0x62637B: mov     ecx, esi
0x62637D: mov     [esi+60h], eax
0x626380: call    TESForm_LoadFormIDFromCurrentSaveGame
0x626385: mov     edx, [esp+10h+a1]
0x626389: push    ebp; int
0x62638A: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x62638F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x626394: push    ebp; int
0x626395: push    edx; a1
0x626396: call    TESForm_LookupByFormID
0x62639B: add     esp, 4
0x62639E: push    eax; void *
0x62639F: call    OblivionDynamicCast
0x6263A4: mov     [esi+40h], eax
0x6263A7: mov     eax, ds:0B33B00h
0x6263AC: mov     al, [eax+7Ch]
0x6263AF: add     esp, 14h
0x6263B2: cmp     al, 20h ; ' '
0x6263B4: jb      loc_626462
0x6263BA: push    2; a2
0x6263BC: lea     ecx, [esp+14h+arg_0]
0x6263C0: push    ecx; a1
0x6263C1: mov     ecx, esi
0x6263C3: call    TESForm_LoadDataFromCurrentSaveGame
0x6263C8: cmp     word ptr [esp+10h+arg_0.vtbl], bp
0x6263CD: jz      loc_626462
0x6263D3: push    10h; Size
0x6263D5: call    FormHeapAlloc
0x6263DA: add     esp, 4
0x6263DD: mov     [esp+10h+arg_24.member.flags], eax
0x6263E1: cmp     eax, ebp
0x6263E3: mov     [esp+10h+arg_24.member.modlist.next], ebp
0x6263E7: jz      short loc_6263F2
0x6263E9: mov     ecx, eax
0x6263EB: call    sub_6B7410
0x6263F0: jmp     short loc_6263F4
0x6263F2: xor     eax, eax
0x6263F4: mov     ecx, eax
0x6263F6: mov     [esp+10h+arg_24.member.modlist.next], 0FFFFFFFFh
0x6263FE: mov     [esi+50h], eax
0x626401: call    sub_6B7840
0x626406: push    2; a2
0x626408: lea     edx, [esp+14h+arg_24]
0x62640C: push    edx; a1
0x62640D: mov     ecx, esi
0x62640F: call    TESForm_LoadDataFromCurrentSaveGame
0x626414: mov     eax, [esp+10h+arg_24.vtbl]
0x626418: cmp     ax, 0FFFFh
0x62641C: jz      short loc_62642C
0x62641E: mov     ecx, [esi+50h]
0x626421: push    eax
0x626422: call    sub_6B7560
0x626427: mov     [esi+54h], eax
0x62642A: jmp     short loc_62642F
0x62642C: mov     [esi+54h], ebp
0x62642F: push    2; a2
0x626431: lea     eax, [esp+14h+arg_24.member]
0x626435: push    eax; a1
0x626436: mov     ecx, esi
0x626438: call    TESForm_LoadDataFromCurrentSaveGame
0x62643D: mov     eax, dword ptr [esp+10h+arg_24.member.type]
0x626441: movsx   ecx, ax
0x626444: mov     [esi+58h], ecx
0x626447: mov     ecx, [esi+54h]
0x62644A: cmp     ecx, ebp
0x62644C: jz      short loc_62645F
0x62644E: cmp     ax, 0FFFFh
0x626452: jz      short loc_62645F
0x626454: push    eax
0x626455: call    sub_6B7CA0
0x62645A: mov     [esi+58h], eax
0x62645D: jmp     short loc_626462
0x62645F: mov     [esi+58h], ebp
0x626462: mov     edx, ds:0B33B00h
0x626468: cmp     byte ptr [edx+7Ch], 20h ; ' '
0x62646C: jnb     short loc_6264BB
0x62646E: push    4; a2
0x626470: lea     eax, [esp+14h+arg_24.member.flags]
0x626474: push    eax; a1
0x626475: mov     ecx, esi
0x626477: call    TESForm_LoadDataFromCurrentSaveGame
0x62647C: mov     eax, [esp+10h+arg_24.member.flags]
0x626480: cmp     eax, ebp
0x626482: mov     [esi+50h], eax
0x626485: jz      short loc_6264B5
0x626487: push    2; a2
0x626489: lea     ecx, [esp+14h+arg_0.member]
0x62648D: push    ecx; a1
0x62648E: mov     ecx, esi
0x626490: call    TESForm_LoadDataFromCurrentSaveGame
0x626495: movsx   edx, word ptr [esp+10h+arg_0.member.type]
0x62649A: push    2; a2
0x62649C: lea     eax, [esp+14h+arg_0.member.flags]
0x6264A0: push    eax; a1
0x6264A1: mov     ecx, esi
0x6264A3: mov     [esi+54h], edx
0x6264A6: call    TESForm_LoadDataFromCurrentSaveGame
0x6264AB: movsx   ecx, word ptr [esp+10h+arg_0.member.flags]
0x6264B0: mov     [esi+58h], ecx
0x6264B3: jmp     short loc_6264BB
0x6264B5: mov     [esi+54h], ebp
0x6264B8: mov     [esi+58h], ebp
0x6264BB: mov     ecx, ds:0B33B00h
0x6264C1: call    sub_45A170
0x6264C6: test    al, al
0x6264C8: jz      loc_6265E5
0x6264CE: mov     ecx, ds:0B33B00h
0x6264D4: mov     edi, [ecx+80h]
0x6264DA: cmp     edi, ebp
0x6264DC: mov     esi, [ecx+14h]
0x6264DF: jz      loc_62659B
0x6264E5: mov     edx, [edi]
0x6264E7: push    edx; a1
0x6264E8: call    TESForm_LookupByFormID
0x6264ED: mov     ecx, eax
0x6264EF: movzx   eax, word ptr [esp+14h+arg_0.member.refID]
0x6264F4: add     eax, ebx
0x6264F6: add     esp, 4
0x6264F9: cmp     esi, eax
0x6264FB: jbe     short loc_626549
0x6264FD: mov     edx, [edi+5]
0x626500: movzx   eax, byte ptr [edi+9]
0x626504: push    edx
0x626505: mov     edx, [ecx]
0x626507: push    eax
0x626508: mov     eax, [edx+0D4h]
0x62650E: call    eax
0x626510: mov     ecx, [edi]
0x626512: movzx   edx, word ptr [esp+18h+arg_0.member.refID]
0x626517: push    eax
0x626518: push    ecx
0x626519: push    1D1h
0x62651E: sub     esi, edx
0x626520: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x626525: sub     esi, ebx
0x626527: push    esi; ArgList
0x626528: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x62652D: call    PrintError
0x626532: add     esp, 20h
0x626535: mov     ecx, [esp+10h+arg_24.member.refID]
0x626539: mov     large fs:0, ecx
0x626540: pop     ecx
0x626541: pop     edi
0x626542: pop     esi
0x626543: pop     ebp
0x626544: pop     ebx
0x626545: add     esp, 3Ch
0x626548: retn
0x626549: jnb     loc_6265E5
0x62654F: mov     eax, [edi+5]
0x626552: movzx   edx, byte ptr [edi+9]
0x626556: push    eax
0x626557: mov     eax, [ecx]
0x626559: push    edx
0x62655A: mov     edx, [eax+0D4h]
0x626560: call    edx
0x626562: movzx   ecx, word ptr [esp+18h+arg_0.member.refID]
0x626567: push    eax
0x626568: mov     eax, [edi]
0x62656A: push    eax
0x62656B: push    1D1h
0x626570: sub     ecx, esi
0x626572: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x626577: add     ecx, ebx
0x626579: push    ecx; ArgList
0x62657A: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x62657F: call    PrintError
0x626584: add     esp, 20h
0x626587: mov     ecx, [esp+10h+arg_24.member.refID]
0x62658B: mov     large fs:0, ecx
0x626592: pop     ecx
0x626593: pop     edi
0x626594: pop     esi
0x626595: pop     ebp
0x626596: pop     ebx
0x626597: add     esp, 3Ch
0x62659A: retn
0x62659B: movzx   eax, word ptr [esp+10h+arg_0.member.refID]
0x6265A0: lea     edx, [eax+ebx]
0x6265A3: cmp     esi, edx
0x6265A5: jbe     short loc_6265C2
0x6265A7: movzx   edx, byte ptr [ecx+7Ch]
0x6265AB: push    edx
0x6265AC: push    1D1h
0x6265B1: sub     esi, eax
0x6265B3: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6265B8: sub     esi, ebx
0x6265BA: push    esi
0x6265BB: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6265C0: jmp     short loc_6265DD
0x6265C2: jnb     short loc_6265E5
0x6265C4: movzx   ecx, byte ptr [ecx+7Ch]
0x6265C8: push    ecx
0x6265C9: push    1D1h
0x6265CE: sub     eax, esi
0x6265D0: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6265D5: add     eax, ebx
0x6265D7: push    eax; ArgList
0x6265D8: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6265DD: call    PrintError
0x6265E2: add     esp, 14h
0x6265E5: mov     ecx, [esp+10h+arg_24.member.refID]
0x6265E9: mov     large fs:0, ecx
0x6265F0: pop     ecx
0x6265F1: pop     edi
0x6265F2: pop     esi
0x6265F3: pop     ebp
0x6265F4: pop     ebx
0x6265F5: add     esp, 3Ch
0x6265F8: retn
