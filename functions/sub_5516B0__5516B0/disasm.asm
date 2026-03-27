0x5516B0: push    0FFFFFFFFh
0x5516B2: push    offset SEH_88E880
0x5516B7: mov     eax, large fs:0
0x5516BD: push    eax
0x5516BE: push    ecx
0x5516BF: push    ebx
0x5516C0: push    ebp
0x5516C1: push    esi
0x5516C2: push    edi
0x5516C3: mov     eax, ds:0B30AACh
0x5516C8: xor     eax, esp
0x5516CA: push    eax
0x5516CB: lea     eax, [esp+24h+var_C]
0x5516CF: mov     large fs:0, eax
0x5516D5: mov     ebp, ecx
0x5516D7: xor     eax, eax
0x5516D9: mov     [esp+24h+var_10], eax
0x5516DD: mov     edi, [esp+24h+arg_0]
0x5516E1: cmp     edi, eax
0x5516E3: mov     [esp+24h+var_4], eax
0x5516E7: jz      loc_5517D4
0x5516ED: mov     ecx, edi
0x5516EF: call    sub_551250
0x5516F4: test    eax, eax
0x5516F6: jz      loc_5517D4
0x5516FC: mov     ecx, edi
0x5516FE: call    sub_551250
0x551703: lea     edx, [eax+1]
0x551706: mov     cl, [eax]
0x551708: add     eax, 1
0x55170B: test    cl, cl
0x55170D: jnz     short loc_551706
0x55170F: sub     eax, edx
0x551711: jz      loc_5517D4
0x551717: push    offset stru_B39C00; lpCriticalSection
0x55171C: xor     bl, bl
0x55171E: call    dword ptr ds:0A2806Ch
0x551724: call    dword ptr ds:0A2808Ch
0x55172A: add     dword ptr ds:0B39C7Ch, 1
0x551731: mov     ds:0B39C78h, eax
0x551736: lea     eax, [esp+24h+var_10]
0x55173A: push    eax
0x55173B: mov     ecx, edi
0x55173D: lea     esi, [ebp+4]
0x551740: call    sub_551250
0x551745: push    eax
0x551746: mov     ecx, esi
0x551748: call    sub_4A1AB0
0x55174D: test    al, al
0x55174F: jnz     short loc_551769
0x551751: lea     ecx, [esp+24h+var_10]
0x551755: push    ecx
0x551756: mov     ecx, edi
0x551758: call    sub_5512A0
0x55175D: push    eax
0x55175E: mov     ecx, esi
0x551760: call    sub_4A1AB0
0x551765: test    al, al
0x551767: jz      short loc_55178A
0x551769: call    dword ptr ds:0A280D0h
0x55176F: mov     esi, [esp+24h+var_10]
0x551773: push    esi
0x551774: mov     ecx, ebp
0x551776: mov     [esi+0Ch], eax
0x551779: call    sub_5506B0
0x55177E: mov     ecx, [esi+8]
0x551781: call    sub_559190
0x551786: mov     bl, 1
0x551788: jmp     short loc_55178E
0x55178A: mov     esi, [esp+24h+var_10]
0x55178E: sub     dword ptr ds:0B39C7Ch, 1
0x551795: jnz     short loc_5517A1
0x551797: mov     dword ptr ds:0B39C78h, 0
0x5517A1: push    offset stru_B39C00; lpCriticalSection
0x5517A6: call    dword ptr ds:0A28074h
0x5517AC: test    esi, esi
0x5517AE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5517B6: jz      short loc_5517D0
0x5517B8: lea     edx, [esi+4]
0x5517BB: push    edx; lpAddend
0x5517BC: call    dword ptr ds:0A2807Ch
0x5517C2: test    eax, eax
0x5517C4: jnz     short loc_5517D0
0x5517C6: mov     eax, [esi]
0x5517C8: mov     edx, [eax]
0x5517CA: push    1
0x5517CC: mov     ecx, esi
0x5517CE: call    edx
0x5517D0: mov     al, bl
0x5517D2: jmp     short loc_5517D6
0x5517D4: xor     al, al
0x5517D6: mov     ecx, [esp+24h+var_C]
0x5517DA: mov     large fs:0, ecx
0x5517E1: pop     ecx
0x5517E2: pop     edi
0x5517E3: pop     esi
0x5517E4: pop     ebp
0x5517E5: pop     ebx
0x5517E6: add     esp, 10h
0x5517E9: retn    4
