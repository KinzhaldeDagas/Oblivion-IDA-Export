0x4A1ED0: push    0FFFFFFFFh
0x4A1ED2: push    offset SEH_4A1ED0
0x4A1ED7: mov     eax, large fs:0
0x4A1EDD: push    eax
0x4A1EDE: push    ecx
0x4A1EDF: push    esi
0x4A1EE0: mov     eax, ds:0B30AACh
0x4A1EE5: xor     eax, esp
0x4A1EE7: push    eax
0x4A1EE8: lea     eax, [esp+18h+var_C]
0x4A1EEC: mov     large fs:0, eax
0x4A1EF2: mov     esi, ecx
0x4A1EF4: mov     [esp+18h+var_10], 0
0x4A1EFC: push    offset CriticalSection; lpCriticalSection
0x4A1F01: mov     [esp+1Ch+var_4], 0
0x4A1F09: call    dword ptr ds:0A2806Ch
0x4A1F0F: call    dword ptr ds:0A2808Ch
0x4A1F15: mov     ecx, [esp+18h+arg_0]
0x4A1F19: add     dword ptr ds:0B353FCh, 1
0x4A1F20: mov     ds:0B353F8h, eax
0x4A1F25: lea     eax, [esp+18h+var_10]
0x4A1F29: push    eax
0x4A1F2A: push    ecx
0x4A1F2B: mov     ecx, [esi+8]
0x4A1F2E: call    sub_4A1AB0
0x4A1F33: sub     dword ptr ds:0B353FCh, 1
0x4A1F3A: jnz     short loc_4A1F46
0x4A1F3C: mov     dword ptr ds:0B353F8h, 0
0x4A1F46: push    offset CriticalSection; lpCriticalSection
0x4A1F4B: call    dword ptr ds:0A28074h
0x4A1F51: mov     esi, [esp+18h+var_10]
0x4A1F55: test    esi, esi
0x4A1F57: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A1F5F: jz      short loc_4A1F79
0x4A1F61: lea     edx, [esi+4]
0x4A1F64: push    edx; lpAddend
0x4A1F65: call    dword ptr ds:0A2807Ch
0x4A1F6B: test    eax, eax
0x4A1F6D: jnz     short loc_4A1F79
0x4A1F6F: mov     eax, [esi]
0x4A1F71: mov     edx, [eax]
0x4A1F73: push    1
0x4A1F75: mov     ecx, esi
0x4A1F77: call    edx
0x4A1F79: mov     eax, esi
0x4A1F7B: mov     ecx, dword ptr [esp+18h+var_C]
0x4A1F7F: mov     large fs:0, ecx
0x4A1F86: pop     ecx
0x4A1F87: pop     esi
0x4A1F88: add     esp, 10h
0x4A1F8B: retn    8
