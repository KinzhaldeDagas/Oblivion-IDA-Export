0x56D480: push    esi; [Verified] Requires nonnull DECAL_DATA at +0x18 and generatedGeometry at +0x1C, then requires the saved target FormID to resolve/cast to TESObjectREFR with loaded 3D. Unlike type 0, there is no success path for an unresolved zero FormID. A literal zero is not rejected by a separate unconditional test; the resolved-reference predicate decides.
0x56D481: mov     esi, ecx
0x56D483: mov     eax, [esi+18h]; BloodOnDeath decode 2026-05-30: BSTempEffectGeometryDecal saveability is stricter: it requires decal data, created geometry decal payload, and a valid target reference with 3D.
0x56D486: test    eax, eax
0x56D488: jz      short loc_56D4C0
0x56D48A: cmp     dword ptr [esi+1Ch], 0
0x56D48E: jz      short loc_56D4C0
0x56D490: mov     eax, [eax+3Ch]
0x56D493: push    0; int
0x56D495: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56D49A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56D49F: push    0; int
0x56D4A1: push    eax; a1
0x56D4A2: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x56D4A7: add     esp, 4
0x56D4AA: push    eax; void *
0x56D4AB: call    OblivionDynamicCast
0x56D4B0: mov     ecx, [esi+18h]
0x56D4B3: add     esp, 14h
0x56D4B6: cmp     dword ptr [ecx+3Ch], 0
0x56D4BA: jz      short loc_56D4C4
0x56D4BC: test    eax, eax
0x56D4BE: jnz     short loc_56D4C8
0x56D4C0: xor     al, al
0x56D4C2: pop     esi
0x56D4C3: retn
0x56D4C4: test    eax, eax
0x56D4C6: jz      short loc_56D4C0
0x56D4C8: cmp     dword ptr [eax+3Ch], 0
0x56D4CC: jz      short loc_56D4C0
0x56D4CE: mov     al, 1
0x56D4D0: pop     esi
0x56D4D1: retn
