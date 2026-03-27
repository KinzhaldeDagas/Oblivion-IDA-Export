0x43C630: sub     esp, 8
0x43C633: push    ebx
0x43C634: mov     ebx, ds:InterlockedCompareExchange
0x43C63A: push    ebp
0x43C63B: mov     ebp, [esp+10h+Comperand]
0x43C63F: push    esi
0x43C640: push    edi
0x43C641: mov     esi, ecx
0x43C643: mov     eax, [esp+18h+arg_0]
0x43C647: push    ebp; int
0x43C648: push    eax; Comperand
0x43C649: mov     ecx, esi
0x43C64B: call    sub_43C220
0x43C650: test    al, al
0x43C652: jz      short loc_43C6D1
0x43C654: mov     eax, [esi+18h]
0x43C657: and     eax, 0FFFFFFFEh
0x43C65A: mov     [esp+18h+Comperand], eax
0x43C65E: mov     ecx, [esp+18h+Comperand]
0x43C662: mov     eax, [esi+18h]
0x43C665: and     eax, 0FFFFFFFEh
0x43C668: and     ecx, 0FFFFFFFEh
0x43C66B: mov     [esp+18h+Comperand], ecx
0x43C66F: mov     [esp+18h+Exchange], eax
0x43C673: mov     edx, [esp+18h+Exchange]
0x43C677: mov     edi, [esp+18h+Comperand]
0x43C67B: or      edx, 1
0x43C67E: mov     [esp+18h+Exchange], edx
0x43C682: mov     ecx, [esp+18h+Exchange]
0x43C686: mov     eax, [esi+14h]
0x43C689: push    edi; Comperand
0x43C68A: and     eax, 0FFFFFFFEh
0x43C68D: push    ecx; Exchange
0x43C68E: add     eax, 8
0x43C691: push    eax; Destination
0x43C692: call    ebx ; InterlockedCompareExchange
0x43C694: cmp     eax, edi
0x43C696: jnz     short loc_43C643
0x43C698: mov     eax, [esi+14h]
0x43C69B: and     eax, 0FFFFFFFEh
0x43C69E: mov     [esp+18h+var_4], eax
0x43C6A2: mov     eax, [esp+18h+var_4]
0x43C6A6: and     eax, 0FFFFFFFEh
0x43C6A9: mov     [esp+18h+var_4], eax
0x43C6AD: mov     edi, [esp+18h+var_4]
0x43C6B1: mov     eax, [esp+18h+Comperand]
0x43C6B5: mov     ecx, [esi+10h]
0x43C6B8: push    edi; Comperand
0x43C6B9: push    eax; Exchange
0x43C6BA: push    ecx; Destination
0x43C6BB: call    ebx ; InterlockedCompareExchange
0x43C6BD: cmp     eax, edi
0x43C6BF: jnz     short loc_43C6D5
0x43C6C1: mov     ecx, [esi+14h]
0x43C6C4: and     ecx, 0FFFFFFFEh
0x43C6C7: push    ecx
0x43C6C8: mov     ecx, esi
0x43C6CA: call    sub_43AB20
0x43C6CF: jmp     short loc_43C6E2
0x43C6D1: xor     al, al
0x43C6D3: jmp     short loc_43C6E4
0x43C6D5: mov     edx, [esp+18h+arg_0]
0x43C6D9: push    ebp; int
0x43C6DA: push    edx; Comperand
0x43C6DB: mov     ecx, esi
0x43C6DD: call    sub_43C220
0x43C6E2: mov     al, 1
0x43C6E4: mov     ecx, [esi+4]
0x43C6E7: mov     dword ptr [ecx], 0
0x43C6ED: mov     edx, [esi+8]
0x43C6F0: pop     edi
0x43C6F1: mov     dword ptr [edx], 0
0x43C6F7: mov     ecx, [esi+0Ch]
0x43C6FA: pop     esi
0x43C6FB: pop     ebp
0x43C6FC: mov     dword ptr [ecx], 0
0x43C702: pop     ebx
0x43C703: add     esp, 8
0x43C706: retn    8
