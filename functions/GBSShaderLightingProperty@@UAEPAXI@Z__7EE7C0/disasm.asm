0x7EE7C0: push    esi
0x7EE7C1: mov     esi, ecx
0x7EE7C3: call    ??1BSShaderLightingProperty@@UAE@XZ; [Verified] On property destruction, this owner drains its +0x80 NiTPointerList<DECAL_DATA*>; each node stores links at +0/+4 and payload at +8. The destructor removes nodes, releases payload smart pointers through DECAL_DATA_ReleaseOwnedReferences, and frees each 0x4C payload. Normal effect teardown instead removes one node through BSShaderLightingProperty_RemoveDecalData before freeing the payload.
0x7EE7C8: test    byte ptr [esp+4+arg_0], 1
0x7EE7CD: jz      short loc_7EE7D8
0x7EE7CF: push    esi
0x7EE7D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7EE7D5: add     esp, 4
0x7EE7D8: mov     eax, esi
0x7EE7DA: pop     esi
0x7EE7DB: retn    4
