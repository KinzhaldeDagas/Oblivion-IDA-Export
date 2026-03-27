0x91DAB0: mov     ecx, ds:0BA7D98h
0x91DAB6: mov     eax, [ecx]
0x91DAB8: push    esi
0x91DAB9: push    32h ; '2'
0x91DABB: push    2Ch ; ','
0x91DABD: call    dword ptr [eax+10h]
0x91DAC0: mov     ecx, [esp+4+arg_0]
0x91DAC4: mov     esi, eax
0x91DAC6: push    ecx
0x91DAC7: mov     ecx, esi
0x91DAC9: mov     word ptr [esi+4], 2Ch ; ','
0x91DACF: call    sub_9491F0
0x91DAD4: mov     dword ptr [esi+28h], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x91DADB: lea     eax, [esi+8]
0x91DADE: mov     dword ptr [esi], offset off_A9D7C4
0x91DAE4: mov     dword ptr [esi+20h], offset off_A9D7FC
0x91DAEB: mov     dword ptr [esi+28h], offset off_A9D798
0x91DAF2: mov     dword ptr [eax], offset off_A9D7AC
0x91DAF8: pop     esi
0x91DAF9: retn
