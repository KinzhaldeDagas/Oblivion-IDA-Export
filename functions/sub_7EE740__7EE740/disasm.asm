0x7EE740: push    ecx; [Verified] Finds a DECAL_DATA* by payload identity in this property's list at +0x80, removes/frees the matching list node via the generic NiTPointerList removal routine, decrements +0x8C, and resets cached render-pass state at +0x24. Uses property+0x90 as its temporary next-node cursor; no payload ownership release occurs here.
0x7EE741: push    esi
0x7EE742: mov     esi, ecx
0x7EE744: cmp     dword ptr [esi+8Ch], 0
0x7EE74B: jz      short loc_7EE7B6
0x7EE74D: mov     eax, [esi+84h]
0x7EE753: test    eax, eax
0x7EE755: mov     [esi+90h], eax
0x7EE75B: jz      short loc_7EE768
0x7EE75D: mov     ecx, [eax]
0x7EE75F: mov     [esi+90h], ecx
0x7EE765: mov     eax, [eax+8]
0x7EE768: test    eax, eax
0x7EE76A: mov     [esp+8+var_4], eax
0x7EE76E: jz      short loc_7EE7B6
0x7EE770: mov     ecx, [esp+8+data]
0x7EE774: cmp     eax, ecx
0x7EE776: jz      short loc_7EE79F
0x7EE778: cmp     dword ptr [esi+90h], 0
0x7EE77F: jz      short loc_7EE7B6
0x7EE781: mov     eax, [esi+90h]
0x7EE787: mov     edx, [eax]
0x7EE789: mov     [esi+90h], edx
0x7EE78F: mov     eax, [eax+8]
0x7EE792: test    eax, eax
0x7EE794: mov     [esp+8+var_4], eax
0x7EE798: jnz     short loc_7EE774
0x7EE79A: pop     esi
0x7EE79B: pop     ecx
0x7EE79C: retn    4
0x7EE79F: lea     eax, [esp+8+var_4]
0x7EE7A3: push    eax; data
0x7EE7A4: lea     ecx, [esi+80h]; list
0x7EE7AA: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x7EE7AF: mov     dword ptr [esi+24h], 0
0x7EE7B6: pop     esi
0x7EE7B7: pop     ecx
0x7EE7B8: retn    4
