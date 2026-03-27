0x626600: push    0FFFFFFFFh
0x626602: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x626607: mov     eax, large fs:0
0x62660D: push    eax
0x62660E: push    ecx
0x62660F: push    ebx
0x626610: push    ebp
0x626611: push    esi
0x626612: push    edi
0x626613: mov     eax, ds:0B30AACh
0x626618: xor     eax, esp
0x62661A: push    eax
0x62661B: lea     eax, [esp+24h+var_C]
0x62661F: mov     large fs:0, eax
0x626625: mov     esi, ecx
0x626627: call    sub_5660F0
0x62662C: mov     eax, [esi+48h]
0x62662F: push    0; int
0x626631: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x626636: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62663B: push    0; int
0x62663D: push    eax; a1
0x62663E: call    TESForm_LookupByFormID
0x626643: add     esp, 4
0x626646: push    eax; void *
0x626647: call    OblivionDynamicCast
0x62664C: add     esp, 14h
0x62664F: push    0; int
0x626651: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x626656: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62665B: mov     [esi+48h], eax
0x62665E: mov     eax, [esi+5Ch]
0x626661: push    0; int
0x626663: push    eax; a1
0x626664: call    TESForm_LookupByFormID
0x626669: add     esp, 4
0x62666C: push    eax; void *
0x62666D: call    OblivionDynamicCast
0x626672: add     esp, 14h
0x626675: push    0; int
0x626677: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x62667C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x626681: mov     [esi+5Ch], eax
0x626684: mov     eax, [esi+60h]
0x626687: push    0; int
0x626689: push    eax; a1
0x62668A: call    TESForm_LookupByFormID
0x62668F: add     esp, 4
0x626692: push    eax; void *
0x626693: call    OblivionDynamicCast
0x626698: mov     [esi+60h], eax
0x62669B: mov     eax, ds:0B33B00h
0x6266A0: mov     al, [eax+7Ch]
0x6266A3: add     esp, 14h
0x6266A6: cmp     al, 20h ; ' '
0x6266A8: jb      short loc_6266B6
0x6266AA: mov     ecx, [esi+50h]
0x6266AD: test    ecx, ecx
0x6266AF: jz      short loc_6266B6
0x6266B1: call    sub_6B7B60
0x6266B6: mov     ecx, ds:0B33B00h
0x6266BC: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6266C0: jnb     loc_626767
0x6266C6: mov     edi, [esi+50h]
0x6266C9: test    edi, edi
0x6266CB: movzx   ebx, word ptr [esi+54h]
0x6266CF: movzx   ebp, word ptr [esi+58h]
0x6266D3: jz      loc_626767
0x6266D9: push    10h; Size
0x6266DB: call    FormHeapAlloc
0x6266E0: add     esp, 4
0x6266E3: mov     [esp+24h+var_10], eax
0x6266E7: test    eax, eax
0x6266E9: mov     [esp+24h+var_4], 0
0x6266F1: jz      short loc_626709
0x6266F3: mov     edx, [esi+40h]
0x6266F6: mov     ecx, [esi+60h]
0x6266F9: push    edi
0x6266FA: push    edx
0x6266FB: mov     edx, [esi+5Ch]
0x6266FE: push    ecx
0x6266FF: push    edx
0x626700: mov     ecx, eax
0x626702: call    sub_6B7420
0x626707: jmp     short loc_62670B
0x626709: xor     eax, eax
0x62670B: cmp     bx, 0FFFFh
0x62670F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x626717: mov     [esi+50h], eax
0x62671A: jz      short loc_626729
0x62671C: push    ebx
0x62671D: mov     ecx, eax
0x62671F: call    sub_6B7560
0x626724: mov     [esi+54h], eax
0x626727: jmp     short loc_626730
0x626729: mov     dword ptr [esi+54h], 0
0x626730: mov     ecx, [esi+54h]
0x626733: test    ecx, ecx
0x626735: jz      short loc_626748
0x626737: cmp     bp, 0FFFFh
0x62673B: jz      short loc_626748
0x62673D: push    ebp
0x62673E: call    sub_6B7CA0
0x626743: mov     [esi+58h], eax
0x626746: jmp     short loc_62674F
0x626748: mov     dword ptr [esi+58h], 0
0x62674F: mov     eax, [esi+54h]
0x626752: mov     ecx, [esi+50h]
0x626755: push    eax
0x626756: call    sub_6B74F0
0x62675B: mov     ecx, [esi+58h]
0x62675E: push    ecx
0x62675F: mov     ecx, [esi+54h]
0x626762: call    sub_6B74F0
0x626767: mov     ecx, [esp+24h+var_C]
0x62676B: mov     large fs:0, ecx
0x626772: pop     ecx
0x626773: pop     edi
0x626774: pop     esi
0x626775: pop     ebp
0x626776: pop     ebx
0x626777: add     esp, 10h
0x62677A: retn
