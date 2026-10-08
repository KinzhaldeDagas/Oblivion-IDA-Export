0x5D6390: sub     esp, 10h; Creates the shared SkillsMenu. In class-skill mode (mode 0), associates the open ClassMenu, sets selectionCap=7 at SkillsMenu+0x44, populates all 21 native skills, and preselects the seven staged ClassMenu major AVs.
0x5D6393: push    ebx
0x5D6394: push    ebp; a3
0x5D6395: push    esi; a3
0x5D6396: push    edi; a3
0x5D6397: push    408h
0x5D639C: call    Menu_GetOpenMenuTile
0x5D63A1: xor     ebp, ebp
0x5D63A3: add     esp, 4
0x5D63A6: cmp     eax, ebp
0x5D63A8: jz      short loc_5D63B4
0x5D63AA: mov     edx, [eax]
0x5D63AC: mov     ecx, eax
0x5D63AE: mov     eax, [edx]
0x5D63B0: push    1; a3
0x5D63B2: call    eax
0x5D63B4: push    1; arg1
0x5D63B6: push    ebp; canCreate
0x5D63B7: call    InterfaceManager_GetSingleton
0x5D63BC: add     esp, 8
0x5D63BF: mov     esi, eax
0x5D63C1: call    InterfaceManager_GetDepth
0x5D63C6: fstp    [esp+24h+var_C]
0x5D63CA: mov     ecx, [esi+68h]; this
0x5D63CD: push    offset aDataMenusCha_0; "Data\\Menus\\CharGen\\skills_menu.xml"
0x5D63D2: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x5D63D7: mov     ebx, eax
0x5D63D9: mov     ecx, ebx
0x5D63DB: mov     [esp+24h+var_14], ebx
0x5D63DF: call    Tile_GetParentMenu
0x5D63E4: mov     edi, eax
0x5D63E6: cmp     edi, ebp
0x5D63E8: mov     [esp+24h+var_10], edi
0x5D63EC: jz      loc_5D685C
0x5D63F2: mov     edx, [edi]
0x5D63F4: mov     eax, [edx+34h]
0x5D63F7: mov     ecx, edi
0x5D63F9: call    eax
0x5D63FB: cmp     eax, 408h
0x5D6400: jnz     loc_5D684D
0x5D6406: push    ebp; int
0x5D6407: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D640C: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D6411: push    ebp; int
0x5D6412: push    ebx; void *
0x5D6413: call    OblivionDynamicCast
0x5D6418: add     esp, 14h
0x5D641B: push    eax
0x5D641C: mov     ecx, edi
0x5D641E: call    Menu_SetTileMenu
0x5D6423: push    ebp; int
0x5D6424: push    offset ??_R0?AVSkillsMenu@@@8; struct TypeDescriptor *
0x5D6429: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D642E: push    ebp; int
0x5D642F: push    edi; void *
0x5D6430: call    OblivionDynamicCast
0x5D6435: mov     esi, eax
0x5D6437: add     esp, 14h
0x5D643A: cmp     [esi+28h], ebp
0x5D643D: jz      short loc_5D6453
0x5D643F: cmp     [esi+2Ch], ebp
0x5D6442: jz      short loc_5D6453
0x5D6444: cmp     [esi+30h], ebp
0x5D6447: jz      short loc_5D6453
0x5D6449: cmp     [esi+34h], ebp
0x5D644C: jz      short loc_5D6453
0x5D644E: cmp     [esi+38h], ebp
0x5D6451: jnz     short loc_5D646A
0x5D6453: push    offset aAttributeMenuC; "Attribute Menu Creation Failed... Are y"...
0x5D6458: call    PrintError
0x5D645D: add     esp, 4
0x5D6460: pop     edi
0x5D6461: pop     esi
0x5D6462: pop     ebp
0x5D6463: xor     eax, eax
0x5D6465: pop     ebx
0x5D6466: add     esp, 10h
0x5D6469: retn
0x5D646A: push    0FA5h
0x5D646F: mov     ecx, ebx
0x5D6471: call    Tile_GetFloat
0x5D6476: fcomp   dword ptr ds:0A69770h
0x5D647C: fnstsw  ax
0x5D647E: test    ah, 44h
0x5D6481: jnp     short loc_5D649C
0x5D6483: push    0FA5h
0x5D6488: mov     ecx, ebx
0x5D648A: call    Tile_GetFloat
0x5D648F: fcomp   qword ptr ds:0A69778h
0x5D6495: fnstsw  ax
0x5D6497: test    ah, 44h
0x5D649A: jp      short loc_5D64B0
0x5D649C: fld     [esp+24h+var_C]
0x5D64A0: push    ecx
0x5D64A1: fstp    [esp+28h+a2]; value
0x5D64A4: push    0FABh; propertyCode
0x5D64A9: mov     ecx, ebx; this
0x5D64AB: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D64B0: push    406h
0x5D64B5: call    Menu_GetOpenMenuTile
0x5D64BA: add     esp, 4
0x5D64BD: cmp     eax, ebp
0x5D64BF: jz      short loc_5D64DF
0x5D64C1: push    ebp; int
0x5D64C2: push    offset ??_R0?AVClassMenu@@@8; struct TypeDescriptor *
0x5D64C7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D64CC: push    ebp; int
0x5D64CD: mov     ecx, eax
0x5D64CF: call    Tile_GetParentMenu
0x5D64D4: push    eax; void *
0x5D64D5: call    OblivionDynamicCast
0x5D64DA: add     esp, 14h
0x5D64DD: jmp     short loc_5D64E1
0x5D64DF: xor     eax, eax
0x5D64E1: cmp     eax, ebp
0x5D64E3: push    ecx
0x5D64E4: mov     [esi+4Ch], eax
0x5D64E7: mov     ecx, ebx; this
0x5D64E9: jz      short loc_5D6507
0x5D64EB: fld     dword ptr ds:0A379B4h
0x5D64F1: fstp    [esp+28h+a2]; value
0x5D64F4: push    0FB6h; propertyCode
0x5D64F9: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D64FE: mov     ecx, ds:0B38CF0h
0x5D6504: push    ecx
0x5D6505: jmp     short loc_5D651D
0x5D6507: fld1
0x5D6509: fstp    [esp+28h+a2]; value
0x5D650C: push    0FB6h; propertyCode
0x5D6511: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6516: mov     edx, ds:0B38D38h
0x5D651C: push    edx
0x5D651D: mov     ecx, [esi+34h]
0x5D6520: push    0FAEh
0x5D6525: call    Tile_SetString
0x5D652A: mov     eax, [esp+24h]
0x5D652E: mov     [esi+40h], eax
0x5D6531: mov     eax, [esp+24h+arg_0]
0x5D6535: cmp     eax, ebp
0x5D6537: mov     [esi+3Ch], eax
0x5D653A: jnz     loc_5D6646
0x5D6540: fldz
0x5D6542: push    ecx
0x5D6543: fstp    [esp+28h+a2]; value
0x5D6546: mov     ecx, ebx; this
0x5D6548: push    0FB1h; propertyCode
0x5D654D: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6552: cmp     [esi+4Ch], ebp
0x5D6555: jz      short SkillsMenu_PopulateSkillRows; Populates all 21 native skill rows, sorted by actor-value name. When invoked from ClassMenu, preselection is delegated to SkillsMenu_PreselectClassMenuValues.
0x5D6557: mov     ecx, ds:0B38630h
0x5D655D: push    ecx
0x5D655E: push    0FB3h
0x5D6563: mov     ecx, ebx
0x5D6565: call    Tile_SetString
0x5D656A: mov     dword ptr [esi+44h], 7; Native custom-class skill picker sets selectionCap to exactly 7. This is a single major-skill selection phase; Oblivion has no native minor-skill picker phase.
0x5D6571: jmp     short loc_5D6585
0x5D6646: cmp     eax, 1
0x5D6649: jnz     loc_5D670F
0x5D664F: fld1
0x5D6651: push    ecx
0x5D6652: fstp    [esp+28h+a2]; value
0x5D6655: mov     ecx, ebx; this
0x5D6657: push    0FB1h; propertyCode
0x5D665C: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6661: cmp     [esi+4Ch], ebp
0x5D6664: jz      short loc_5D6681
0x5D6666: mov     eax, ds:0B38638h
0x5D666B: push    eax
0x5D666C: push    0FB3h
0x5D6671: mov     ecx, ebx
0x5D6673: call    Tile_SetString
0x5D6678: mov     dword ptr [esi+44h], 2
0x5D667F: jmp     short SkillsMenu_PopulateAttributeRows
0x5D6681: fld1
0x5D6683: push    ecx
0x5D6684: fstp    [esp+28h+a2]; value
0x5D6687: mov     ecx, ebx; this
0x5D6689: push    0FB2h; propertyCode
0x5D668E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D670F: cmp     eax, 2
0x5D6712: jnz     short loc_5D6776
0x5D6714: fld     dword ptr ds:0A379B4h
0x5D671A: push    ecx
0x5D671B: fstp    [esp+28h+a2]; value
0x5D671E: push    0FB1h; propertyCode
0x5D6723: mov     ecx, ebx; this
0x5D6725: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D672A: mov     eax, ds:0B38640h
0x5D672F: push    eax
0x5D6730: push    0FB3h
0x5D6735: mov     ecx, ebx
0x5D6737: call    Tile_SetString
0x5D673C: mov     ecx, ds:0B385D8h
0x5D6742: push    ebp
0x5D6743: push    ecx
0x5D6744: mov     ecx, esi
0x5D6746: call    SkillsMenu_CreateSkillRow; Sidecar decode: creates chargen skill row; writes skill/AV to tile trait 0xFB0 and selection state to 0xFB1.
0x5D674B: mov     edx, ds:0B385E0h
0x5D6751: push    1
0x5D6753: push    edx
0x5D6754: mov     ecx, esi
0x5D6756: call    SkillsMenu_CreateSkillRow; Sidecar decode: creates chargen skill row; writes skill/AV to tile trait 0xFB0 and selection state to 0xFB1.
0x5D675B: mov     eax, ds:0B385E8h
0x5D6760: push    2
0x5D6762: push    eax
0x5D6763: mov     ecx, esi
0x5D6765: call    SkillsMenu_CreateSkillRow; Sidecar decode: creates chargen skill row; writes skill/AV to tile trait 0xFB0 and selection state to 0xFB1.
0x5D676A: mov     ecx, esi; this
0x5D676C: call    SkillsMenu_PreselectClassMenuValues; Preselects SkillsMenu rows for its current mode. Mode 0 reads exactly seven ClassMenu skill AVs at +0x68..+0x80; mode 1 reads two attributes; mode 2 reads specialization. Selected rows use tile trait 0xFB1==2.
0x5D6771: jmp     loc_5D662A
0x5D6776: cmp     eax, 3
0x5D6779: jnz     loc_5D662A
0x5D677F: fld     dword ptr ds:0A46C30h
0x5D6785: push    ecx
0x5D6786: fstp    [esp+28h+a2]; value
0x5D6789: push    0FB1h; propertyCode
0x5D678E: mov     ecx, ebx; this
0x5D6790: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6795: fld1
0x5D6797: push    ecx
0x5D6798: fstp    [esp+28h+a2]; value
0x5D679B: push    0FB2h; propertyCode
0x5D67A0: mov     ecx, ebx; this
0x5D67A2: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D67A7: mov     ecx, ds:0B333C4h
0x5D67AD: mov     edx, [ecx]
0x5D67AF: mov     eax, [edx+268h]
0x5D67B5: call    eax
0x5D67B7: mov     edi, ds:0B33A98h
0x5D67BD: add     edi, 8Ch ; 'Œ'
0x5D67C3: mov     [esp+24h+var_C], eax
0x5D67C7: jz      loc_5D6626
0x5D67CD: lea     ecx, [ecx+0]
0x5D67D0: cmp     dword ptr [edi+4], 0
0x5D67D4: jnz     short loc_5D67DB
0x5D67D6: cmp     dword ptr [edi], 0
0x5D67D9: jz      short loc_5D680C
0x5D67DB: mov     ebx, [edi]
0x5D67DD: mov     eax, [ebx+1Ch]
0x5D67E0: test    eax, eax
0x5D67E2: mov     ecx, [ebx+0Ch]
0x5D67E5: jnz     short loc_5D67EC
0x5D67E7: mov     eax, offset EmptyString
0x5D67EC: push    ecx
0x5D67ED: push    eax
0x5D67EE: mov     ecx, esi
0x5D67F0: call    SkillsMenu_CreateSkillRow; Sidecar decode: creates chargen skill row; writes skill/AV to tile trait 0xFB0 and selection state to 0xFB1.
0x5D67F5: test    ebp, ebp
0x5D67F7: jz      short loc_5D67FF
0x5D67F9: cmp     [esp+24h+var_C], ebx
0x5D67FD: jnz     short loc_5D6801
0x5D67FF: mov     ebp, eax
0x5D6801: mov     edi, [edi+4]
0x5D6804: test    edi, edi
0x5D6806: mov     ebx, [esp+24h+var_14]
0x5D680A: jnz     short loc_5D67D0
0x5D680C: test    ebp, ebp
0x5D680E: jz      loc_5D6626
0x5D6814: mov     edi, [esi]
0x5D6816: push    ebp
0x5D6817: push    0FA8h
0x5D681C: mov     ecx, ebp
0x5D681E: add     edi, 0Ch
0x5D6821: call    Tile_GetFloat
0x5D6826: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D682B: mov     edx, [edi]
0x5D682D: push    eax; a3
0x5D682E: mov     ecx, esi
0x5D6830: call    edx
0x5D6832: fld     dword ptr ds:0A379B4h
0x5D6838: push    ecx
0x5D6839: fstp    [esp+30h+a3]; value
0x5D683C: push    0FF0h; propertyCode
0x5D6841: mov     ecx, ebp; this
0x5D6843: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6848: jmp     loc_5D6626
0x5D684D: cmp     [edi+4], ebp
0x5D6850: jz      short loc_5D685C
0x5D6852: mov     eax, [edi]
0x5D6854: mov     edx, [eax]
