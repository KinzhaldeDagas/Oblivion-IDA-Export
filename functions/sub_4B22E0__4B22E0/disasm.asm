0x4B22E0: mov     eax, [esp+arg_4]
0x4B22E4: push    esi
0x4B22E5: push    eax
0x4B22E6: mov     eax, [esp+8+arg_0]
0x4B22EA: mov     esi, ecx
0x4B22EC: lea     ecx, [eax+4]
0x4B22EF: mov     eax, [eax]
0x4B22F1: test    eax, eax
0x4B22F3: push    ecx
0x4B22F4: push    ecx
0x4B22F5: mov     ecx, esp
0x4B22F7: mov     [esp+10h+arg_4], esp
0x4B22FB: mov     [ecx], eax
0x4B22FD: jz      short loc_4B2309
0x4B22FF: add     eax, 4
0x4B2302: push    eax; lpAddend
0x4B2303: call    dword ptr ds:0A28078h
0x4B2309: mov     ecx, esi
0x4B230B: call    sub_4B1A50
0x4B2310: pop     esi
0x4B2311: retn    8
