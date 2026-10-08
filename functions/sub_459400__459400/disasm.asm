0x459400: push    esi
0x459401: push    edi
0x459402: mov     edi, ecx
0x459404: mov     esi, [edi+6Ch]
0x459407: test    esi, esi
0x459409: jz      short loc_45943C
0x45940B: jmp     short loc_459410
0x459410: mov     ecx, [esi]
0x459412: test    ecx, ecx
0x459414: jz      short loc_45941E
0x459416: mov     eax, [ecx]
0x459418: mov     edx, [eax]
0x45941A: push    1
0x45941C: call    edx
0x45941E: mov     esi, [esi+4]
0x459421: test    esi, esi
0x459423: jnz     short loc_459410
0x459425: mov     ecx, [edi+6Ch]
0x459428: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x45942D: mov     eax, [edi+6Ch]
0x459430: push    eax
0x459431: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x459436: add     esp, 4
0x459439: mov     [edi+6Ch], esi
0x45943C: pop     edi
0x45943D: pop     esi
0x45943E: jmp     loc_5AE430
0x5AE430: push    40Eh
0x5AE435: call    Menu_GetOpenMenuTile
0x5AE43A: add     esp, 4
0x5AE43D: mov     ecx, eax
0x5AE43F: call    Tile_GetParentMenu
0x5AE444: test    eax, eax
0x5AE446: jz      short locret_5AE44F
0x5AE448: mov     dword ptr [eax+4Ch], 0
0x5AE44F: retn
