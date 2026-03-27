0x6FB460: push    esi
0x6FB461: push    edi
0x6FB462: mov     edi, [esp+8+arg_0]
0x6FB466: push    edi
0x6FB467: mov     esi, ecx
0x6FB469: call    sub_7094A0
0x6FB46E: mov     eax, [edi+220h]
0x6FB474: push    1
0x6FB476: lea     ecx, [esp+0Ch+arg_0]
0x6FB47A: push    ecx
0x6FB47B: push    2
0x6FB47D: lea     edx, [esi+0Ch]
0x6FB480: push    edx
0x6FB481: push    eax
0x6FB482: mov     eax, [eax+8]
0x6FB485: mov     [esp+1Ch+arg_0], 2
0x6FB48D: call    eax
0x6FB48F: mov     eax, [edi+220h]
0x6FB495: mov     edx, [eax+8]
0x6FB498: push    1
0x6FB49A: lea     ecx, [esp+20h+arg_0]
0x6FB49E: push    ecx
0x6FB49F: push    1
0x6FB4A1: add     esi, 0Eh
0x6FB4A4: push    esi
0x6FB4A5: push    eax
0x6FB4A6: mov     [esp+30h+arg_0], 1
0x6FB4AE: call    edx
0x6FB4B0: mov     edi, [edi+220h]
0x6FB4B6: mov     ecx, [edi+8]
0x6FB4B9: push    1
0x6FB4BB: lea     eax, [esp+34h+arg_0]
0x6FB4BF: push    eax
0x6FB4C0: push    1
0x6FB4C2: push    esi
0x6FB4C3: push    edi
0x6FB4C4: mov     [esp+44h+arg_0], 1
0x6FB4CC: call    ecx
0x6FB4CE: add     esp, 3Ch
0x6FB4D1: pop     edi
0x6FB4D2: pop     esi
0x6FB4D3: retn    4
