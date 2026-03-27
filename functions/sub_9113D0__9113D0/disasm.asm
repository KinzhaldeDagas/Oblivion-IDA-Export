0x9113D0: push    esi
0x9113D1: mov     esi, ecx
0x9113D3: mov     ecx, [esp+4+arg_0]
0x9113D7: test    ecx, ecx
0x9113D9: mov     eax, 1
0x9113DE: mov     [esi+6], ax
0x9113E2: mov     dword ptr [esi], offset off_A9CCB8
0x9113E8: jz      short loc_91141B
0x9113EA: mov     cl, [esi+0Ch]
0x9113ED: test    cl, cl
0x9113EF: jnz     short loc_91141B
0x9113F1: mov     [esi+0Ch], al
0x9113F4: mov     eax, [esi+70h]
0x9113F7: push    eax; float
0x9113F8: call    sub_8A2AF0
0x9113FD: fstp    dword ptr [esi+70h]
0x911400: mov     ecx, [esi+78h]
0x911403: push    ecx; float
0x911404: call    sub_910FC0
0x911409: fstp    dword ptr [esi+78h]
0x91140C: mov     edx, [esi+74h]
0x91140F: push    edx; float
0x911410: call    sub_910FC0
0x911415: fstp    dword ptr [esi+74h]
0x911418: add     esp, 0Ch
0x91141B: mov     eax, esi
0x91141D: pop     esi
0x91141E: retn    4
