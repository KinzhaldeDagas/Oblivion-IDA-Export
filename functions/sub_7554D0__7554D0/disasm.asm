0x7554D0: push    esi
0x7554D1: push    edi
0x7554D2: mov     edi, [esp+8+arg_0]
0x7554D6: push    edi
0x7554D7: mov     esi, ecx
0x7554D9: call    sub_75E920
0x7554DE: mov     eax, [edi+21Ch]
0x7554E4: mov     edx, [eax+4]
0x7554E7: push    1
0x7554E9: lea     ecx, [esp+0Ch+arg_0]
0x7554ED: push    ecx
0x7554EE: push    4
0x7554F0: add     esi, 30h ; '0'
0x7554F3: push    esi
0x7554F4: push    eax
0x7554F5: mov     [esp+1Ch+arg_0], 4
0x7554FD: call    edx
0x7554FF: add     esp, 14h
0x755502: pop     edi
0x755503: pop     esi
0x755504: retn    4
