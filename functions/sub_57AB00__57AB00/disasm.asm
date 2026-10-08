0x57AB00: push    1; arg1
0x57AB02: push    0; canCreate
0x57AB04: call    InterfaceManager_GetSingleton
0x57AB09: add     esp, 8
0x57AB0C: test    eax, eax
0x57AB0E: jz      short loc_57AB61
0x57AB10: push    1; arg1
0x57AB12: push    0; canCreate
0x57AB14: call    InterfaceManager_GetSingleton
0x57AB19: add     esp, 8
0x57AB1C: cmp     dword ptr [eax+1Ch], 0
0x57AB20: jz      short loc_57AB61
0x57AB22: push    1; arg1
0x57AB24: push    0; canCreate
0x57AB26: call    InterfaceManager_GetSingleton
0x57AB2B: add     esp, 8
0x57AB2E: cmp     dword ptr [eax+68h], 0
0x57AB32: jz      short loc_57AB61
0x57AB34: push    1; arg1
0x57AB36: push    0; canCreate
0x57AB38: call    InterfaceManager_GetSingleton
0x57AB3D: mov     eax, [eax+68h]
0x57AB40: add     esp, 8
0x57AB43: push    0FAEh
0x57AB48: mov     ecx, eax
0x57AB4A: call    Tile_GetFloat
0x57AB4F: fcomp   dword ptr ds:0A379B4h
0x57AB55: fnstsw  ax
0x57AB57: test    ah, 44h
0x57AB5A: jp      short loc_57AB61
0x57AB5C: jmp     DialogMenu_CreateBody; Verified creation-body tail chunk of Interface::CreateDialogMenu. Null speaker returns NULL; body checks no open DialogMenu, loads dialog_menu.xml, verifies class0x3F1, binds TileMenu, validates fields, sets speaker+0x60, configures camera/menu visibility, initializes topics and starts head response. Retained existing IDA chunk ownership because real tail-JMP explains distant parent.
0x57AB61: xor     eax, eax
0x57AB63: retn
0x59ED30: push    edi; Verified creation-body tail chunk of Interface::CreateDialogMenu. Null speaker returns NULL; body checks no open DialogMenu, loads dialog_menu.xml, verifies class0x3F1, binds TileMenu, validates fields, sets speaker+0x60, configures camera/menu visibility, initializes topics and starts head response. Retained existing IDA chunk ownership because real tail-JMP explains distant parent.
0x59ED31: mov     edi, [esp+4+arg_0]
0x59ED35: test    edi, edi
0x59ED37: jnz     short loc_59ED3D
0x59ED39: xor     eax, eax
0x59ED3B: pop     edi
0x59ED3C: retn
0x59ED3D: fldz
0x59ED3F: mov     byte ptr ds:0B2D91Ch, 0; MoonSugarEffect decode: reset/cleanup path clears byte_B2D91C and zeros native Gethit intensity globals.
0x59ED46: fst     dword ptr ds:0B46124h
0x59ED4C: push    0
0x59ED4E: fstp    dword ptr ds:0B46120h
0x59ED54: mov     ecx, edi
0x59ED56: mov     eax, [edi]
0x59ED58: mov     edx, [eax+130h]
0x59ED5E: call    edx
0x59ED60: test    eax, eax
0x59ED62: jz      short loc_59ED79
0x59ED64: mov     eax, [edi]
0x59ED66: mov     edx, [eax+130h]
0x59ED6C: push    0
0x59ED6E: mov     ecx, edi
0x59ED70: call    edx
0x59ED72: mov     byte ptr [eax+112h], 1
0x59ED79: mov     eax, [edi]
0x59ED7B: mov     edx, [eax+134h]
0x59ED81: push    0
0x59ED83: mov     ecx, edi
0x59ED85: call    edx
0x59ED87: test    eax, eax
0x59ED89: jz      short loc_59EDA0
0x59ED8B: mov     eax, [edi]
0x59ED8D: mov     edx, [eax+134h]
0x59ED93: push    0
0x59ED95: mov     ecx, edi
0x59ED97: call    edx
0x59ED99: mov     byte ptr [eax+112h], 1
0x59EDA0: mov     ecx, edi; int
0x59EDA2: call    sub_5EAE70; 3DTheft: package reset/cleanup path. For no ExtraPackage case, clears process->editorPackage, resets editorPackProcedure to TRAVEL, then destroys detached dynamic package.
0x59EDA7: mov     ecx, ds:0B333C4h
0x59EDAD: mov     eax, [ecx]
0x59EDAF: mov     edx, [eax+234h]
0x59EDB5: push    1
0x59EDB7: call    edx
0x59EDB9: mov     ecx, ds:0B333C4h
0x59EDBF: mov     eax, [edi]
0x59EDC1: mov     edx, [eax+2F4h]
0x59EDC7: push    0
0x59EDC9: push    1
0x59EDCB: push    ecx; a3
0x59EDCC: mov     ecx, edi
0x59EDCE: call    edx
0x59EDD0: push    3F1h
0x59EDD5: call    Menu_GetOpenMenuTile
0x59EDDA: add     esp, 4
0x59EDDD: test    eax, eax
0x59EDDF: jnz     loc_59EFFF
0x59EDE5: push    ebp; a3
0x59EDE6: push    esi; a3
0x59EDE7: push    1; arg1
0x59EDE9: push    eax; canCreate
0x59EDEA: call    InterfaceManager_GetSingleton
0x59EDEF: add     esp, 8
0x59EDF2: mov     esi, eax
0x59EDF4: call    InterfaceManager_GetDepth
0x59EDF9: fstp    [esp+0Ch+arg_0]
0x59EDFD: mov     ecx, [esi+68h]; this
0x59EE00: push    offset aDataMenusDia_1; "Data\\Menus\\Dialog\\dialog_menu.xml"
0x59EE05: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x59EE0A: mov     ebp, eax
0x59EE0C: mov     ecx, ebp
0x59EE0E: call    Tile_GetParentMenu
0x59EE13: mov     esi, eax
0x59EE15: test    esi, esi
0x59EE17: jz      loc_59EFFB
0x59EE1D: mov     eax, [esi]
0x59EE1F: mov     edx, [eax+34h]
0x59EE22: mov     ecx, esi
0x59EE24: call    edx
0x59EE26: cmp     eax, 3F1h
0x59EE2B: jnz     loc_59EFEB
0x59EE31: call    sub_5A8FA0
0x59EE36: push    0; int
0x59EE38: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x59EE3D: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x59EE42: push    0; int
0x59EE44: push    ebp; void *
0x59EE45: call    OblivionDynamicCast
0x59EE4A: add     esp, 14h
0x59EE4D: push    eax
0x59EE4E: mov     ecx, esi
0x59EE50: call    Menu_SetTileMenu
0x59EE55: mov     ecx, esi; this
0x59EE57: call    DialogMenu__ValidateRequiredTiles; Verified hook contract: ECX=menu; call bool ValidateRequiredTiles; test AL at 0x59EE5C branches to initialization on true. Menu_SetTileMenu precedes validation. This site validates bound XML pointers, not populated topic choices.
0x59EE5C: test    al, al
0x59EE5E: jnz     short loc_59EE73
0x59EE60: push    offset aDialogueMenuCr; "Dialogue Menu Creation Failed... Are yo"...
0x59EE65: call    PrintError
0x59EE6A: add     esp, 4
0x59EE6D: pop     esi
0x59EE6E: pop     ebp
0x59EE6F: xor     eax, eax
0x59EE71: pop     edi
0x59EE72: retn
0x59EE73: push    0FA5h
0x59EE78: mov     ecx, ebp
0x59EE7A: call    Tile_GetFloat
0x59EE7F: fcomp   dword ptr ds:0A69770h
0x59EE85: fnstsw  ax
0x59EE87: test    ah, 44h
0x59EE8A: jnp     short loc_59EEA5
0x59EE8C: push    0FA5h
0x59EE91: mov     ecx, ebp
0x59EE93: call    Tile_GetFloat
0x59EE98: fcomp   qword ptr ds:0A69778h
0x59EE9E: fnstsw  ax
0x59EEA0: test    ah, 44h
0x59EEA3: jp      short loc_59EEB9
0x59EEA5: fld     [esp+0Ch+arg_0]
0x59EEA9: push    ecx
0x59EEAA: fstp    [esp+10h+a3]; value
0x59EEAD: push    0FABh; propertyCode
0x59EEB2: mov     ecx, ebp; this
0x59EEB4: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59EEB9: fldz
0x59EEBB: mov     ecx, edi; this
0x59EEBD: fstp    dword ptr [esi+68h]
0x59EEC0: mov     [esi+60h], edi
0x59EEC3: mov     byte ptr [esi+64h], 1
0x59EEC7: call    TESObjectREFR_GetName
0x59EECC: push    eax
0x59EECD: push    0FB2h
0x59EED2: mov     ecx, ebp
0x59EED4: call    Tile_SetString
0x59EED9: fldz
0x59EEDB: mov     eax, ds:0B333C4h
0x59EEE0: mov     cl, [eax+588h]
0x59EEE6: push    0; a5
0x59EEE8: mov     [esi+7Ch], cl
0x59EEEB: push    ecx
0x59EEEC: mov     ecx, ds:0B333C4h; a1
0x59EEF2: fstp    [esp+14h+a4]; a4
0x59EEF5: push    edi; a3
0x59EEF6: call    SetDialogueCamera
0x59EEFB: push    0; char
0x59EEFD: mov     ecx, esi; int
0x59EEFF: call    EnableMenu
0x59EF04: fld     dword ptr ds:0A379B4h
0x59EF0A: push    ecx
0x59EF0B: fstp    [esp+10h+a3]; value
0x59EF0E: push    0FA1h; propertyCode
0x59EF13: mov     ecx, ebp; this
0x59EF15: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59EF1A: mov     edx, [esp+0Ch+forcedTopic]
0x59EF1E: push    edx; forcedTopic
0x59EF1F: mov     ecx, esi; this
0x59EF21: call    DialogMenu__InitializeTopics; Initialize player dialogue from the optional forced TESTopic or stock GREETING C8. A true return records pending close but does not prevent subsequent head-response playback.
0x59EF26: fld1
0x59EF28: push    ecx
0x59EF29: fstp    [esp+10h+a3]; value
0x59EF2C: mov     ecx, [esi+3Ch]; this
0x59EF2F: push    0FA1h; propertyCode
0x59EF34: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59EF39: call    MenuTopicManager__GetSingleton
0x59EF3E: mov     ecx, eax; this
0x59EF40: call    TESHealthForm_GetHealth; Linker-folded +4 pointer getter used here as MenuTopicManager::GetCurrentTopic; despite the shared TESHealthForm_GetHealth name, EAX is the current/head MenuTopic.
0x59EF45: test    eax, eax
0x59EF47: jz      short loc_59EF5D
0x59EF49: mov     ecx, eax; The restored head MenuTopic is the GREETING/current spoken entry. It is played here even when the GREETING has Goodbye and its AddTopicList/result were already committed during initialization.
0x59EF4B: call    MenuTopic__FirstResponse
0x59EF50: test    al, al; Initial head/GREETING with no retained response takes the immediate processing branch. Player MenuTopic construction filters empty response text, so an authored empty-only GREETING reaches this path.
0x59EF52: jz      short loc_59EF5D
0x59EF54: mov     ecx, esi
0x59EF56: call    DialogMenu__AdvanceTopicResponse; Begin the GREETING response chain. On final-response exhaustion AdvanceTopicResponse calls LoadNextTopicList, which observes Goodbye and lets LoadTopicsList close the menu.
0x59EF5B: jmp     short loc_59EF70
0x59EF5D: push    0; No playable head response: process the current GREETING/forced head immediately through LoadNextTopicList. A non-Goodbye result commits without speech; a precommitted Goodbye greeting adds topics again and proceeds to close without rerunning its result here.
0x59EF5F: push    1; processCurrentInfo
0x59EF61: mov     ecx, esi; this
0x59EF63: call    DialogMenu__AdvanceTopicList; DialogMenu wrapper around LoadNextTopicList. Every native call site passes clearAll=false; processCurrentInfo is false only for the path that refreshes choices without committing the current INFO.
0x59EF68: test    al, al
0x59EF6A: jnz     loc_59EFFB
0x59EF70: push    3EDh
0x59EF75: call    Menu_GetOpenMenuTile
0x59EF7A: add     esp, 4
0x59EF7D: test    eax, eax
0x59EF7F: jz      short loc_59EF8F
0x59EF81: mov     ecx, eax
0x59EF83: call    Tile_GetParentMenu
0x59EF88: mov     ecx, eax; int
0x59EF8A: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x59EF8F: push    1; enableActions
0x59EF91: mov     ecx, esi; this
0x59EF93: call    DialogMenu__RefreshActionAvailability; Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
0x59EF98: push    0; char
0x59EF9A: mov     ecx, esi; int
0x59EF9C: call    EnableMenu
0x59EFA1: mov     ecx, ds:0B3A6B0h
0x59EFA7: push    2
0x59EFA9: call    sub_572EA0
0x59EFAE: fcomp   dword ptr ds:0A2FAA8h
0x59EFB4: fnstsw  ax
0x59EFB6: test    ah, 41h
0x59EFB9: jnz     short loc_59EFDB
0x59EFBB: mov     ecx, ds:0B333A0h
0x59EFC1: push    0
0x59EFC3: push    0
0x59EFC5: push    0
0x59EFC7: call    sub_440AF0
0x59EFCC: mov     ecx, ds:0B3A6B0h
0x59EFD2: push    0
0x59EFD4: push    2
0x59EFD6: call    sub_572EC0
0x59EFDB: push    0
0x59EFDD: call    sub_578CF0
0x59EFE2: add     esp, 4
0x59EFE5: pop     esi
0x59EFE6: mov     eax, ebp
0x59EFE8: pop     ebp
0x59EFE9: pop     edi
0x59EFEA: retn
0x59EFEB: cmp     dword ptr [esi+4], 0
0x59EFEF: jz      short loc_59EFFB
0x59EFF1: mov     eax, [esi]
0x59EFF3: mov     edx, [eax]
0x59EFF5: push    1
0x59EFF7: mov     ecx, esi
0x59EFF9: call    edx
0x59EFFB: pop     esi
0x59EFFC: xor     eax, eax
0x59EFFE: pop     ebp
0x59EFFF: pop     edi
0x59F000: retn
