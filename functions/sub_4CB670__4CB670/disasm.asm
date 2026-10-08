0x4CB670: push    esi; Cell reference-light lifecycle. Under the cell object-list guard, walk every TESObjectREFR and register or unregister its ordinary ExtraLight with the native ShadowSceneNode full-light list. This enumerates light sources, not static shadow casters.
0x4CB671: push    edi
0x4CB672: mov     edi, ecx
0x4CB674: push    edi; a2
0x4CB675: mov     ecx, offset unk_B35C80; this
0x4CB67A: call    sub_496EA0
0x4CB67F: lea     esi, [edi+48h]
0x4CB682: test    esi, esi
0x4CB684: jz      short loc_4CB6B0
0x4CB686: push    ebx
0x4CB687: mov     bl, [esp+0Ch+registerLights]
0x4CB68B: jmp     short loc_4CB690
0x4CB690: mov     ecx, [esi]; self
0x4CB692: test    ecx, ecx
0x4CB694: mov     esi, [esi+4]
0x4CB697: jz      short loc_4CB6AB
0x4CB699: test    bl, bl
0x4CB69B: push    0; useSpellEffectExtraLight
0x4CB69D: jz      short loc_4CB6A6
0x4CB69F: call    TESObjectREFR_RegisterAttachedLightWithShadowScene; registerLights=true: register this reference's ordinary ExtraLight (useSpellEffectExtraLight=false) in the native full-light list.
0x4CB6A4: jmp     short loc_4CB6AB
0x4CB6A6: call    TESObjectREFR_UnregisterAttachedLightFromShadowScene; registerLights=false: unregister this reference's ordinary ExtraLight by backing NiLight identity.
0x4CB6AB: test    esi, esi
0x4CB6AD: jnz     short loc_4CB690
0x4CB6AF: pop     ebx
0x4CB6B0: push    edi; a2
0x4CB6B1: mov     ecx, offset unk_B35C80; this
0x4CB6B6: call    sub_496F50
0x4CB6BB: pop     edi
0x4CB6BC: pop     esi
0x4CB6BD: retn    4
