0x4D6BF0: fld1
0x4D6BF2: push    edi
0x4D6BF3: mov     edi, ecx
0x4D6BF5: fstp    dword ptr [edi+38h]
0x4D6BF8: mov     eax, ds:0B33B00h
0x4D6BFD: test    eax, eax
0x4D6BFF: jz      short TESObjectREFR_InitializeAllComponents___ClearNiNode
0x4D6C01: mov     eax, [eax+18h]
0x4D6C04: shr     eax, 2
0x4D6C07: test    al, 1
0x4D6C09: jnz     short loc_4D6C37
0x4D6C0B: push    esi
0x4D6C0C: mov     esi, [edi+3Ch]
0x4D6C0F: test    esi, esi
0x4D6C11: jz      short loc_4D6C36
0x4D6C13: lea     ecx, [esi+4]
0x4D6C16: push    ecx; lpAddend
0x4D6C17: call    dword ptr ds:0A2807Ch
0x4D6C1D: test    eax, eax
0x4D6C1F: jnz     short loc_4D6C2F
0x4D6C21: test    esi, esi
0x4D6C23: jz      short loc_4D6C2F
0x4D6C25: mov     edx, [esi]
0x4D6C27: mov     eax, [edx]
0x4D6C29: push    1
0x4D6C2B: mov     ecx, esi
0x4D6C2D: call    eax
0x4D6C2F: mov     dword ptr [edi+3Ch], 0
0x4D6C36: pop     esi
0x4D6C37: mov     ecx, edi
0x4D6C39: pop     edi
0x4D6C3A: jmp     j_TESForm_InitializeComponents
