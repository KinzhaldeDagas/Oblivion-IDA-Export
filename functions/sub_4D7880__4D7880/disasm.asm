0x4D7880: push    esi; Verified per-reference seed writer. For a TREE form, maps the requested uint32 seed through TESObjectTREE_GetIndexForSeed and stores the byte in ExtraData_Seed. If the tree seed array is empty or the seed is absent, the index is 0xFF; ExtraDataList_SetOrRemoveTreeSeed treats 0xFF as remove, so no concrete per-reference seed is retained. Whether another runtime path populates Oblivion's array remains Unknown.
0x4D7881: mov     esi, ecx
0x4D7883: push    edi
0x4D7884: lea     edi, [esi+44h]
0x4D7887: test    edi, edi
0x4D7889: jz      short loc_4D78CC
0x4D788B: mov     eax, [esi]
0x4D788D: mov     edx, [eax+170h]
0x4D7893: call    edx
0x4D7895: cmp     byte ptr [eax+4], 1Eh
0x4D7899: jnz     short loc_4D78CC
0x4D789B: mov     eax, [esi]
0x4D789D: mov     edx, [eax+170h]
0x4D78A3: mov     ecx, esi
0x4D78A5: call    edx
0x4D78A7: test    eax, eax
0x4D78A9: jz      short loc_4D78CC
0x4D78AB: mov     ecx, [esp+8+seedValue]
0x4D78AF: mov     edx, [eax]
0x4D78B1: mov     edx, [edx+124h]
0x4D78B7: push    ecx
0x4D78B8: mov     ecx, eax
0x4D78BA: call    edx
0x4D78BC: mov     byte ptr [esp+8+seedValue], al
0x4D78C0: mov     eax, [esp+8+seedValue]
0x4D78C4: push    eax; seed
0x4D78C5: mov     ecx, edi; this
0x4D78C7: call    ExtraDataList_SetOrRemoveTreeSeed; Verified singleton ExtraData_Seed behavior: signed byte 0xFF removes the extra; other bytes add or replace it. Combined with TESObjectTREE_GetIndexForSeed, this means an empty/missing tree seed entry cannot be persisted as a concrete per-reference seed.
0x4D78CC: pop     edi
0x4D78CD: pop     esi
0x4D78CE: retn    4
