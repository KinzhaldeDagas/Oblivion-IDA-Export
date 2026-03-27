0x433BC0: push    0FFFFFFFFh
0x433BC2: push    offset SEH_433970
0x433BC7: mov     eax, large fs:0
0x433BCD: push    eax
0x433BCE: sub     esp, 30h
0x433BD1: push    ebx
0x433BD2: push    ebp
0x433BD3: push    esi
0x433BD4: push    edi
0x433BD5: mov     eax, ___security_cookie
0x433BDA: xor     eax, esp
0x433BDC: push    eax
0x433BDD: lea     eax, [esp+50h+var_C]
0x433BE1: mov     large fs:0, eax
0x433BE7: mov     ebp, ecx
0x433BE9: lea     edi, [ebp+18h]
0x433BEC: xor     ebx, ebx
0x433BEE: mov     edi, edi
0x433BF0: mov     eax, [ebp+14h]
0x433BF3: mov     esi, ds:WaitForSingleObject
0x433BF9: push    0FFFFFFFFh; dwMilliseconds
0x433BFB: push    eax; hHandle
0x433BFC: call    esi ; WaitForSingleObject
0x433BFE: cmp     eax, 102h
0x433C03: jz      short loc_433C0F
0x433C05: lea     eax, [ebp+0Ch]
0x433C08: push    eax; lpAddend
0x433C09: call    ds:InterlockedDecrement
0x433C0F: mov     [esp+50h+var_24], ebx
0x433C13: mov     [esp+50h+var_1C], ebx
0x433C17: mov     [esp+50h+var_18], ebx
0x433C1B: mov     [esp+50h+var_14], bl
0x433C1F: mov     [esp+50h+var_2C], offset ??_7?$BSTaskManagerIterator@_J@@6B@; const BSTaskManagerIterator<__int64>::`vftable'
0x433C27: mov     [esp+50h+var_4], ebx
0x433C2B: mov     [esp+50h+var_39], bl
0x433C2F: jmp     short loc_433C37
0x433C31: mov     esi, ds:WaitForSingleObject
0x433C37: mov     ecx, [ebp+20h]
0x433C3A: push    ebx; dwMilliseconds
0x433C3B: push    ecx; hHandle
0x433C3C: call    esi ; WaitForSingleObject
0x433C3E: cmp     eax, 102h
0x433C43: jnz     short loc_433C82
0x433C45: mov     edx, [edi+8]
0x433C48: push    0FFFFFFFFh; dwMilliseconds
0x433C4A: push    edx; hHandle
0x433C4B: call    esi ; WaitForSingleObject
0x433C4D: cmp     eax, 102h
0x433C52: jz      short loc_433C5B
0x433C54: push    edi; lpAddend
0x433C55: call    ds:InterlockedDecrement
0x433C5B: mov     eax, [esp+50h+var_18]
0x433C5F: mov     ecx, [esp+50h+var_1C]
0x433C63: mov     edx, [esp+50h+var_2C]
0x433C67: push    eax
0x433C68: mov     eax, [edx]
0x433C6A: push    ecx
0x433C6B: lea     ecx, [esp+58h+var_2C]
0x433C6F: call    eax
0x433C71: and     [esp+50h+var_14], 0FCh
0x433C76: mov     [esp+50h+var_1C], ebx
0x433C7A: mov     [esp+50h+var_18], ebx
0x433C7E: mov     [esp+50h+var_24], ebx
0x433C82: mov     [esp+50h+var_38], ebx
0x433C86: cmp     [esp+50h+var_39], bl
0x433C8A: lea     edx, [esp+50h+var_38]
0x433C8E: setz    cl
0x433C91: lea     eax, [esp+50h+var_34]
0x433C95: mov     byte ptr [esp+50h+var_4], 1
0x433C9A: push    ecx
0x433C9B: push    edx
0x433C9C: push    eax
0x433C9D: lea     ecx, [esp+5Ch+var_2C]
0x433CA1: push    ecx
0x433CA2: mov     ecx, [ebp+24h]
0x433CA5: call    sub_433760
0x433CAA: test    al, al
0x433CAC: jz      short loc_433CED
0x433CAE: mov     esi, [esp+50h+var_38]
0x433CB2: cmp     dword ptr [esi+0Ch], 1
0x433CB6: lea     eax, [esi+0Ch]
0x433CB9: jnz     short loc_433D1F
0x433CBB: push    1; Comperand
0x433CBD: push    3; Exchange
0x433CBF: push    eax; Destination
0x433CC0: call    ds:InterlockedCompareExchange
0x433CC6: cmp     eax, 1
0x433CC9: setz    al
0x433CCC: cmp     al, bl
0x433CCE: jz      short loc_433D1F
0x433CD0: mov     ecx, [ebp+24h]
0x433CD3: mov     edx, [ecx]
0x433CD5: mov     eax, [edx+40h]
0x433CD8: push    esi
0x433CD9: mov     [esp+54h+var_39], 1
0x433CDE: call    eax
0x433CE0: mov     ecx, [ebp+24h]
0x433CE3: mov     edx, [ecx]
0x433CE5: mov     eax, [edx+44h]
0x433CE8: push    esi
0x433CE9: call    eax
0x433CEB: jmp     short loc_433D1F
0x433CED: test    [esp+50h+var_14], 2
0x433CF2: jnz     short loc_433D1F
0x433CF4: mov     ecx, [esp+50h+var_18]
0x433CF8: mov     edx, [esp+50h+var_1C]
0x433CFC: mov     eax, [esp+50h+var_2C]
0x433D00: push    ecx
0x433D01: push    edx
0x433D02: mov     edx, [eax]
0x433D04: lea     ecx, [esp+58h+var_2C]
0x433D08: call    edx
0x433D0A: and     [esp+50h+var_14], 0FCh
0x433D0F: mov     [esp+50h+var_1C], ebx
0x433D13: mov     [esp+50h+var_18], ebx
0x433D17: mov     [esp+50h+var_24], ebx
0x433D1B: mov     [esp+50h+var_39], bl
0x433D1F: push    edi; lpAddend
0x433D20: call    ds:InterlockedIncrement
0x433D26: mov     eax, [edi+8]
0x433D29: push    ebx; lpPreviousCount
0x433D2A: push    1; lReleaseCount
0x433D2C: push    eax; hSemaphore
0x433D2D: call    ds:ReleaseSemaphore
0x433D33: mov     ecx, [edi]
0x433D35: mov     esi, [esp+50h+var_38]
0x433D39: cmp     esi, ebx
0x433D3B: mov     byte ptr [esp+50h+var_4], bl
0x433D3F: jz      short loc_433D59
0x433D41: lea     edx, [esi+8]
0x433D44: push    edx; lpAddend
0x433D45: call    ds:InterlockedDecrement
0x433D4B: test    eax, eax
0x433D4D: jnz     short loc_433D59
0x433D4F: mov     eax, [esi]
0x433D51: mov     edx, [eax]
0x433D53: push    1
0x433D55: mov     ecx, esi
0x433D57: call    edx
0x433D59: test    [esp+50h+var_14], 2
0x433D5E: jz      loc_433C31
0x433D64: jmp     loc_433BF0
