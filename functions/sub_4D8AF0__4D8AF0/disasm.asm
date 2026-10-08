0x4D8AF0: push    esi; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x4D8AF1: mov     esi, ecx
0x4D8AF3: push    edi
0x4D8AF4: mov     edi, [esi+40h]
0x4D8AF7: test    edi, edi
0x4D8AF9: jz      short loc_4D8B2E
0x4D8AFB: mov     ecx, edi; this
0x4D8AFD: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4D8B02: test    al, al
0x4D8B04: jz      short loc_4D8B2E
0x4D8B06: mov     eax, [esi]
0x4D8B08: mov     edx, [eax+170h]
0x4D8B0E: mov     ecx, esi
0x4D8B10: call    edx
0x4D8B12: cmp     byte ptr [eax+4], 29h ; ')'
0x4D8B16: jz      short loc_4D8B7C
0x4D8B18: mov     eax, [esi]
0x4D8B1A: mov     edx, [eax+174h]
0x4D8B20: mov     ecx, esi
0x4D8B22: call    edx
0x4D8B24: push    eax; worldPosition
0x4D8B25: mov     ecx, edi; this
0x4D8B27: call    TESObjectCELL_FindSmallestSubSpaceContainingPosition; Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
0x4D8B2C: jmp     short loc_4D8B78
0x4D8B2E: mov     eax, [esi+40h]
0x4D8B31: xor     edi, edi
0x4D8B33: test    eax, eax
0x4D8B35: jnz     short loc_4D8B45
0x4D8B37: mov     eax, [esi+18h]
0x4D8B3A: mov     edx, [eax]
0x4D8B3C: lea     ecx, [esi+18h]
0x4D8B3F: call    edx
0x4D8B41: test    eax, eax
0x4D8B43: jz      short loc_4D8B7C
0x4D8B45: mov     ecx, eax; this
0x4D8B47: call    TESObjectCELL_GetWorldSpace
0x4D8B4C: mov     edi, eax
0x4D8B4E: test    edi, edi
0x4D8B50: jz      short loc_4D8B7C
0x4D8B52: mov     eax, [esi]
0x4D8B54: mov     edx, [eax+170h]
0x4D8B5A: mov     ecx, esi
0x4D8B5C: call    edx
0x4D8B5E: cmp     byte ptr [eax+4], 29h ; ')'
0x4D8B62: jz      short loc_4D8B7C
0x4D8B64: mov     eax, [esi]
0x4D8B66: mov     edx, [eax+174h]
0x4D8B6C: mov     ecx, esi
0x4D8B6E: call    edx
0x4D8B70: push    eax; worldPosition
0x4D8B71: mov     ecx, edi; this
0x4D8B73: call    TESWorldSpace_FindSmallestSubSpaceContainingPosition; Verified: queries the SubSpace candidate list for the position-derived cell key, then returns the smallest-radius TESSubSpace whose exact scaled local bounds contain the point.
0x4D8B78: test    eax, eax
0x4D8B7A: jnz     short loc_4D8B7E
0x4D8B7C: mov     eax, edi
0x4D8B7E: pop     edi
0x4D8B7F: pop     esi
0x4D8B80: retn
