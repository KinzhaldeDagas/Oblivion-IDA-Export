0x8FC1C0: mov     ecx, ds:0BA7D98h
0x8FC1C6: mov     eax, [ecx]
0x8FC1C8: push    1Ch
0x8FC1CA: push    10h
0x8FC1CC: call    dword ptr [eax+10h]
0x8FC1CF: mov     ecx, [esp+arg_C]
0x8FC1D3: mov     word ptr [eax+4], 10h
0x8FC1D9: mov     word ptr [eax+6], 1
0x8FC1DF: mov     [eax+8], ecx
0x8FC1E2: mov     dword ptr [eax], offset off_A9B8BC
0x8FC1E8: mov     word ptr [eax+0Ch], 0FFFFh
0x8FC1EE: retn
