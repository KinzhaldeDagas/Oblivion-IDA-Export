0x957FD0: push    esi
0x957FD1: push    edi
0x957FD2: mov     edi, ecx
0x957FD4: lea     esi, [edi+8]
0x957FD7: push    0
0x957FD9: mov     ecx, esi
0x957FDB: mov     word ptr [edi+6], 1
0x957FE1: mov     dword ptr [edi], offset off_AA3588
0x957FE7: call    sub_9438E0
0x957FEC: mov     eax, [esp+8+arg_0]
0x957FF0: mov     ecx, [eax]
0x957FF2: mov     [esi], ecx
0x957FF4: mov     edx, [eax+4]
0x957FF7: mov     [esi+4], edx
0x957FFA: mov     ecx, [eax+8]
0x957FFD: mov     [esi+8], ecx
0x958000: mov     edx, [eax+0Ch]
0x958003: mov     [esi+0Ch], edx
0x958006: mov     ecx, [eax+10h]
0x958009: mov     [esi+10h], ecx
0x95800C: mov     edx, [eax+14h]
0x95800F: mov     eax, edi
0x958011: pop     edi
0x958012: mov     [esi+14h], edx
0x958015: pop     esi
0x958016: retn    4
