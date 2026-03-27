0x981138: push    esi
0x981139: call    __getptd
0x98113E: mov     esi, [esp+4+arg_0]
0x981142: cmp     esi, [eax+98h]
0x981148: jnz     short loc_98115A
0x98114A: call    __getptd
0x98114F: mov     ecx, [esi+4]
0x981152: mov     [eax+98h], ecx
0x981158: pop     esi
0x981159: retn
0x98115A: call    __getptd
0x98115F: mov     eax, [eax+98h]
0x981165: jmp     short loc_981170
0x981167: mov     ecx, [eax+4]
0x98116A: cmp     esi, ecx
0x98116C: jz      short loc_98117C
0x98116E: mov     eax, ecx
0x981170: cmp     dword ptr [eax+4], 0
0x981174: jnz     short loc_981167
0x981176: pop     esi
0x981177: jmp     ?_inconsistency@@YAXXZ
0x98117C: mov     ecx, [esi+4]
0x98117F: mov     [eax+4], ecx
0x981182: pop     esi
0x981183: retn
