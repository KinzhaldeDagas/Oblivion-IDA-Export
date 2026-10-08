0x776690: mov     eax, [ecx+4]; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x776693: test    eax, eax
0x776695: push    ebx
0x776696: mov     ebx, [esp+4+data]
0x77669A: push    esi
0x77669B: push    edi
0x77669C: jz      short loc_7766B0
0x77669E: mov     edi, [ebx]
0x7766A0: cmp     edi, [eax+8]
0x7766A3: lea     edx, [eax+8]
0x7766A6: mov     esi, eax
0x7766A8: mov     eax, [eax]
0x7766AA: jz      short loc_7766B2
0x7766AC: test    eax, eax
0x7766AE: jnz     short loc_7766A0
0x7766B0: xor     esi, esi
0x7766B2: test    esi, esi
0x7766B4: mov     [esp+0Ch+data], esi
0x7766B8: jz      short loc_7766CA
0x7766BA: lea     eax, [esp+0Ch+data]
0x7766BE: push    eax; node
0x7766BF: call    NiTPointerList_RemoveNode; [Verified] Generic NiTPointerList node-removal helper. Unlinks the supplied node, updates head/tail and neighboring links, invokes the list's FreeNode vfunc, decrements item count, and returns the removed node's data pointer.
0x7766C4: pop     edi
0x7766C5: pop     esi
0x7766C6: pop     ebx
0x7766C7: retn    4
0x7766CA: mov     eax, [ebx]
0x7766CC: pop     edi
0x7766CD: pop     esi
0x7766CE: pop     ebx
0x7766CF: retn    4
