0x90F580: mov     eax, [esp+arg_4]
0x90F584: push    esi
0x90F585: mov     esi, ecx
0x90F587: mov     ecx, [esp+4+arg_0]
0x90F58B: push    eax
0x90F58C: push    ecx
0x90F58D: mov     ecx, esi
0x90F58F: call    sub_8ABC40
0x90F594: mov     edx, [esp+4+arg_8]
0x90F598: mov     dword ptr [esi], offset off_A9CAB8
0x90F59E: xor     eax, eax
0x90F5A0: mov     [esi+120h], eax
0x90F5A6: mov     [esi+124h], eax
0x90F5AC: mov     dword ptr [esi+128h], 80000000h
0x90F5B6: mov     [esi+30h], edx
0x90F5B9: mov     eax, esi
0x90F5BB: pop     esi
0x90F5BC: retn    0Ch
