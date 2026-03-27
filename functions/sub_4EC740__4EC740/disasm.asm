0x4EC740: push    0FFFFFFFFh
0x4EC742: push    offset SEH_4EC740
0x4EC747: mov     eax, large fs:0
0x4EC74D: push    eax
0x4EC74E: push    ecx
0x4EC74F: push    ebx
0x4EC750: push    ebp
0x4EC751: push    esi
0x4EC752: push    edi
0x4EC753: mov     eax, ds:0B30AACh
0x4EC758: xor     eax, esp
0x4EC75A: push    eax
0x4EC75B: lea     eax, [esp+24h+var_C]
0x4EC75F: mov     large fs:0, eax
0x4EC765: mov     ebp, ecx
0x4EC767: mov     [esp+24h+var_10], ebp
0x4EC76B: mov     [esp+24h+var_4], 1
0x4EC773: lea     esi, [ebp+30h]
0x4EC776: mov     ebx, 4
0x4EC77B: jmp     short loc_4EC780
0x4EC77D: align 10h
0x4EC780: mov     edi, [esi]
0x4EC782: test    edi, edi
0x4EC784: jz      short loc_4EC796
0x4EC786: mov     ecx, edi
0x4EC788: call    sub_4EC740
0x4EC78D: push    edi
0x4EC78E: call    FormHeapFree
0x4EC793: add     esp, 4
0x4EC796: add     esi, 4
0x4EC799: sub     ebx, 1
0x4EC79C: jnz     short loc_4EC780
0x4EC79E: mov     esi, [ebp+2Ch]
0x4EC7A1: test    esi, esi
0x4EC7A3: mov     edi, ds:0A2807Ch
0x4EC7A9: mov     byte ptr [esp+24h+var_4], 0
0x4EC7AE: jz      short loc_4EC7C8
0x4EC7B0: lea     eax, [esi+4]
0x4EC7B3: push    eax; lpAddend
0x4EC7B4: call    edi ; InterlockedDecrement
0x4EC7B6: test    eax, eax
0x4EC7B8: jnz     short loc_4EC7C8
0x4EC7BA: test    esi, esi
0x4EC7BC: jz      short loc_4EC7C8
0x4EC7BE: mov     edx, [esi]
0x4EC7C0: mov     eax, [edx]
0x4EC7C2: push    1
0x4EC7C4: mov     ecx, esi
0x4EC7C6: call    eax
0x4EC7C8: mov     esi, [ebp+4]
0x4EC7CB: test    esi, esi
0x4EC7CD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4EC7D5: jz      short loc_4EC7EF
0x4EC7D7: lea     ecx, [esi+8]
0x4EC7DA: push    ecx; lpAddend
0x4EC7DB: call    edi ; InterlockedDecrement
0x4EC7DD: test    eax, eax
0x4EC7DF: jnz     short loc_4EC7EF
0x4EC7E1: test    esi, esi
0x4EC7E3: jz      short loc_4EC7EF
0x4EC7E5: mov     edx, [esi]
0x4EC7E7: mov     eax, [edx]
0x4EC7E9: push    1
0x4EC7EB: mov     ecx, esi
0x4EC7ED: call    eax
0x4EC7EF: mov     ecx, dword ptr [esp+24h+var_C]
0x4EC7F3: mov     large fs:0, ecx
0x4EC7FA: pop     ecx
0x4EC7FB: pop     edi
0x4EC7FC: pop     esi
0x4EC7FD: pop     ebp
0x4EC7FE: pop     ebx
0x4EC7FF: add     esp, 10h
0x4EC802: retn
