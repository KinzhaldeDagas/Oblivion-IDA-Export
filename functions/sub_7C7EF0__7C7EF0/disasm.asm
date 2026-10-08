0x7C7EF0: push    ebx; Recursively traverse NiNode children. For each object matching the retail point-light RTTI target, either remove its full-list entry or register it with trackBackingPosition=true.
0x7C7EF1: mov     ebx, [esp+4+root]
0x7C7EF5: movzx   eax, word ptr [ebx+0B8h]
0x7C7EFC: push    ebp
0x7C7EFD: push    edi
0x7C7EFE: xor     edi, edi
0x7C7F00: test    eax, eax
0x7C7F02: mov     ebp, ecx
0x7C7F04: mov     [esp+0Ch+root], eax
0x7C7F08: jbe     short loc_7C7F67
0x7C7F0A: push    esi
0x7C7F0B: jmp     short loc_7C7F10
0x7C7F10: movzx   eax, word ptr [ebx+0B6h]
0x7C7F17: cmp     eax, edi
0x7C7F19: jbe     short loc_7C7F5D
0x7C7F1B: mov     ecx, [ebx+0B0h]
0x7C7F21: mov     esi, [ecx+edi*4]
0x7C7F24: test    esi, esi
0x7C7F26: jz      short loc_7C7F5D
0x7C7F28: mov     edx, [esi]
0x7C7F2A: mov     eax, [edx+4]
0x7C7F2D: mov     ecx, esi
0x7C7F2F: call    eax
0x7C7F31: test    eax, eax
0x7C7F33: jz      short loc_7C7F43
0x7C7F35: cmp     eax, offset stru_B3FD14
0x7C7F3A: jz      short loc_7C7F6D
0x7C7F3C: mov     eax, [eax+4]
0x7C7F3F: test    eax, eax
0x7C7F41: jnz     short loc_7C7F35
0x7C7F43: mov     edx, [esi]
0x7C7F45: mov     eax, [edx+8]
0x7C7F48: mov     ecx, esi
0x7C7F4A: call    eax
0x7C7F4C: test    eax, eax
0x7C7F4E: jz      short loc_7C7F5D
0x7C7F50: mov     ecx, dword ptr [esp+10h+removeExisting]
0x7C7F54: push    ecx; removeExisting
0x7C7F55: push    esi; root
0x7C7F56: mov     ecx, ebp; self
0x7C7F58: call    ShadowSceneNode_RegisterOrRemovePointLightsRecursive; Recursively traverse NiNode children. For each object matching the retail point-light RTTI target, either remove its full-list entry or register it with trackBackingPosition=true.
0x7C7F5D: add     edi, 1
0x7C7F60: cmp     edi, [esp+10h+root]
0x7C7F64: jb      short loc_7C7F10
0x7C7F66: pop     esi
0x7C7F67: pop     edi
0x7C7F68: pop     ebp
0x7C7F69: pop     ebx
0x7C7F6A: retn    8
0x7C7F6D: cmp     [esp+10h+removeExisting], 0
0x7C7F72: mov     ecx, ebp; self
0x7C7F74: jz      short loc_7C7F7E; removeExisting=true selects removal by source; false registers the scene-graph point light with trackBackingPosition=true.
0x7C7F76: push    esi; backingLight
0x7C7F77: call    ShadowSceneNode_RemoveFullLightBySource; Find a native full-list ShadowSceneLight whose backing NiLight identity equals the supplied source, then remove that entry.
0x7C7F7C: jmp     short loc_7C7F5D
0x7C7F7E: push    1; trackBackingPosition
0x7C7F80: push    esi; backingLight
0x7C7F81: call    ShadowSceneNode_FindOrCreateFullLightForSource; Scene-graph point lights register with trackBackingPosition=true.
0x7C7F86: jmp     short loc_7C7F5D
