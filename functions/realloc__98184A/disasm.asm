0x98184A: push    10h
0x98184C: push    offset stru_AFF8C0
0x981851: call    __SEH_prolog4
0x981856: mov     ebx, [ebp+Memory]
0x981859: test    ebx, ebx
0x98185B: jnz     short loc_98186B
0x98185D: push    [ebp+NewSize]; Size
0x981860: call    _malloc
0x981865: pop     ecx
0x981866: jmp     loc_981A37
0x98186B: mov     esi, [ebp+NewSize]
0x98186E: test    esi, esi
0x981870: jnz     short loc_98187E
0x981872: push    ebx; Memory
0x981873: call    _free
0x981878: pop     ecx
0x981879: jmp     loc_981A35
0x98187E: cmp     dword ptr ds:0BAABC0h, 3
0x981885: jnz     loc_981A1E
0x98188B: xor     edi, edi
0x98188D: mov     [ebp+Dst], edi
0x981890: cmp     esi, 0FFFFFFE0h
0x981893: ja      loc_981A23
0x981899: push    4
0x98189B: call    __lock
0x9818A0: pop     ecx
0x9818A1: mov     [ebp+ms_exc.registration.TryLevel], edi
0x9818A4: push    ebx
0x9818A5: call    ___sbh_find_block
0x9818AA: pop     ecx
0x9818AB: mov     [ebp+var_20], eax
0x9818AE: cmp     eax, edi
0x9818B0: jz      loc_981954
0x9818B6: cmp     esi, ds:0BAABCCh
0x9818BC: ja      short loc_981907
0x9818BE: push    esi
0x9818BF: push    ebx
0x9818C0: push    eax
0x9818C1: call    ___sbh_resize_block
0x9818C6: add     esp, 0Ch
0x9818C9: test    eax, eax
0x9818CB: jz      short loc_9818D2
0x9818CD: mov     [ebp+Dst], ebx
0x9818D0: jmp     short loc_981907
0x9818D2: push    esi
0x9818D3: call    ___sbh_alloc_block
0x9818D8: pop     ecx
0x9818D9: mov     [ebp+Dst], eax
0x9818DC: cmp     eax, edi
0x9818DE: jz      short loc_981907
0x9818E0: mov     eax, [ebx-4]
0x9818E3: dec     eax
0x9818E4: cmp     eax, esi
0x9818E6: jb      short loc_9818EA
0x9818E8: mov     eax, esi
0x9818EA: push    eax; byteCount
0x9818EB: push    ebx; source
0x9818EC: push    [ebp+Dst]; destination
0x9818EF: call    _memcpy;
0x9818F4: push    ebx
0x9818F5: call    ___sbh_find_block
0x9818FA: mov     [ebp+var_20], eax
0x9818FD: push    ebx
0x9818FE: push    eax
0x9818FF: call    ___sbh_free_block
0x981904: add     esp, 18h
0x981907: cmp     [ebp+Dst], edi
0x98190A: jnz     short loc_981954
0x98190C: cmp     esi, edi
0x98190E: jnz     short loc_981916
0x981910: xor     esi, esi
0x981912: inc     esi
0x981913: mov     [ebp+NewSize], esi
0x981916: add     esi, 0Fh
0x981919: and     esi, 0FFFFFFF0h
0x98191C: mov     [ebp+NewSize], esi
0x98191F: push    esi; dwBytes
0x981920: push    edi; dwFlags
0x981921: push    dword ptr ds:0BAA2ACh; hHeap
0x981927: call    dword ptr ds:0A28194h
0x98192D: mov     [ebp+Dst], eax
0x981930: cmp     eax, edi
0x981932: jz      short loc_981954
0x981934: mov     eax, [ebx-4]
0x981937: dec     eax
0x981938: cmp     eax, esi
0x98193A: jb      short loc_98193E
0x98193C: mov     eax, esi
0x98193E: push    eax; byteCount
0x98193F: push    ebx; source
0x981940: push    [ebp+Dst]; destination
0x981943: call    _memcpy;
0x981948: push    ebx
0x981949: push    [ebp+var_20]
0x98194C: call    ___sbh_free_block
0x981951: add     esp, 14h
0x981954: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98195B: call    _realloc___$LN48
0x981988: mov     esi, [ebp+NewSize]
0x98198B: mov     ebx, [ebp+Memory]
0x98198E: push    4
0x981990: call    __unlock
0x981995: pop     ecx
0x981996: retn
0x9819F0: test    esi, esi
0x9819F2: jnz     short loc_9819F5
0x9819F4: inc     esi
0x9819F5: push    esi; dwBytes
0x9819F6: push    ebx; lpMem
0x9819F7: push    0; dwFlags
0x9819F9: push    dword ptr ds:0BAA2ACh; hHeap
0x9819FF: call    dword ptr ds:0A2819Ch
0x981A05: mov     edi, eax
0x981A07: test    edi, edi
0x981A09: jnz     short loc_981A61
0x981A0B: cmp     ds:0BAA5C8h, eax
0x981A11: jz      short loc_981A47
0x981A13: push    esi
0x981A14: call    __callnewh
0x981A19: pop     ecx
0x981A1A: test    eax, eax
0x981A1C: jz      short loc_981A3D
0x981A1E: cmp     esi, 0FFFFFFE0h
0x981A21: jbe     short loc_9819F0
0x981A23: push    esi
0x981A24: call    __callnewh
0x981A29: pop     ecx
0x981A2A: call    __errno
0x981A2F: mov     dword ptr [eax], 0Ch
0x981A35: xor     eax, eax
0x981A37: call    __SEH_epilog4
0x981A3C: retn
0x981A3D: call    __errno
0x981A42: jmp     loc_9819C3
0x981A47: test    edi, edi
0x981A49: jnz     short loc_981A61
0x981A4B: call    __errno
