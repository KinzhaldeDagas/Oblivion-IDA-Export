0x55F270: sub     esp, 8
0x55F273: push    ebx
0x55F274: mov     ebx, ds:0A2813Ch
0x55F27A: push    ebp
0x55F27B: mov     ebp, [esp+10h+Comperand]
0x55F27F: push    esi
0x55F280: push    edi
0x55F281: mov     esi, ecx
0x55F283: mov     eax, [esp+18h+arg_0]
0x55F287: push    ebp; int
0x55F288: push    eax; Comperand
0x55F289: mov     ecx, esi
0x55F28B: call    sub_43A260
0x55F290: test    al, al
0x55F292: jz      loc_55F33F
0x55F298: mov     eax, [esi+18h]
0x55F29B: and     eax, 0FFFFFFFEh
0x55F29E: mov     [esp+18h+Comperand], eax
0x55F2A2: mov     ecx, [esp+18h+Comperand]
0x55F2A6: mov     eax, [esi+18h]
0x55F2A9: and     eax, 0FFFFFFFEh
0x55F2AC: and     ecx, 0FFFFFFFEh
0x55F2AF: mov     [esp+18h+Comperand], ecx
0x55F2B3: mov     [esp+18h+Exchange], eax
0x55F2B7: mov     edx, [esp+18h+Exchange]
0x55F2BB: mov     edi, [esp+18h+Comperand]
0x55F2BF: or      edx, 1
0x55F2C2: mov     [esp+18h+Exchange], edx
0x55F2C6: mov     ecx, [esp+18h+Exchange]
0x55F2CA: mov     eax, [esi+14h]
0x55F2CD: push    edi; Comperand
0x55F2CE: and     eax, 0FFFFFFFEh
0x55F2D1: push    ecx; Exchange
0x55F2D2: add     eax, 8
0x55F2D5: push    eax; Destination
0x55F2D6: call    ebx ; InterlockedCompareExchange
0x55F2D8: cmp     eax, edi
0x55F2DA: jnz     short loc_55F283
0x55F2DC: mov     eax, [esi+14h]
0x55F2DF: and     eax, 0FFFFFFFEh
0x55F2E2: mov     dword ptr [eax+4], 0
0x55F2E9: mov     eax, [esi+14h]
0x55F2EC: and     eax, 0FFFFFFFEh
0x55F2EF: mov     [esp+18h+var_4], eax
0x55F2F3: mov     ecx, [esp+18h+var_4]
0x55F2F7: and     ecx, 0FFFFFFFEh
0x55F2FA: mov     [esp+18h+var_4], ecx
0x55F2FE: mov     edi, [esp+18h+var_4]
0x55F302: mov     eax, [esp+18h+Comperand]
0x55F306: mov     ecx, [esi+10h]
0x55F309: push    edi; Comperand
0x55F30A: push    eax; Exchange
0x55F30B: push    ecx; Destination
0x55F30C: call    ebx ; InterlockedCompareExchange
0x55F30E: cmp     eax, edi
0x55F310: jnz     short loc_55F343
0x55F312: mov     eax, [esi+14h]
0x55F315: and     eax, 0FFFFFFFEh
0x55F318: mov     dword ptr [eax+4], 0
0x55F31F: mov     edx, [esi+1Ch]
0x55F322: mov     [eax+4], edx
0x55F325: add     dword ptr [esi+20h], 1
0x55F329: mov     ecx, [esi]
0x55F32B: mov     [esi+1Ch], eax
0x55F32E: mov     eax, [esi+20h]
0x55F331: cmp     eax, [ecx+10h]
0x55F334: jnz     short loc_55F350
0x55F336: mov     ecx, esi
0x55F338: call    sub_435FE0
0x55F33D: jmp     short loc_55F350
0x55F33F: xor     al, al
0x55F341: jmp     short loc_55F35B
0x55F343: mov     edx, [esp+18h+arg_0]
0x55F347: push    ebp; int
0x55F348: push    edx; Comperand
0x55F349: mov     ecx, esi
0x55F34B: call    sub_43A260
0x55F350: mov     ecx, [esi]
0x55F352: mov     eax, [ecx]
0x55F354: mov     edx, [eax+34h]
0x55F357: call    edx
0x55F359: mov     al, 1
0x55F35B: mov     ecx, [esi+4]
0x55F35E: mov     dword ptr [ecx], 0
0x55F364: mov     edx, [esi+8]
0x55F367: pop     edi
0x55F368: mov     dword ptr [edx], 0
0x55F36E: mov     ecx, [esi+0Ch]
0x55F371: pop     esi
0x55F372: pop     ebp
0x55F373: mov     dword ptr [ecx], 0
0x55F379: pop     ebx
0x55F37A: add     esp, 8
0x55F37D: retn    8
