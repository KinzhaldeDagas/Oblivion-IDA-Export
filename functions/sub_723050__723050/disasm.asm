0x723050: push    0FFFFFFFFh
0x723052: push    offset SEH_723050
0x723057: mov     eax, large fs:0
0x72305D: push    eax
0x72305E: sub     esp, 8
0x723061: push    ebx
0x723062: push    ebp
0x723063: push    esi
0x723064: push    edi
0x723065: mov     eax, ds:0B30AACh
0x72306A: xor     eax, esp
0x72306C: push    eax
0x72306D: lea     eax, [esp+28h+var_C]
0x723071: mov     large fs:0, eax
0x723077: mov     esi, ecx
0x723079: mov     ebp, [esp+28h+a2]
0x72307D: push    ebp
0x72307E: call    sub_707AB0
0x723083: mov     ecx, [ebp+0]
0x723086: lea     eax, [esp+28h+a2]
0x72308A: push    eax
0x72308B: push    esi
0x72308C: call    NiTMap_GetAt
0x723091: mov     eax, [esi+0B8h]
0x723097: test    eax, eax
0x723099: mov     edi, [esp+28h+a2]
0x72309D: jz      short loc_7230EB
0x72309F: lea     ecx, [esp+28h+a2]
0x7230A3: push    ecx
0x7230A4: mov     ecx, [ebp+0]
0x7230A7: push    eax
0x7230A8: call    NiTMap_GetAt
0x7230AD: test    al, al
0x7230AF: jz      short loc_7230C3
0x7230B1: mov     edx, [esp+28h+a2]
0x7230B5: push    edx; a2
0x7230B6: lea     ecx, [edi+0B8h]; this
0x7230BC: call    NiSmartPointer_Set??
0x7230C1: jmp     short loc_7230EB
0x7230C3: mov     ecx, [esi+0B8h]
0x7230C9: mov     eax, [ecx]
0x7230CB: mov     edx, [eax+18h]
0x7230CE: push    ebp
0x7230CF: call    edx
0x7230D1: push    eax; a2
0x7230D2: lea     ecx, [edi+0B8h]; this
0x7230D8: call    NiSmartPointer_Set??
0x7230DD: mov     ecx, [esi+0B8h]
0x7230E3: mov     eax, [ecx]
0x7230E5: mov     edx, [eax+38h]
0x7230E8: push    ebp
0x7230E9: call    edx
0x7230EB: push    offset stru_B3FA00; lpCriticalSection
0x7230F0: call    dword ptr ds:0A2806Ch
0x7230F6: call    dword ptr ds:0A2808Ch
0x7230FC: mov     ebx, 1
0x723101: add     ds:0B3FA7Ch, ebx
0x723107: mov     ds:0B3FA78h, eax
0x72310C: mov     ecx, [esi+0BCh]
0x723112: xor     ebp, ebp
0x723114: cmp     ecx, ebp
0x723116: jz      loc_72326E
0x72311C: mov     eax, [ecx]
0x72311E: mov     edx, [eax+4]
0x723121: call    edx
0x723123: cmp     eax, offset unk_B40124
0x723128: setz    al
0x72312B: test    al, al
0x72312D: jz      short loc_72318D
0x72312F: push    10h; Size
0x723131: call    FormHeapAlloc
0x723136: add     esp, 4
0x723139: mov     [esp+28h+a2], eax
0x72313D: cmp     eax, ebp
0x72313F: mov     [esp+28h+var_4], ebp
0x723143: jz      short loc_72314E
0x723145: mov     ecx, eax
0x723147: call    sub_7385B0
0x72314C: mov     ebp, eax
0x72314E: mov     ecx, [esi+0BCh]
0x723154: mov     [esp+28h+var_4], 0FFFFFFFFh
0x72315C: call    sub_452A60
0x723161: push    eax; Src
0x723162: mov     ecx, ebp
0x723164: call    sub_738630
0x723169: mov     ecx, [esi+0BCh]
0x72316F: call    TESEnchantableForm_GetCastingType
0x723174: push    eax
0x723175: mov     ecx, ebp
0x723177: call    TESWaterCulling__SetCamera
0x72317C: push    ebp; a2
0x72317D: lea     ecx, [edi+0BCh]; this
0x723183: call    NiSmartPointer_Set??
0x723188: jmp     loc_72326E
0x72318D: mov     eax, [esi+0BCh]
0x723193: push    eax; a2
0x723194: mov     ecx, edi; this
0x723196: call    sub_4EC910
0x72319B: mov     ecx, [esi+0BCh]
0x7231A1: mov     eax, [ecx]
0x7231A3: mov     edx, [eax+18h]
0x7231A6: push    edi
0x7231A7: call    edx
0x7231A9: mov     esi, [esi+0ACh]
0x7231AF: cmp     esi, ebp
0x7231B1: mov     [esp+28h+a2], esi
0x7231B5: jz      short loc_7231C1
0x7231B7: lea     eax, [esi+4]
0x7231BA: push    eax; lpAddend
0x7231BB: call    dword ptr ds:0A28078h
0x7231C1: push    30h ; '0'; Size
0x7231C3: mov     [esp+2Ch+var_4], ebx
0x7231C7: call    FormHeapAlloc
0x7231CC: add     esp, 4
0x7231CF: mov     [esp+28h+var_10], eax
0x7231D3: cmp     eax, ebp
0x7231D5: mov     byte ptr [esp+28h+var_4], 2
0x7231DA: jz      short loc_7231E6
0x7231DC: push    esi
0x7231DD: mov     ecx, eax
0x7231DF: call    sub_731620
0x7231E4: jmp     short loc_7231E8
0x7231E6: xor     eax, eax
0x7231E8: push    ebp
0x7231E9: push    eax
0x7231EA: lea     ecx, [esp+30h+var_14]
0x7231EE: push    ecx
0x7231EF: mov     ecx, edi
0x7231F1: mov     byte ptr [esp+34h+var_4], bl
0x7231F5: call    sub_7077D0
0x7231FA: push    eax
0x7231FB: lea     ecx, [edi+0ACh]
0x723201: mov     byte ptr [esp+2Ch+var_4], 3
0x723206: call    sub_55E2A0
0x72320B: mov     eax, [esp+28h+var_14]
0x72320F: cmp     eax, ebp
0x723211: mov     ebp, ds:0A2807Ch
0x723217: mov     byte ptr [esp+28h+var_4], bl
0x72321B: jz      short loc_723236
0x72321D: mov     edi, eax
0x72321F: add     eax, 4
0x723222: push    eax; lpAddend
0x723223: call    ebp ; InterlockedDecrement
0x723225: test    eax, eax
0x723227: jnz     short loc_723236
0x723229: test    edi, edi
0x72322B: jz      short loc_723236
0x72322D: mov     edx, [edi]
0x72322F: mov     eax, [edx]
0x723231: push    ebx
0x723232: mov     ecx, edi
0x723234: call    eax
0x723236: test    esi, esi
0x723238: jz      short loc_72324F
0x72323A: lea     ecx, [esi+4]
0x72323D: push    ecx; lpAddend
0x72323E: call    ebp ; InterlockedDecrement
0x723240: test    eax, eax
0x723242: jnz     short loc_72324D
0x723244: mov     edx, [esi]
0x723246: mov     eax, [edx]
0x723248: push    ebx
0x723249: mov     ecx, esi
0x72324B: call    eax
0x72324D: xor     esi, esi
0x72324F: test    esi, esi
0x723251: mov     [esp+28h+var_4], 0FFFFFFFFh
0x723259: jz      short loc_72326E
0x72325B: lea     ecx, [esi+4]
0x72325E: push    ecx; lpAddend
0x72325F: call    ebp ; InterlockedDecrement
0x723261: test    eax, eax
0x723263: jnz     short loc_72326E
0x723265: mov     edx, [esi]
0x723267: mov     eax, [edx]
0x723269: push    ebx
0x72326A: mov     ecx, esi
0x72326C: call    eax
0x72326E: sub     ds:0B3FA7Ch, ebx
0x723274: jnz     short loc_723280
0x723276: mov     dword ptr ds:0B3FA78h, 0
0x723280: push    offset stru_B3FA00; lpCriticalSection
0x723285: call    dword ptr ds:0A28074h
0x72328B: mov     ecx, [esp+28h+var_C]
0x72328F: mov     large fs:0, ecx
0x723296: pop     ecx
0x723297: pop     edi
0x723298: pop     esi
0x723299: pop     ebp
0x72329A: pop     ebx
0x72329B: add     esp, 14h
0x72329E: retn    4
