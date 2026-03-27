0x75B7E0: push    ebx
0x75B7E1: push    esi
0x75B7E2: push    edi
0x75B7E3: mov     edi, [esp+0Ch+arg_0]
0x75B7E7: push    edi
0x75B7E8: mov     esi, ecx
0x75B7EA: call    sub_752D80
0x75B7EF: mov     ecx, [edi]
0x75B7F1: lea     eax, [esp+0Ch+arg_0]
0x75B7F5: push    eax
0x75B7F6: push    esi
0x75B7F7: call    NiTMap_GetAt
0x75B7FC: mov     edx, [esi+18h]
0x75B7FF: mov     ebx, [esp+0Ch+arg_0]
0x75B803: lea     ecx, [esp+0Ch+arg_0]
0x75B807: push    ecx
0x75B808: mov     ecx, [edi]
0x75B80A: push    edx
0x75B80B: call    NiTMap_GetAt
0x75B810: test    al, al
0x75B812: jz      short loc_75B821
0x75B814: mov     eax, [esp+0Ch+arg_0]
0x75B818: pop     edi
0x75B819: pop     esi
0x75B81A: mov     [ebx+18h], eax
0x75B81D: pop     ebx
0x75B81E: retn    4
0x75B821: mov     ecx, [esi+18h]
0x75B824: pop     edi
0x75B825: pop     esi
0x75B826: mov     [ebx+18h], ecx
0x75B829: pop     ebx
0x75B82A: retn    4
