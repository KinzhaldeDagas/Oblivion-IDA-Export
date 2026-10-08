0x570690: push    esi
0x570691: mov     esi, ecx
0x570693: call    BSTempEffectGeometryDecal_Dtor; [Verified] BSTempEffectGeometryDecal destructor unregisters its DECAL_DATA payload from the target shader property via BSShaderLightingProperty_RemoveDecalData, releases the target NiProperty, then releases the payload's source texture and target property and frees the 0x4C payload.
0x570698: test    byte ptr [esp+4+arg_0], 1
0x57069D: jz      short loc_5706A8
0x57069F: push    esi
0x5706A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5706A5: add     esp, 4
0x5706A8: mov     eax, esi
0x5706AA: pop     esi
0x5706AB: retn    4
