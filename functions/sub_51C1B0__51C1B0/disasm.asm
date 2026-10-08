0x51C1B0: push    ebx; Initialize the fixed 0x34-byte CLAS DATA payload. Defaults: favored attributes Strength and Intelligence; specialization Combat (zeroed); majors Armorer, Athletics, Blade, Block, Blunt, HandToHand, and HeavyArmor. There is no minorSkills field.
0x51C1B1: push    ebp
0x51C1B2: push    esi
0x51C1B3: push    edi
0x51C1B4: mov     ebx, ecx
0x51C1B6: push    34h ; '4'
0x51C1B8: lea     ebp, [ebx+38h]
0x51C1BB: push    0
0x51C1BD: push    ebp
0x51C1BE: call    __memset
0x51C1C3: add     esp, 0Ch
0x51C1C6: xor     esi, esi
0x51C1C8: lea     edi, [ebx+44h]
0x51C1CB: jmp     short loc_51C1D0
0x51C1D0: push    esi
0x51C1D1: push    2
0x51C1D3: call    ActorValue_GetAVFromGroupOffset; Seed majorSkills[0..6] by converting native skill offsets 0..6 to SkillActorValue 0x0C..0x12.
0x51C1D8: lea     ecx, [eax-0Ch]
0x51C1DB: add     esp, 8
0x51C1DE: cmp     ecx, 14h
0x51C1E1: ja      short loc_51C1E5
0x51C1E3: mov     [edi], eax
0x51C1E5: add     esi, 1
0x51C1E8: add     edi, 4
0x51C1EB: cmp     esi, 7
0x51C1EE: jl      short loc_51C1D0
0x51C1F0: pop     edi
0x51C1F1: pop     esi
0x51C1F2: mov     dword ptr [ebp+0], 0; Default favored attribute 1 is Strength.
0x51C1F9: pop     ebp
0x51C1FA: mov     dword ptr [ebx+3Ch], 1; Default favored attribute 2 is Intelligence.
0x51C201: mov     ecx, ebx
0x51C203: pop     ebx
0x51C204: jmp     j_TESForm_InitializeComponents
