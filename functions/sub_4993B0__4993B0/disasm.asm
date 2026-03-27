0x4993B0: push    0FFFFFFFFh
0x4993B2: push    offset SEH_4993B0
0x4993B7: mov     eax, large fs:0
0x4993BD: push    eax
0x4993BE: push    ecx
0x4993BF: push    ebx
0x4993C0: push    ebp
0x4993C1: push    esi
0x4993C2: push    edi
0x4993C3: mov     eax, ds:0B30AACh
0x4993C8: xor     eax, esp
0x4993CA: push    eax
0x4993CB: lea     eax, [esp+24h+var_C]
0x4993CF: mov     large fs:0, eax
0x4993D5: mov     esi, ecx
0x4993D7: mov     [esp+24h+var_10], esi
0x4993DB: xor     ebx, ebx
0x4993DD: cmp     [esi+10h], bl
0x4993E0: mov     [esp+24h+var_4], 1
0x4993E8: jnz     short loc_49940F
0x4993EA: mov     eax, [esi]
0x4993EC: cmp     eax, ebx
0x4993EE: jz      short loc_49940F
0x4993F0: mov     eax, [eax+58h]
0x4993F3: cmp     eax, ebx
0x4993F5: jz      short loc_49940F
0x4993F7: mov     edx, [eax]
0x4993F9: mov     ecx, eax
0x4993FB: mov     eax, [edx+8]
0x4993FE: call    eax
0x499400: test    eax, eax
0x499402: jnz     short loc_49940F
0x499404: mov     ecx, [esi]
0x499406: mov     eax, [ecx+58h]
0x499409: mov     [eax+288h], ebx
0x49940F: mov     ebp, ds:0A2807Ch
0x499415: mov     [esi+4], ebx
0x499418: mov     edi, [esi+8]
0x49941B: cmp     edi, ebx
0x49941D: jz      short loc_49943A
0x49941F: lea     edx, [edi+4]
0x499422: push    edx; lpAddend
0x499423: call    ebp ; InterlockedDecrement
0x499425: test    eax, eax
0x499427: jnz     short loc_499437
0x499429: cmp     edi, ebx
0x49942B: jz      short loc_499437
0x49942D: mov     eax, [edi]
0x49942F: mov     edx, [eax]
0x499431: push    1
0x499433: mov     ecx, edi
0x499435: call    edx
0x499437: mov     [esi+8], ebx
0x49943A: mov     edi, [esi+0Ch]
0x49943D: cmp     edi, ebx
0x49943F: jz      short loc_49945C
0x499441: lea     eax, [edi+4]
0x499444: push    eax; lpAddend
0x499445: call    ebp ; InterlockedDecrement
0x499447: test    eax, eax
0x499449: jnz     short loc_499459
0x49944B: cmp     edi, ebx
0x49944D: jz      short loc_499459
0x49944F: mov     edx, [edi]
0x499451: mov     eax, [edx]
0x499453: push    1
0x499455: mov     ecx, edi
0x499457: call    eax
0x499459: mov     [esi+0Ch], ebx
0x49945C: mov     edi, [esi+0Ch]
0x49945F: cmp     edi, ebx
0x499461: mov     byte ptr [esp+24h+var_4], bl
0x499465: jz      short loc_49947F
0x499467: lea     ecx, [edi+4]
0x49946A: push    ecx; lpAddend
0x49946B: call    ebp ; InterlockedDecrement
0x49946D: test    eax, eax
0x49946F: jnz     short loc_49947F
0x499471: cmp     edi, ebx
0x499473: jz      short loc_49947F
0x499475: mov     edx, [edi]
0x499477: mov     eax, [edx]
0x499479: push    1
0x49947B: mov     ecx, edi
0x49947D: call    eax
0x49947F: mov     esi, [esi+8]
0x499482: cmp     esi, ebx
0x499484: mov     [esp+24h+var_4], 0FFFFFFFFh
0x49948C: jz      short loc_4994A6
0x49948E: lea     ecx, [esi+4]
0x499491: push    ecx; lpAddend
0x499492: call    ebp ; InterlockedDecrement
0x499494: test    eax, eax
0x499496: jnz     short loc_4994A6
0x499498: cmp     esi, ebx
0x49949A: jz      short loc_4994A6
0x49949C: mov     edx, [esi]
0x49949E: mov     eax, [edx]
0x4994A0: push    1
0x4994A2: mov     ecx, esi
0x4994A4: call    eax
0x4994A6: mov     ecx, dword ptr [esp+24h+var_C]
0x4994AA: mov     large fs:0, ecx
0x4994B1: pop     ecx
0x4994B2: pop     edi
0x4994B3: pop     esi
0x4994B4: pop     ebp
0x4994B5: pop     ebx
0x4994B6: add     esp, 10h
0x4994B9: retn
