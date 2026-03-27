0x573950: push    ebp
0x573951: push    edi
0x573952: mov     edi, ecx
0x573954: xor     ebp, ebp
0x573956: cmp     [edi+38h], ebp
0x573959: jz      short loc_57399E
0x57395B: push    ebx
0x57395C: lea     ebx, [edi+0Ch]
0x57395F: push    esi
0x573960: mov     eax, [edi+38h]
0x573963: cmp     ebp, [eax+4]
0x573966: jge     short loc_57399C
0x573968: mov     esi, [ebx]
0x57396A: test    esi, esi
0x57396C: jz      short loc_573990
0x57396E: lea     ecx, [esi+4]
0x573971: push    ecx; lpAddend
0x573972: call    dword ptr ds:0A2807Ch
0x573978: test    eax, eax
0x57397A: jnz     short loc_57398A
0x57397C: test    esi, esi
0x57397E: jz      short loc_57398A
0x573980: mov     edx, [esi]
0x573982: mov     eax, [edx]
0x573984: push    1
0x573986: mov     ecx, esi
0x573988: call    eax
0x57398A: mov     dword ptr [ebx], 0
0x573990: add     ebp, 1
0x573993: add     ebx, 4
0x573996: cmp     dword ptr [edi+38h], 0
0x57399A: jnz     short loc_573960
0x57399C: pop     esi
0x57399D: pop     ebx
0x57399E: mov     ecx, [edi+38h]
0x5739A1: push    ecx
0x5739A2: call    FormHeapFree
0x5739A7: add     esp, 4
0x5739AA: mov     dword ptr [edi+38h], 0
0x5739B1: pop     edi
0x5739B2: pop     ebp
0x5739B3: retn
