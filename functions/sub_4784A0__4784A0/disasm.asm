0x4784A0: push    0FFFFFFFFh
0x4784A2: push    offset SEH_6CED50
0x4784A7: mov     eax, large fs:0
0x4784AD: push    eax
0x4784AE: sub     esp, 8
0x4784B1: push    ebx
0x4784B2: push    ebp
0x4784B3: push    esi
0x4784B4: push    edi
0x4784B5: mov     eax, ds:0B30AACh
0x4784BA: xor     eax, esp
0x4784BC: push    eax
0x4784BD: lea     eax, [esp+28h+var_C]
0x4784C1: mov     large fs:0, eax
0x4784C7: mov     ebp, ecx
0x4784C9: movzx   eax, word ptr [ebp+0Ch]
0x4784CD: movzx   ecx, word ptr [ebp+0Ah]
0x4784D1: cmp     ax, cx
0x4784D4: jz      loc_478633
0x4784DA: test    ax, ax
0x4784DD: jz      short loc_478522
0x4784DF: xor     edi, edi
0x4784E1: xor     ebx, ebx
0x4784E3: test    cx, cx
0x4784E6: jbe     short loc_478522
0x4784E8: jmp     short loc_4784F0
0x4784EA: align 10h
0x4784F0: mov     eax, [ebp+4]
0x4784F3: movzx   ecx, di
0x4784F6: mov     edx, [eax+ecx*4]
0x4784F9: lea     esi, [eax+ecx*4]
0x4784FC: test    edx, edx
0x4784FE: setnz   cl
0x478501: test    cl, cl
0x478503: jz      short loc_478519
0x478505: movzx   ecx, bx
0x478508: cmp     [eax+ecx*4], edx
0x47850B: lea     ecx, [eax+ecx*4]
0x47850E: jz      short loc_478516
0x478510: push    esi
0x478511: call    sub_55E2A0
0x478516: add     ebx, 1
0x478519: add     edi, 1
0x47851C: cmp     di, [ebp+0Ah]
0x478520: jb      short loc_4784F0
0x478522: movzx   eax, word ptr [ebp+0Ch]
0x478526: test    ax, ax
0x478529: mov     ebx, [ebp+4]
0x47852C: mov     [esp+28h+var_14], ebx
0x478530: mov     [ebp+0Ah], ax
0x478534: mov     [ebp+8], ax
0x478538: jbe     loc_47860B
0x47853E: movzx   esi, ax
0x478541: xor     ecx, ecx
0x478543: mov     eax, esi
0x478545: mov     edx, 4
0x47854A: mul     edx
0x47854C: seto    cl
0x47854F: neg     ecx
0x478551: or      ecx, eax
0x478553: xor     eax, eax
0x478555: add     ecx, 4
0x478558: setb    al
0x47855B: neg     eax
0x47855D: or      eax, ecx
0x47855F: push    eax; Size
0x478560: call    FormHeapAlloc
0x478565: add     esp, 4
0x478568: mov     [esp+28h+var_10], eax
0x47856C: xor     edi, edi
0x47856E: cmp     eax, edi
0x478570: mov     [esp+28h+var_4], edi
0x478574: jz      short loc_47858E
0x478576: push    offset sub_7016A0; a5
0x47857B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x478580: push    esi; size
0x478581: lea     edi, [eax+4]
0x478584: push    4; a2
0x478586: push    edi; a1
0x478587: mov     [eax], esi
0x478589: call    ArrayConstructor
0x47858E: xor     eax, eax
0x478590: cmp     [ebp+0Ah], ax
0x478594: mov     [esp+28h+var_4], 0FFFFFFFFh
0x47859C: mov     [ebp+4], edi
0x47859F: mov     [esp+28h+var_10], eax
0x4785A3: jbe     short loc_478612
0x4785A5: mov     edi, [ebp+4]
0x4785A8: mov     ecx, [esp+28h+var_14]
0x4785AC: movzx   esi, ax
0x4785AF: add     esi, esi
0x4785B1: add     esi, esi
0x4785B3: mov     ebx, [edi+esi]
0x4785B6: add     edi, esi
0x4785B8: cmp     ebx, [esi+ecx]
0x4785BB: jz      short loc_4785F4
0x4785BD: test    ebx, ebx
0x4785BF: jz      short loc_4785DD
0x4785C1: lea     edx, [ebx+4]
0x4785C4: push    edx; lpAddend
0x4785C5: call    dword ptr ds:0A2807Ch
0x4785CB: test    eax, eax
0x4785CD: jnz     short loc_4785DD
0x4785CF: test    ebx, ebx
0x4785D1: jz      short loc_4785DD
0x4785D3: mov     eax, [ebx]
0x4785D5: mov     edx, [eax]
0x4785D7: push    1
0x4785D9: mov     ecx, ebx
0x4785DB: call    edx
0x4785DD: mov     eax, [esp+28h+var_14]
0x4785E1: mov     esi, [esi+eax]
0x4785E4: test    esi, esi
0x4785E6: mov     [edi], esi
0x4785E8: jz      short loc_4785F4
0x4785EA: add     esi, 4
0x4785ED: push    esi; lpAddend
0x4785EE: call    dword ptr ds:0A28078h
0x4785F4: mov     eax, [esp+28h+var_10]
0x4785F8: add     eax, 1
0x4785FB: cmp     ax, [ebp+0Ah]
0x4785FF: mov     [esp+28h+var_10], eax
0x478603: jb      short loc_4785A5
0x478605: mov     ebx, [esp+28h+var_14]
0x478609: jmp     short loc_478612
0x47860B: mov     dword ptr [ebp+4], 0
0x478612: test    ebx, ebx
0x478614: jz      short loc_478633
0x478616: mov     ecx, [ebx-4]
0x478619: push    offset sub_7016A0; void (__thiscall *)(void *)
0x47861E: lea     esi, [ebx-4]
0x478621: push    ecx; int
0x478622: push    4; unsigned int
0x478624: push    ebx; void *
0x478625: call    $LN21
0x47862A: push    esi
0x47862B: call    FormHeapFree
0x478630: add     esp, 4
0x478633: mov     ecx, [esp+28h+var_C]
0x478637: mov     large fs:0, ecx
0x47863E: pop     ecx
0x47863F: pop     edi
0x478640: pop     esi
0x478641: pop     ebp
0x478642: pop     ebx
0x478643: add     esp, 14h
0x478646: retn
