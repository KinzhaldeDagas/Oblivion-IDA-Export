0x628050: push    ebx
0x628051: push    ebp
0x628052: push    esi
0x628053: mov     ebp, ecx
0x628055: call    sub_5660F0
0x62805A: lea     esi, [ebp+54h]
0x62805D: xor     ebx, ebx
0x62805F: test    esi, esi
0x628061: jz      short loc_6280DC
0x628063: push    edi
0x628064: cmp     dword ptr [esi+4], 0
0x628068: jnz     short loc_62806F
0x62806A: cmp     dword ptr [esi], 0
0x62806D: jz      short loc_6280DB
0x62806F: mov     eax, [esi]
0x628071: test    eax, eax
0x628073: mov     edi, eax
0x628075: jz      short loc_62809B
0x628077: push    0; int
0x628079: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x62807E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x628083: push    0; int
0x628085: push    eax; a1
0x628086: call    TESForm_LookupByFormID
0x62808B: add     esp, 4
0x62808E: push    eax; void *
0x62808F: call    OblivionDynamicCast
0x628094: add     esp, 14h
0x628097: test    eax, eax
0x628099: jnz     short loc_6280D0
0x62809B: test    ebx, ebx
0x62809D: jnz     short loc_6280C3
0x62809F: mov     eax, [esi+4]
0x6280A2: test    eax, eax
0x6280A4: jz      short loc_6280BB
0x6280A6: mov     ecx, [eax+4]
0x6280A9: mov     [esi+4], ecx
0x6280AC: mov     edx, [eax]
0x6280AE: push    eax
0x6280AF: mov     [esi], edx
0x6280B1: call    FormHeapFree
0x6280B6: add     esp, 4
0x6280B9: jmp     short loc_6280D7
0x6280BB: mov     dword ptr [esi], 0
0x6280C1: jmp     short loc_6280D7
0x6280C3: push    edi
0x6280C4: mov     ecx, ebx
0x6280C6: call    BSSimpleList_Remove
0x6280CB: mov     esi, [ebx+4]
0x6280CE: jmp     short loc_6280D7
0x6280D0: mov     [esi], eax
0x6280D2: mov     ebx, esi
0x6280D4: mov     esi, [esi+4]
0x6280D7: test    esi, esi
0x6280D9: jnz     short loc_628064
0x6280DB: pop     edi
0x6280DC: mov     eax, [ebp+60h]
0x6280DF: test    eax, eax
0x6280E1: jz      short loc_628106
0x6280E3: push    0; int
0x6280E5: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6280EA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6280EF: push    0; int
0x6280F1: push    eax; a1
0x6280F2: call    TESForm_LookupByFormID
0x6280F7: add     esp, 4
0x6280FA: push    eax; void *
0x6280FB: call    OblivionDynamicCast
0x628100: add     esp, 14h
0x628103: mov     [ebp+60h], eax
0x628106: mov     eax, [ebp+5Ch]
0x628109: test    eax, eax
0x62810B: jz      short loc_628130
0x62810D: push    0; int
0x62810F: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x628114: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x628119: push    0; int
0x62811B: push    eax; a1
0x62811C: call    TESForm_LookupByFormID
0x628121: add     esp, 4
0x628124: push    eax; void *
0x628125: call    OblivionDynamicCast
0x62812A: add     esp, 14h
0x62812D: mov     [ebp+5Ch], eax
0x628130: pop     esi
0x628131: pop     ebp
0x628132: pop     ebx
0x628133: retn
