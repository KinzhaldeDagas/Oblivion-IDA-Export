0x452DF0: push    ecx
0x452DF1: mov     eax, ds:0B33B00h
0x452DF6: push    edi
0x452DF7: mov     edi, ecx
0x452DF9: mov     ecx, [eax+18h]
0x452DFC: shr     ecx, 0Ch
0x452DFF: test    cl, 1
0x452E02: jz      short loc_452E0B
0x452E04: xor     al, al
0x452E06: pop     edi
0x452E07: pop     ecx
0x452E08: retn    8
0x452E0B: push    ebx
0x452E0C: mov     ebx, [esp+0Ch+arg_0]
0x452E10: push    esi
0x452E11: lea     edx, [esp+10h+var_4]
0x452E15: push    edx
0x452E16: push    ebx
0x452E17: mov     ecx, edi
0x452E19: mov     [esp+18h+var_4], 0
0x452E21: call    NiTMap_GetAt
0x452E26: mov     esi, [esp+10h+var_4]
0x452E2A: test    esi, esi
0x452E2C: jz      short loc_452E67
0x452E2E: cmp     dword ptr [esi+4], 0
0x452E32: jz      short loc_452E3B
0x452E34: cmp     [esp+10h+arg_4], 0
0x452E39: jz      short loc_452E5E
0x452E3B: push    ebx
0x452E3C: mov     ecx, edi
0x452E3E: call    NiTMap_RemoveAt
0x452E43: mov     eax, [esi+4]
0x452E46: test    eax, eax
0x452E48: jz      short loc_452E55
0x452E4A: push    eax; void *
0x452E4B: mov     ecx, offset FormHeap
0x452E50: call    MemoryHeap_Free_checked
0x452E55: push    esi
0x452E56: call    FormHeapFree
0x452E5B: add     esp, 4
0x452E5E: pop     esi
0x452E5F: pop     ebx
0x452E60: mov     al, 1
0x452E62: pop     edi
0x452E63: pop     ecx
0x452E64: retn    8
0x452E67: pop     esi
0x452E68: pop     ebx
0x452E69: xor     al, al
0x452E6B: pop     edi
0x452E6C: pop     ecx
0x452E6D: retn    8
