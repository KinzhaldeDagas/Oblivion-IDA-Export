0x80B5D0: push    ebx
0x80B5D1: push    ebp
0x80B5D2: push    esi
0x80B5D3: push    edi
0x80B5D4: mov     ebp, ecx
0x80B5D6: call    sub_8025F0
0x80B5DB: lea     edi, [ebp+0A4h]
0x80B5E1: mov     ebx, 7
0x80B5E6: mov     esi, [edi]
0x80B5E8: test    esi, esi
0x80B5EA: jz      short loc_80B60E
0x80B5EC: lea     eax, [esi+4]
0x80B5EF: push    eax; lpAddend
0x80B5F0: call    dword ptr ds:0A2807Ch
0x80B5F6: test    eax, eax
0x80B5F8: jnz     short loc_80B608
0x80B5FA: test    esi, esi
0x80B5FC: jz      short loc_80B608
0x80B5FE: mov     edx, [esi]
0x80B600: mov     eax, [edx]
0x80B602: push    1
0x80B604: mov     ecx, esi
0x80B606: call    eax
0x80B608: mov     dword ptr [edi], 0
0x80B60E: add     edi, 4
0x80B611: sub     ebx, 1
0x80B614: jnz     short loc_80B5E6
0x80B616: lea     edi, [ebp+0CCh]
0x80B61C: mov     ebx, 7
0x80B621: mov     esi, [edi]
0x80B623: test    esi, esi
0x80B625: jz      short loc_80B649
0x80B627: lea     ecx, [esi+4]
0x80B62A: push    ecx; lpAddend
0x80B62B: call    dword ptr ds:0A2807Ch
0x80B631: test    eax, eax
0x80B633: jnz     short loc_80B643
0x80B635: test    esi, esi
0x80B637: jz      short loc_80B643
0x80B639: mov     edx, [esi]
0x80B63B: mov     eax, [edx]
0x80B63D: push    1
0x80B63F: mov     ecx, esi
0x80B641: call    eax
0x80B643: mov     dword ptr [edi], 0
0x80B649: add     edi, 4
0x80B64C: sub     ebx, 1
0x80B64F: jnz     short loc_80B621
0x80B651: lea     edi, [ebp+0C0h]
0x80B657: mov     ebx, 3
0x80B65C: lea     esp, [esp+0]
0x80B660: mov     esi, [edi]
0x80B662: test    esi, esi
0x80B664: jz      short loc_80B688
0x80B666: lea     ecx, [esi+4]
0x80B669: push    ecx; lpAddend
0x80B66A: call    dword ptr ds:0A2807Ch
0x80B670: test    eax, eax
0x80B672: jnz     short loc_80B682
0x80B674: test    esi, esi
0x80B676: jz      short loc_80B682
0x80B678: mov     edx, [esi]
0x80B67A: mov     eax, [edx]
0x80B67C: push    1
0x80B67E: mov     ecx, esi
0x80B680: call    eax
0x80B682: mov     dword ptr [edi], 0
0x80B688: add     edi, 4
0x80B68B: sub     ebx, 1
0x80B68E: jnz     short loc_80B660
0x80B690: lea     edi, [ebp+0E8h]
0x80B696: mov     ebx, 3
0x80B69B: jmp     short loc_80B6A0
0x80B69D: align 10h
0x80B6A0: mov     esi, [edi]
0x80B6A2: test    esi, esi
0x80B6A4: jz      short loc_80B6C8
0x80B6A6: lea     ecx, [esi+4]
0x80B6A9: push    ecx; lpAddend
0x80B6AA: call    dword ptr ds:0A2807Ch
0x80B6B0: test    eax, eax
0x80B6B2: jnz     short loc_80B6C2
0x80B6B4: test    esi, esi
0x80B6B6: jz      short loc_80B6C2
0x80B6B8: mov     edx, [esi]
0x80B6BA: mov     eax, [edx]
0x80B6BC: push    1
0x80B6BE: mov     ecx, esi
0x80B6C0: call    eax
0x80B6C2: mov     dword ptr [edi], 0
0x80B6C8: add     edi, 4
0x80B6CB: sub     ebx, 1
0x80B6CE: jnz     short loc_80B6A0
0x80B6D0: lea     esi, [ebp+9Ch]
0x80B6D6: mov     edi, 2
0x80B6DB: or      ebx, 0FFFFFFFFh
0x80B6DE: mov     edi, edi
0x80B6E0: mov     ecx, [esi]
0x80B6E2: test    ecx, ecx
0x80B6E4: jz      short loc_80B6F6
0x80B6E6: add     [ecx+60h], ebx
0x80B6E9: jnz     short loc_80B6F0
0x80B6EB: call    sub_7604D0
0x80B6F0: mov     dword ptr [esi], 0
0x80B6F6: add     esi, 4
0x80B6F9: sub     edi, 1
0x80B6FC: jnz     short loc_80B6E0
0x80B6FE: pop     edi
0x80B6FF: pop     esi
0x80B700: pop     ebp
0x80B701: mov     al, 1
0x80B703: pop     ebx
0x80B704: retn
