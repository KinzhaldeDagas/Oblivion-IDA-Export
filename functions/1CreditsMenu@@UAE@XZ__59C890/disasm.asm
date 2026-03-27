0x59C890: push    0FFFFFFFFh
0x59C892: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x59C897: mov     eax, large fs:0
0x59C89D: push    eax
0x59C89E: push    ecx
0x59C89F: push    esi
0x59C8A0: mov     eax, ds:0B30AACh
0x59C8A5: xor     eax, esp
0x59C8A7: push    eax
0x59C8A8: lea     eax, [esp+18h+var_C]
0x59C8AC: mov     large fs:0, eax
0x59C8B2: mov     esi, ecx
0x59C8B4: mov     [esp+18h+var_10], esi
0x59C8B8: mov     dword ptr [esi], offset ??_7CreditsMenu@@6B@; const CreditsMenu::`vftable'
0x59C8BE: cmp     byte ptr ds:0B3B290h, 0
0x59C8C5: mov     [esp+18h+var_4], 0
0x59C8CD: jz      short loc_59C909
0x59C8CF: push    414h
0x59C8D4: call    Menu_GetOpenMenuTile
0x59C8D9: add     esp, 4
0x59C8DC: test    eax, eax
0x59C8DE: jz      short loc_59C909
0x59C8E0: push    0; int
0x59C8E2: push    offset ??_R0?AVMainMenu@@@8; struct TypeDescriptor *
0x59C8E7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59C8EC: push    0; int
0x59C8EE: mov     ecx, eax
0x59C8F0: call    Tile_GetParentMenu
0x59C8F5: push    eax; void *
0x59C8F6: call    OblivionDynamicCast
0x59C8FB: add     esp, 14h
0x59C8FE: test    eax, eax
0x59C900: jz      short loc_59C909
0x59C902: mov     ecx, eax
0x59C904: call    sub_5B5A30
0x59C909: mov     ecx, esi; this
0x59C90B: mov     [esp+18h+var_4], 0FFFFFFFFh
0x59C913: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x59C918: mov     ecx, [esp+18h+var_C]
0x59C91C: mov     large fs:0, ecx
0x59C923: pop     ecx
0x59C924: pop     esi
0x59C925: add     esp, 10h
0x59C928: retn
