0x942BB0: mov     eax, [ecx+8]
0x942BB3: mov     ecx, [ecx]
0x942BB5: mov     edx, ds:0BA7D98h
0x942BBB: push    esi
0x942BBC: mov     esi, [edx]
0x942BBE: inc     eax
0x942BBF: lea     eax, [eax+eax*2]
0x942BC2: push    14h
0x942BC4: shl     eax, 2
0x942BC7: push    eax
0x942BC8: push    ecx
0x942BC9: mov     ecx, edx
0x942BCB: call    dword ptr [esi+14h]
0x942BCE: pop     esi
0x942BCF: retn
