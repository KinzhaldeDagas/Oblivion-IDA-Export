0x4E1900: push    0FFFFFFFFh; Equips the supplied form on this reference. The native ABI has one stack argument: the weapon/form pointer.
0x4E1902: push    offset SEH_616530
0x4E1907: mov     eax, large fs:0
0x4E190D: push    eax
0x4E190E: sub     esp, 0Ch
0x4E1911: push    ebx
0x4E1912: push    ebp
0x4E1913: push    esi
0x4E1914: push    edi
0x4E1915: mov     eax, ds:0B30AACh
0x4E191A: xor     eax, esp
0x4E191C: push    eax
0x4E191D: lea     eax, [esp+2Ch+var_C]
0x4E1921: mov     large fs:0, eax
0x4E1927: mov     ebp, ecx
0x4E1929: mov     [esp+2Ch+var_18], ebp
0x4E192D: mov     eax, [ebp+3Ch]
0x4E1930: test    eax, eax
0x4E1932: jz      loc_4E1B1D
0x4E1938: mov     eax, [ebp+0]
0x4E193B: mov     edx, [eax+168h]
0x4E1941: call    edx
0x4E1943: mov     edi, eax
0x4E1945: mov     eax, [ebp+0]
0x4E1948: mov     edx, [eax+190h]
0x4E194E: mov     ecx, ebp
0x4E1950: xor     esi, esi
0x4E1952: call    edx
0x4E1954: test    al, al
0x4E1956: jz      short loc_4E195A
0x4E1958: mov     esi, ebp
0x4E195A: cmp     ebp, ds:0B333C4h
0x4E1960: mov     ebx, [esp+2Ch+weapon]
0x4E1964: jnz     short loc_4E198E
0x4E1966: test    edi, edi
0x4E1968: jz      short loc_4E1972
0x4E196A: push    ebx; weapon
0x4E196B: mov     ecx, edi; this
0x4E196D: call    ActorSkinInfo_SetEquippedWeapon3D; Oblivion equipped-WEAP 3D path on perspective-specific ActorSkinInfo. Accepts form type 0x21; WEAP type byte 5 (Bow) uniquely selects equipment/add-on slot 0x0E, others use slot 9. Loads/clones through Prn, stores WeaponForm/WeaponModel/WeaponObject at +0xDC/+0xE0/+0xE4, then reconciles drawn/sheathed state. External Crossbow contrast: native equipped-model identity is this ActorSkinInfo WeaponForm/WeaponObject pair; a whole ActorAnimData-root search for the first object named Weapon is not identity- or generation-safe. Current discovery is action-triggered and one-shot, with no retry for deferred 3D load, perspective creation/switch, graph rebuild, or successful PostLoadGame.
0x4E1972: mov     ecx, ds:0B333C4h; this
0x4E1978: mov     al, [ecx+588h]
0x4E197E: mov     byte ptr [esp+2Ch+weapon], al
0x4E1982: mov     edx, [esp+2Ch+weapon]
0x4E1986: push    edx; firstPerson
0x4E1987: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4E198C: mov     edi, eax
0x4E198E: test    edi, edi
0x4E1990: jz      short loc_4E199F
0x4E1992: push    ebx; weapon
0x4E1993: mov     ecx, edi; this
0x4E1995: call    ActorSkinInfo_SetEquippedWeapon3D; Oblivion equipped-WEAP 3D path on perspective-specific ActorSkinInfo. Accepts form type 0x21; WEAP type byte 5 (Bow) uniquely selects equipment/add-on slot 0x0E, others use slot 9. Loads/clones through Prn, stores WeaponForm/WeaponModel/WeaponObject at +0xDC/+0xE0/+0xE4, then reconciles drawn/sheathed state. External Crossbow contrast: native equipped-model identity is this ActorSkinInfo WeaponForm/WeaponObject pair; a whole ActorAnimData-root search for the first object named Weapon is not identity- or generation-safe. Current discovery is action-triggered and one-shot, with no retry for deferred 3D load, perspective creation/switch, graph rebuild, or successful PostLoadGame.
0x4E199A: jmp     loc_4E1AB3
0x4E199F: test    ebx, ebx
0x4E19A1: jz      loc_4E1AB3
0x4E19A7: lea     ecx, [ebx+30h]
0x4E19AA: test    ecx, ecx
0x4E19AC: jz      loc_4E1AB3
0x4E19B2: cmp     byte ptr [ebx+90h], 5
0x4E19B9: mov     eax, 9
0x4E19BE: jnz     short loc_4E19C5
0x4E19C0: mov     eax, 0Eh
0x4E19C5: push    0; skeletonRoot
0x4E19C7: push    ebp; actorRef
0x4E19C8: push    eax; slot
0x4E19C9: mov     eax, [ecx]
0x4E19CB: mov     edx, [eax+14h]
0x4E19CE: call    edx
0x4E19D0: push    eax; modelPath
0x4E19D1: call    Actor_LoadCloneAndAttachModel3D; Loads and clones a model for an actor equipment/add-on slot, binds actor-specific resources, applies the stock attachment transform, attaches through Prn metadata, and initializes render property/dynamic-effect state.
0x4E19D6: add     esp, 10h
0x4E19D9: cmp     byte ptr [ebx+90h], 5
0x4E19E0: mov     edi, eax
0x4E19E2: jnz     short loc_4E19F2
0x4E19E4: push    offset aBow; Src
0x4E19E9: mov     ecx, edi
0x4E19EB: call    NiObjectNET_SetName
0x4E19F0: jmp     short loc_4E1A43
0x4E19F2: xor     eax, eax
0x4E19F4: mov     [esp+2Ch+Src], eax
0x4E19F8: mov     [esp+2Ch+var_10], ax
0x4E19FD: mov     [esp+2Ch+var_E], ax
0x4E1A02: mov     [esp+2Ch+var_4], eax
0x4E1A06: mov     eax, [ebx+0Ch]
0x4E1A09: push    eax
0x4E1A0A: mov     eax, ds:0B065ACh
0x4E1A0F: push    eax; ArgList
0x4E1A10: lea     ecx, [esp+34h+Src]
0x4E1A14: push    offset aS08x; "%s (%08X)"
0x4E1A19: push    ecx; int
0x4E1A1A: call    BSStringT_Static_Format
0x4E1A1F: mov     edx, [esp+3Ch+Src]
0x4E1A23: add     esp, 10h
0x4E1A26: push    edx; Src
0x4E1A27: mov     ecx, edi
0x4E1A29: call    NiObjectNET_SetName
0x4E1A2E: mov     eax, [esp+2Ch+Src]
0x4E1A32: push    eax
0x4E1A33: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4E1A3B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E1A40: add     esp, 4
0x4E1A43: mov     ecx, ds:0B33B00h
0x4E1A49: call    sub_45A500
0x4E1A4E: test    al, al
0x4E1A50: jnz     short loc_4E1AB3
0x4E1A52: mov     ecx, esi
0x4E1A54: call    Actor_IsWeaponOut
0x4E1A59: test    al, al
0x4E1A5B: mov     byte ptr [esp+2Ch+weapon], al
0x4E1A5F: jnz     short loc_4E1A88
0x4E1A61: mov     ecx, [esi+58h]
0x4E1A64: mov     edx, [ecx]
0x4E1A66: mov     eax, [edx+124h]
0x4E1A6C: push    0
0x4E1A6E: call    eax
0x4E1A70: test    eax, eax
0x4E1A72: jnz     short loc_4E1A88
0x4E1A74: mov     ecx, [esi+58h]
0x4E1A77: mov     edx, [ecx]
0x4E1A79: mov     eax, [edx+308h]
0x4E1A7F: push    1
0x4E1A81: mov     byte ptr [esp+30h+weapon], 1
0x4E1A86: call    eax
0x4E1A88: mov     ebp, [esi+58h]
0x4E1A8B: mov     edx, [esi]
0x4E1A8D: mov     edi, [ebp+0]
0x4E1A90: mov     eax, [edx+164h]
0x4E1A96: push    esi
0x4E1A97: mov     ecx, esi
0x4E1A99: add     edi, 150h
0x4E1A9F: call    eax
0x4E1AA1: mov     ecx, [esp+2Ch+arg_4]
0x4E1AA5: mov     edx, [edi]
0x4E1AA7: push    eax
0x4E1AA8: push    0
0x4E1AAA: push    ecx
0x4E1AAB: mov     ecx, ebp
0x4E1AAD: call    edx
0x4E1AAF: mov     ebp, [esp+2Ch+var_18]
0x4E1AB3: test    esi, esi
0x4E1AB5: jz      short loc_4E1B1D
0x4E1AB7: cmp     byte ptr [ebx+90h], 5
0x4E1ABE: jnz     short loc_4E1AC9
0x4E1AC0: push    1
0x4E1AC2: mov     ecx, esi
0x4E1AC4: call    sub_5E13D0
0x4E1AC9: mov     edi, [esi+58h]
0x4E1ACC: test    edi, edi
0x4E1ACE: jz      short loc_4E1B0B
0x4E1AD0: cmp     byte ptr [ebx+90h], 5
0x4E1AD7: jnz     short loc_4E1B0B
0x4E1AD9: mov     ecx, ds:0B333C4h; this
0x4E1ADF: cmp     ebp, ecx
0x4E1AE1: jnz     short loc_4E1AF7
0x4E1AE3: mov     ebx, [edi]
0x4E1AE5: push    1; firstPerson
0x4E1AE7: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x4E1AEC: push    eax
0x4E1AED: mov     eax, [ebx+114h]
0x4E1AF3: mov     ecx, edi
0x4E1AF5: call    eax
0x4E1AF7: mov     ebx, [edi]
0x4E1AF9: mov     ecx, ebp; this
0x4E1AFB: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x4E1B00: mov     edx, [ebx+114h]
0x4E1B06: push    eax
0x4E1B07: mov     ecx, edi
0x4E1B09: call    edx
0x4E1B0B: mov     eax, [ebp+3Ch]
0x4E1B0E: push    eax
0x4E1B0F: mov     ecx, esi
0x4E1B11: call    sub_5EA1A0
0x4E1B16: mov     ecx, esi; a1
0x4E1B18: call    sub_5EE1B0
0x4E1B1D: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4E1B21: mov     large fs:0, ecx
0x4E1B28: pop     ecx
0x4E1B29: pop     edi
0x4E1B2A: pop     esi
0x4E1B2B: pop     ebp
0x4E1B2C: pop     ebx
0x4E1B2D: add     esp, 18h
0x4E1B30: retn    4
0x9C2A40: lea     ecx, [ebp-14h]; void *
0x9C2A43: jmp     BSStringT_Clear
0x9C2A48: mov     edx, [esp+arg_4]
0x9C2A4C: lea     eax, [edx-1Ch]
0x9C2A4F: mov     ecx, [edx-20h]
0x9C2A52: xor     ecx, eax
0x9C2A54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2A59: mov     eax, offset stru_AEB7F4
0x9C2A5E: jmp     ___CxxFrameHandler3
