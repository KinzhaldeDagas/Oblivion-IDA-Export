0x5517F0: push    0FFFFFFFFh
0x5517F2: push    offset SEH_88E880
0x5517F7: mov     eax, large fs:0
0x5517FD: push    eax
0x5517FE: push    ecx
0x5517FF: push    ebx
0x551800: push    ebp
0x551801: push    esi
0x551802: push    edi
0x551803: mov     eax, ds:0B30AACh
0x551808: xor     eax, esp
0x55180A: push    eax
0x55180B: lea     eax, [esp+24h+var_C]
0x55180F: mov     large fs:0, eax
0x551815: mov     ebp, ecx
0x551817: xor     eax, eax
0x551819: mov     [esp+24h+var_10], eax
0x55181D: mov     edi, [esp+24h+arg_0]
0x551821: cmp     edi, eax
0x551823: mov     [esp+24h+var_4], eax
0x551827: jz      loc_551914
0x55182D: mov     ecx, edi
0x55182F: call    sub_5512A0
0x551834: test    eax, eax
0x551836: jz      loc_551914
0x55183C: mov     ecx, edi
0x55183E: call    sub_5512A0
0x551843: lea     edx, [eax+1]
0x551846: mov     cl, [eax]
0x551848: add     eax, 1
0x55184B: test    cl, cl
0x55184D: jnz     short loc_551846
0x55184F: sub     eax, edx
0x551851: jz      loc_551914
0x551857: push    offset stru_B39C00; lpCriticalSection
0x55185C: xor     bl, bl
0x55185E: call    dword ptr ds:0A2806Ch
0x551864: call    dword ptr ds:0A2808Ch
0x55186A: add     dword ptr ds:0B39C7Ch, 1
0x551871: mov     ds:0B39C78h, eax
0x551876: lea     eax, [esp+24h+var_10]
0x55187A: push    eax
0x55187B: mov     ecx, edi
0x55187D: lea     esi, [ebp+4]
0x551880: call    sub_5512A0
0x551885: push    eax
0x551886: mov     ecx, esi
0x551888: call    sub_4A1AB0
0x55188D: test    al, al
0x55188F: jnz     short loc_5518A9
0x551891: lea     ecx, [esp+24h+var_10]
0x551895: push    ecx
0x551896: mov     ecx, edi
0x551898: call    sub_551250
0x55189D: push    eax
0x55189E: mov     ecx, esi
0x5518A0: call    sub_4A1AB0
0x5518A5: test    al, al
0x5518A7: jz      short loc_5518CA
0x5518A9: call    dword ptr ds:0A280D0h
0x5518AF: mov     esi, [esp+24h+var_10]
0x5518B3: push    esi
0x5518B4: mov     ecx, ebp
0x5518B6: mov     [esi+0Ch], eax
0x5518B9: call    sub_5506B0
0x5518BE: mov     ecx, [esi+8]
0x5518C1: call    sub_558520
0x5518C6: mov     bl, 1
0x5518C8: jmp     short loc_5518CE
0x5518CA: mov     esi, [esp+24h+var_10]
0x5518CE: sub     dword ptr ds:0B39C7Ch, 1
0x5518D5: jnz     short loc_5518E1
0x5518D7: mov     dword ptr ds:0B39C78h, 0
0x5518E1: push    offset stru_B39C00; lpCriticalSection
0x5518E6: call    dword ptr ds:0A28074h
0x5518EC: test    esi, esi
0x5518EE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5518F6: jz      short loc_551910
0x5518F8: lea     edx, [esi+4]
0x5518FB: push    edx; lpAddend
0x5518FC: call    dword ptr ds:0A2807Ch
0x551902: test    eax, eax
0x551904: jnz     short loc_551910
0x551906: mov     eax, [esi]
0x551908: mov     edx, [eax]
0x55190A: push    1
0x55190C: mov     ecx, esi
0x55190E: call    edx
0x551910: mov     al, bl
0x551912: jmp     short loc_551916
0x551914: xor     al, al
0x551916: mov     ecx, [esp+24h+var_C]
0x55191A: mov     large fs:0, ecx
0x551921: pop     ecx
0x551922: pop     edi
0x551923: pop     esi
0x551924: pop     ebp
0x551925: pop     ebx
0x551926: add     esp, 10h
0x551929: retn    4
