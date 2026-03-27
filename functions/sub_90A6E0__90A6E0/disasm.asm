0x90A6E0: mov     ecx, ds:0BA7D98h
0x90A6E6: mov     eax, [ecx]
0x90A6E8: push    esi
0x90A6E9: push    1Ch
0x90A6EB: push    38h ; '8'
0x90A6ED: call    dword ptr [eax+10h]
0x90A6F0: mov     ecx, [esp+4+arg_C]
0x90A6F4: mov     edx, [esp+4+arg_8]
0x90A6F8: push    ecx
0x90A6F9: mov     ecx, [esp+8+arg_4]
0x90A6FD: mov     esi, eax
0x90A6FF: mov     eax, [esp+8+arg_0]
0x90A703: push    edx
0x90A704: push    eax
0x90A705: push    ecx
0x90A706: mov     ecx, esi
0x90A708: mov     word ptr [esi+4], 38h ; '8'
0x90A70E: call    sub_90A260
0x90A713: mov     dword ptr [esi], offset off_A9BF44
0x90A719: mov     eax, esi
0x90A71B: pop     esi
0x90A71C: retn
