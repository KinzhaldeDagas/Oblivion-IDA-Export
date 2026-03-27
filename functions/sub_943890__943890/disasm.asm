0x943890: mov     eax, ecx
0x943892: mov     ecx, 5
0x943897: mov     [eax+10h], ecx
0x94389A: mov     [eax+0Ch], ecx
0x94389D: mov     ecx, [esp+arg_0]
0x9438A1: sub     ecx, 0
0x9438A4: mov     dword ptr [eax], 3DCCCCCDh
0x9438AA: mov     dword ptr [eax+4], 3E8h
0x9438B1: mov     dword ptr [eax+8], 0Ah
0x9438B8: jz      short loc_9438CD
0x9438BA: dec     ecx
0x9438BB: jnz     short locret_9438D3
0x9438BD: mov     dword ptr [eax], 3D4CCCCDh
0x9438C3: mov     dword ptr [eax+8], 1Eh
0x9438CA: retn    4
0x9438CD: mov     dword ptr [eax], 3E4CCCCDh
0x9438D3: retn    4
