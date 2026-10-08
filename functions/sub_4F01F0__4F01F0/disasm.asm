0x4F01F0: push    ebp; Verified: symmetric removal from the coordinate-indexed list or fallbackReferences under the shared WorldSpace reference-index critical section; removes an empty per-cell list/map entry.
0x4F01F1: push    esi
0x4F01F2: mov     esi, [esp+8+reference]
0x4F01F6: test    esi, esi
0x4F01F8: mov     ebp, ecx
0x4F01FA: jz      loc_4F02AB
0x4F0200: mov     eax, [esi+8]
0x4F0203: shr     eax, 0Eh
0x4F0206: test    al, 1
0x4F0208: jnz     loc_4F02AB
0x4F020E: push    offset unk_A2F830; lpCriticalSection
0x4F0213: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock
0x4F0218: call    NiEnterCriticalSection
0x4F021D: push    esi; reference
0x4F021E: call    TESWorldSpace_UsesCoordinateReferenceIndex; Verified Oblivion allowlist includes TESSubSpace for the +0x64 persistent-reference index. Comparison: Fallout's persistent-reference classification is TESWorldSpace::IsFixedRef with a different explicit set; Fallout IDB has no TESSubSpace-named class/string, so it does not establish an analogue for Oblivion's +0x60 SubSpace spatial index.
0x4F0223: add     esp, 4
0x4F0226: test    al, al
0x4F0228: jnz     short loc_4F0242
0x4F022A: push    esi
0x4F022B: lea     ecx, [ebp+74h]
0x4F022E: call    BSSimpleList_Remove
0x4F0233: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0x4F0238: call    NiLeaveCriticalSection_0
0x4F023D: pop     esi
0x4F023E: pop     ebp
0x4F023F: retn    4
0x4F0242: mov     edx, [esi]
0x4F0244: mov     eax, [edx+174h]
0x4F024A: push    ebx
0x4F024B: push    edi
0x4F024C: mov     ecx, esi
0x4F024E: call    eax
0x4F0250: push    eax; worldPosition
0x4F0251: call    TESWorldSpace_PackCellCoordinates
0x4F0256: add     esp, 4
0x4F0259: lea     ecx, [esp+10h+reference]
0x4F025D: push    ecx
0x4F025E: mov     ebx, eax
0x4F0260: add     ebp, 64h ; 'd'
0x4F0263: push    ebx
0x4F0264: mov     ecx, ebp
0x4F0266: mov     [esp+18h+reference], 0
0x4F026E: call    NiTMap_GetAt
0x4F0273: mov     edi, [esp+10h+reference]
0x4F0277: test    edi, edi
0x4F0279: jz      short loc_4F029F
0x4F027B: push    esi
0x4F027C: mov     ecx, edi
0x4F027E: call    BSSimpleList_Remove
0x4F0283: cmp     dword ptr [edi+4], 0
0x4F0287: jnz     short loc_4F029F
0x4F0289: cmp     dword ptr [edi], 0
0x4F028C: jnz     short loc_4F029F
0x4F028E: push    edi
0x4F028F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F0294: add     esp, 4
0x4F0297: push    ebx
0x4F0298: mov     ecx, ebp
0x4F029A: call    NiTMap_RemoveAt
0x4F029F: pop     edi
0x4F02A0: pop     ebx
0x4F02A1: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0x4F02A6: call    NiLeaveCriticalSection_0
0x4F02AB: pop     esi
0x4F02AC: pop     ebp
0x4F02AD: retn    4
