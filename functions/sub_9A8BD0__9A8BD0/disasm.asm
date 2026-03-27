0x9A8BD0: mov     eax, [esp+arg_0]
0x9A8BD4: test    eax, eax
0x9A8BD6: push    esi
0x9A8BD7: mov     esi, ecx
0x9A8BD9: mov     [esi+2Ch], eax
0x9A8BDC: jz      short loc_9A8C14
0x9A8BDE: push    edi
0x9A8BDF: mov     edi, [eax+280h]
0x9A8BE5: mov     eax, [esi+28h]
0x9A8BE8: test    eax, eax
0x9A8BEA: jz      short loc_9A8BF4
0x9A8BEC: mov     ecx, [eax]
0x9A8BEE: mov     edx, [ecx+8]
0x9A8BF1: push    eax
0x9A8BF2: call    edx
0x9A8BF4: test    edi, edi
0x9A8BF6: mov     [esi+28h], edi
0x9A8BF9: jz      short loc_9A8C03
0x9A8BFB: mov     eax, [edi]
0x9A8BFD: mov     ecx, [eax+4]
0x9A8C00: push    edi
0x9A8C01: call    ecx
0x9A8C03: mov     edx, [esi+2Ch]
0x9A8C06: mov     eax, [edx+8ACh]
0x9A8C0C: pop     edi
0x9A8C0D: mov     [esi+30h], eax
0x9A8C10: pop     esi
0x9A8C11: retn    4
0x9A8C14: mov     eax, [esi+28h]
0x9A8C17: test    eax, eax
0x9A8C19: jz      short loc_9A8C23
0x9A8C1B: mov     ecx, [eax]
0x9A8C1D: mov     edx, [ecx+8]
0x9A8C20: push    eax
0x9A8C21: call    edx
0x9A8C23: mov     dword ptr [esi+28h], 0
0x9A8C2A: mov     dword ptr [esi+30h], 0
0x9A8C31: pop     esi
0x9A8C32: retn    4
