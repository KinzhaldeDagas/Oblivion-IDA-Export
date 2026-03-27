0x433760: push    ebp
0x433761: push    esi
0x433762: mov     esi, [esp+8+arg_0]
0x433766: test    byte ptr [esi+18h], 2
0x43376A: mov     ebp, ecx
0x43376C: jz      short loc_433775
0x43376E: pop     esi
0x43376F: xor     al, al
0x433771: pop     ebp
0x433772: retn    10h
0x433775: push    ebx
0x433776: mov     ebx, ds:TlsGetValue
0x43377C: push    edi
0x43377D: lea     ecx, [ecx+0]
0x433780: test    byte ptr [esi+18h], 1
0x433784: mov     edi, [ebp+14h]
0x433787: jnz     short loc_4337B5
0x433789: mov     eax, [edi+4]
0x43378C: push    eax; dwTlsIndex
0x43378D: call    ebx ; TlsGetValue
0x43378F: test    eax, eax
0x433791: jnz     short loc_43379B
0x433793: push    ebp; a2
0x433794: mov     ecx, edi; this
0x433796: call    ThreadSpecificInterfaceManager_AddInterface
0x43379B: mov     ecx, [esp+10h+arg_8]
0x43379F: push    ecx
0x4337A0: mov     ecx, [esi+8]
0x4337A3: lea     edx, [esi+10h]
0x4337A6: push    edx
0x4337A7: push    ecx
0x4337A8: mov     ecx, eax
0x4337AA: call    sub_431E10
0x4337AF: or      byte ptr [esi+18h], 1
0x4337B3: jmp     short loc_4337DB
0x4337B5: mov     edx, [edi+4]
0x4337B8: push    edx; dwTlsIndex
0x4337B9: call    ebx ; TlsGetValue
0x4337BB: test    eax, eax
0x4337BD: jnz     short loc_4337C7
0x4337BF: push    ebp; a2
0x4337C0: mov     ecx, edi; this
0x4337C2: call    ThreadSpecificInterfaceManager_AddInterface
0x4337C7: mov     ecx, [esp+10h+arg_8]
0x4337CB: push    ecx; int
0x4337CC: mov     ecx, [esi+8]
0x4337CF: lea     edx, [esi+10h]
0x4337D2: push    edx; int
0x4337D3: push    ecx; Comperand
0x4337D4: mov     ecx, eax
0x4337D6: call    sub_432ED0
0x4337DB: test    al, al
0x4337DD: jnz     short loc_433802
0x4337DF: add     dword ptr [esi+8], 1
0x4337E3: mov     ecx, [esi+8]
0x4337E6: cmp     ecx, [ebp+8]
0x4337E9: jnb     short loc_4337F7
0x4337EB: cmp     [esp+10h+arg_C], al
0x4337EF: jz      short loc_433811
0x4337F1: and     byte ptr [esi+18h], 0FEh
0x4337F5: jmp     short loc_433780
0x4337F7: or      byte ptr [esi+18h], 2
0x4337FB: pop     edi
0x4337FC: pop     ebx
0x4337FD: pop     esi
0x4337FE: pop     ebp
0x4337FF: retn    10h
0x433802: mov     edx, [esi+10h]
0x433805: mov     ecx, [esp+10h+arg_4]
0x433809: mov     [ecx], edx
0x43380B: mov     edx, [esi+14h]
0x43380E: mov     [ecx+4], edx
0x433811: pop     edi
0x433812: pop     ebx
0x433813: pop     esi
0x433814: pop     ebp
0x433815: retn    10h
