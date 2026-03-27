0x51EE90: push    ebx
0x51EE91: mov     ebx, [esp+4+a2]
0x51EE95: push    esi
0x51EE96: push    edi
0x51EE97: push    0; int
0x51EE99: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x51EE9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51EEA3: push    0; int
0x51EEA5: push    ebx; void *
0x51EEA6: mov     esi, ecx
0x51EEA8: call    OblivionDynamicCast
0x51EEAD: mov     edi, eax
0x51EEAF: add     esp, 14h
0x51EEB2: test    edi, edi
0x51EEB4: jz      short loc_51EED2
0x51EEB6: push    ebx; a2
0x51EEB7: mov     ecx, esi; this
0x51EEB9: call    TESForm_CopyAllComponentsFrom
0x51EEBE: mov     al, 1
0x51EEC0: test    [edi+30h], al
0x51EEC3: jz      short loc_51EECE
0x51EEC5: or      [esi+30h], al
0x51EEC8: pop     edi
0x51EEC9: pop     esi
0x51EECA: pop     ebx
0x51EECB: retn    4
0x51EECE: and     byte ptr [esi+30h], 0FEh
0x51EED2: pop     edi
0x51EED3: pop     esi
0x51EED4: pop     ebx
0x51EED5: retn    4
