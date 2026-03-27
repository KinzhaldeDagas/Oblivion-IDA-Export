0x433380: sub     esp, 0Ch
0x433383: push    ebp
0x433384: mov     ebp, ds:InterlockedCompareExchange
0x43338A: push    esi
0x43338B: push    edi
0x43338C: mov     esi, ecx
0x43338E: mov     edi, edi
0x433390: mov     eax, [esp+18h+arg_8]
0x433394: mov     ecx, [esp+18h+arg_4]
0x433398: mov     edx, [esp+18h+arg_0]
0x43339C: push    eax; int
0x43339D: push    ecx; int
0x43339E: push    edx; Comperand
0x43339F: mov     ecx, esi
0x4333A1: call    sub_432A60
0x4333A6: test    al, al
0x4333A8: jz      loc_43345E
0x4333AE: mov     eax, [esi+18h]
0x4333B1: and     eax, 0FFFFFFFEh
0x4333B4: mov     [esp+18h+Comperand], eax
0x4333B8: mov     eax, [esp+18h+Comperand]
0x4333BC: and     eax, 0FFFFFFFEh
0x4333BF: mov     [esp+18h+Comperand], eax
0x4333C3: mov     eax, [esi+18h]
0x4333C6: and     eax, 0FFFFFFFEh
0x4333C9: mov     [esp+18h+Exchange], eax
0x4333CD: mov     ecx, [esp+18h+Exchange]
0x4333D1: mov     edi, [esp+18h+Comperand]
0x4333D5: or      ecx, 1
0x4333D8: mov     [esp+18h+Exchange], ecx
0x4333DC: mov     ecx, [esp+18h+Exchange]
0x4333E0: mov     eax, [esi+14h]
0x4333E3: push    edi; Comperand
0x4333E4: and     eax, 0FFFFFFFEh
0x4333E7: push    ecx; Exchange
0x4333E8: add     eax, 0Ch
0x4333EB: push    eax; Destination
0x4333EC: call    ebp ; InterlockedCompareExchange
0x4333EE: cmp     eax, edi
0x4333F0: jnz     short loc_433390
0x4333F2: mov     edi, [esi+14h]
0x4333F5: and     edi, 0FFFFFFFEh
0x4333F8: add     edi, 8
0x4333FB: push    ebx
0x4333FC: mov     ebx, [edi]
0x4333FE: test    ebx, ebx
0x433400: jz      short loc_433424
0x433402: lea     edx, [ebx+8]
0x433405: push    edx; lpAddend
0x433406: call    ds:InterlockedDecrement
0x43340C: test    eax, eax
0x43340E: jnz     short loc_43341E
0x433410: test    ebx, ebx
0x433412: jz      short loc_43341E
0x433414: mov     eax, [ebx]
0x433416: mov     edx, [eax]
0x433418: push    1
0x43341A: mov     ecx, ebx
0x43341C: call    edx
0x43341E: mov     dword ptr [edi], 0
0x433424: mov     eax, [esi+14h]
0x433427: and     eax, 0FFFFFFFEh
0x43342A: mov     [esp+1Ch+var_4], eax
0x43342E: mov     eax, [esp+1Ch+var_4]
0x433432: and     eax, 0FFFFFFFEh
0x433435: mov     [esp+1Ch+var_4], eax
0x433439: mov     edi, [esp+1Ch+var_4]
0x43343D: mov     eax, [esp+1Ch+Comperand]
0x433441: mov     ecx, [esi+10h]
0x433444: push    edi; Comperand
0x433445: push    eax; Exchange
0x433446: push    ecx; Destination
0x433447: call    ebp ; InterlockedCompareExchange
0x433449: cmp     eax, edi
0x43344B: pop     ebx
0x43344C: jnz     short loc_433462
0x43344E: mov     ecx, [esi+14h]
0x433451: and     ecx, 0FFFFFFFEh
0x433454: push    ecx
0x433455: mov     ecx, esi
0x433457: call    sub_432A00
0x43345C: jmp     short loc_433478
0x43345E: xor     al, al
0x433460: jmp     short loc_433483
0x433462: mov     edx, [esp+18h+arg_8]
0x433466: mov     eax, [esp+18h+arg_4]
0x43346A: mov     ecx, [esp+18h+arg_0]
0x43346E: push    edx; int
0x43346F: push    eax; int
0x433470: push    ecx; Comperand
0x433471: mov     ecx, esi
0x433473: call    sub_432A60
0x433478: mov     ecx, [esi]
0x43347A: mov     edx, [ecx]
0x43347C: mov     eax, [edx+34h]
0x43347F: call    eax
0x433481: mov     al, 1
0x433483: mov     ecx, [esi+4]
0x433486: mov     dword ptr [ecx], 0
0x43348C: mov     edx, [esi+8]
0x43348F: mov     dword ptr [edx], 0
0x433495: mov     ecx, [esi+0Ch]
0x433498: pop     edi
0x433499: pop     esi
0x43349A: mov     dword ptr [ecx], 0
0x4334A0: pop     ebp
0x4334A1: add     esp, 0Ch
0x4334A4: retn    0Ch
