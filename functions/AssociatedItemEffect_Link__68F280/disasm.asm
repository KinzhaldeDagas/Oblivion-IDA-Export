0x68F280: mov     eax, [esp+linkContext]; Verified AssociatedItemEffect_Link forwards its TESObjectREFR link context to ActiveEffect_Base_Link before resolving its own associated-item FormID.
0x68F284: push    esi
0x68F285: push    eax; linkContext
0x68F286: mov     esi, ecx
0x68F288: call    ActiveEffect_Base_Link; Verified ActiveEffect link stage resolves saved caster (+0x24), target (+0x20), bound object (+0x30), and hit-effect references (+0x34). The explicit linkContext is Probable TESObjectREFR*/Actor context: Player_LinkModifiedForm passes PlayerCharacter*, NightEyeEffect_Link requires PlayerCharacter*, and VampirismEffect_Link RTTI-casts it to Actor; modified-extra loading passes null.
0x68F28D: mov     eax, [esi+38h]
0x68F290: test    eax, eax
0x68F292: jz      short loc_68F2A0
0x68F294: push    eax; a1
0x68F295: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x68F29A: add     esp, 4
0x68F29D: mov     [esi+38h], eax
0x68F2A0: pop     esi
0x68F2A1: retn    4
