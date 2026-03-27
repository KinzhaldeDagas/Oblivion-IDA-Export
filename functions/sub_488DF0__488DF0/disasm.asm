0x488DF0: mov     ecx, [ecx+8]
0x488DF3: push    0; int
0x488DF5: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x488DFA: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488DFF: push    0; int
0x488E01: push    ecx; void *
0x488E02: call    OblivionDynamicCast
0x488E07: add     esp, 14h
0x488E0A: test    eax, eax
0x488E0C: jz      short loc_488E42
0x488E0E: movzx   ecx, word ptr [eax+8]
0x488E12: cmp     cx, 0FFFFh
0x488E17: jnz     short loc_488E2E
0x488E19: mov     ecx, [eax+4]
0x488E1C: push    esi
0x488E1D: lea     esi, [ecx+1]
0x488E20: mov     dl, [ecx]
0x488E22: add     ecx, 1
0x488E25: test    dl, dl
0x488E27: jnz     short loc_488E20
0x488E29: sub     ecx, esi
0x488E2B: pop     esi
0x488E2C: jmp     short loc_488E31
0x488E2E: movzx   ecx, cx
0x488E31: test    ecx, ecx
0x488E33: jz      short loc_488E42
0x488E35: mov     eax, [eax+4]
0x488E38: test    eax, eax
0x488E3A: jnz     short locret_488E47
0x488E3C: mov     eax, offset EmptyString
0x488E41: retn
0x488E42: mov     eax, ds:0B38D30h
0x488E47: retn
