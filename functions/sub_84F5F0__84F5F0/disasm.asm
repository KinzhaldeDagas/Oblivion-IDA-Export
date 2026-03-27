0x84F5F0: push    0FFFFFFFFh
0x84F5F2: push    offset SEH_851CA0
0x84F5F7: mov     eax, large fs:0
0x84F5FD: push    eax
0x84F5FE: push    ecx
0x84F5FF: push    ebx
0x84F600: push    ebp
0x84F601: push    esi
0x84F602: push    edi
0x84F603: mov     eax, ds:0B30AACh
0x84F608: xor     eax, esp
0x84F60A: push    eax
0x84F60B: lea     eax, [esp+24h+var_C]
0x84F60F: mov     large fs:0, eax
0x84F615: mov     ebx, ecx
0x84F617: mov     esi, ds:0B459C0h
0x84F61D: mov     eax, [esi+24h]
0x84F620: mov     ecx, [esp+24h+arg_C]
0x84F624: mov     edi, [eax]
0x84F626: mov     edx, [ecx]
0x84F628: mov     eax, [edx+88h]
0x84F62E: push    0
0x84F630: mov     [esp+28h+var_10], edi
0x84F634: call    eax
0x84F636: mov     edi, [edi+4]
0x84F639: mov     ebp, eax
0x84F63B: cmp     edi, ebp
0x84F63D: jz      short loc_84F676
0x84F63F: test    edi, edi
0x84F641: jz      short loc_84F65F
0x84F643: lea     ecx, [edi+4]
0x84F646: push    ecx; lpAddend
0x84F647: call    dword ptr ds:0A2807Ch
0x84F64D: test    eax, eax
0x84F64F: jnz     short loc_84F65F
0x84F651: test    edi, edi
0x84F653: jz      short loc_84F65F
0x84F655: mov     edx, [edi]
0x84F657: mov     eax, [edx]
0x84F659: push    1
0x84F65B: mov     ecx, edi
0x84F65D: call    eax
0x84F65F: test    ebp, ebp
0x84F661: mov     edi, [esp+24h+var_10]
0x84F665: mov     [edi+4], ebp
0x84F668: jz      short loc_84F67A
0x84F66A: add     ebp, 4
0x84F66D: push    ebp; lpAddend
0x84F66E: call    dword ptr ds:0A28078h
0x84F674: jmp     short loc_84F67A
0x84F676: mov     edi, [esp+24h+var_10]
0x84F67A: test    edi, edi
0x84F67C: jz      short loc_84F69A
0x84F67E: cmp     byte ptr ds:0B42CDDh, 0
0x84F685: jz      short loc_84F69A
0x84F687: mov     ecx, [esp+24h+arg_C]
0x84F68B: mov     edx, [ecx]
0x84F68D: mov     eax, [edx+78h]
0x84F690: call    eax
0x84F692: push    eax
0x84F693: mov     ecx, edi
0x84F695: call    sub_7715E0
0x84F69A: mov     edi, 1
0x84F69F: add     [esi+60h], edi
0x84F6A2: mov     [esp+24h+arg_C], esi
0x84F6A6: mov     edx, [ebx+38h]
0x84F6A9: lea     ecx, [esp+24h+arg_C]
0x84F6AD: push    ecx
0x84F6AE: push    edx
0x84F6AF: lea     ecx, [ebx+40h]
0x84F6B2: mov     [esp+2Ch+var_4], 0
0x84F6BA: call    sub_76CE40
0x84F6BF: or      eax, 0FFFFFFFFh
0x84F6C2: add     [esi+60h], eax
0x84F6C5: mov     [esp+24h+var_4], eax
0x84F6C9: jnz     short loc_84F6D2
0x84F6CB: mov     ecx, esi
0x84F6CD: call    sub_7604D0
0x84F6D2: add     [ebx+38h], edi
0x84F6D5: mov     ecx, dword ptr [esp+24h+var_C]
0x84F6D9: mov     large fs:0, ecx
0x84F6E0: pop     ecx
0x84F6E1: pop     edi
0x84F6E2: pop     esi
0x84F6E3: pop     ebp
0x84F6E4: pop     ebx
0x84F6E5: add     esp, 10h
0x84F6E8: retn    10h
