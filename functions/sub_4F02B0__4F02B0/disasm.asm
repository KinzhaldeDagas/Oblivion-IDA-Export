0x4F02B0: sub     esp, 0Ch; Verified: under the shared critical section, frees fallbackReferences nodes and every per-coordinate BSSimpleList payload/head in referencesByCell, then clears the map.
0x4F02B3: push    ebx
0x4F02B4: push    esi
0x4F02B5: push    edi
0x4F02B6: mov     esi, ecx
0x4F02B8: push    offset unk_A2F830
0x4F02BD: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock
0x4F02C2: call    NiEnterCriticalSection
0x4F02C7: cmp     dword ptr [esi+78h], 0
0x4F02CB: jz      short loc_4F02E6
0x4F02CD: lea     ecx, [ecx+0]
0x4F02D0: mov     eax, [esi+78h]
0x4F02D3: mov     edi, [eax+4]
0x4F02D6: push    eax
0x4F02D7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F02DC: add     esp, 4
0x4F02DF: test    edi, edi
0x4F02E1: mov     [esi+78h], edi
0x4F02E4: jnz     short loc_4F02D0
0x4F02E6: lea     ebx, [esi+64h]
0x4F02E9: mov     dword ptr [esi+74h], 0
0x4F02F0: mov     edx, [ebx+4]
0x4F02F3: xor     eax, eax
0x4F02F5: test    edx, edx
0x4F02F7: jbe     short loc_4F0313
0x4F02F9: mov     esi, [ebx+8]
0x4F02FC: mov     ecx, esi
0x4F02FE: mov     edi, edi
0x4F0300: cmp     dword ptr [ecx], 0
0x4F0303: jnz     loc_4F0393
0x4F0309: add     eax, 1
0x4F030C: add     ecx, 4
0x4F030F: cmp     eax, edx
0x4F0311: jb      short loc_4F0300
0x4F0313: xor     eax, eax
0x4F0315: test    eax, eax
0x4F0317: mov     [esp+18h+position], eax
0x4F031B: jz      short loc_4F037C
0x4F031D: lea     ecx, [ecx+0]
0x4F0320: lea     eax, [esp+18h+valueOut]
0x4F0324: push    eax; valueOut
0x4F0325: lea     ecx, [esp+1Ch+keyOut]
0x4F0329: push    ecx; keyOut
0x4F032A: lea     edx, [esp+20h+position]
0x4F032E: push    edx; position
0x4F032F: mov     ecx, ebx; self
0x4F0331: mov     [esp+24h+valueOut], 0
0x4F0339: call    NiTMap_U32Pointer_GetNextEntry
0x4F033E: mov     esi, [esp+18h+valueOut]
0x4F0342: test    esi, esi
0x4F0344: jz      short loc_4F0375
0x4F0346: cmp     dword ptr [esi+4], 0
0x4F034A: jz      short loc_4F0366
0x4F034C: lea     esp, [esp+0]
0x4F0350: mov     eax, [esi+4]
0x4F0353: mov     edi, [eax+4]
0x4F0356: push    eax
0x4F0357: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F035C: add     esp, 4
0x4F035F: test    edi, edi
0x4F0361: mov     [esi+4], edi
0x4F0364: jnz     short loc_4F0350
0x4F0366: push    esi
0x4F0367: mov     dword ptr [esi], 0
0x4F036D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F0372: add     esp, 4
0x4F0375: cmp     [esp+18h+position], 0
0x4F037A: jnz     short loc_4F0320
0x4F037C: mov     ecx, ebx
0x4F037E: call    NiTMap_Clear
0x4F0383: pop     edi
0x4F0384: pop     esi
0x4F0385: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0x4F038A: pop     ebx
0x4F038B: add     esp, 0Ch
0x4F038E: jmp     NiLeaveCriticalSection_0
0x4F0393: mov     eax, [esi+eax*4]
0x4F0396: jmp     loc_4F0315
