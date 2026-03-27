0x626C50: push    esi
0x626C51: mov     esi, ecx
0x626C53: mov     dword ptr [esi], offset ??_7FleePackage@@6B@; const FleePackage::`vftable'
0x626C59: cmp     dword ptr [esi+58h], 0
0x626C5D: jz      short loc_626C77
0x626C5F: push    edi
0x626C60: mov     eax, [esi+58h]
0x626C63: mov     edi, [eax+4]
0x626C66: push    eax
0x626C67: call    FormHeapFree
0x626C6C: add     esp, 4
0x626C6F: test    edi, edi
0x626C71: mov     [esi+58h], edi
0x626C74: jnz     short loc_626C60
0x626C76: pop     edi
0x626C77: mov     dword ptr [esi+54h], 0
0x626C7E: mov     ecx, esi; this
0x626C80: pop     esi
0x626C81: jmp     ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
