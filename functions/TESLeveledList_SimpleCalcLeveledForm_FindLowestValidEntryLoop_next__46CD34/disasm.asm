0x46CD34: mov     eax, [eax+4]
0x46CD37: test    eax, eax
0x46CD39: jnz     short TESLeveledList_SimpleCalcLeveledForm___FindLowestValidEntryLoop
0x46CD3B: test    ebx, ebx
0x46CD3D: jz      TESLeveledList_SimpleCalcLeveledForm___Done_
0x46CD43: push    0; Seed
0x46CD45: call    GetRandomLargeInteger?
0x46CD4A: cdq
0x46CD4B: idiv    ebp
0x46CD4D: mov     eax, ebx
0x46CD4F: xor     ebx, ebx
0x46CD51: add     esp, 4
0x46CD54: cmp     edx, ebx
0x46CD56: jz      short loc_46CD66
