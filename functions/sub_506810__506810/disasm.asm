0x506810: push    ecx
0x506811: mov     ecx, [esp+4+l]
0x506815: mov     edx, [esp+4+arg_10]
0x506819: push    esi
0x50681A: mov     esi, [esp+8+arg_8]
0x50681E: lea     eax, [esp+8+var_4]
0x506822: push    eax; UInt16
0x506823: mov     eax, [esp+0Ch+arg_C]
0x506827: push    ecx; l
0x506828: mov     ecx, [esp+10h+a3]
0x50682C: push    edx; a6
0x50682D: mov     edx, [esp+14h+arg_4]
0x506831: push    eax; a5
0x506832: mov     eax, [esp+18h+a1]
0x506836: push    esi; a4
0x506837: push    ecx; a3
0x506838: push    edx; a2
0x506839: push    eax; a1
0x50683A: mov     dword ptr [esp+28h+var_4], 0
0x506842: call    Script_ExtractArgs
0x506847: add     esp, 20h
0x50684A: test    al, al
0x50684C: jnz     short loc_506851
0x50684E: pop     esi
0x50684F: pop     ecx
0x506850: retn
0x506851: test    esi, esi
0x506853: jz      short loc_5068AF
0x506855: mov     edx, [esi]
0x506857: mov     eax, [edx+170h]
0x50685D: mov     ecx, esi
0x50685F: call    eax
0x506861: test    eax, eax
0x506863: jz      short loc_5068AF
0x506865: push    0; int
0x506867: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x50686C: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x506871: push    0; int
0x506873: push    eax; void *
0x506874: call    OblivionDynamicCast
0x506879: add     esp, 14h
0x50687C: test    eax, eax
0x50687E: jz      short loc_5068AF
0x506880: mov     ecx, dword ptr [esp+8+var_4]
0x506884: push    ecx; int
0x506885: mov     ecx, eax; int
0x506887: call    TESValueForm_SetValue
0x50688C: cmp     byte ptr ds:0B361ACh, 0
0x506893: jz      short loc_5068AF
0x506895: mov     edx, dword ptr [esp+8+var_4]
0x506899: push    edx
0x50689A: mov     ecx, esi; this
0x50689C: call    TESObjectREFR_GetName
0x5068A1: push    eax
0x5068A2: push    offset aSHasBeenSetToA; "%s has been set to a VALUE of %i"
0x5068A7: call    Interface_ConsolePrint
0x5068AC: add     esp, 0Ch
0x5068AF: mov     al, 1
0x5068B1: pop     esi
0x5068B2: pop     ecx
0x5068B3: retn
