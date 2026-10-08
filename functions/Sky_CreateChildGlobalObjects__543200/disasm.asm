0x543200: push    0FFFFFFFFh; Verified: accepts an explicit Climate, else resolves built-in Climate FormID 0x15F; stores Sky.firstClimate and refreshes stars, sun textures, and moon child objects.
0x543202: push    offset Sky_CreateChildGlobalObjects_SEH
0x543207: mov     eax, large fs:0
0x54320D: push    eax
0x54320E: push    esi
0x54320F: push    edi
0x543210: mov     eax, ds:0B30AACh
0x543215: xor     eax, esp
0x543217: push    eax
0x543218: lea     eax, [esp+18h+var_C]
0x54321C: mov     large fs:0, eax
0x543222: mov     esi, ecx
0x543224: mov     eax, [esp+18h+climate]
0x543228: test    eax, eax
0x54322A: jnz     short loc_543256
0x54322C: push    eax; int
0x54322D: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x543232: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x543237: push    eax; int
0x543238: push    15Fh; a1
0x54323D: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x543242: add     esp, 4
0x543245: push    eax; void *
0x543246: call    OblivionDynamicCast
0x54324B: add     esp, 14h
0x54324E: test    eax, eax
0x543250: jz      loc_5434F7; Verified Oblivion null-climate behavior: Sky_SetClimateAndRefreshChildren resolves built-in Climate FormID 0x15F whenever input is null. Fallout divergence: Sky::SetCurrentClimate uses the built-in only when current climate is null or force is set; otherwise a null input preserves current climate.
0x543256: cmp     [esi+0Ch], eax
0x543259: jnz     short loc_543266
0x54325B: cmp     [esp+18h+forceRefresh], 0
0x543260: jz      loc_5434F7
0x543266: or      dword ptr [esi+0FCh], 3F00h
0x543270: mov     ecx, esi
0x543272: mov     [esi+0Ch], eax
0x543275: call    sub_540380
0x54327A: cmp     dword ptr [esi+24h], 0
0x54327E: jz      short loc_5432BF
0x543280: mov     eax, [esi+0DCh]
0x543286: cmp     eax, 3
0x543289: jz      short loc_543290
0x54328B: cmp     eax, 2
0x54328E: jnz     short loc_5432BF
0x543290: mov     eax, [esi+0Ch]
0x543293: lea     ecx, [eax+18h]
0x543296: mov     eax, [ecx]
0x543298: mov     edx, [eax+14h]
0x54329B: call    edx
0x54329D: mov     ecx, [esi+24h]
0x5432A0: push    eax
0x5432A1: call    sub_544780
0x5432A6: mov     ecx, [esi+24h]
0x5432A9: mov     eax, [ecx]
0x5432AB: mov     edx, [eax+4]
0x5432AE: push    1; arg3
0x5432B0: push    0; normalMapBypass
0x5432B2: push    0Ah; shaderId
0x5432B4: call    edx
0x5432B6: push    eax; root
0x5432B7: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x5432BC: add     esp, 10h
0x5432BF: mov     eax, [esi+28h]
0x5432C2: test    eax, eax
0x5432C4: jz      loc_543356
0x5432CA: mov     ecx, [esi+0DCh]
0x5432D0: cmp     ecx, 3
0x5432D3: jz      short loc_5432DA
0x5432D5: cmp     ecx, 2
0x5432D8: jnz     short loc_543356
0x5432DA: mov     ecx, [esi+0Ch]
0x5432DD: mov     eax, [eax+8]
0x5432E0: push    0
0x5432E2: push    offset sub_542E40
0x5432E7: add     ecx, 38h ; '8'
0x5432EA: push    ecx
0x5432EB: push    eax
0x5432EC: call    sub_542D30
0x5432F1: mov     edi, [esi+0Ch]
0x5432F4: add     esp, 10h
0x5432F7: add     edi, 44h ; 'D'
0x5432FA: cmp     byte ptr ds:0B43070h, 0
0x543301: jnz     short loc_54333F
0x543303: test    edi, edi
0x543305: jz      short loc_54333F
0x543307: mov     eax, [edi+4]
0x54330A: test    eax, eax
0x54330C: jnz     short loc_543313
0x54330E: mov     eax, offset EmptyString
0x543313: push    offset aSkySunglare_dd; "Sky\\SunGlare.dds"
0x543318: push    eax; left
0x543319: call    CRT_StricmpLocaleDispatch
0x54331E: add     esp, 8
0x543321: test    eax, eax
0x543323: jnz     short loc_54333F
0x543325: mov     edx, [esi+28h]
0x543328: mov     eax, [edx+0Ch]
0x54332B: push    0
0x54332D: push    offset sub_542E70
0x543332: push    offset aTexturesSkySun; "Textures\\Sky\\SunGlareNonHDR.dds"
0x543337: push    eax
0x543338: call    sub_53FBE0
0x54333D: jmp     short loc_543353
0x54333F: mov     eax, [esi+28h]
0x543342: mov     eax, [eax+0Ch]
0x543345: push    0
0x543347: push    offset sub_542E70
0x54334C: push    edi
0x54334D: push    eax
0x54334E: call    sub_542D30
0x543353: add     esp, 10h
0x543356: push    3
0x543358: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x54335D: mov     ecx, [esi+0Ch]
0x543360: mov     al, [ecx+55h]
0x543363: add     esp, 4
0x543366: shr     al, 7
0x543369: mov     edi, 0FFFFFFFFh
0x54336E: jz      loc_5433FE
0x543374: cmp     dword ptr [esi+30h], 0; Verified: TESClimate weatherAndMoonFlags bit 0x8000 controls whether Sky creates the Masser moon object.
0x543378: jnz     loc_5433FE
0x54337E: push    7Ch ; '|'; Size
0x543380: call    FormHeapAlloc
0x543385: add     esp, 4
0x543388: mov     dword ptr [esp+18h+forceRefresh], eax
0x54338C: test    eax, eax
0x54338E: mov     [esp+18h+var_4], 0
0x543396: jz      short loc_5433E1
0x543398: mov     edx, ds:0B365F0h
0x54339E: fld     dword ptr ds:0B365E8h
0x5433A4: push    edx
0x5433A5: sub     esp, 14h
0x5433A8: fstp    [esp+30h+a2]
0x5433AC: mov     ecx, eax; this
0x5433AE: fld     dword ptr ds:0B365E0h
0x5433B4: fstp    [esp+30h+var_24]
0x5433B8: fld     dword ptr ds:0B365D8h
0x5433BE: fstp    [esp+30h+var_28]
0x5433C2: fld     dword ptr ds:0B365D0h
0x5433C8: fstp    [esp+30h+var_2C]
0x5433CC: fld     dword ptr ds:0B365C8h
0x5433D2: fstp    [esp+30h+var_30]
0x5433D5: push    offset aMasser; "Masser"
0x5433DA: call    ??0Moon@@QAE@XZ; Moon::Moon(void)
0x5433DF: jmp     short loc_5433E3
0x5433E1: xor     eax, eax
0x5433E3: mov     ecx, [esi+8]
0x5433E6: mov     [esi+30h], eax
0x5433E9: mov     edx, [eax]
0x5433EB: push    offset aMasser; "Masser"
0x5433F0: push    ecx
0x5433F1: mov     ecx, eax
0x5433F3: mov     eax, [edx+10h]
0x5433F6: mov     [esp+20h+var_4], edi
0x5433FA: call    eax
0x5433FC: jmp     short loc_543418
0x5433FE: test    al, al
0x543400: jnz     short loc_543418
0x543402: mov     ecx, [esi+30h]
0x543405: test    ecx, ecx
0x543407: jz      short loc_543411
0x543409: mov     edx, [ecx]
0x54340B: mov     eax, [edx]
0x54340D: push    1
0x54340F: call    eax
0x543411: mov     dword ptr [esi+30h], 0
0x543418: mov     ecx, [esi+0Ch]
0x54341B: mov     al, [ecx+55h]
0x54341E: shr     al, 6
0x543421: and     al, 1
0x543423: jz      loc_5434B3
0x543429: cmp     dword ptr [esi+34h], 0; Verified: TESClimate weatherAndMoonFlags bit 0x4000 controls whether Sky creates the Secunda moon object.
0x54342D: jnz     loc_5434B3
0x543433: push    7Ch ; '|'; Size
0x543435: call    FormHeapAlloc
0x54343A: add     esp, 4
0x54343D: mov     dword ptr [esp+18h+forceRefresh], eax
0x543441: test    eax, eax
0x543443: mov     [esp+18h+var_4], 1
0x54344B: jz      short loc_543496
0x54344D: mov     edx, ds:0B36620h
0x543453: fld     dword ptr ds:0B36618h
0x543459: push    edx
0x54345A: sub     esp, 14h
0x54345D: fstp    [esp+30h+a2]
0x543461: mov     ecx, eax; this
0x543463: fld     dword ptr ds:0B36610h
0x543469: fstp    [esp+30h+var_24]
0x54346D: fld     dword ptr ds:0B36608h
0x543473: fstp    [esp+30h+var_28]
0x543477: fld     dword ptr ds:0B36600h
0x54347D: fstp    [esp+30h+var_2C]
0x543481: fld     dword ptr ds:0B365F8h
0x543487: fstp    [esp+30h+var_30]
0x54348A: push    offset aSecunda; "Secunda"
0x54348F: call    ??0Moon@@QAE@XZ; Moon::Moon(void)
0x543494: jmp     short loc_543498
0x543496: xor     eax, eax
0x543498: mov     ecx, [esi+8]
0x54349B: mov     [esi+34h], eax
0x54349E: mov     edx, [eax]
0x5434A0: mov     edx, [edx+10h]
0x5434A3: push    offset aSecunda; "Secunda"
0x5434A8: push    ecx
0x5434A9: mov     ecx, eax
0x5434AB: mov     [esp+20h+var_4], edi
0x5434AF: call    edx
0x5434B1: jmp     short loc_5434CD
0x5434B3: test    al, al
0x5434B5: jnz     short loc_5434CD
0x5434B7: mov     ecx, [esi+34h]
0x5434BA: test    ecx, ecx
0x5434BC: jz      short loc_5434C6
0x5434BE: mov     eax, [ecx]
0x5434C0: mov     edx, [eax]
0x5434C2: push    1
0x5434C4: call    edx
0x5434C6: mov     dword ptr [esi+34h], 0
0x5434CD: push    2
0x5434CF: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x5434D4: mov     ecx, [esi+4]; this
0x5434D7: add     esp, 4
0x5434DA: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x5434DF: mov     ecx, [esi+4]
0x5434E2: call    NiNode_UpdateDynamicEffectState
0x5434E7: fldz
0x5434E9: push    1; a3
0x5434EB: push    ecx
0x5434EC: mov     ecx, [esi+4]; this
0x5434EF: fstp    [esp+20h+a2]; a2
0x5434F2: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x5434F7: mov     ecx, dword ptr [esp+18h+var_C]
0x5434FB: mov     large fs:0, ecx
0x543502: pop     ecx
0x543503: pop     edi
0x543504: pop     esi
0x543505: add     esp, 0Ch
0x543508: retn    8
0x9BA5E0: mov     eax, [ebp+8]
0x9BA5E3: push    eax
0x9BA5E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BA5E9: pop     ecx
0x9BA5EA: retn
0x9BA5EB: mov     eax, [ebp+8]
0x9BA5EE: push    eax
0x9BA5EF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BA5F4: pop     ecx
0x9BA5F5: retn
0x9BA5F6: mov     edx, dword ptr [esp+forceRefresh]
0x9BA5FA: lea     eax, [edx-8]
0x9BA5FD: mov     ecx, [edx-0Ch]
0x9BA600: xor     ecx, eax
0x9BA602: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA607: mov     eax, offset stru_AE4728
0x9BA60C: jmp     ___CxxFrameHandler3
