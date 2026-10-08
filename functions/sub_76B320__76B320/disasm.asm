0x76B320: push    esi
0x76B321: mov     esi, ecx
0x76B323: mov     ecx, [esp+4+arg_0]; this
0x76B327: push    0; a2
0x76B329: call    NiD3DShaderInterface__SetDX9Renderer
0x76B32E: lea     eax, [esp+4+arg_0]
0x76B332: push    eax; data
0x76B333: lea     ecx, [esi+904h]; list
0x76B339: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x76B33E: pop     esi
0x76B33F: retn    4
