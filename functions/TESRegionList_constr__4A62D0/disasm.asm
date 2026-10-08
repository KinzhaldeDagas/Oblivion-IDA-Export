0x4A62D0: mov     al, [esp+arg_0]; Verified: mode byte at +0xC controls ownership and shared region-data cache lifetime. Owning lists reset cache on first owner and increment the manager/list refcount.
0x4A62D4: push    ebx
0x4A62D5: xor     ebx, ebx
0x4A62D7: cmp     al, bl
0x4A62D9: push    edi
0x4A62DA: mov     edi, ecx
0x4A62DC: mov     [edi+4], ebx
0x4A62DF: mov     [edi+8], ebx
0x4A62E2: mov     dword ptr [edi], offset ??_7TESRegionList@@6B@; const TESRegionList::`vftable'
0x4A62E8: mov     [edi+0Ch], al
0x4A62EB: jz      short loc_4A6340
0x4A62ED: cmp     ds:0B35460h, ebx
0x4A62F3: jnz     short loc_4A6339
0x4A62F5: push    esi
0x4A62F6: xor     esi, esi
0x4A62F8: jmp     short loc_4A6300
0x4A6300: mov     ecx, dword ptr ds:g_OblivionRegionDataCache.selectedData[esi]; Verified selected TESRegionData pointer used as cache value for a region-data ID.
0x4A6306: cmp     ecx, ebx
0x4A6308: jz      short loc_4A6318
0x4A630A: mov     dword ptr ds:g_OblivionRegionDataCache.selectedData[esi], ebx; Verified selected TESRegionData pointer used as cache value for a region-data ID.
0x4A6310: mov     eax, [ecx]
0x4A6312: mov     edx, [eax]
0x4A6314: push    1
0x4A6316: call    edx
0x4A6318: mov     ecx, ds:g_OblivionRegionDataCache.activeRegionList[esi]; Verified active TESRegionList used to decide cache reuse and compare current input list.
0x4A631E: cmp     ecx, ebx
0x4A6320: jz      short loc_4A6330
0x4A6322: mov     ds:g_OblivionRegionDataCache.activeRegionList[esi], ebx; Verified active TESRegionList used to decide cache reuse and compare current input list.
0x4A6328: mov     eax, [ecx]
0x4A632A: mov     edx, [eax]
0x4A632C: push    1
0x4A632E: call    edx
0x4A6330: add     esi, 8
0x4A6333: cmp     esi, 40h ; '@'
0x4A6336: jb      short loc_4A6300
0x4A6338: pop     esi
0x4A6339: add     dword ptr ds:0B35460h, 1
0x4A6340: mov     eax, edi
0x4A6342: pop     edi
0x4A6343: pop     ebx
0x4A6344: retn    4
