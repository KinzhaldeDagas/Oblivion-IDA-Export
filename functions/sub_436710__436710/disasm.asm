0x436710: push    ecx
0x436711: push    ebx
0x436712: push    esi
0x436713: push    edi
0x436714: xor     ebx, ebx
0x436716: push    8; Size
0x436718: mov     esi, ecx
0x43671A: mov     [esp+14h+Comperand], ebx
0x43671E: call    FormHeapAlloc
0x436723: add     esp, 4
0x436726: cmp     eax, ebx
0x436728: jz      short loc_436731
0x43672A: mov     [eax], ebx
0x43672C: mov     [eax+4], ebx
0x43672F: mov     ebx, eax
0x436731: mov     edi, [ebx+4]
0x436734: push    ebp
0x436735: mov     ebp, [esp+14h+arg_0]
0x436739: cmp     edi, [ebp+0]
0x43673C: jz      short loc_436772
0x43673E: test    edi, edi
0x436740: jz      short loc_43675E
0x436742: lea     eax, [edi+8]
0x436745: push    eax; lpAddend
0x436746: call    ds:InterlockedDecrement
0x43674C: test    eax, eax
0x43674E: jnz     short loc_43675E
0x436750: test    edi, edi
0x436752: jz      short loc_43675E
0x436754: mov     edx, [edi]
0x436756: mov     eax, [edx]
0x436758: push    1
0x43675A: mov     ecx, edi
0x43675C: call    eax
0x43675E: mov     eax, [ebp+0]
0x436761: test    eax, eax
0x436763: mov     [ebx+4], eax
0x436766: jz      short loc_436772
0x436768: add     eax, 8
0x43676B: push    eax; lpAddend
0x43676C: call    ds:InterlockedIncrement
0x436772: mov     edi, ds:InterlockedCompareExchange
0x436778: pop     ebp
0x436779: lea     esp, [esp+0]
0x436780: mov     ecx, [esi]
0x436782: mov     edx, [ecx+8]
0x436785: mov     [esp+10h+Comperand], edx
0x436789: mov     eax, [esp+10h+Comperand]
0x43678D: mov     ecx, [esi+4]
0x436790: mov     edx, [esp+10h+Comperand]
0x436794: mov     [ecx], eax
0x436796: mov     eax, [esi]
0x436798: add     eax, 8
0x43679B: cmp     edx, [eax]
0x43679D: jnz     short loc_436780
0x43679F: mov     eax, [esp+10h+Comperand]
0x4367A3: mov     ecx, [eax]
0x4367A5: mov     eax, [esi]
0x4367A7: mov     edx, [esp+10h+Comperand]
0x4367AB: add     eax, 8
0x4367AE: cmp     edx, [eax]
0x4367B0: jnz     short loc_436780
0x4367B2: test    ecx, ecx
0x4367B4: mov     eax, [esp+10h+Comperand]
0x4367B8: jz      short loc_4367C6
0x4367BA: push    eax; Comperand
0x4367BB: mov     eax, [esi]
0x4367BD: push    ecx; Exchange
0x4367BE: add     eax, 8
0x4367C1: push    eax; Destination
0x4367C2: call    edi ; InterlockedCompareExchange
0x4367C4: jmp     short loc_436780
0x4367C6: push    0; Comperand
0x4367C8: push    ebx; Exchange
0x4367C9: push    eax; Destination
0x4367CA: call    edi ; InterlockedCompareExchange
0x4367CC: test    eax, eax
0x4367CE: jnz     short loc_436780
0x4367D0: mov     ecx, [esi]
0x4367D2: mov     edx, [ecx]
0x4367D4: mov     eax, [edx+4]
0x4367D7: call    eax
0x4367D9: mov     eax, [esp+10h+Comperand]
0x4367DD: mov     ecx, [esi]
0x4367DF: push    eax; Comperand
0x4367E0: push    ebx; Exchange
0x4367E1: add     ecx, 8
0x4367E4: push    ecx; Destination
0x4367E5: call    edi ; InterlockedCompareExchange
0x4367E7: mov     edx, [esi+4]
0x4367EA: pop     edi
0x4367EB: pop     esi
0x4367EC: mov     dword ptr [edx], 0
0x4367F2: pop     ebx
0x4367F3: pop     ecx
0x4367F4: retn    4
