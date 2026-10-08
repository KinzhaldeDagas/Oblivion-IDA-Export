0x447300: mov     ecx, [ecx]; this
0x447302: push    esi
0x447303: call    TESHealthForm_GetHealth; TESHealthForm scalar getter: returns the unsigned health value stored at TESHealthForm+0x4.
0x447308: mov     esi, eax
0x44730A: test    esi, esi
0x44730C: jz      short loc_44734C
0x44730E: mov     edi, edi
0x447310: push    0; int
0x447312: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x447317: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44731C: push    0; int
0x44731E: push    esi; void *
0x44731F: call    OblivionDynamicCast
0x447324: add     esp, 14h
0x447327: test    eax, eax
0x447329: jz      short loc_44733F
0x44732B: mov     ecx, [eax+28h]
0x44732E: shr     ecx, 7
0x447331: test    cl, 1
0x447334: jz      short loc_44733F
0x447336: push    0; skipDerivedStats
0x447338: mov     ecx, eax; this
0x44733A: call    TESNPC_RecalculateAutoStats; Authoritative Oblivion TESNPC auto-stat calculation. For each of 21 skills: major = 25+(level-1), non-major = 5+0.1*(level-1), then add 5+0.5*(level-1) for matching class specialization, then the signed race bonus, cap at 100, and store in TESNPC::baseSkills. The chargen placeholder class suppresses major/specialization contributions. Attributes start from sex-specific race values, add configured +5 class-primary bonuses, then add (level-1) per governed major skill or 0.2*(level-1) per governed non-major skill, capped at 100.
0x44733F: mov     ecx, esi
0x447341: call    TESObject_GetNextObject
0x447346: mov     esi, eax
0x447348: test    esi, esi
0x44734A: jnz     short loc_447310
0x44734C: pop     esi
0x44734D: retn
