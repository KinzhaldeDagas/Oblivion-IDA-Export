0x8C96D0: push    esi
0x8C96D1: push    edi
0x8C96D2: mov     edi, [esp+8+arg_0]
0x8C96D6: mov     esi, ecx
0x8C96D8: mov     ecx, edi
0x8C96DA: call    sub_712A20
0x8C96DF: push    edi
0x8C96E0: mov     ecx, esi
0x8C96E2: call    sub_8AEAB0
0x8C96E7: mov     eax, [esi]
0x8C96E9: mov     edx, [eax+74h]
0x8C96EC: lea     ecx, [esp+8+arg_0]
0x8C96F0: push    ecx
0x8C96F1: mov     ecx, esi
0x8C96F3: call    edx
0x8C96F5: test    eax, eax
0x8C96F7: pop     edi
0x8C96F8: pop     esi
0x8C96F9: jz      short locret_8C9702
0x8C96FB: mov     dword ptr [eax+8], 0
0x8C9702: retn    4
