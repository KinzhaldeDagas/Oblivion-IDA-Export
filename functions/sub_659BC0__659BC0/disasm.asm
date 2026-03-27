0x659BC0: push    esi
0x659BC1: mov     esi, ecx
0x659BC3: mov     ecx, [esi+58h]
0x659BC6: test    ecx, ecx
0x659BC8: jz      short loc_659BD2
0x659BCA: mov     eax, [ecx]
0x659BCC: mov     edx, [eax]
0x659BCE: push    1
0x659BD0: call    edx
0x659BD2: mov     dword ptr [esi+58h], 0
0x659BD9: pop     esi
0x659BDA: retn
