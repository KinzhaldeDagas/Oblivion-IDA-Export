0x674F70: push    ebx
0x674F71: push    ebp
0x674F72: mov     ebp, [esp+8+arg_0]
0x674F76: push    esi
0x674F77: push    edi
0x674F78: lea     edi, [ecx+28h]
0x674F7B: mov     ebx, 6
0x674F80: mov     ecx, [edi]
0x674F82: mov     eax, ecx
0x674F84: test    eax, eax
0x674F86: jz      short loc_674FBF
0x674F88: cmp     dword ptr [eax+4], 0
0x674F8C: jnz     short loc_674F93
0x674F8E: cmp     dword ptr [eax], 0
0x674F91: jz      short loc_674FBF
0x674F93: mov     esi, [eax]
0x674F95: test    esi, esi
0x674F97: jz      short loc_674FB8
0x674F99: cmp     [esi+8], ebp
0x674F9C: jnz     short loc_674FB8
0x674F9E: push    esi
0x674F9F: call    BSSimpleList_Remove
0x674FA4: mov     ecx, esi
0x674FA6: call    sub_605E80
0x674FAB: push    esi
0x674FAC: call    FormHeapFree
0x674FB1: mov     ecx, [edi]
0x674FB3: add     esp, 4
0x674FB6: mov     eax, ecx
0x674FB8: mov     eax, [eax+4]
0x674FBB: test    eax, eax
0x674FBD: jnz     short loc_674F88
0x674FBF: add     edi, 4
0x674FC2: sub     ebx, 1
0x674FC5: jnz     short loc_674F80
0x674FC7: pop     edi
0x674FC8: pop     esi
0x674FC9: pop     ebp
0x674FCA: pop     ebx
0x674FCB: retn    4
