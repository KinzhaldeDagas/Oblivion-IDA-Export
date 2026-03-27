0x452D60: push    ecx
0x452D61: mov     eax, ds:0B33B00h
0x452D66: push    edi
0x452D67: mov     edi, ecx
0x452D69: mov     ecx, [eax+18h]
0x452D6C: shr     ecx, 0Ch
0x452D6F: test    cl, 1
0x452D72: jz      short loc_452D7B
0x452D74: xor     al, al
0x452D76: pop     edi
0x452D77: pop     ecx
0x452D78: retn    8
0x452D7B: push    ebx
0x452D7C: mov     ebx, [esp+0Ch+arg_0]
0x452D80: mov     eax, [ebx+0Ch]
0x452D83: push    esi
0x452D84: lea     edx, [esp+10h+var_4]
0x452D88: push    edx
0x452D89: push    eax
0x452D8A: mov     ecx, edi
0x452D8C: mov     [esp+18h+var_4], 0
0x452D94: call    NiTMap_GetAt
0x452D99: mov     esi, [esp+10h+var_4]
0x452D9D: test    esi, esi
0x452D9F: jz      short loc_452DE3
0x452DA1: cmp     dword ptr [esi+4], 0
0x452DA5: jnz     short loc_452DAF
0x452DA7: mov     ecx, [esp+10h+arg_4]
0x452DAB: not     ecx
0x452DAD: and     [esi], ecx
0x452DAF: cmp     dword ptr [esi], 0
0x452DB2: jnz     short loc_452DDA
0x452DB4: mov     edx, [ebx+0Ch]
0x452DB7: push    edx
0x452DB8: mov     ecx, edi
0x452DBA: call    NiTMap_RemoveAt
0x452DBF: mov     eax, [esi+4]
0x452DC2: test    eax, eax
0x452DC4: jz      short loc_452DD1
0x452DC6: push    eax; void *
0x452DC7: mov     ecx, offset FormHeap
0x452DCC: call    MemoryHeap_Free_checked
0x452DD1: push    esi
0x452DD2: call    FormHeapFree
0x452DD7: add     esp, 4
0x452DDA: pop     esi
0x452DDB: pop     ebx
0x452DDC: mov     al, 1
0x452DDE: pop     edi
0x452DDF: pop     ecx
0x452DE0: retn    8
0x452DE3: pop     esi
0x452DE4: pop     ebx
0x452DE5: xor     al, al
0x452DE7: pop     edi
0x452DE8: pop     ecx
0x452DE9: retn    8
