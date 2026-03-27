0x8BC270: push    esi
0x8BC271: mov     esi, ecx
0x8BC273: mov     word ptr [esi+6], 1
0x8BC279: mov     dword ptr [esi], offset off_A98328
0x8BC27F: mov     ecx, ds:0BA7D98h
0x8BC285: mov     eax, [ecx]
0x8BC287: push    17h
0x8BC289: push    14h
0x8BC28B: call    dword ptr [eax+10h]
0x8BC28E: mov     ecx, [esp+4+arg_0]
0x8BC292: push    1
0x8BC294: push    ecx
0x8BC295: mov     ecx, eax
0x8BC297: mov     word ptr [eax+4], 14h
0x8BC29D: call    sub_8BC030
0x8BC2A2: mov     [esi+8], eax
0x8BC2A5: mov     eax, esi
0x8BC2A7: pop     esi
0x8BC2A8: retn    4
