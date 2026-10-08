0x4E5040: mov     edx, [ecx+38h]; Verified clears TESPathGrid.pointsByReference (+0x34), the map from TESObjectREFR* keys to BSSimpleList<TESPathGridPoint*> values. Frees the list nodes and headers, then calls NiTMap_Clear; it does not destroy referenced forms or point objects. Called only by TESPathGrid_ClearPointsAndReferenceMaps while the pathgrid critical section is held.
0x4E5043: sub     esp, 0Ch
0x4E5046: push    ebx
0x4E5047: lea     ebx, [ecx+34h]
0x4E504A: xor     eax, eax
0x4E504C: test    edx, edx
0x4E504E: push    esi
0x4E504F: jbe     short loc_4E5065
0x4E5051: mov     esi, [ebx+8]
0x4E5054: mov     ecx, esi
0x4E5056: cmp     dword ptr [ecx], 0
0x4E5059: jnz     short loc_4E50D9
0x4E505B: add     eax, 1
0x4E505E: add     ecx, 4
0x4E5061: cmp     eax, edx
0x4E5063: jb      short loc_4E5056
0x4E5065: xor     eax, eax
0x4E5067: test    eax, eax
0x4E5069: mov     [esp+14h+position], eax
0x4E506D: jz      short loc_4E50CD
0x4E506F: push    edi
0x4E5070: lea     eax, [esp+18h+valueOut]
0x4E5074: push    eax; valueOut
0x4E5075: lea     ecx, [esp+1Ch+keyOut]
0x4E5079: push    ecx; keyOut
0x4E507A: lea     edx, [esp+20h+position]
0x4E507E: push    edx; position
0x4E507F: mov     ecx, ebx; self
0x4E5081: mov     [esp+24h+valueOut], 0
0x4E5089: call    NiTMap_U32Pointer_GetNextEntry
0x4E508E: mov     esi, [esp+18h+valueOut]
0x4E5092: test    esi, esi
0x4E5094: jz      short loc_4E50C5
0x4E5096: cmp     dword ptr [esi+4], 0
0x4E509A: jz      short loc_4E50B6
0x4E509C: lea     esp, [esp+0]
0x4E50A0: mov     eax, [esi+4]
0x4E50A3: mov     edi, [eax+4]
0x4E50A6: push    eax
0x4E50A7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E50AC: add     esp, 4
0x4E50AF: test    edi, edi
0x4E50B1: mov     [esi+4], edi
0x4E50B4: jnz     short loc_4E50A0
0x4E50B6: push    esi
0x4E50B7: mov     dword ptr [esi], 0
0x4E50BD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E50C2: add     esp, 4
0x4E50C5: cmp     [esp+18h+position], 0
0x4E50CA: jnz     short loc_4E5070
0x4E50CC: pop     edi
0x4E50CD: pop     esi
0x4E50CE: mov     ecx, ebx
0x4E50D0: pop     ebx
0x4E50D1: add     esp, 0Ch
0x4E50D4: jmp     NiTMap_Clear
0x4E50D9: mov     eax, [esi+eax*4]
0x4E50DC: jmp     short loc_4E5067
