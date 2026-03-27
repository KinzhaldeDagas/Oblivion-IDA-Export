0x65AA60: push    ebx
0x65AA61: mov     ebx, [esp+4+arg_0]
0x65AA65: push    esi
0x65AA66: push    ebx
0x65AA67: mov     esi, ecx
0x65AA69: call    j_TESForm_SetDeleted
0x65AA6E: push    esi
0x65AA6F: mov     ecx, offset ActorProcessManager_ptr
0x65AA74: call    sub_6748B0
0x65AA79: test    bl, bl
0x65AA7B: jz      short loc_65AAC7
0x65AA7D: push    0; int
0x65AA7F: push    offset ??_R0?AVMagicCaster@@@8; struct TypeDescriptor *
0x65AA84: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65AA89: push    0; int
0x65AA8B: push    esi; void *
0x65AA8C: call    OblivionDynamicCast
0x65AA91: add     esp, 14h
0x65AA94: test    eax, eax
0x65AA96: jnz     short loc_65AAB6
0x65AA98: push    eax; int
0x65AA99: push    offset ??_R0?AVTESMagicCasterForm@@@8; struct TypeDescriptor *
0x65AA9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x65AAA3: push    eax; int
0x65AAA4: push    esi; void *
0x65AAA5: call    OblivionDynamicCast
0x65AAAA: add     esp, 14h
0x65AAAD: test    eax, eax
0x65AAAF: mov     byte ptr [esp+8+arg_0], 0
0x65AAB4: jz      short loc_65AABB
0x65AAB6: mov     byte ptr [esp+8+arg_0], 1
0x65AABB: mov     eax, [esp+8+arg_0]
0x65AABF: push    eax
0x65AAC0: mov     ecx, esi
0x65AAC2: call    sub_65A050
0x65AAC7: pop     esi
0x65AAC8: pop     ebx
0x65AAC9: retn    4
