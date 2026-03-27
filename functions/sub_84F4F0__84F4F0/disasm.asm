0x84F4F0: push    0FFFFFFFFh
0x84F4F2: push    offset SEH_851CA0
0x84F4F7: mov     eax, large fs:0
0x84F4FD: push    eax
0x84F4FE: push    ecx
0x84F4FF: push    ebx
0x84F500: push    ebp
0x84F501: push    esi
0x84F502: push    edi
0x84F503: mov     eax, ds:0B30AACh
0x84F508: xor     eax, esp
0x84F50A: push    eax
0x84F50B: lea     eax, [esp+24h+var_C]
0x84F50F: mov     large fs:0, eax
0x84F515: mov     ebx, ecx
0x84F517: mov     esi, ds:0B459BCh
0x84F51D: mov     eax, [esi+24h]
0x84F520: mov     ecx, [esp+24h+arg_C]
0x84F524: mov     edi, [eax]
0x84F526: mov     edx, [ecx]
0x84F528: mov     eax, [edx+88h]
0x84F52E: push    0
0x84F530: mov     [esp+28h+var_10], edi
0x84F534: call    eax
0x84F536: mov     edi, [edi+4]
0x84F539: mov     ebp, eax
0x84F53B: cmp     edi, ebp
0x84F53D: jz      short loc_84F576
0x84F53F: test    edi, edi
0x84F541: jz      short loc_84F55F
0x84F543: lea     ecx, [edi+4]
0x84F546: push    ecx; lpAddend
0x84F547: call    dword ptr ds:0A2807Ch
0x84F54D: test    eax, eax
0x84F54F: jnz     short loc_84F55F
0x84F551: test    edi, edi
0x84F553: jz      short loc_84F55F
0x84F555: mov     edx, [edi]
0x84F557: mov     eax, [edx]
0x84F559: push    1
0x84F55B: mov     ecx, edi
0x84F55D: call    eax
0x84F55F: test    ebp, ebp
0x84F561: mov     edi, [esp+24h+var_10]
0x84F565: mov     [edi+4], ebp
0x84F568: jz      short loc_84F57A
0x84F56A: add     ebp, 4
0x84F56D: push    ebp; lpAddend
0x84F56E: call    dword ptr ds:0A28078h
0x84F574: jmp     short loc_84F57A
0x84F576: mov     edi, [esp+24h+var_10]
0x84F57A: test    edi, edi
0x84F57C: jz      short loc_84F59A
0x84F57E: cmp     byte ptr ds:0B42CDDh, 0
0x84F585: jz      short loc_84F59A
0x84F587: mov     ecx, [esp+24h+arg_C]
0x84F58B: mov     edx, [ecx]
0x84F58D: mov     eax, [edx+78h]
0x84F590: call    eax
0x84F592: push    eax
0x84F593: mov     ecx, edi
0x84F595: call    sub_7715E0
0x84F59A: mov     edi, 1
0x84F59F: add     [esi+60h], edi
0x84F5A2: mov     [esp+24h+arg_C], esi
0x84F5A6: mov     edx, [ebx+38h]
0x84F5A9: lea     ecx, [esp+24h+arg_C]
0x84F5AD: push    ecx
0x84F5AE: push    edx
0x84F5AF: lea     ecx, [ebx+40h]
0x84F5B2: mov     [esp+2Ch+var_4], 0
0x84F5BA: call    sub_76CE40
0x84F5BF: or      eax, 0FFFFFFFFh
0x84F5C2: add     [esi+60h], eax
0x84F5C5: mov     [esp+24h+var_4], eax
0x84F5C9: jnz     short loc_84F5D2
0x84F5CB: mov     ecx, esi
0x84F5CD: call    sub_7604D0
0x84F5D2: add     [ebx+38h], edi
0x84F5D5: mov     ecx, dword ptr [esp+24h+var_C]
0x84F5D9: mov     large fs:0, ecx
0x84F5E0: pop     ecx
0x84F5E1: pop     edi
0x84F5E2: pop     esi
0x84F5E3: pop     ebp
0x84F5E4: pop     ebx
0x84F5E5: add     esp, 10h
0x84F5E8: retn    10h
