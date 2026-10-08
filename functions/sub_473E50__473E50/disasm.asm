0x473E50: push    esi; AnimSequenceMultiple remove sequence: removes one BSAnimGroupSequence from the list and returns true when list is empty.
0x473E51: mov     esi, [esp+4+data]
0x473E55: push    edi
0x473E56: lea     eax, [esi+4]
0x473E59: push    eax; lpAddend
0x473E5A: mov     edi, ecx
0x473E5C: call    dword ptr ds:0A2807Ch
0x473E62: test    eax, eax
0x473E64: jnz     short loc_473E74
0x473E66: test    esi, esi
0x473E68: jz      short loc_473E74
0x473E6A: mov     edx, [esi]
0x473E6C: mov     eax, [edx]
0x473E6E: push    1
0x473E70: mov     ecx, esi
0x473E72: call    eax
0x473E74: lea     ecx, [esp+8+data]
0x473E78: push    ecx; data
0x473E79: mov     ecx, [edi+4]; list
0x473E7C: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x473E81: mov     ecx, [edi+4]
0x473E84: cmp     dword ptr [ecx+0Ch], 0
0x473E88: jnz     short loc_473EA4
0x473E8A: test    ecx, ecx
0x473E8C: jz      short loc_473E96
0x473E8E: mov     edx, [ecx]
0x473E90: mov     eax, [edx]
0x473E92: push    1
0x473E94: call    eax
0x473E96: mov     dword ptr [edi+4], 0
0x473E9D: pop     edi
0x473E9E: mov     al, 1
0x473EA0: pop     esi
0x473EA1: retn    4
0x473EA4: pop     edi
0x473EA5: xor     al, al
0x473EA7: pop     esi
0x473EA8: retn    4
