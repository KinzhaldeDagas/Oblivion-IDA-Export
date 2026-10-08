0x5BEA10: mov     ecx, [ecx+0BCh]
0x5BEA16: push    0FAFh
0x5BEA1B: call    Tile_GetFloat
0x5BEA20: fcomp   dword ptr ds:0A379B4h
0x5BEA26: fnstsw  ax
0x5BEA28: test    ah, 44h
0x5BEA2B: jp      short locret_5BEA32
0x5BEA2D: jmp     loc_5BE270
0x5BEA32: retn
0x5BE270: push    esi
0x5BE271: push    40Ah
0x5BE276: call    Menu_GetOpenMenuTile
0x5BE27B: mov     esi, eax
0x5BE27D: add     esp, 4
0x5BE280: test    esi, esi
0x5BE282: jz      loc_5BE36F
0x5BE288: push    edi; a3
0x5BE289: mov     ecx, esi
0x5BE28B: call    Tile_GetParentMenu
0x5BE290: mov     edi, eax
0x5BE292: test    edi, edi
0x5BE294: jz      loc_5BE354
0x5BE29A: fld     dword ptr ds:0A379B4h
0x5BE2A0: mov     eax, [edi+0D8h]
0x5BE2A6: push    ebx; a3
0x5BE2A7: push    ecx
0x5BE2A8: fstp    [esp+10h+a2]; value
0x5BE2AB: push    1772h; propertyCode
0x5BE2B0: mov     ecx, esi; this
0x5BE2B2: mov     dword ptr [eax+70h], 7
0x5BE2B9: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5BE2BE: mov     ecx, edi; int
0x5BE2C0: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5BE2C5: push    3F1h
0x5BE2CA: call    Menu_GetOpenMenuTile
0x5BE2CF: add     esp, 4
0x5BE2D2: push    0; int
0x5BE2D4: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x5BE2D9: mov     esi, eax
0x5BE2DB: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BE2E0: push    0; int
0x5BE2E2: mov     ecx, esi
0x5BE2E4: call    Tile_GetParentMenu
0x5BE2E9: push    eax; void *
0x5BE2EA: call    OblivionDynamicCast
0x5BE2EF: add     esp, 14h
0x5BE2F2: test    esi, esi
0x5BE2F4: mov     ebx, eax
0x5BE2F6: jz      short loc_5BE33D
0x5BE2F8: test    ebx, ebx
0x5BE2FA: jz      short loc_5BE33D
0x5BE2FC: cmp     byte ptr [edi+8Ch], 0
0x5BE303: jz      short loc_5BE30C
0x5BE305: mov     ecx, ebx
0x5BE307: call    sub_59DF70
0x5BE30C: push    0; clearAll
0x5BE30E: push    0; processCurrentInfo
0x5BE310: mov     ecx, ebx; this
0x5BE312: mov     byte ptr [ebx+96h], 1; Persuasion/submenu return marks the current topic cursor for abandonment before rebuilding the dialogue choices.
0x5BE319: call    DialogMenu__AdvanceTopicList; Rebuild with processCurrentInfo=false. AdvanceTopicList first nulls the current cursor because +0x96 is set, so the abandoned INFO receives neither AddTopicList nor RunResult; the preserved GREETING seed is used to repopulate choices.
0x5BE31E: push    0; float
0x5BE320: mov     ecx, esi
0x5BE322: call    sub_58FBA0
0x5BE327: fld     dword ptr ds:0A379B4h
0x5BE32D: push    ecx
0x5BE32E: fstp    [esp+10h+a2]; value
0x5BE331: push    0FA1h; propertyCode
0x5BE336: mov     ecx, esi; this
0x5BE338: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5BE33D: mov     ecx, [edi+0D8h]
0x5BE343: call    sub_5E12B0
0x5BE348: test    eax, eax
0x5BE34A: pop     ebx
0x5BE34B: jz      short loc_5BE354
0x5BE34D: mov     byte ptr [eax+1DBh], 0
0x5BE354: push    1; arg1
0x5BE356: push    0; canCreate
0x5BE358: call    InterfaceManager_GetSingleton
0x5BE35D: add     esp, 8
0x5BE360: push    1
0x5BE362: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x5BE367: mov     ecx, eax
0x5BE369: call    sub_57DA20
0x5BE36E: pop     edi
0x5BE36F: pop     esi
0x5BE370: retn
