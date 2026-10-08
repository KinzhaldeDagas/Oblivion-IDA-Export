0x4F03F0: push    ebx; Verified: replays coordinate-bucketed +0x64 references and spatially tests fallback references when attaching references to an exterior cell. This is the persistent-reference lifecycle, distinct from the SubSpace spatial lookup map at +0x60.
0x4F03F1: push    edi
0x4F03F2: mov     edi, [esp+8+cell]
0x4F03F6: test    edi, edi
0x4F03F8: mov     ebx, ecx
0x4F03FA: jz      loc_4F04BD
0x4F0400: push    esi
0x4F0401: push    offset unk_A2F830; lpCriticalSection
0x4F0406: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock
0x4F040B: call    NiEnterCriticalSection
0x4F0410: mov     ecx, edi; this
0x4F0412: call    TESObjectCELL_GetYCoordinate
0x4F0417: mov     ecx, edi; this
0x4F0419: movzx   esi, ax
0x4F041C: call    TESObjectCELL_GetXCoordinate
0x4F0421: movsx   eax, ax
0x4F0424: movzx   edx, si
0x4F0427: shl     eax, 10h
0x4F042A: lea     ecx, [esp+0Ch+cell]
0x4F042E: push    ecx
0x4F042F: or      edx, eax
0x4F0431: push    edx
0x4F0432: lea     ecx, [ebx+64h]
0x4F0435: mov     [esp+14h+cell], 0
0x4F043D: call    NiTMap_GetAt
0x4F0442: mov     esi, [esp+0Ch+cell]
0x4F0446: test    esi, esi
0x4F0448: jz      short loc_4F046C
0x4F044A: lea     ebx, [ebx+0]
0x4F0450: cmp     dword ptr [esi+4], 0
0x4F0454: jnz     short loc_4F045B
0x4F0456: cmp     dword ptr [esi], 0
0x4F0459: jz      short loc_4F046C
0x4F045B: mov     eax, [esi]
0x4F045D: push    eax; reference
0x4F045E: mov     ecx, edi; this
0x4F0460: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x4F0465: mov     esi, [esi+4]
0x4F0468: test    esi, esi
0x4F046A: jnz     short loc_4F0450
0x4F046C: lea     esi, [ebx+74h]
0x4F046F: test    esi, esi
0x4F0471: jz      short loc_4F04B2
0x4F0473: cmp     dword ptr [esi+4], 0
0x4F0477: jnz     short loc_4F047E
0x4F0479: cmp     dword ptr [esi], 0
0x4F047C: jz      short loc_4F04B2
0x4F047E: mov     ebx, [esi]
0x4F0480: mov     ecx, ebx; this
0x4F0482: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x4F0487: cmp     eax, edi
0x4F0489: jz      short loc_4F04AB
0x4F048B: mov     edx, [ebx]
0x4F048D: mov     eax, [edx+174h]
0x4F0493: mov     ecx, ebx
0x4F0495: call    eax
0x4F0497: push    eax
0x4F0498: mov     ecx, edi
0x4F049A: call    sub_4CC540
0x4F049F: test    al, al
0x4F04A1: jz      short loc_4F04AB
0x4F04A3: push    ebx; reference
0x4F04A4: mov     ecx, edi; this
0x4F04A6: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x4F04AB: mov     esi, [esi+4]
0x4F04AE: test    esi, esi
0x4F04B0: jnz     short loc_4F0473
0x4F04B2: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0x4F04B7: call    NiLeaveCriticalSection_0
0x4F04BC: pop     esi
0x4F04BD: pop     edi
0x4F04BE: pop     ebx
0x4F04BF: retn    4
