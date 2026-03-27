0x8FC1F0: mov     ecx, ds:0BA7D98h
0x8FC1F6: mov     eax, [ecx]
0x8FC1F8: push    1Ch
0x8FC1FA: push    10h
0x8FC1FC: call    dword ptr [eax+10h]
0x8FC1FF: mov     ecx, [esp+arg_C]
0x8FC203: mov     word ptr [eax+4], 10h
0x8FC209: mov     word ptr [eax+6], 1
0x8FC20F: mov     [eax+8], ecx
0x8FC212: mov     word ptr [eax+0Ch], 0FFFFh
0x8FC218: mov     dword ptr [eax], offset off_A9B8F0
0x8FC21E: retn
