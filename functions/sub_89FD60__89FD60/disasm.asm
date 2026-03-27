0x89FD60: push    esi
0x89FD61: push    edi
0x89FD62: mov     edi, [esp+8+arg_0]
0x89FD66: mov     esi, ecx
0x89FD68: mov     ecx, edi
0x89FD6A: call    sub_712A20
0x89FD6F: mov     ecx, edi
0x89FD71: call    sub_712A20
0x89FD76: push    edi
0x89FD77: mov     ecx, esi
0x89FD79: call    sub_89D650
0x89FD7E: mov     eax, [esi]
0x89FD80: mov     edx, [eax+74h]
0x89FD83: lea     ecx, [esp+8+arg_0]
0x89FD87: push    ecx
0x89FD88: mov     ecx, esi
0x89FD8A: call    edx
0x89FD8C: xor     ecx, ecx
0x89FD8E: cmp     eax, ecx
0x89FD90: pop     edi
0x89FD91: pop     esi
0x89FD92: jz      short locret_89FD9A
0x89FD94: mov     [eax+4], ecx
0x89FD97: mov     [eax+8], ecx
0x89FD9A: retn    4
