0x7DC8D0: push    ecx
0x7DC8D1: push    ebp
0x7DC8D2: push    esi
0x7DC8D3: push    edi
0x7DC8D4: mov     esi, ecx
0x7DC8D6: call    sub_8025F0
0x7DC8DB: mov     edi, [esi+0BCh]
0x7DC8E1: test    edi, edi
0x7DC8E3: mov     [esp+10h+var_1], al
0x7DC8E7: jz      short loc_7DC90F
0x7DC8E9: lea     eax, [edi+4]
0x7DC8EC: push    eax; lpAddend
0x7DC8ED: call    dword ptr ds:0A2807Ch
0x7DC8F3: test    eax, eax
0x7DC8F5: jnz     short loc_7DC905
0x7DC8F7: test    edi, edi
0x7DC8F9: jz      short loc_7DC905
0x7DC8FB: mov     edx, [edi]
0x7DC8FD: mov     eax, [edx]
0x7DC8FF: push    1
0x7DC901: mov     ecx, edi
0x7DC903: call    eax
0x7DC905: mov     dword ptr [esi+0BCh], 0
0x7DC90F: lea     edi, [esi+7Ch]
0x7DC912: mov     ebp, 10h
0x7DC917: mov     esi, [edi+48h]
0x7DC91A: test    esi, esi
0x7DC91C: jz      short loc_7DC941
0x7DC91E: lea     ecx, [esi+4]
0x7DC921: push    ecx; lpAddend
0x7DC922: call    dword ptr ds:0A2807Ch
0x7DC928: test    eax, eax
0x7DC92A: jnz     short loc_7DC93A
0x7DC92C: test    esi, esi
0x7DC92E: jz      short loc_7DC93A
0x7DC930: mov     edx, [esi]
0x7DC932: mov     eax, [edx]
0x7DC934: push    1
0x7DC936: mov     ecx, esi
0x7DC938: call    eax
0x7DC93A: mov     dword ptr [edi+48h], 0
0x7DC941: mov     ecx, [edi]
0x7DC943: test    ecx, ecx
0x7DC945: jz      short loc_7DC958
0x7DC947: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7DC94B: jnz     short loc_7DC952
0x7DC94D: call    sub_7604D0
0x7DC952: mov     dword ptr [edi], 0
0x7DC958: add     edi, 4
0x7DC95B: sub     ebp, 1
0x7DC95E: jnz     short loc_7DC917
0x7DC960: mov     al, [esp+10h+var_1]
0x7DC964: pop     edi
0x7DC965: pop     esi
0x7DC966: pop     ebp
0x7DC967: pop     ecx
0x7DC968: retn
