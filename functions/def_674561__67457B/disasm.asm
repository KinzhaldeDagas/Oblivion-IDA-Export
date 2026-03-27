0x67457B: xor     ecx, ecx; jumptable 00674561 default case
0x67457D: mov     eax, [esi+74h]
0x674580: test    eax, eax
0x674582: mov     edx, [esp+arg_4]
0x674586: jz      short loc_674593
0x674588: cmp     edx, [eax]
0x67458A: jnz     short loc_674593
0x67458C: mov     dword ptr [esi+74h], 0
0x674593: mov     eax, [esi+78h]
0x674596: test    eax, eax
0x674598: jz      short loc_6745A5
0x67459A: cmp     edx, [eax]
0x67459C: jnz     short loc_6745A5
0x67459E: mov     dword ptr [esi+78h], 0
0x6745A5: test    ecx, ecx
0x6745A7: pop     esi
0x6745A8: jz      short locret_6745BB
0x6745AA: mov     [esp-4+arg_8], 0
0x6745B2: mov     [esp-4+arg_4], edx
0x6745B6: jmp     sub_67B320
0x6745BB: retn    8
