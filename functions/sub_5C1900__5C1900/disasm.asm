0x5C1900: push    ecx
0x5C1901: mov     ecx, ds:0B333C4h; this
0x5C1907: push    ebx
0x5C1908: push    ebp
0x5C1909: push    esi
0x5C190A: push    edi
0x5C190B: call    TESObjectREFR_GetContainer
0x5C1910: push    eax
0x5C1911: mov     eax, ds:0B333C4h
0x5C1916: push    eax; a1
0x5C1917: call    ContainerExtraData_GetContainerExtraDataForRef
0x5C191C: add     esp, 8
0x5C191F: mov     ebx, eax
0x5C1921: xor     edi, edi
0x5C1923: mov     ebp, offset dword_B3B444
0x5C1928: cmp     dword ptr [ebp+8], 0
0x5C192C: jz      short loc_5C198D
0x5C192E: mov     ecx, [ebp+0]
0x5C1931: mov     esi, [ecx+8]
0x5C1934: cmp     byte ptr [esi+4], 10h
0x5C1938: mov     [esp+14h+var_4], esi
0x5C193C: jz      short loc_5C1963
0x5C193E: test    ebx, ebx
0x5C1940: jz      short loc_5C198D
0x5C1942: push    edi
0x5C1943: push    esi
0x5C1944: mov     ecx, ebx
0x5C1946: call    sub_4896B0
0x5C194B: mov     esi, eax
0x5C194D: test    esi, esi
0x5C194F: jz      short loc_5C199E
0x5C1951: mov     ecx, esi
0x5C1953: call    ContainerEntryExtraData_DestroyDataTable
0x5C1958: push    esi
0x5C1959: call    FormHeapFree
0x5C195E: add     esp, 4
0x5C1961: jmp     short loc_5C198D
0x5C1963: mov     ecx, ds:0B333C4h; this
0x5C1969: push    0; a2
0x5C196B: call    Actor_GetActorBaseForm
0x5C1970: add     eax, 58h ; 'X'
0x5C1973: jz      short loc_5C1980
0x5C1975: cmp     [eax], esi
0x5C1977: jz      short loc_5C198D
0x5C1979: mov     eax, [eax+4]
0x5C197C: test    eax, eax
0x5C197E: jnz     short loc_5C1975
0x5C1980: lea     edx, [esp+14h+var_4]
0x5C1984: push    edx
0x5C1985: lea     ecx, [ebp-4]
0x5C1988: call    sub_776690
0x5C198D: add     edi, 1
0x5C1990: add     ebp, 10h
0x5C1993: cmp     edi, 8
0x5C1996: jl      short loc_5C1928
0x5C1998: pop     edi
0x5C1999: pop     esi
0x5C199A: pop     ebp
0x5C199B: pop     ebx
0x5C199C: pop     ecx
0x5C199D: retn
0x5C199E: mov     ecx, edi
0x5C19A0: lea     eax, [esp+14h+var_4]
0x5C19A4: shl     ecx, 4
0x5C19A7: push    eax
0x5C19A8: add     ecx, offset quickKeyList_ptr
0x5C19AE: call    sub_776690
0x5C19B3: pop     edi
0x5C19B4: pop     esi
0x5C19B5: pop     ebp
0x5C19B6: pop     ebx
0x5C19B7: pop     ecx
0x5C19B8: retn
