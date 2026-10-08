0x7EE720: push    esi; Remove the paired ShadowSceneLight association from BSShaderProperty+0x6C.
0x7EE721: mov     esi, ecx
0x7EE723: lea     eax, [esp+4+data]
0x7EE727: push    eax; data
0x7EE728: lea     ecx, [esi+6Ch]; list
0x7EE72B: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x7EE730: mov     dword ptr [esi+24h], 0
0x7EE737: pop     esi
0x7EE738: retn    4
