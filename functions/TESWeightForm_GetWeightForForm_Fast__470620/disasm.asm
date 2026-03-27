0x470620: mov     eax, [esp+arg_0]
0x470624: test    eax, eax
0x470626: jz      short TESWeightForm_GetWeightForForm_Fast___def_47063B; jumptable 0047063B default case, cases 24,28-32,35-37,41
0x470628: movzx   ecx, byte ptr [eax+4]
0x47062C: add     ecx, 0FFFFFFEDh; switch 24 cases
0x47062F: cmp     ecx, 17h
0x470632: ja      short TESWeightForm_GetWeightForForm_Fast___def_47063B; jumptable 0047063B default case, cases 24,28-32,35-37,41
0x470634: movzx   ecx, ds:byte_470694[ecx]
0x47063B: jmp     ds:jpt_47063B[ecx*4]; switch jump
0x470642: add     eax, 70h ; 'p'; jumptable 0047063B cases 25,40
0x470645: jmp     short loc_470663
0x470647: add     eax, 78h ; 'x'; jumptable 0047063B cases 21,33
0x47064A: jmp     short loc_470663
0x47064C: add     eax, 68h ; 'h'; jumptable 0047063B cases 19,27,38,39,42
0x47064F: jmp     short loc_470663
0x470651: add     eax, 64h ; 'd'; jumptable 0047063B case 23
0x470654: jmp     short loc_470663
0x470656: add     eax, 54h ; 'T'; jumptable 0047063B cases 20,22
0x470659: jmp     short loc_470663
0x47065B: add     eax, 60h ; '`'; jumptable 0047063B case 26
0x47065E: jmp     short loc_470663
0x470660: add     eax, 6Ch ; 'l'; jumptable 0047063B case 34
0x470663: test    eax, eax
0x470665: jz      short TESWeightForm_GetWeightForForm_Fast___def_47063B; jumptable 0047063B default case, cases 24,28-32,35-37,41
0x470667: fld     dword ptr [eax+4]
0x47066A: retn
0x47066B: fld     dword ptr ds:0A30634h; jumptable 0047063B default case, cases 24,28-32,35-37,41
0x470671: retn
