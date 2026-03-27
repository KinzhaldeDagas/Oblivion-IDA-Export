0x90FA70: mov     eax, [esp+arg_8]
0x90FA74: mov     edx, [esp+arg_0]
0x90FA78: push    esi
0x90FA79: mov     esi, ecx
0x90FA7B: mov     ecx, [esp+4+arg_4]
0x90FA7F: push    eax
0x90FA80: push    ecx
0x90FA81: push    edx
0x90FA82: mov     ecx, esi
0x90FA84: call    sub_8E7B70
0x90FA89: mov     al, 1
0x90FA8B: mov     dword ptr [esi], offset off_A9CB30
0x90FA91: mov     dword ptr [esi+50h], 3F800000h
0x90FA98: mov     dword ptr [esi+54h], 447A0000h
0x90FA9F: mov     dword ptr [esi+58h], 3DCCCCCDh
0x90FAA6: mov     [esi+5Ch], al
0x90FAA9: mov     [esi+5Dh], al
0x90FAAC: mov     eax, esi
0x90FAAE: pop     esi
0x90FAAF: retn    0Ch
