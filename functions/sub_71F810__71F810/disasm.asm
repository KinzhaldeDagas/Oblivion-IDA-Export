0x71F810: mov     eax, [ecx+890h]
0x71F816: mov     edx, [eax+4]
0x71F819: push    esi
0x71F81A: lea     esi, [ecx+890h]
0x71F820: mov     ecx, esi
0x71F822: call    edx
0x71F824: mov     ecx, [esp+4+arg_0]
0x71F828: mov     [eax+8], ecx
0x71F82B: mov     dword ptr [eax+4], 0
0x71F832: mov     edx, [esi+4]
0x71F835: mov     [eax], edx
0x71F837: mov     ecx, [esi+4]
0x71F83A: test    ecx, ecx
0x71F83C: jz      short loc_71F84C
0x71F83E: mov     [ecx+4], eax
0x71F841: add     dword ptr [esi+0Ch], 1
0x71F845: mov     [esi+4], eax
0x71F848: pop     esi
0x71F849: retn    4
0x71F84C: add     dword ptr [esi+0Ch], 1
0x71F850: mov     [esi+8], eax
0x71F853: mov     [esi+4], eax
0x71F856: pop     esi
0x71F857: retn    4
