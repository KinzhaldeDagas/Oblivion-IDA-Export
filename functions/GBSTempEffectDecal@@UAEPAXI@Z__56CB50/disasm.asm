0x56CB50: push    esi
0x56CB51: mov     esi, ecx
0x56CB53: call    ??1BSTempEffectDecal@@UAE@XZ; [Verified] BSTempEffectDecal destructor unregisters its DECAL_DATA payload from the target BSShaderLightingProperty list via BSShaderLightingProperty_RemoveDecalData before releasing the target NiProperty at payload+0x48. It then releases the texture/property members and frees the 0x4C DECAL_DATA payload.
0x56CB58: test    byte ptr [esp+4+arg_0], 1
0x56CB5D: jz      short loc_56CB68
0x56CB5F: push    esi
0x56CB60: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x56CB65: add     esp, 4
0x56CB68: mov     eax, esi
0x56CB6A: pop     esi
0x56CB6B: retn    4
