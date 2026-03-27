0x432690: push    0FFFFFFFFh
0x432692: push    offset SEH_432690
0x432697: mov     eax, large fs:0
0x43269D: push    eax
0x43269E: push    ecx
0x43269F: push    ebx
0x4326A0: push    esi
0x4326A1: push    edi
0x4326A2: mov     eax, ___security_cookie
0x4326A7: xor     eax, esp
0x4326A9: push    eax
0x4326AA: lea     eax, [esp+20h+var_C]
0x4326AE: mov     large fs:0, eax
0x4326B4: mov     esi, ecx
0x4326B6: mov     [esp+20h+var_10], esi
0x4326BA: mov     dword ptr [esi+8], 0
0x4326C1: mov     eax, [esp+20h+arg_0]
0x4326C5: mov     ecx, [esp+20h+arg_4]
0x4326C9: mov     ebx, [esp+20h+arg_8]
0x4326CD: mov     dword ptr [esi+0Ch], 0
0x4326D4: mov     [esi], eax
0x4326D6: mov     [esi+4], ecx
0x4326D9: mov     edi, [esi+8]
0x4326DC: cmp     edi, [ebx]
0x4326DE: mov     [esp+20h+var_4], 0
0x4326E6: jz      short loc_43271B
0x4326E8: test    edi, edi
0x4326EA: jz      short loc_432708
0x4326EC: lea     edx, [edi+8]
0x4326EF: push    edx; lpAddend
0x4326F0: call    ds:InterlockedDecrement
0x4326F6: test    eax, eax
0x4326F8: jnz     short loc_432708
0x4326FA: test    edi, edi
0x4326FC: jz      short loc_432708
0x4326FE: mov     eax, [edi]
0x432700: mov     edx, [eax]
0x432702: push    1
0x432704: mov     ecx, edi
0x432706: call    edx
0x432708: mov     eax, [ebx]
0x43270A: test    eax, eax
0x43270C: mov     [esi+8], eax
0x43270F: jz      short loc_43271B
0x432711: add     eax, 8
0x432714: push    eax; lpAddend
0x432715: call    ds:InterlockedIncrement
0x43271B: mov     eax, esi
0x43271D: mov     ecx, dword ptr [esp+20h+var_C]
0x432721: mov     large fs:0, ecx
0x432728: pop     ecx
0x432729: pop     edi
0x43272A: pop     esi
0x43272B: pop     ebx
0x43272C: add     esp, 10h
0x43272F: retn    0Ch
