0x42C3E0: push    ebx
0x42C3E1: mov     ebx, [esp+4+arg_8]
0x42C3E5: push    esi
0x42C3E6: mov     esi, ecx
0x42C3E8: mov     eax, [esi+154h]
0x42C3EE: push    edi
0x42C3EF: mov     edi, [esi+158h]
0x42C3F5: add     edi, [esi+148h]
0x42C3FB: add     edi, ebx
0x42C3FD: test    eax, eax
0x42C3FF: jz      short loc_42C410
0x42C401: lea     ecx, [eax+3Ch]
0x42C404: push    ecx; lpCriticalSection
0x42C405: lea     ecx, [eax+200h]
0x42C40B: call    NiEnterCriticalSection
0x42C410: mov     ecx, [esi+154h]
0x42C416: mov     eax, [ecx+30h]
0x42C419: cmp     eax, 0FFFFFFFFh
0x42C41C: mov     edx, eax
0x42C41E: jnz     short loc_42C426
0x42C420: mov     edx, [ecx+148h]
0x42C426: mov     eax, edi
0x42C428: sub     eax, edx
0x42C42A: jz      short loc_42C439
0x42C42C: mov     edx, ds:BSFile_FilePos_Cur
0x42C432: push    edx; Origin
0x42C433: push    eax; Offset
0x42C434: call    NiFile_Seek
0x42C439: mov     edx, [esi+148h]
0x42C43F: mov     ecx, [esp+0Ch+Count]
0x42C443: mov     eax, [esi+150h]
0x42C449: push    ebp
0x42C44A: lea     ebp, [edx+ecx]
0x42C44D: add     ebp, ebx
0x42C44F: cmp     ebp, eax
0x42C451: pop     ebp
0x42C452: jbe     short loc_42C45A
0x42C454: sub     eax, edx
0x42C456: sub     eax, ebx
0x42C458: mov     ecx, eax
0x42C45A: mov     eax, [esp+0Ch+DstBuf]
0x42C45E: push    ecx; Count
0x42C45F: push    eax; DstBuf
0x42C460: mov     ecx, esi
0x42C462: call    sub_747D10
0x42C467: mov     ecx, [esi+154h]
0x42C46D: mov     ebx, eax
0x42C46F: lea     eax, [ebx+edi]
0x42C472: mov     [ecx+148h], eax
0x42C478: mov     [ecx+14Ch], eax
0x42C47E: mov     esi, [esi+154h]
0x42C484: test    esi, esi
0x42C486: jz      short loc_42C493
0x42C488: lea     ecx, [esi+200h]; lpCriticalSection
0x42C48E: call    NiLeaveCriticalSection_0
0x42C493: pop     edi
0x42C494: pop     esi
0x42C495: mov     eax, ebx
0x42C497: pop     ebx
0x42C498: retn    0Ch
