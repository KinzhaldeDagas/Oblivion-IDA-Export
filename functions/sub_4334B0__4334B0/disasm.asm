0x4334B0: sub     esp, 8
0x4334B3: push    ebx
0x4334B4: mov     ebx, ds:InterlockedCompareExchange
0x4334BA: push    ebp
0x4334BB: mov     ebp, [esp+10h+Comperand]
0x4334BF: push    esi
0x4334C0: push    edi
0x4334C1: mov     esi, ecx
0x4334C3: mov     eax, [esp+18h+arg_0]
0x4334C7: push    ebp; int
0x4334C8: push    eax; Comperand
0x4334C9: mov     ecx, esi
0x4334CB: call    sub_432C30
0x4334D0: test    al, al
0x4334D2: jz      short loc_433551
0x4334D4: mov     eax, [esi+18h]
0x4334D7: and     eax, 0FFFFFFFEh
0x4334DA: mov     [esp+18h+Comperand], eax
0x4334DE: mov     ecx, [esp+18h+Comperand]
0x4334E2: mov     eax, [esi+18h]
0x4334E5: and     eax, 0FFFFFFFEh
0x4334E8: and     ecx, 0FFFFFFFEh
0x4334EB: mov     [esp+18h+Comperand], ecx
0x4334EF: mov     [esp+18h+Exchange], eax
0x4334F3: mov     edx, [esp+18h+Exchange]
0x4334F7: mov     edi, [esp+18h+Comperand]
0x4334FB: or      edx, 1
0x4334FE: mov     [esp+18h+Exchange], edx
0x433502: mov     ecx, [esp+18h+Exchange]
0x433506: mov     eax, [esi+14h]
0x433509: push    edi; Comperand
0x43350A: and     eax, 0FFFFFFFEh
0x43350D: push    ecx; Exchange
0x43350E: add     eax, 0Ch
0x433511: push    eax; Destination
0x433512: call    ebx ; InterlockedCompareExchange
0x433514: cmp     eax, edi
0x433516: jnz     short loc_4334C3
0x433518: mov     eax, [esi+14h]
0x43351B: and     eax, 0FFFFFFFEh
0x43351E: mov     [esp+18h+var_4], eax
0x433522: mov     eax, [esp+18h+var_4]
0x433526: and     eax, 0FFFFFFFEh
0x433529: mov     [esp+18h+var_4], eax
0x43352D: mov     edi, [esp+18h+var_4]
0x433531: mov     eax, [esp+18h+Comperand]
0x433535: mov     ecx, [esi+10h]
0x433538: push    edi; Comperand
0x433539: push    eax; Exchange
0x43353A: push    ecx; Destination
0x43353B: call    ebx ; InterlockedCompareExchange
0x43353D: cmp     eax, edi
0x43353F: jnz     short loc_433555
0x433541: mov     ecx, [esi+14h]
0x433544: and     ecx, 0FFFFFFFEh
0x433547: push    ecx
0x433548: mov     ecx, esi
0x43354A: call    sub_432A00
0x43354F: jmp     short loc_433562
0x433551: xor     al, al
0x433553: jmp     short loc_433564
0x433555: mov     edx, [esp+18h+arg_0]
0x433559: push    ebp; int
0x43355A: push    edx; Comperand
0x43355B: mov     ecx, esi
0x43355D: call    sub_432C30
0x433562: mov     al, 1
0x433564: mov     ecx, [esi+4]
0x433567: mov     dword ptr [ecx], 0
0x43356D: mov     edx, [esi+8]
0x433570: pop     edi
0x433571: mov     dword ptr [edx], 0
0x433577: mov     ecx, [esi+0Ch]
0x43357A: pop     esi
0x43357B: pop     ebp
0x43357C: mov     dword ptr [ecx], 0
0x433582: pop     ebx
0x433583: add     esp, 8
0x433586: retn    8
