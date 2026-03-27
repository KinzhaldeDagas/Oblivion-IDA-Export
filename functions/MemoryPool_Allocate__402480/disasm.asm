0x402480: sub     esp, 20h
0x402483: push    ebx
0x402484: push    ebp
0x402485: push    esi
0x402486: mov     esi, ecx
0x402488: cmp     dword ptr [esi+44h], 0
0x40248C: push    edi; flProtect
0x40248D: jnz     loc_4025AC
0x402493: xor     edi, edi
0x402495: cmp     [esi+10Ch], edi
0x40249B: jbe     short loc_4024C7
0x40249D: mov     eax, [esi+108h]
0x4024A3: cmp     word ptr [eax], 0FFFFh
0x4024A8: jz      short loc_4024C2
0x4024AA: add     edi, 1
0x4024AD: add     eax, 2
0x4024B0: cmp     edi, [esi+10Ch]
0x4024B6: jb      short loc_4024A3
0x4024B8: pop     edi
0x4024B9: pop     esi
0x4024BA: pop     ebp
0x4024BB: xor     eax, eax
0x4024BD: pop     ebx
0x4024BE: add     esp, 20h
0x4024C1: retn
0x4024C2: cmp     edi, 0FFFFFFFFh
0x4024C5: jnz     short loc_4024D1
0x4024C7: pop     edi
0x4024C8: pop     esi
0x4024C9: pop     ebp
0x4024CA: xor     eax, eax
0x4024CC: pop     ebx
0x4024CD: add     esp, 20h
0x4024D0: retn
0x4024D1: xor     edx, edx
0x4024D3: mov     eax, 1000h
0x4024D8: div     dword ptr [esi+100h]
0x4024DE: mov     ebx, edi
0x4024E0: shl     ebx, 0Ch
0x4024E3: add     ebx, [esi+40h]
0x4024E6: mov     ebp, eax
0x4024E8: lea     eax, [esp+30h+Buffer]
0x4024EC: push    eax; lpBuffer
0x4024ED: call    ds:GlobalMemoryStatus
0x4024F3: cmp     [esp+30h+Buffer.dwAvailPhys], 4000h
0x4024FB: jnb     short loc_402532
0x4024FD: push    offset aMemoryheapMemo; lpCriticalSection
0x402502: mov     ecx, offset stru_B32C00
0x402507: call    NiEnterCriticalSection
0x40250C: mov     eax, dword_B02184
0x402511: test    eax, eax
0x402513: jz      short loc_402528
0x402515: mov     ecx, dword_B32B04
0x40251B: push    ecx
0x40251C: push    4000h
0x402521: push    0
0x402523: call    eax ; dword_B02184
0x402525: add     esp, 0Ch
0x402528: mov     ecx, offset stru_B32C00; lpCriticalSection
0x40252D: call    NiLeaveCriticalSection_0
0x402532: push    4; flAllocationType
0x402534: push    1000h; flAllocationType
0x402539: push    1000h; dwSize
0x40253E: push    ebx; lpAddress
0x40253F: call    ds:VirtualAlloc
0x402545: test    eax, eax
0x402547: jz      loc_4024C7
0x40254D: mov     edx, [esi+108h]
0x402553: xor     ecx, ecx
0x402555: test    ebp, ebp
0x402557: mov     word ptr [edx+edi*2], 0
0x40255D: jbe     short loc_402591
0x40255F: nop
0x402560: mov     eax, [esi+100h]
0x402566: imul    eax, ecx
0x402569: add     eax, ebx
0x40256B: mov     dword ptr [eax], 0
0x402571: mov     edx, [esi+44h]
0x402574: mov     [eax+4], edx
0x402577: mov     edx, [esi+44h]
0x40257A: test    edx, edx
0x40257C: jz      short loc_402580
0x40257E: mov     [edx], eax
0x402580: add     dword ptr [esi+114h], 1
0x402587: add     ecx, 1
0x40258A: cmp     ecx, ebp
0x40258C: mov     [esi+44h], eax
0x40258F: jb      short loc_402560
0x402591: add     dword ptr [esi+118h], 1
0x402598: mov     eax, [esi+118h]
0x40259E: cmp     eax, [esi+104h]
0x4025A4: jbe     short loc_4025AC
0x4025A6: mov     [esi+104h], eax
0x4025AC: mov     ecx, [esi+44h]
0x4025AF: xor     eax, eax
0x4025B1: test    ecx, ecx
0x4025B3: jz      short loc_4025F1
0x4025B5: mov     edx, [ecx+4]
0x4025B8: mov     [esi+44h], edx
0x4025BB: mov     edx, [ecx]
0x4025BD: test    edx, edx
0x4025BF: mov     eax, ecx
0x4025C1: jz      short loc_4025C9
0x4025C3: mov     edi, [ecx+4]
0x4025C6: mov     [edx+4], edi
0x4025C9: mov     edx, [ecx+4]
0x4025CC: test    edx, edx
0x4025CE: jz      short loc_4025D4
0x4025D0: mov     ecx, [ecx]
0x4025D2: mov     [edx], ecx
0x4025D4: mov     edx, [esi+108h]
0x4025DA: add     dword ptr [esi+114h], 0FFFFFFFFh
0x4025E1: mov     ecx, eax
0x4025E3: sub     ecx, [esi+40h]
0x4025E6: shr     ecx, 0Ch
0x4025E9: add     word ptr [edx+ecx*2], 1
0x4025EE: lea     ecx, [edx+ecx*2]
0x4025F1: pop     edi
0x4025F2: pop     esi
0x4025F3: pop     ebp
0x4025F4: pop     ebx
0x4025F5: add     esp, 20h
0x4025F8: retn
