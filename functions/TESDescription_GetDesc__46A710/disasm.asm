0x46A710: mov     eax, ds:0BA9DE4h
0x46A715: push    esi
0x46A716: mov     esi, ecx
0x46A718: mov     ecx, large fs:2Ch
0x46A71F: mov     edx, [ecx+eax*4]
0x46A722: cmp     byte ptr [edx+184h], 0
0x46A729: jnz     short loc_46A755
0x46A72B: mov     eax, [esp+4+arg_0]
0x46A72F: test    eax, eax
0x46A731: jnz     short loc_46A748
0x46A733: push    eax; int
0x46A734: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46A739: push    offset ??_R0?AVTESDescription@@@8; struct _s_RTTICompleteObjectLocator *
0x46A73E: push    eax; int
0x46A73F: push    esi; void *
0x46A740: call    OblivionDynamicCast
0x46A745: add     esp, 14h
0x46A748: mov     ecx, [esp+4+arg_4]
0x46A74C: push    ecx
0x46A74D: push    eax
0x46A74E: mov     ecx, esi
0x46A750: call    TESDescription_LoadToCache
0x46A755: mov     eax, ds:0B33C08h
0x46A75A: test    eax, eax
0x46A75C: pop     esi
0x46A75D: jnz     short locret_46A764
0x46A75F: mov     eax, offset EmptyString
0x46A764: retn    8
