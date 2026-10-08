0x89FED0: test    ecx, ecx
0x89FED2: jz      short locret_89FEEB
0x89FED4: mov     ecx, [ecx+8]
0x89FED7: test    ecx, ecx
0x89FED9: jz      short locret_89FEEB
0x89FEDB: mov     eax, [esp+arg_0]
0x89FEDF: mov     edx, [eax+8]
0x89FEE2: mov     [esp+arg_0], edx
0x89FEE6: jmp     loc_8E7BD0
0x89FEEB: retn    4
0x8E7BD0: push    esi
0x8E7BD1: mov     esi, ecx
0x8E7BD3: mov     eax, [esi+18h]
0x8E7BD6: test    eax, eax
0x8E7BD8: jz      short loc_8E7BF7
0x8E7BDA: mov     ecx, [esi+8]
0x8E7BDD: test    ecx, ecx
0x8E7BDF: jz      short loc_8E7BE8
0x8E7BE1: push    eax
0x8E7BE2: push    esi
0x8E7BE3: call    sub_89BE60
0x8E7BE8: mov     ecx, [esi+18h]
0x8E7BEB: call    sub_8BC730
0x8E7BF0: mov     dword ptr [esi+18h], 0
0x8E7BF7: mov     ecx, [esp+4+arg_0]
0x8E7BFB: mov     [esi+18h], ecx
0x8E7BFE: call    sub_8BC720
0x8E7C03: mov     ecx, [esi+8]
0x8E7C06: test    ecx, ecx
0x8E7C08: jz      short loc_8E7C14
0x8E7C0A: mov     eax, [esi+18h]
0x8E7C0D: push    eax
0x8E7C0E: push    esi
0x8E7C0F: call    sub_899990
0x8E7C14: pop     esi
0x8E7C15: retn    4
