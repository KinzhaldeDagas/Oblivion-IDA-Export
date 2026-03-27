0x712BC0: mov     eax, [ecx+238h]
0x712BC6: cmp     [ecx+23Ch], eax
0x712BCC: push    esi
0x712BCD: lea     esi, [ecx+234h]
0x712BD3: jnz     short loc_712BEA
0x712BD5: test    eax, eax
0x712BD7: jbe     short loc_712BDD
0x712BD9: add     eax, eax
0x712BDB: jmp     short loc_712BE2
0x712BDD: mov     eax, 1
0x712BE2: push    eax
0x712BE3: mov     ecx, esi
0x712BE5: call    sub_6E8CA0
0x712BEA: mov     eax, [esi+8]
0x712BED: mov     ecx, [esi]
0x712BEF: mov     edx, [esp+4+arg_0]
0x712BF3: mov     [ecx+eax*4], edx
0x712BF6: add     dword ptr [esi+8], 1
0x712BFA: pop     esi
0x712BFB: retn    4
