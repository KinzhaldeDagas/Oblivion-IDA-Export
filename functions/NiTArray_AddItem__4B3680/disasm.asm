0x4B3680: push    ebx; Verified AddFirstEmpty ownership: inserts into a free slot and increments the child reference at 0x4B3730, or grows/appends via 0x523B10/0x4B34E0. Thus an outer caller that catches a later fault cannot assume child refcount remains zero. Frond publication retains its own pin and respects array ownership.
0x4B3681: mov     ebx, [esp+4+element]
0x4B3685: mov     edx, [ebx]
0x4B3687: test    edx, edx
0x4B3689: setz    al
0x4B368C: test    al, al
0x4B368E: push    esi
0x4B368F: mov     esi, ecx
0x4B3691: jz      short loc_4B369B
0x4B3693: pop     esi
0x4B3694: or      eax, 0FFFFFFFFh
0x4B3697: pop     ebx
0x4B3698: retn    4
0x4B369B: push    ebp
0x4B369C: push    edi
0x4B369D: movzx   edi, word ptr [esi+0Ah]; MEF v57 IMPLEMENTED 2026-10-08: PERF-16 implemented dense strong-array probe INSIDE AddFirstEmpty after parent-detach callbacks. Audited vtableA43850, used==occupied, coherent capacity and representable growth permit native append4B36C8; otherwise replay6bytes and native search4B36A3. No persistent density cache or duplicated SetAt refs.
0x4B36A1: xor     eax, eax; MEF PERF 2026-10-08: PERF-16 candidate density decision after usedEnd captured in EDI: under trustworthy metadata and no concurrent mutation, occupiedCount+C==usedEnd+A implies no hole, so existing append/grow path4B36C8 is equivalent. Check used<=capacity and representable sizes. Do not decide earlier at NiNode::AddObject entry, where subsequent old-parent detach can create holes.
0x4B36A3: test    di, di
0x4B36A6: jbe     short loc_4B36C8
0x4B36A8: mov     ebp, [esi+4]
0x4B36AB: jmp     short loc_4B36B0
0x4B36B0: movzx   ecx, ax
0x4B36B3: cmp     dword ptr [ebp+ecx*4+0], 0
0x4B36B8: setz    cl
0x4B36BB: test    cl, cl
0x4B36BD: jnz     short loc_4B36F3
0x4B36BF: add     eax, 1
0x4B36C2: cmp     ax, [esi+0Ah]
0x4B36C6: jb      short loc_4B36B0
0x4B36C8: movzx   ecx, word ptr [esi+8]
0x4B36CC: movzx   edi, di
0x4B36CF: cmp     edi, ecx
0x4B36D1: jb      short loc_4B36E1
0x4B36D3: movzx   edx, word ptr [esi+0Eh]
0x4B36D7: add     edx, edi
0x4B36D9: push    edx; capacity
0x4B36DA: mov     ecx, esi; self
0x4B36DC: call    NiTObjectArray_Resize16; MEF PERF 2026-10-08: PERF-16/17 interaction: dense hole-scan bypass alone still calls native growth here. With NiNode grow1, copying remains quadratic. Conversely reserve alone removes growth copies but not first-hole scans. Neither proves linear whole model conversion, because detach and other work remain.
0x4B36E1: push    ebx; element
0x4B36E2: push    edi; index
0x4B36E3: mov     ecx, esi; self
0x4B36E5: call    NiTObjectArray_SetAt
0x4B36EA: mov     eax, edi
0x4B36EC: pop     edi
0x4B36ED: pop     ebp
0x4B36EE: pop     esi
0x4B36EF: pop     ebx
0x4B36F0: retn    4
0x4B36F3: movzx   ebx, ax
0x4B36F6: mov     edi, [ebp+ebx*4+0]
0x4B36FA: cmp     edi, edx
0x4B36FC: jz      short loc_4B3736
0x4B36FE: test    edi, edi
0x4B3700: jz      short loc_4B371E
0x4B3702: lea     edx, [edi+4]
0x4B3705: push    edx; lpAddend
0x4B3706: call    dword ptr ds:0A2807Ch
0x4B370C: test    eax, eax
0x4B370E: jnz     short loc_4B371E
0x4B3710: test    edi, edi
0x4B3712: jz      short loc_4B371E
0x4B3714: mov     eax, [edi]
0x4B3716: mov     edx, [eax]
0x4B3718: push    1
0x4B371A: mov     ecx, edi
0x4B371C: call    edx
0x4B371E: mov     eax, [esp+10h+element]
0x4B3722: mov     eax, [eax]
0x4B3724: test    eax, eax
0x4B3726: mov     [ebp+ebx*4+0], eax
0x4B372A: jz      short loc_4B3736
0x4B372C: add     eax, 4
0x4B372F: push    eax; lpAddend
0x4B3730: call    dword ptr ds:0A28078h
0x4B3736: add     word ptr [esi+0Ch], 1
0x4B373B: pop     edi
0x4B373C: pop     ebp
0x4B373D: pop     esi
0x4B373E: mov     eax, ebx
0x4B3740: pop     ebx
0x4B3741: retn    4
