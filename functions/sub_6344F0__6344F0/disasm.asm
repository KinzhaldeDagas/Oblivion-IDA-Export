0x6344F0: mov     eax, [esp+arg_0]
0x6344F4: push    esi
0x6344F5: mov     esi, ecx
0x6344F7: mov     ecx, [esp+4+arg_4]
0x6344FB: mov     [esi+eax*4+2C8h], ecx
0x634502: mov     byte ptr [eax+esi+2DCh], 1
0x63450A: mov     edx, [esi]
0x63450C: mov     eax, [edx+4CCh]
0x634512: mov     ecx, esi
0x634514: call    eax
0x634516: cmp     [esi+2E4h], eax
0x63451C: jz      short loc_634537
0x63451E: mov     edx, [esi]
0x634520: mov     eax, [edx+4CCh]
0x634526: mov     ecx, esi
0x634528: mov     byte ptr [esi+2E8h], 0
0x63452F: call    eax
0x634531: mov     [esi+2E4h], eax
0x634537: pop     esi
0x634538: retn    8
