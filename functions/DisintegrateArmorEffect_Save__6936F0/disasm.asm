0x6936F0: mov     eax, [esp+Src]
0x6936F4: push    esi
0x6936F5: push    eax
0x6936F6: mov     esi, ecx
0x6936F8: call    ActiveEffect_Base_SaveEffect
0x6936FD: mov     ecx, ds:0B33B00h
0x693703: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x693707: jb      short loc_69376F
0x693709: mov     eax, [esi+38h]
0x69370C: test    eax, eax
0x69370E: mov     [esp+4+Src], 0FFFFFFFFh
0x693716: jz      short loc_69375D
0x693718: mov     eax, [eax+8]
0x69371B: test    eax, eax
0x69371D: jz      short loc_69375D
0x69371F: push    0; int
0x693721: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x693726: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69372B: push    0; int
0x69372D: push    eax; void *
0x69372E: call    OblivionDynamicCast
0x693733: add     esp, 14h
0x693736: test    eax, eax
0x693738: jz      short loc_69375D
0x69373A: push    edi
0x69373B: xor     esi, esi
0x69373D: lea     edi, [eax+64h]
0x693740: push    0
0x693742: push    esi
0x693743: mov     ecx, edi
0x693745: call    TESBipedModelForm_CoversSlot
0x69374A: test    al, al
0x69374C: jnz     short loc_693758
0x69374E: add     esi, 1
0x693751: cmp     esi, 10h
0x693754: jb      short loc_693740
0x693756: jmp     short loc_69375C
0x693758: mov     [esp+8+Src], esi
0x69375C: pop     edi
0x69375D: mov     ecx, ds:0B33B00h
0x693763: push    4; Size
0x693765: lea     edx, [esp+8+Src]
0x693769: push    edx; Src
0x69376A: call    SaveLoad_SaveData
0x69376F: pop     esi
0x693770: retn    4
