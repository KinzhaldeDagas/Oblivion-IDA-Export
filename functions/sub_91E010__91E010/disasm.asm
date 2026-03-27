0x91E010: mov     ecx, ds:0BA7D98h
0x91E016: mov     eax, [ecx]
0x91E018: push    esi
0x91E019: push    32h ; '2'
0x91E01B: push    2Ch ; ','
0x91E01D: call    dword ptr [eax+10h]
0x91E020: mov     ecx, [esp+4+arg_0]
0x91E024: mov     esi, eax
0x91E026: push    ecx
0x91E027: mov     ecx, esi
0x91E029: mov     word ptr [esi+4], 2Ch ; ','
0x91E02F: call    sub_9491F0
0x91E034: mov     dword ptr [esi+28h], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x91E03B: lea     eax, [esi+8]
0x91E03E: mov     dword ptr [esi], offset off_A9D81C
0x91E044: mov     dword ptr [esi+20h], offset off_A9D7FC
0x91E04B: mov     dword ptr [esi+28h], offset off_A9D7E8
0x91E052: mov     dword ptr [eax], offset off_A9D804
0x91E058: pop     esi
0x91E059: retn
