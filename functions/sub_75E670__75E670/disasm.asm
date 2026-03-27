0x75E670: push    ebx
0x75E671: push    esi
0x75E672: push    edi
0x75E673: mov     edi, [esp+0Ch+arg_0]
0x75E677: push    edi
0x75E678: mov     esi, ecx
0x75E67A: call    sub_6CE2F0
0x75E67F: mov     ecx, [edi]
0x75E681: lea     eax, [esp+0Ch+arg_0]
0x75E685: push    eax
0x75E686: push    esi
0x75E687: call    NiTMap_GetAt
0x75E68C: cmp     dword ptr [esi+30h], 0
0x75E690: mov     eax, [esp+0Ch+arg_0]
0x75E694: mov     ebx, eax
0x75E696: jz      short loc_75E6B5
0x75E698: cmp     dword ptr [eax+30h], 0
0x75E69C: jz      short loc_75E6B5
0x75E69E: mov     edx, [esi+44h]
0x75E6A1: lea     ecx, [esp+0Ch+arg_0]
0x75E6A5: push    ecx
0x75E6A6: mov     ecx, [edi]
0x75E6A8: push    edx
0x75E6A9: call    NiTMap_GetAt
0x75E6AE: mov     eax, [esp+0Ch+arg_0]
0x75E6B2: mov     [ebx+44h], eax
0x75E6B5: pop     edi
0x75E6B6: pop     esi
0x75E6B7: pop     ebx
0x75E6B8: retn    4
