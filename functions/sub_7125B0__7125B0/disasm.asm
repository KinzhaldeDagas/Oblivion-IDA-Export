0x7125B0: mov     eax, [esp+arg_0]; Fog decode: generic NIF property factory unregister helper; shutdown uses it to unregister "NiFogProperty".
0x7125B4: mov     ecx, ds:0B3FB80h
0x7125BA: push    eax
0x7125BB: call    NiTMap_RemoveAt
0x7125C0: retn
