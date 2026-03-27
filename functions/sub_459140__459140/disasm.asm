0x459140: sub     esp, 1Ch
0x459143: push    esi
0x459144: push    edi
0x459145: mov     edi, ecx
0x459147: mov     edx, [edi+5Ch]
0x45914A: mov     ecx, [edx+4]
0x45914D: xor     eax, eax
0x45914F: test    ecx, ecx
0x459151: jbe     short loc_459173
0x459153: mov     esi, [edx+8]
0x459156: mov     edx, esi
0x459158: jmp     short loc_459160
0x45915A: align 10h
0x459160: cmp     dword ptr [edx], 0
0x459163: jnz     loc_459280
0x459169: add     eax, 1
0x45916C: add     edx, 4
0x45916F: cmp     eax, ecx
0x459171: jb      short loc_459160
0x459173: xor     eax, eax
0x459175: test    eax, eax
0x459177: mov     [esp+24h+var_14], eax
0x45917B: jz      loc_4592EA
0x459181: push    ebx
0x459182: push    ebp
0x459183: lea     eax, [esp+2Ch+var_1C]
0x459187: push    eax
0x459188: lea     ecx, [esp+30h+a1]
0x45918C: push    ecx
0x45918D: mov     ecx, [edi+5Ch]
0x459190: lea     edx, [esp+34h+var_14]
0x459194: push    edx
0x459195: call    sub_452600
0x45919A: mov     eax, [esp+2Ch+a1]
0x45919E: push    0; int
0x4591A0: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x4591A5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4591AA: push    0; int
0x4591AC: push    eax; a1
0x4591AD: call    TESForm_LookupByFormID
0x4591B2: add     esp, 4
0x4591B5: push    eax; void *
0x4591B6: call    OblivionDynamicCast
0x4591BB: mov     ebx, eax
0x4591BD: add     esp, 14h
0x4591C0: test    ebx, ebx
0x4591C2: jz      loc_4592C1
0x4591C8: mov     eax, [ebx+58h]
0x4591CB: push    0; int
0x4591CD: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x4591D2: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x4591D7: push    0; int
0x4591D9: push    eax; void *
0x4591DA: call    OblivionDynamicCast
0x4591DF: mov     esi, eax
0x4591E1: add     esp, 14h
0x4591E4: test    esi, esi
0x4591E6: jz      loc_4592C1
0x4591EC: mov     ecx, [edi+14h]
0x4591EF: mov     edx, [esp+2Ch+var_1C]
0x4591F3: mov     [edi+14h], edx
0x4591F6: mov     [esp+2Ch+var_4], ecx
0x4591FA: mov     ecx, ds:0B33B00h
0x459200: mov     eax, [ecx+14h]
0x459203: mov     bp, [eax]
0x459206: add     eax, 2
0x459209: mov     [ecx+14h], eax
0x45920C: mov     eax, [esi]
0x45920E: mov     edx, [eax+18Ch]
0x459214: lea     ecx, [esp+2Ch+var_10]
0x459218: push    ecx
0x459219: mov     ecx, esi
0x45921B: call    edx
0x45921D: mov     eax, [eax]
0x45921F: mov     [esp+2Ch+var_8], eax
0x459223: mov     eax, [esp+2Ch+var_10]
0x459227: test    eax, eax
0x459229: jz      short loc_45924D
0x45922B: mov     [esp+2Ch+var_C], eax
0x45922F: add     eax, 4
0x459232: push    eax; lpAddend
0x459233: call    dword ptr ds:0A2807Ch
0x459239: test    eax, eax
0x45923B: jnz     short loc_45924D
0x45923D: mov     ecx, [esp+2Ch+var_C]
0x459241: test    ecx, ecx
0x459243: jz      short loc_45924D
0x459245: mov     edx, [ecx]
0x459247: mov     eax, [edx]
0x459249: push    1
0x45924B: call    eax
0x45924D: cmp     [esp+2Ch+var_8], 0
0x459252: jz      short loc_459288
0x459254: push    ebx; Dst
0x459255: mov     ecx, esi
0x459257: call    sub_657340
0x45925C: mov     edx, [esp+2Ch+var_1C]
0x459260: movzx   ecx, bp
0x459263: lea     eax, [ecx+edx+2]
0x459267: cmp     eax, [edi+14h]
0x45926A: jz      short loc_4592BA
0x45926C: mov     ecx, ds:0B34D90h
0x459272: mov     edx, [ecx]
0x459274: mov     eax, [edx+18h]
0x459277: push    offset aLoadcharcontro; "LoadCharControllers() call did not prop"...
0x45927C: call    eax
0x45927E: jmp     short loc_4592BA
0x459280: mov     eax, [esi+eax*4]
0x459283: jmp     loc_459175
0x459288: mov     eax, [ebx+8]
0x45928B: mov     ecx, eax
0x45928D: shr     ecx, 5
0x459290: test    cl, 1
0x459293: jz      short loc_45929C
0x459295: shr     eax, 0Bh
0x459298: test    al, 1
0x45929A: jnz     short loc_4592BA
0x45929C: mov     eax, [ebx+0Ch]
0x45929F: mov     edx, [ebx]
0x4592A1: push    eax
0x4592A2: mov     eax, [edx+0D4h]
0x4592A8: mov     ecx, ebx
0x4592AA: call    eax
0x4592AC: push    eax; ArgList
0x4592AD: push    offset aLoadcharcont_0; "LoadCharControllers(): Mob %s %08X does"...
0x4592B2: call    PrintError
0x4592B7: add     esp, 0Ch
0x4592BA: mov     ecx, [esp+2Ch+var_4]
0x4592BE: mov     [edi+14h], ecx
0x4592C1: mov     edx, [esp+2Ch+var_1C]
0x4592C5: push    edx; void *
0x4592C6: mov     ecx, offset FormHeap
0x4592CB: call    MemoryHeap_Free_checked
0x4592D0: mov     eax, [esp+2Ch+a1]
0x4592D4: mov     ecx, [edi+5Ch]
0x4592D7: push    eax
0x4592D8: call    NiTMap_RemoveAt
0x4592DD: cmp     [esp+2Ch+var_14], 0
0x4592E2: jnz     loc_459183
0x4592E8: pop     ebp
0x4592E9: pop     ebx
0x4592EA: mov     ecx, [edi+5Ch]
0x4592ED: cmp     dword ptr [ecx+0Ch], 0
0x4592F1: pop     edi
0x4592F2: pop     esi
0x4592F3: jz      short loc_459307
0x4592F5: mov     ecx, ds:0B34D90h
0x4592FB: mov     edx, [ecx]
0x4592FD: mov     eax, [edx+18h]
0x459300: push    offset aLoadcharcont_1; "LoadCharControllers() call finished, bu"...
0x459305: call    eax
0x459307: add     esp, 1Ch
0x45930A: retn
