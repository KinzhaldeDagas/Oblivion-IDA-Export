0x43A680: sub     esp, 8
0x43A683: push    ebx
0x43A684: mov     ebx, ds:InterlockedCompareExchange
0x43A68A: push    ebp
0x43A68B: mov     ebp, [esp+10h+Comperand]
0x43A68F: push    esi
0x43A690: push    edi
0x43A691: mov     esi, ecx
0x43A693: mov     eax, [esp+18h+arg_0]
0x43A697: push    ebp; int
0x43A698: push    eax; Comperand
0x43A699: mov     ecx, esi
0x43A69B: call    sub_55EF30
0x43A6A0: test    al, al
0x43A6A2: jz      loc_43A742
0x43A6A8: mov     eax, [esi+18h]
0x43A6AB: and     eax, 0FFFFFFFEh
0x43A6AE: mov     [esp+18h+Comperand], eax
0x43A6B2: mov     ecx, [esp+18h+Comperand]
0x43A6B6: mov     eax, [esi+18h]
0x43A6B9: and     eax, 0FFFFFFFEh
0x43A6BC: and     ecx, 0FFFFFFFEh
0x43A6BF: mov     [esp+18h+Comperand], ecx
0x43A6C3: mov     [esp+18h+Exchange], eax
0x43A6C7: mov     edx, [esp+18h+Exchange]
0x43A6CB: mov     edi, [esp+18h+Comperand]
0x43A6CF: or      edx, 1
0x43A6D2: mov     [esp+18h+Exchange], edx
0x43A6D6: mov     ecx, [esp+18h+Exchange]
0x43A6DA: mov     eax, [esi+14h]
0x43A6DD: push    edi; Comperand
0x43A6DE: and     eax, 0FFFFFFFEh
0x43A6E1: push    ecx; Exchange
0x43A6E2: add     eax, 8
0x43A6E5: push    eax; Destination
0x43A6E6: call    ebx ; InterlockedCompareExchange
0x43A6E8: cmp     eax, edi
0x43A6EA: jnz     short loc_43A693
0x43A6EC: mov     eax, [esi+14h]
0x43A6EF: and     eax, 0FFFFFFFEh
0x43A6F2: mov     [esp+18h+var_4], eax
0x43A6F6: mov     eax, [esp+18h+var_4]
0x43A6FA: and     eax, 0FFFFFFFEh
0x43A6FD: mov     [esp+18h+var_4], eax
0x43A701: mov     edi, [esp+18h+var_4]
0x43A705: mov     eax, [esp+18h+Comperand]
0x43A709: mov     ecx, [esi+10h]
0x43A70C: push    edi; Comperand
0x43A70D: push    eax; Exchange
0x43A70E: push    ecx; Destination
0x43A70F: call    ebx ; InterlockedCompareExchange
0x43A711: cmp     eax, edi
0x43A713: jnz     short loc_43A746
0x43A715: mov     eax, [esi+14h]
0x43A718: and     eax, 0FFFFFFFEh
0x43A71B: mov     dword ptr [eax+4], 0
0x43A722: mov     ecx, [esi+1Ch]
0x43A725: mov     [eax+4], ecx
0x43A728: add     dword ptr [esi+20h], 1
0x43A72C: mov     edx, [esi]
0x43A72E: mov     [esi+1Ch], eax
0x43A731: mov     eax, [esi+20h]
0x43A734: cmp     eax, [edx+10h]
0x43A737: jnz     short loc_43A753
0x43A739: mov     ecx, esi
0x43A73B: call    sub_435FE0
0x43A740: jmp     short loc_43A753
0x43A742: xor     al, al
0x43A744: jmp     short loc_43A755
0x43A746: mov     eax, [esp+18h+arg_0]
0x43A74A: push    ebp; int
0x43A74B: push    eax; Comperand
0x43A74C: mov     ecx, esi
0x43A74E: call    sub_55EF30
0x43A753: mov     al, 1
0x43A755: mov     ecx, [esi+4]
0x43A758: mov     dword ptr [ecx], 0
0x43A75E: mov     edx, [esi+8]
0x43A761: pop     edi
0x43A762: mov     dword ptr [edx], 0
0x43A768: mov     ecx, [esi+0Ch]
0x43A76B: pop     esi
0x43A76C: pop     ebp
0x43A76D: mov     dword ptr [ecx], 0
0x43A773: pop     ebx
0x43A774: add     esp, 8
0x43A777: retn    8
