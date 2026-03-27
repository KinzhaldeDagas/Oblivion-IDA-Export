0x4BDE80: push    0FFFFFFFFh
0x4BDE82: push    offset SEH_4BDE80
0x4BDE87: mov     eax, large fs:0
0x4BDE8D: push    eax
0x4BDE8E: push    ebx
0x4BDE8F: push    esi
0x4BDE90: mov     eax, ds:0B30AACh
0x4BDE95: xor     eax, esp
0x4BDE97: push    eax
0x4BDE98: lea     eax, [esp+18h+var_C]
0x4BDE9C: mov     large fs:0, eax
0x4BDEA2: mov     esi, ecx
0x4BDEA4: mov     eax, [esp+18h+arg_4]
0x4BDEA8: mov     ecx, [esp+18h+arg_0]
0x4BDEAC: push    eax
0x4BDEAD: push    ecx
0x4BDEAE: call    sub_4EF1D0
0x4BDEB3: add     esp, 8
0x4BDEB6: mov     [esp+18h+arg_4], 0
0x4BDEBE: mov     edx, [esi]
0x4BDEC0: mov     edx, [edx+4]
0x4BDEC3: lea     ecx, [esp+18h+arg_4]
0x4BDEC7: push    ecx
0x4BDEC8: push    eax
0x4BDEC9: mov     ecx, esi
0x4BDECB: mov     [esp+20h+var_4], 0
0x4BDED3: call    edx
0x4BDED5: mov     bl, al
0x4BDED7: mov     eax, [esp+18h+arg_4]
0x4BDEDB: test    eax, eax
0x4BDEDD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BDEE5: jz      short loc_4BDF05
0x4BDEE7: mov     esi, eax
0x4BDEE9: add     eax, 8
0x4BDEEC: push    eax; lpAddend
0x4BDEED: call    dword ptr ds:0A2807Ch
0x4BDEF3: test    eax, eax
0x4BDEF5: jnz     short loc_4BDF05
0x4BDEF7: test    esi, esi
0x4BDEF9: jz      short loc_4BDF05
0x4BDEFB: mov     eax, [esi]
0x4BDEFD: mov     edx, [eax]
0x4BDEFF: push    1
0x4BDF01: mov     ecx, esi
0x4BDF03: call    edx
0x4BDF05: mov     al, bl
0x4BDF07: mov     ecx, [esp+18h+var_C]
0x4BDF0B: mov     large fs:0, ecx
0x4BDF12: pop     ecx
0x4BDF13: pop     esi
0x4BDF14: pop     ebx
0x4BDF15: add     esp, 0Ch
0x4BDF18: retn    8
