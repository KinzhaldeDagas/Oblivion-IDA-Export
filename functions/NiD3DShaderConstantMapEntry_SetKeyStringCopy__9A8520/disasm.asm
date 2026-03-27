0x9A8520: push    ebp
0x9A8521: mov     ebp, [esp+4+Src]
0x9A8525: test    ebp, ebp
0x9A8527: push    esi
0x9A8528: mov     esi, ecx
0x9A852A: jz      short loc_9A859B
0x9A852C: cmp     byte ptr [ebp+0], 0
0x9A8530: jz      short loc_9A859B
0x9A8532: mov     eax, ebp
0x9A8534: lea     edx, [eax+1]
0x9A8537: mov     cl, [eax]
0x9A8539: add     eax, 1
0x9A853C: test    cl, cl
0x9A853E: jnz     short loc_9A8537
0x9A8540: mov     ecx, [esi+0Ch]
0x9A8543: sub     eax, edx
0x9A8545: test    ecx, ecx
0x9A8547: push    edi; Src
0x9A8548: lea     edi, [eax+1]
0x9A854B: jz      short loc_9A8575
0x9A854D: mov     eax, ecx
0x9A854F: lea     ebp, [eax+1]
0x9A8552: mov     dl, [eax]
0x9A8554: add     eax, 1
0x9A8557: test    dl, dl
0x9A8559: jnz     short loc_9A8552
0x9A855B: sub     eax, ebp
0x9A855D: cmp     eax, edi
0x9A855F: jnb     short loc_9A8571
0x9A8561: push    ecx
0x9A8562: call    FormHeapFree
0x9A8567: add     esp, 4
0x9A856A: mov     dword ptr [esi+0Ch], 0
0x9A8571: mov     ebp, [esp+0Ch+Src]
0x9A8575: cmp     dword ptr [esi+0Ch], 0
0x9A8579: jnz     short loc_9A8587
0x9A857B: push    edi; Size
0x9A857C: call    FormHeapAlloc
0x9A8581: add     esp, 4
0x9A8584: mov     [esi+0Ch], eax
0x9A8587: mov     eax, [esi+0Ch]
0x9A858A: push    ebp; Src
0x9A858B: push    edi; SizeInBytes
0x9A858C: push    eax; Dst
0x9A858D: call    _strcpy_s
0x9A8592: add     esp, 0Ch
0x9A8595: pop     edi
0x9A8596: pop     esi
0x9A8597: pop     ebp
0x9A8598: retn    4
0x9A859B: mov     ecx, [esi+0Ch]
0x9A859E: push    ecx
0x9A859F: call    FormHeapFree
0x9A85A4: add     esp, 4
0x9A85A7: mov     dword ptr [esi+0Ch], 0
0x9A85AE: pop     esi
0x9A85AF: pop     ebp
0x9A85B0: retn    4
