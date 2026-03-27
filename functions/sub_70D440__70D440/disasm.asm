0x70D440: push    0FFFFFFFFh
0x70D442: push    offset SEH_7E5B50
0x70D447: mov     eax, large fs:0
0x70D44D: push    eax
0x70D44E: push    ebx
0x70D44F: push    ebp
0x70D450: push    esi
0x70D451: push    edi
0x70D452: mov     eax, ds:0B30AACh
0x70D457: xor     eax, esp
0x70D459: push    eax
0x70D45A: lea     eax, [esp+20h+var_C]
0x70D45E: mov     large fs:0, eax
0x70D464: mov     ebx, [esp+20h+arg_0]
0x70D468: push    ebx
0x70D469: call    sub_7081B0
0x70D46E: mov     ecx, ebx
0x70D470: call    sub_7124A0
0x70D475: mov     edi, eax
0x70D477: test    edi, edi
0x70D479: mov     [esp+20h+arg_0], edi
0x70D47D: jz      short loc_70D489
0x70D47F: lea     eax, [edi+4]
0x70D482: push    eax; lpAddend
0x70D483: call    dword ptr ds:0A28078h
0x70D489: mov     ecx, ebx
0x70D48B: mov     [esp+20h+var_4], 0
0x70D493: call    sub_7124D0
0x70D498: test    eax, eax
0x70D49A: jbe     short loc_70D4D5
0x70D49C: mov     ebp, eax
0x70D49E: mov     edi, edi
0x70D4A0: mov     ecx, ebx
0x70D4A2: call    sub_7124A0
0x70D4A7: mov     esi, eax
0x70D4A9: test    esi, esi
0x70D4AB: jz      short loc_70D4CC
0x70D4AD: lea     edi, [esi+4]
0x70D4B0: push    edi; lpAddend
0x70D4B1: call    dword ptr ds:0A28078h
0x70D4B7: push    edi; lpAddend
0x70D4B8: call    dword ptr ds:0A2807Ch
0x70D4BE: test    eax, eax
0x70D4C0: jnz     short loc_70D4CC
0x70D4C2: mov     edx, [esi]
0x70D4C4: mov     eax, [edx]
0x70D4C6: push    1
0x70D4C8: mov     ecx, esi
0x70D4CA: call    eax
0x70D4CC: sub     ebp, 1
0x70D4CF: jnz     short loc_70D4A0
0x70D4D1: mov     edi, [esp+20h+arg_0]
0x70D4D5: cmp     dword ptr [ebx+0D8h], 4010004h
0x70D4DF: jb      short loc_70D552
0x70D4E1: mov     ecx, ebx
0x70D4E3: call    sub_7124D0
0x70D4E8: test    eax, eax
0x70D4EA: jbe     short loc_70D525
0x70D4EC: mov     ebp, eax
0x70D4EE: mov     edi, edi
0x70D4F0: mov     ecx, ebx
0x70D4F2: call    sub_7124A0
0x70D4F7: mov     esi, eax
0x70D4F9: test    esi, esi
0x70D4FB: jz      short loc_70D51C
0x70D4FD: lea     edi, [esi+4]
0x70D500: push    edi; lpAddend
0x70D501: call    dword ptr ds:0A28078h
0x70D507: push    edi; lpAddend
0x70D508: call    dword ptr ds:0A2807Ch
0x70D50E: test    eax, eax
0x70D510: jnz     short loc_70D51C
0x70D512: mov     edx, [esi]
0x70D514: mov     eax, [edx]
0x70D516: push    1
0x70D518: mov     ecx, esi
0x70D51A: call    eax
0x70D51C: sub     ebp, 1
0x70D51F: jnz     short loc_70D4F0
0x70D521: mov     edi, [esp+20h+arg_0]
0x70D525: mov     eax, [ebx+0D8h]
0x70D52B: cmp     eax, 0A000107h
0x70D530: jb      short loc_70D552
0x70D532: cmp     eax, 0A00010Fh
0x70D537: jnb     short loc_70D552
0x70D539: mov     ecx, ebx
0x70D53B: call    sub_7124D0
0x70D540: test    eax, eax
0x70D542: jbe     short loc_70D552
0x70D544: mov     esi, eax
0x70D546: mov     ecx, ebx
0x70D548: call    sub_7124A0
0x70D54D: sub     esi, 1
0x70D550: jnz     short loc_70D546
0x70D552: test    edi, edi
0x70D554: mov     [esp+20h+var_4], 0FFFFFFFFh
0x70D55C: jz      short loc_70D576
0x70D55E: lea     ecx, [edi+4]
0x70D561: push    ecx; lpAddend
0x70D562: call    dword ptr ds:0A2807Ch
0x70D568: test    eax, eax
0x70D56A: jnz     short loc_70D576
0x70D56C: mov     edx, [edi]
0x70D56E: mov     eax, [edx]
0x70D570: push    1
0x70D572: mov     ecx, edi
0x70D574: call    eax
0x70D576: mov     ecx, [esp+20h+var_C]
0x70D57A: mov     large fs:0, ecx
0x70D581: pop     ecx
0x70D582: pop     edi
0x70D583: pop     esi
0x70D584: pop     ebp
0x70D585: pop     ebx
0x70D586: add     esp, 0Ch
0x70D589: retn    4
