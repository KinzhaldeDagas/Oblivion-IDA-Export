0x534070: mov     eax, ds:0BA7FB4h
0x534075: test    eax, eax
0x534077: jz      short loc_534098
0x534079: cmp     word ptr [eax+4], 0
0x53407E: mov     ecx, eax
0x534080: jz      short loc_5340AD
0x534082: add     word ptr [eax+6], 0FFFFh
0x534087: add     eax, 6
0x53408A: cmp     word ptr [eax], 0
0x53408E: jnz     short loc_5340A2
0x534090: mov     eax, [ecx]
0x534092: mov     edx, [eax]
0x534094: push    1
0x534096: call    edx
0x534098: mov     eax, [esp+arg_0]
0x53409C: mov     ds:0BA7FB4h, eax
0x5340A1: retn
0x5340A2: mov     ecx, [esp+arg_0]
0x5340A6: mov     ds:0BA7FB4h, ecx
0x5340AC: retn
0x5340AD: mov     edx, [esp+arg_0]
0x5340B1: mov     ds:0BA7FB4h, edx
0x5340B7: retn
