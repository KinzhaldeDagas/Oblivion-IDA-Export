0x5986D0: push    esi
0x5986D1: mov     esi, ecx
0x5986D3: mov     eax, [esi]
0x5986D5: mov     edx, [eax+4]
0x5986D8: call    edx
0x5986DA: mov     ecx, [esp+4+arg_4]
0x5986DE: mov     edx, [ecx]
0x5986E0: mov     ecx, [esp+4+arg_0]
0x5986E4: mov     [eax+8], edx
0x5986E7: mov     [eax+4], ecx
0x5986EA: mov     edx, [ecx]
0x5986EC: mov     [eax], edx
0x5986EE: mov     edx, [ecx]
0x5986F0: test    edx, edx
0x5986F2: jz      short loc_598701
0x5986F4: mov     [edx+4], eax
0x5986F7: mov     [ecx], eax
0x5986F9: add     dword ptr [esi+0Ch], 1
0x5986FD: pop     esi
0x5986FE: retn    8
0x598701: mov     [esi+8], eax
0x598704: mov     [ecx], eax
0x598706: add     dword ptr [esi+0Ch], 1
0x59870A: pop     esi
0x59870B: retn    8
