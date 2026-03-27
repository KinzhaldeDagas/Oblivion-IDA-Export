0x712980: push    0FFFFFFFFh
0x712982: push    offset SEH_7B2A00
0x712987: mov     eax, large fs:0
0x71298D: push    eax
0x71298E: push    esi
0x71298F: push    edi
0x712990: mov     eax, ds:0B30AACh
0x712995: xor     eax, esp
0x712997: push    eax
0x712998: lea     eax, [esp+18h+var_C]
0x71299C: mov     large fs:0, eax
0x7129A2: mov     edi, ecx
0x7129A4: mov     esi, [esp+18h+arg_0]
0x7129A8: test    esi, esi
0x7129AA: mov     [esp+18h+arg_0], esi
0x7129AE: jz      short loc_7129BA
0x7129B0: lea     eax, [esi+4]
0x7129B3: push    eax; lpAddend
0x7129B4: call    dword ptr ds:0A28078h
0x7129BA: mov     edx, [edi+268h]
0x7129C0: lea     ecx, [esp+18h+arg_0]
0x7129C4: push    ecx
0x7129C5: push    edx
0x7129C6: lea     ecx, [edi+1ECh]
0x7129CC: mov     [esp+20h+var_4], 0
0x7129D4: call    sub_8BCD40
0x7129D9: test    esi, esi
0x7129DB: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7129E3: jz      short loc_7129FD
0x7129E5: lea     eax, [esi+4]
0x7129E8: push    eax; lpAddend
0x7129E9: call    dword ptr ds:0A2807Ch
0x7129EF: test    eax, eax
0x7129F1: jnz     short loc_7129FD
0x7129F3: mov     edx, [esi]
0x7129F5: mov     eax, [edx]
0x7129F7: push    1
0x7129F9: mov     ecx, esi
0x7129FB: call    eax
0x7129FD: mov     ecx, dword ptr [esp+18h+var_C]
0x712A01: mov     large fs:0, ecx
0x712A08: pop     ecx
0x712A09: pop     edi
0x712A0A: pop     esi
0x712A0B: add     esp, 0Ch
0x712A0E: retn    4
