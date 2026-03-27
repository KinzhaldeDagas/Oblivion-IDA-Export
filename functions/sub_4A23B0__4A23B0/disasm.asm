0x4A23B0: push    0FFFFFFFFh
0x4A23B2: push    offset SEH_7B3E60
0x4A23B7: mov     eax, large fs:0
0x4A23BD: push    eax
0x4A23BE: sub     esp, 0Ch
0x4A23C1: push    ebx
0x4A23C2: push    ebp
0x4A23C3: push    esi
0x4A23C4: push    edi
0x4A23C5: mov     eax, ds:0B30AACh
0x4A23CA: xor     eax, esp
0x4A23CC: push    eax
0x4A23CD: lea     eax, [esp+2Ch+var_C]
0x4A23D1: mov     large fs:0, eax
0x4A23D7: mov     ebx, ecx
0x4A23D9: push    offset CriticalSection; lpCriticalSection
0x4A23DE: call    dword ptr ds:0A2806Ch
0x4A23E4: call    dword ptr ds:0A2808Ch
0x4A23EA: add     dword ptr ds:0B353FCh, 1
0x4A23F1: mov     ds:0B353F8h, eax
0x4A23F6: mov     ecx, [ebx+8]
0x4A23F9: xor     ebp, ebp
0x4A23FB: cmp     [ecx+0Ch], ebp
0x4A23FE: jz      loc_4A2490
0x4A2404: mov     esi, [ecx+4]
0x4A2407: xor     eax, eax
0x4A2409: cmp     esi, ebp
0x4A240B: jbe     short loc_4A2424
0x4A240D: mov     ecx, [ecx+8]
0x4A2410: mov     edx, ecx
0x4A2412: cmp     [edx], ebp
0x4A2414: jnz     loc_4A24BE
0x4A241A: add     eax, 1
0x4A241D: add     edx, 4
0x4A2420: cmp     eax, esi
0x4A2422: jb      short loc_4A2412
0x4A2424: xor     eax, eax
0x4A2426: cmp     eax, ebp
0x4A2428: mov     [esp+2Ch+var_10], eax
0x4A242C: jz      short loc_4A2490
0x4A242E: mov     edi, edi
0x4A2430: mov     [esp+2Ch+var_14], ebp
0x4A2434: mov     [esp+2Ch+var_18], ebp
0x4A2438: lea     eax, [esp+2Ch+var_18]
0x4A243C: push    eax
0x4A243D: lea     ecx, [esp+30h+var_14]
0x4A2441: push    ecx
0x4A2442: mov     ecx, [ebx+8]
0x4A2445: lea     edx, [esp+34h+var_10]
0x4A2449: push    edx
0x4A244A: mov     [esp+38h+var_4], ebp
0x4A244E: call    sub_7B2600
0x4A2453: mov     edi, [esp+2Ch+var_18]
0x4A2457: cmp     dword ptr [edi+4], 2
0x4A245B: lea     esi, [edi+4]
0x4A245E: jnz     short loc_4A246D
0x4A2460: mov     eax, [esp+2Ch+var_14]
0x4A2464: mov     ecx, [ebx+8]
0x4A2467: push    eax
0x4A2468: call    NiTMap_RemoveAt
0x4A246D: push    esi; lpAddend
0x4A246E: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4A2476: call    dword ptr ds:0A2807Ch
0x4A247C: test    eax, eax
0x4A247E: jnz     short loc_4A248A
0x4A2480: mov     edx, [edi]
0x4A2482: mov     eax, [edx]
0x4A2484: push    1
0x4A2486: mov     ecx, edi
0x4A2488: call    eax
0x4A248A: cmp     [esp+2Ch+var_10], ebp
0x4A248E: jnz     short loc_4A2430
0x4A2490: sub     dword ptr ds:0B353FCh, 1
0x4A2497: jnz     short loc_4A249F
0x4A2499: mov     ds:0B353F8h, ebp
0x4A249F: push    offset CriticalSection; lpCriticalSection
0x4A24A4: call    dword ptr ds:0A28074h
0x4A24AA: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4A24AE: mov     large fs:0, ecx
0x4A24B5: pop     ecx
0x4A24B6: pop     edi
0x4A24B7: pop     esi
0x4A24B8: pop     ebp
0x4A24B9: pop     ebx
0x4A24BA: add     esp, 18h
0x4A24BD: retn
0x4A24BE: mov     eax, [ecx+eax*4]
0x4A24C1: jmp     loc_4A2426
