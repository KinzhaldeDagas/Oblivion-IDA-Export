0x8B9AE0: push    esi
0x8B9AE1: push    edi
0x8B9AE2: mov     edi, [esp+8+arg_0]
0x8B9AE6: mov     esi, ecx
0x8B9AE8: mov     ecx, edi
0x8B9AEA: call    sub_712A20
0x8B9AEF: push    edi
0x8B9AF0: mov     ecx, esi
0x8B9AF2: call    sub_89D650
0x8B9AF7: mov     eax, [esi]
0x8B9AF9: mov     edx, [eax+74h]
0x8B9AFC: lea     ecx, [esp+8+arg_0]
0x8B9B00: push    ecx
0x8B9B01: mov     ecx, esi
0x8B9B03: call    edx
0x8B9B05: test    eax, eax
0x8B9B07: pop     edi
0x8B9B08: pop     esi
0x8B9B09: jz      short locret_8B9B12
0x8B9B0B: mov     dword ptr [eax+48h], 0
0x8B9B12: retn    4
