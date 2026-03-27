0x460710: sub     esp, 54h
0x460713: push    ebx
0x460714: push    ebp
0x460715: push    esi
0x460716: mov     esi, [esp+60h+arg_0]
0x46071A: push    edi; ArgList
0x46071B: xor     edi, edi
0x46071D: push    edi; int
0x46071E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x460723: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460728: push    edi; int
0x460729: push    esi; void *
0x46072A: mov     ebp, ecx
0x46072C: call    OblivionDynamicCast
0x460731: mov     ebx, eax
0x460733: add     esp, 14h
0x460736: cmp     ebx, edi
0x460738: jnz     loc_4607E0
0x46073E: push    edi; int
0x46073F: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x460744: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460749: push    edi; int
0x46074A: push    esi; void *
0x46074B: call    OblivionDynamicCast
0x460750: mov     esi, eax
0x460752: add     esp, 14h
0x460755: cmp     esi, edi
0x460757: jz      loc_460BAD
0x46075D: mov     eax, [esp+64h+Src]
0x460761: test    eax, 4000000h
0x460766: jz      short loc_46079A
0x460768: mov     ecx, esi; this
0x46076A: call    TESObjectCELL_GetWorldSpace
0x46076F: mov     eax, [eax+0Ch]
0x460772: push    eax
0x460773: mov     ecx, ebp
0x460775: call    sub_45E180
0x46077A: mov     ecx, esi; this
0x46077C: mov     word ptr [esp+64h+Src], ax
0x460781: call    TESObjectCELL_GetXCoordinate
0x460786: mov     ecx, esi; this
0x460788: mov     byte ptr [esp+64h+Src+2], al
0x46078C: call    TESObjectCELL_GetYCoordinate
0x460791: mov     byte ptr [esp+64h+Src+3], al
0x460795: jmp     loc_460B9B
0x46079A: test    eax, 2000000h
0x46079F: jz      loc_460BAD
0x4607A5: mov     ecx, esi; this
0x4607A7: call    TESObjectCELL_GetWorldSpace
0x4607AC: mov     eax, [eax+0Ch]
0x4607AF: push    eax
0x4607B0: mov     ecx, ebp
0x4607B2: call    sub_45E180
0x4607B7: mov     ecx, esi; this
0x4607B9: mov     [esp+64h+var_54], ax
0x4607BE: call    TESObjectCELL_GetXCoordinate
0x4607C3: mov     ecx, esi; this
0x4607C5: mov     [esp+64h+var_52], ax
0x4607CA: call    TESObjectCELL_GetYCoordinate
0x4607CF: push    6
0x4607D1: lea     ecx, [esp+68h+var_54]
0x4607D5: mov     [esp+68h+var_50], ax
0x4607DA: push    ecx
0x4607DB: jmp     loc_460BA2
0x4607E0: mov     ecx, ebx; this
0x4607E2: mov     [esp+64h+var_48], edi
0x4607E6: call    TESObjectREFR_GetParentCell
0x4607EB: mov     esi, eax
0x4607ED: cmp     esi, edi
0x4607EF: jz      short loc_460822
0x4607F1: mov     ecx, esi; this
0x4607F3: call    TESObjectCELL_GetWorldSpace
0x4607F8: cmp     eax, edi
0x4607FA: mov     ecx, ebp
0x4607FC: jz      short loc_460810
0x4607FE: mov     eax, [eax+0Ch]
0x460801: push    eax
0x460802: call    SaveLoad_IRefToFormID?
0x460807: mov     [esp+64h+var_48], eax
0x46080B: jmp     loc_4608C0
0x460810: mov     esi, [esi+0Ch]
0x460813: push    esi
0x460814: call    SaveLoad_IRefToFormID?
0x460819: mov     [esp+64h+var_48], eax
0x46081D: jmp     loc_4608C0
0x460822: mov     ecx, ebx; this
0x460824: call    TESObjectREFR_IsPersistent?
0x460829: test    al, al
0x46082B: jnz     short loc_46083E
0x46082D: mov     edx, [ebx+0Ch]
0x460830: push    edx; ArgList
0x460831: push    offset aErrorSavingRef; "Error saving reference %08X: Non-persis"...
0x460836: call    PrintError
0x46083B: add     esp, 8
0x46083E: mov     ecx, ebx; this
0x460840: call    TESObjectREFR_IsPersistent?
0x460845: test    al, al
0x460847: jz      short loc_460866
0x460849: lea     ecx, [ebx+44h]
0x46084C: call    sub_41FF80
0x460851: test    eax, eax
0x460853: jnz     short loc_460866
0x460855: mov     eax, [ebx+0Ch]
0x460858: push    eax; ArgList
0x460859: push    offset aErrorSavingR_0; "Error saving reference %08X:Persistent "...
0x46085E: call    PrintError
0x460863: add     esp, 8
0x460866: push    edi; int
0x460867: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x46086C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x460871: push    edi; int
0x460872: push    ebx; void *
0x460873: call    OblivionDynamicCast
0x460878: mov     esi, eax
0x46087A: add     esp, 14h
0x46087D: cmp     esi, edi
0x46087F: jz      short loc_4608C0
0x460881: mov     ecx, [esi+58h]
0x460884: cmp     ecx, edi
0x460886: jz      short loc_4608C0
0x460888: mov     edx, [ecx]
0x46088A: mov     eax, [edx+8]
0x46088D: call    eax
0x46088F: test    eax, eax
0x460891: jnz     short loc_46089E
0x460893: mov     ecx, [ebx+0Ch]
0x460896: push    ecx
0x460897: push    offset aErrorSavingAct; "Error saving actor %08X: Actor has a hi"...
0x46089C: jmp     short loc_4608B8
0x46089E: mov     esi, [esi+58h]
0x4608A1: mov     edx, [esi]
0x4608A3: mov     eax, [edx+8]
0x4608A6: mov     ecx, esi
0x4608A8: call    eax
0x4608AA: cmp     eax, 1
0x4608AD: jnz     short loc_4608C0
0x4608AF: mov     ecx, [ebx+0Ch]
0x4608B2: push    ecx; ArgList
0x4608B3: push    offset aErrorSavingA_0; "Error saving actor %08X: Actor has a mi"...
0x4608B8: call    PrintError
0x4608BD: add     esp, 8
0x4608C0: mov     eax, [ebx+30h]
0x4608C3: mov     edx, [ebx+2Ch]
0x4608C6: mov     ecx, [ebx+34h]
0x4608C9: mov     [esp+64h+var_40], eax
0x4608CD: mov     eax, [ebx+24h]
0x4608D0: mov     [esp+64h+var_34], eax
0x4608D4: mov     eax, [esp+64h+Src]
0x4608D8: test    al, 2
0x4608DA: mov     [esp+64h+var_44], edx
0x4608DE: mov     edx, [ebx+20h]
0x4608E1: mov     [esp+64h+var_3C], ecx
0x4608E5: mov     ecx, [ebx+28h]
0x4608E8: mov     [esp+64h+var_38], edx
0x4608EC: mov     [esp+64h+var_30], ecx
0x4608F0: jz      loc_4609F2
0x4608F6: mov     edx, [ebx]
0x4608F8: mov     eax, [edx+170h]
0x4608FE: mov     ecx, ebx
0x460900: mov     [esp+64h+var_2C], edi
0x460904: mov     [esp+64h+var_28], edi
0x460908: call    eax
0x46090A: test    eax, eax
0x46090C: jz      short loc_460929
0x46090E: mov     edx, [ebx]
0x460910: mov     eax, [edx+170h]
0x460916: mov     ecx, ebx
0x460918: call    eax
0x46091A: mov     eax, [eax+0Ch]
0x46091D: push    eax
0x46091E: mov     ecx, ebp
0x460920: call    SaveLoad_IRefToFormID?
0x460925: mov     [esp+64h+var_28], eax
0x460929: push    0; int
0x46092B: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x460930: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x460935: push    0; int
0x460937: mov     ecx, 7
0x46093C: lea     esi, [esp+74h+var_48]
0x460940: lea     edi, [esp+74h+var_24]
0x460944: push    ebx; void *
0x460945: rep movsd
0x460947: call    OblivionDynamicCast
0x46094C: push    0; int
0x46094E: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x460953: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x460958: push    0; int
0x46095A: push    ebx; void *
0x46095B: mov     edi, eax
0x46095D: call    OblivionDynamicCast
0x460962: add     esp, 28h
0x460965: mov     ecx, ebx; this
0x460967: mov     esi, eax
0x460969: call    TESObjectREFR_IsPersistent?
0x46096E: test    al, al
0x460970: jz      short loc_4609AB
0x460972: cmp     [esp+64h+var_48], 0
0x460977: mov     [esp+64h+var_2C], 3
0x46097F: jnz     short loc_4609E6
0x460981: lea     ecx, [ebx+44h]
0x460984: call    sub_41FF80
0x460989: mov     ecx, eax; this
0x46098B: call    TESObjectCELL_GetWorldSpace
0x460990: mov     eax, [eax+0Ch]
0x460993: push    eax
0x460994: mov     ecx, ebp
0x460996: call    SaveLoad_IRefToFormID?
0x46099B: push    24h ; '$'
0x46099D: lea     edx, [esp+68h+var_2C]
0x4609A1: mov     [esp+68h+var_24], eax
0x4609A5: push    edx
0x4609A6: jmp     loc_460BA2
0x4609AB: test    edi, edi
0x4609AD: jz      short loc_4609C3
0x4609AF: push    24h ; '$'
0x4609B1: lea     edx, [esp+68h+var_2C]
0x4609B5: mov     [esp+68h+var_2C], 1
0x4609BD: push    edx
0x4609BE: jmp     loc_460BA2
0x4609C3: test    esi, esi
0x4609C5: jz      short loc_4609E6
0x4609C7: mov     ecx, [esi+70h]
0x4609CA: mov     ecx, [ecx+1Ch]
0x4609CD: mov     [esp+64h+var_2C], 2
0x4609D5: call    EffectSetting_GetProjectileType
0x4609DA: push    eax
0x4609DB: mov     ecx, ebp
0x4609DD: call    SaveLoad_IRefToFormID?
0x4609E2: mov     [esp+64h+var_28], eax
0x4609E6: push    24h ; '$'
0x4609E8: lea     edx, [esp+68h+var_2C]
0x4609EC: push    edx
0x4609ED: jmp     loc_460BA2
0x4609F2: test    al, 0Ch
0x4609F4: jz      loc_460B3C
0x4609FA: test    eax, eax
0x4609FC: jns     loc_460B33
0x460A02: mov     eax, [ebx]
0x460A04: mov     edx, [eax+190h]
0x460A0A: mov     ecx, ebx
0x460A0C: mov     [esp+64h+var_2C], edi
0x460A10: call    edx
0x460A12: test    al, al
0x460A14: jz      short loc_460A38
0x460A16: mov     ecx, ebx
0x460A18: call    sub_5E1F60
0x460A1D: mov     ecx, ebx
0x460A1F: mov     edi, eax
0x460A21: call    sub_5E1F40
0x460A26: mov     esi, eax
0x460A28: test    esi, esi
0x460A2A: jnz     loc_460AD9
0x460A30: test    edi, edi
0x460A32: jnz     loc_460AD9
0x460A38: push    edi; int
0x460A39: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x460A3E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x460A43: push    edi; int
0x460A44: push    ebx; void *
0x460A45: call    OblivionDynamicCast
0x460A4A: add     esp, 14h
0x460A4D: test    eax, eax
0x460A4F: jz      short loc_460A5E
0x460A51: push    offset aActorDoesNotHa; "Actor does not have an editor location."...
0x460A56: call    PrintError
0x460A5B: add     esp, 4
0x460A5E: mov     eax, [ebx]
0x460A60: mov     edx, [eax+0F4h]
0x460A66: lea     ecx, [esp+64h+var_54]
0x460A6A: push    ecx
0x460A6B: mov     ecx, ebx
0x460A6D: call    edx
0x460A6F: mov     ecx, [eax]
0x460A71: mov     edx, [eax+4]
0x460A74: mov     eax, [eax+8]
0x460A77: mov     [esp+64h+var_28], ecx
0x460A7B: mov     ecx, ebx; this
0x460A7D: mov     [esp+64h+var_24], edx
0x460A81: mov     [esp+64h+var_20], eax
0x460A85: mov     [esp+64h+var_2C], edi
0x460A89: call    TESObjectREFR_GetParentCell
0x460A8E: test    eax, eax
0x460A90: jz      loc_460B1B
0x460A96: mov     ecx, ebx; this
0x460A98: call    TESObjectREFR_GetParentCell
0x460A9D: mov     ecx, eax; this
0x460A9F: call    TESObjectCELL_IsInterior
0x460AA4: test    al, al
0x460AA6: mov     ecx, ebx; this
0x460AA8: jz      short loc_460AB5
0x460AAA: call    TESObjectREFR_GetParentCell
0x460AAF: mov     eax, [eax+0Ch]
0x460AB2: push    eax
0x460AB3: jmp     short loc_460B10
0x460AB5: call    TESObjectREFR_GetParentCell
0x460ABA: mov     ecx, eax; this
0x460ABC: call    TESObjectCELL_GetWorldSpace
0x460AC1: test    eax, eax
0x460AC3: jz      short loc_460B1B
0x460AC5: mov     ecx, ebx; this
0x460AC7: call    TESObjectREFR_GetParentCell
0x460ACC: mov     ecx, eax; this
0x460ACE: call    TESObjectCELL_GetWorldSpace
0x460AD3: mov     eax, [eax+0Ch]
0x460AD6: push    eax
0x460AD7: jmp     short loc_460B10
0x460AD9: mov     edx, [ebx]
0x460ADB: mov     edx, [edx+0F4h]
0x460AE1: lea     eax, [esp+64h+var_54]
0x460AE5: push    eax
0x460AE6: mov     ecx, ebx
0x460AE8: call    edx
0x460AEA: test    esi, esi
0x460AEC: mov     ecx, [eax]
0x460AEE: mov     edx, [eax+4]
0x460AF1: mov     eax, [eax+8]
0x460AF4: mov     [esp+64h+var_28], ecx
0x460AF8: mov     [esp+64h+var_24], edx
0x460AFC: mov     [esp+64h+var_20], eax
0x460B00: jz      short loc_460B08
0x460B02: mov     esi, [esi+0Ch]
0x460B05: push    esi
0x460B06: jmp     short loc_460B10
0x460B08: test    edi, edi
0x460B0A: jz      short loc_460B1B
0x460B0C: mov     edi, [edi+0Ch]
0x460B0F: push    edi
0x460B10: mov     ecx, ebp
0x460B12: call    SaveLoad_IRefToFormID?
0x460B17: mov     [esp+64h+var_2C], eax
0x460B1B: mov     ecx, 7
0x460B20: lea     esi, [esp+64h+var_48]
0x460B24: lea     edi, [esp+64h+var_1C]
0x460B28: rep movsd
0x460B2A: push    2Ch ; ','
0x460B2C: lea     ecx, [esp+68h+var_2C]
0x460B30: push    ecx
0x460B31: jmp     short loc_460BA2
0x460B33: push    1Ch
0x460B35: lea     edx, [esp+68h+var_48]
0x460B39: push    edx
0x460B3A: jmp     short loc_460BA2
0x460B3C: test    eax, offset loc_800000
0x460B41: jz      short loc_460BAD
0x460B43: mov     ecx, ebx; this
0x460B45: call    TESObjectREFR_GetParentCell
0x460B4A: mov     ecx, ebx; this
0x460B4C: mov     esi, eax
0x460B4E: call    TESObjectREFR_GetWorldSpace
0x460B53: cmp     eax, edi
0x460B55: jz      short loc_460B68
0x460B57: mov     eax, [eax+0Ch]
0x460B5A: push    eax
0x460B5B: mov     ecx, ebp
0x460B5D: call    SaveLoad_IRefToFormID?
0x460B62: mov     [esp+64h+Src], eax
0x460B66: jmp     short loc_460B9B
0x460B68: cmp     esi, edi
0x460B6A: jz      short loc_460B7D
0x460B6C: mov     esi, [esi+0Ch]
0x460B6F: push    esi
0x460B70: mov     ecx, ebp
0x460B72: call    SaveLoad_IRefToFormID?
0x460B77: mov     [esp+64h+Src], eax
0x460B7B: jmp     short loc_460B9B
0x460B7D: mov     eax, [ebx+0Ch]
0x460B80: push    eax
0x460B81: mov     eax, [ebx]
0x460B83: mov     edx, [eax+0D4h]
0x460B89: mov     ecx, ebx
0x460B8B: call    edx
0x460B8D: push    eax; ArgList
0x460B8E: push    offset aReferenceS08xI; "Reference %s ( %08X ) in an oblivion pl"...
0x460B93: call    PrintError
0x460B98: add     esp, 0Ch
0x460B9B: push    4; Size
0x460B9D: lea     eax, [esp+68h+Src]
0x460BA1: push    eax; Src
0x460BA2: mov     ecx, ds:0B33B00h
0x460BA8: call    SaveLoad_SaveData
0x460BAD: pop     edi
0x460BAE: pop     esi
0x460BAF: pop     ebp
0x460BB0: pop     ebx
0x460BB1: add     esp, 54h
0x460BB4: retn    8
