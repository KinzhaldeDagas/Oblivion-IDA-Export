0x864780: push    esi
0x864781: mov     esi, ecx
0x864783: mov     dword ptr [esi], offset ??_7GeometryDecalShaderProperty@@6B@; const GeometryDecalShaderProperty::`vftable'
0x864789: call    ??1BSShaderLightingProperty@@UAE@XZ; [Verified] On property destruction, this owner drains its +0x80 NiTPointerList<DECAL_DATA*>; each node stores links at +0/+4 and payload at +8. The destructor removes nodes, releases payload smart pointers through DECAL_DATA_ReleaseOwnedReferences, and frees each 0x4C payload. Normal effect teardown instead removes one node through BSShaderLightingProperty_RemoveDecalData before freeing the payload.
0x86478E: test    byte ptr [esp+4+arg_0], 1
0x864793: jz      short loc_86479E
0x864795: push    esi
0x864796: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x86479B: add     esp, 4
0x86479E: mov     eax, esi
0x8647A0: pop     esi
0x8647A1: retn    4
