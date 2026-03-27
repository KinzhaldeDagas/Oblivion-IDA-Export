0x8EAD40: mov     eax, [esp+arg_4]
0x8EAD44: push    esi
0x8EAD45: mov     esi, ecx
0x8EAD47: mov     ecx, [esp+4+arg_0]
0x8EAD4B: push    eax
0x8EAD4C: push    ecx
0x8EAD4D: mov     ecx, esi
0x8EAD4F: call    sub_89DC10
0x8EAD54: mov     eax, 3F800000h
0x8EAD59: mov     dword ptr [esi], offset off_A9AF38
0x8EAD5F: mov     [esi+0F0h], eax
0x8EAD65: mov     [esi+0F4h], eax
0x8EAD6B: mov     [esi+0F8h], eax
0x8EAD71: mov     [esi+0FCh], eax
0x8EAD77: mov     dword ptr [esi+0C4h], 0BF800000h
0x8EAD81: mov     eax, esi
0x8EAD83: pop     esi
0x8EAD84: retn    8
