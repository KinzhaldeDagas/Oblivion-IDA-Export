0x42A720: push    0FFFFFFFFh
0x42A722: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42A727: mov     eax, large fs:0
0x42A72D: push    eax
0x42A72E: push    ecx
0x42A72F: push    esi
0x42A730: push    edi
0x42A731: mov     eax, ___security_cookie
0x42A736: xor     eax, esp
0x42A738: push    eax
0x42A739: lea     eax, [esp+1Ch+var_C]
0x42A73D: mov     large fs:0, eax
0x42A743: mov     esi, ecx
0x42A745: mov     [esp+1Ch+var_10], esi
0x42A749: mov     byte ptr [esi+4], 4Ah ; 'J'
0x42A74D: mov     dword ptr [esi+8], 0
0x42A754: mov     edi, [esp+1Ch+arg_0]
0x42A758: mov     eax, edi
0x42A75A: mov     [esp+1Ch+var_4], 0
0x42A762: mov     dword ptr [esi], offset ??_7ExtraLastFinishedSequence@@6B@; const ExtraLastFinishedSequence::`vftable'
0x42A768: lea     edx, [eax+1]
0x42A76B: jmp     short loc_42A770
0x42A76D: align 10h
0x42A770: mov     cl, [eax]
0x42A772: add     eax, 1
0x42A775: test    cl, cl
0x42A777: jnz     short loc_42A770
0x42A779: sub     eax, edx
0x42A77B: push    1
0x42A77D: add     eax, 1
0x42A780: push    eax
0x42A781: mov     ecx, offset FormHeap
0x42A786: call    j_MemoryHeap_Alloc
0x42A78B: mov     [esi+0Ch], eax
0x42A78E: mov     ecx, edi
0x42A790: mov     edx, eax
0x42A792: mov     al, [ecx]
0x42A794: mov     [edx], al
0x42A796: add     ecx, 1
0x42A799: add     edx, 1
0x42A79C: test    al, al
0x42A79E: jnz     short loc_42A792
0x42A7A0: mov     eax, esi
0x42A7A2: mov     ecx, [esp+1Ch+var_C]
0x42A7A6: mov     large fs:0, ecx
0x42A7AD: pop     ecx
0x42A7AE: pop     edi
0x42A7AF: pop     esi
0x42A7B0: add     esp, 10h
0x42A7B3: retn    4
