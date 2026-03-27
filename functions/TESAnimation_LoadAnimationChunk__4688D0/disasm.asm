0x4688D0: push    ebp
0x4688D1: push    edi
0x4688D2: mov     edi, [esp+8+a1]
0x4688D6: test    edi, edi
0x4688D8: mov     ebp, ecx
0x4688DA: jz      short TESAnimation_LoadAnimationChunk___Done
0x4688DC: cmp     [esp+8+arg_0], 0
0x4688E1: jz      short TESAnimation_LoadAnimationChunk___Done
0x4688E3: mov     ecx, edi
0x4688E5: call    TESFile_GetChunkType
0x4688EA: cmp     eax, 5A46464Bh
0x4688EF: jnz     short TESAnimation_LoadAnimationChunk___Done
0x4688F1: mov     eax, [edi+254h]
0x4688F7: push    ebx
0x4688F8: push    esi
0x4688F9: push    eax; Size
0x4688FA: call    FormHeapAlloc
0x4688FF: add     esp, 4
0x468902: mov     ebx, eax
0x468904: push    0; a4
0x468906: push    ebx; Dst
0x468907: mov     ecx, edi; a1
0x468909: mov     esi, ebx
0x46890B: call    TESFile_GetChunkData
0x468910: cmp     byte ptr [ebx], 0
0x468913: jz      short loc_468937
0x468915: push    esi
0x468916: mov     ecx, ebp
0x468918: call    TESAnimation_AddAnimation
0x46891D: mov     eax, esi
0x46891F: lea     edx, [eax+1]
0x468922: mov     cl, [eax]
0x468924: add     eax, 1
0x468927: test    cl, cl
0x468929: jnz     short loc_468922
0x46892B: sub     eax, edx
0x46892D: cmp     [esi+eax+1], cl
0x468931: lea     esi, [esi+eax+1]
0x468935: jnz     short loc_468915
0x468937: push    ebx
0x468938: call    FormHeapFree
0x46893D: add     esp, 4
0x468940: pop     esi
0x468941: pop     ebx
