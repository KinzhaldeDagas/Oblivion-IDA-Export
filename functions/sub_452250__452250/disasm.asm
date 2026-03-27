0x452250: push    esi
0x452251: mov     esi, [esp+4+arg_0]
0x452255: push    0; int
0x452257: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45225C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x452261: push    0; int
0x452263: push    esi; void *
0x452264: call    OblivionDynamicCast
0x452269: add     esp, 14h
0x45226C: test    eax, eax
0x45226E: jnz     short loc_4522AC
0x452270: push    eax; int
0x452271: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x452276: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45227B: push    eax; int
0x45227C: push    esi; void *
0x45227D: call    OblivionDynamicCast
0x452282: add     esp, 14h
0x452285: test    eax, eax
0x452287: jz      short loc_4522DA
0x452289: mov     eax, [esp+4+arg_4]
0x45228D: test    eax, 4000000h
0x452292: jz      short loc_45229C
0x452294: mov     ax, 4
0x452298: pop     esi
0x452299: retn    8
0x45229C: and     eax, 2000000h
0x4522A1: neg     eax
0x4522A3: sbb     eax, eax
0x4522A5: and     eax, 6
0x4522A8: pop     esi
0x4522A9: retn    8
0x4522AC: mov     eax, [esp+4+arg_4]
0x4522B0: test    al, 2
0x4522B2: jz      short loc_4522BC
0x4522B4: mov     ax, 24h ; '$'
0x4522B8: pop     esi
0x4522B9: retn    8
0x4522BC: test    al, 0Ch
0x4522BE: jz      short loc_4522D3
0x4522C0: and     eax, 80000000h
0x4522C5: neg     eax
0x4522C7: sbb     eax, eax
0x4522C9: and     eax, 10h
0x4522CC: add     eax, 1Ch
0x4522CF: pop     esi
0x4522D0: retn    8
0x4522D3: test    eax, offset loc_800000
0x4522D8: jnz     short loc_452294
0x4522DA: xor     ax, ax
0x4522DD: pop     esi
0x4522DE: retn    8
