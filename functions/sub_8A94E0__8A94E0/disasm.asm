0x8A94E0: mov     ecx, [esp+arg_0]
0x8A94E4: test    ecx, ecx
0x8A94E6: jz      short locret_8A950D
0x8A94E8: fld     dword ptr [ecx+24h]
0x8A94EB: mov     word ptr [ecx+6], 1
0x8A94F1: fld     dword ptr ds:0A2FAA8h
0x8A94F7: mov     dword ptr [ecx], offset off_A97984
0x8A94FD: fucompp
0x8A94FF: fnstsw  ax
0x8A9501: test    ah, 44h
0x8A9504: jp      short locret_8A950D
0x8A9506: mov     dword ptr [ecx+24h], 7F7FFFFFh
0x8A950D: retn
