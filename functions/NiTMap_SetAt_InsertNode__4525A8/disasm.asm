0x4525A8: mov     eax, [esi]
0x4525AA: mov     edx, [eax+14h]
0x4525AD: mov     ecx, esi
0x4525AF: call    edx
0x4525B1: mov     ecx, [esp+arg_14]
0x4525B5: push    ecx
0x4525B6: mov     edi, eax
0x4525B8: mov     eax, [esi]
0x4525BA: mov     edx, [eax+0Ch]
0x4525BD: push    ebx
0x4525BE: push    edi
0x4525BF: mov     ecx, esi
0x4525C1: call    edx
0x4525C3: mov     eax, [esi+8]
0x4525C6: mov     ecx, [eax+ebp*4]
0x4525C9: mov     [edi], ecx
0x4525CB: mov     edx, [esi+8]
0x4525CE: mov     [edx+ebp*4], edi
0x4525D1: add     dword ptr [esi+0Ch], 1
0x4525D5: pop     edi
0x4525D6: pop     esi
0x4525D7: pop     ebp
0x4525D8: pop     ebx
0x4525D9: retn    8
