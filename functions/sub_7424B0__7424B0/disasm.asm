0x7424B0: push    ebp
0x7424B1: push    esi
0x7424B2: mov     esi, [ebx+1Ch]
0x7424B5: xor     ebp, ebp
0x7424B7: cmp     [esi+2Ch], ebp
0x7424BA: push    edi
0x7424BB: mov     edi, eax
0x7424BD: jnz     short loc_7424E8
0x7424BF: mov     ecx, [esi+1Ch]
0x7424C2: mov     edx, [ebx+20h]
0x7424C5: mov     eax, 1
0x7424CA: shl     eax, cl
0x7424CC: mov     ecx, [ebx+28h]
0x7424CF: push    1
0x7424D1: push    eax
0x7424D2: push    ecx
0x7424D3: call    edx
0x7424D5: add     esp, 0Ch
0x7424D8: cmp     eax, ebp
0x7424DA: mov     [esi+2Ch], eax
0x7424DD: jnz     short loc_7424E8
0x7424DF: pop     edi
0x7424E0: pop     esi
0x7424E1: mov     eax, 1
0x7424E6: pop     ebp
0x7424E7: retn
0x7424E8: cmp     [esi+20h], ebp
0x7424EB: jnz     short loc_742500
0x7424ED: mov     ecx, [esi+1Ch]
0x7424F0: mov     eax, 1
0x7424F5: shl     eax, cl
0x7424F7: mov     [esi+28h], ebp
0x7424FA: mov     [esi+24h], ebp
0x7424FD: mov     [esi+20h], eax
0x742500: sub     edi, [ebx+10h]
0x742503: mov     eax, [esi+20h]
0x742506: cmp     edi, eax
0x742508: jb      short loc_74252C
0x74250A: mov     ecx, [ebx+0Ch]
0x74250D: mov     edx, [esi+2Ch]
0x742510: push    eax; Size
0x742511: sub     ecx, eax
0x742513: push    ecx; Src
0x742514: push    edx; Dst
0x742515: call    _memcpy
0x74251A: mov     eax, [esi+20h]
0x74251D: add     esp, 0Ch
0x742520: pop     edi
0x742521: mov     [esi+28h], ebp
0x742524: mov     [esi+24h], eax
0x742527: pop     esi
0x742528: xor     eax, eax
0x74252A: pop     ebp
0x74252B: retn
0x74252C: sub     eax, [esi+28h]
0x74252F: mov     ebp, eax
0x742531: cmp     ebp, edi
0x742533: jbe     short loc_742537
0x742535: mov     ebp, edi
0x742537: mov     ecx, [ebx+0Ch]
0x74253A: mov     edx, [esi+2Ch]
0x74253D: add     edx, [esi+28h]
0x742540: push    ebp; Size
0x742541: sub     ecx, edi
0x742543: push    ecx; Src
0x742544: push    edx; Dst
0x742545: call    _memcpy
0x74254A: add     esp, 0Ch
0x74254D: sub     edi, ebp
0x74254F: jz      short loc_742573
0x742551: mov     eax, [ebx+0Ch]
0x742554: mov     ecx, [esi+2Ch]
0x742557: push    edi; Size
0x742558: sub     eax, edi
0x74255A: push    eax; Src
0x74255B: push    ecx; Dst
0x74255C: call    _memcpy
0x742561: mov     edx, [esi+20h]
0x742564: add     esp, 0Ch
0x742567: mov     [esi+28h], edi
0x74256A: pop     edi
0x74256B: mov     [esi+24h], edx
0x74256E: pop     esi
0x74256F: xor     eax, eax
0x742571: pop     ebp
0x742572: retn
0x742573: add     [esi+28h], ebp
0x742576: mov     ecx, [esi+28h]
0x742579: mov     eax, [esi+20h]
0x74257C: cmp     ecx, eax
0x74257E: jnz     short loc_742587
0x742580: mov     dword ptr [esi+28h], 0
0x742587: mov     ecx, [esi+24h]
0x74258A: cmp     ecx, eax
0x74258C: jnb     short loc_742593
0x74258E: add     ecx, ebp
0x742590: mov     [esi+24h], ecx
0x742593: pop     edi
0x742594: pop     esi
0x742595: xor     eax, eax
0x742597: pop     ebp
0x742598: retn
