0x89E090: push    esi
0x89E091: push    edi
0x89E092: mov     edi, [esp+8+arg_0]
0x89E096: mov     esi, ecx
0x89E098: mov     ecx, edi
0x89E09A: call    sub_712A20
0x89E09F: push    edi
0x89E0A0: mov     ecx, esi
0x89E0A2: call    sub_89D650
0x89E0A7: mov     eax, [esi]
0x89E0A9: mov     edx, [eax+74h]
0x89E0AC: lea     ecx, [esp+8+arg_0]
0x89E0B0: push    ecx
0x89E0B1: mov     ecx, esi
0x89E0B3: call    edx
0x89E0B5: test    eax, eax
0x89E0B7: pop     edi
0x89E0B8: pop     esi
0x89E0B9: jz      short locret_89E0C2
0x89E0BB: mov     dword ptr [eax+4], 0
0x89E0C2: retn    4
