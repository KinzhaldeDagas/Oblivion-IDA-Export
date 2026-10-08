0x56C180: push    esi; [Verified] Requires DECAL_DATA at +0x18. Resolves/casts targetReferenceFormID_3C to TESObjectREFR: a resolved reference must have loaded 3D; an unresolved reference is accepted only when the stored FormID is zero. This zero/unresolved success path is absent from geometry-decal IsSaveable at 0x56D480.
0x56C181: mov     esi, ecx
0x56C183: mov     eax, [esi+18h]; BloodOnDeath decode 2026-05-30: fallback BSTempEffectDecal saveability requires decal data and either a valid target reference/3D or no saved target FormID.
0x56C186: test    eax, eax
0x56C188: jz      short loc_56C1BA
0x56C18A: mov     eax, [eax+3Ch]
0x56C18D: push    0; int
0x56C18F: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56C194: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56C199: push    0; int
0x56C19B: push    eax; a1
0x56C19C: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x56C1A1: add     esp, 4
0x56C1A4: push    eax; void *
0x56C1A5: call    OblivionDynamicCast
0x56C1AA: mov     ecx, [esi+18h]
0x56C1AD: add     esp, 14h
0x56C1B0: cmp     dword ptr [ecx+3Ch], 0
0x56C1B4: jz      short loc_56C1BE
0x56C1B6: test    eax, eax
0x56C1B8: jnz     short loc_56C1C2
0x56C1BA: xor     al, al
0x56C1BC: pop     esi
0x56C1BD: retn
0x56C1BE: test    eax, eax
0x56C1C0: jz      short loc_56C1C8
0x56C1C2: cmp     dword ptr [eax+3Ch], 0
0x56C1C6: jz      short loc_56C1BA
0x56C1C8: mov     al, 1
0x56C1CA: pop     esi
0x56C1CB: retn
