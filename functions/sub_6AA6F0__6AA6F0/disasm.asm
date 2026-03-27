0x6AA6F0: push    esi
0x6AA6F1: push    edi
0x6AA6F2: mov     edi, ecx
0x6AA6F4: mov     esi, [edi+10h]
0x6AA6F7: test    esi, esi
0x6AA6F9: jz      short loc_6AA717
0x6AA6FB: lea     eax, [esi+4]
0x6AA6FE: push    eax; lpAddend
0x6AA6FF: call    dword ptr ds:0A2807Ch
0x6AA705: test    eax, eax
0x6AA707: jnz     short loc_6AA717
0x6AA709: test    esi, esi
0x6AA70B: jz      short loc_6AA717
0x6AA70D: mov     edx, [esi]
0x6AA70F: mov     eax, [edx]
0x6AA711: push    1
0x6AA713: mov     ecx, esi
0x6AA715: call    eax
0x6AA717: test    [esp+8+arg_0], 1
0x6AA71C: jz      short loc_6AA727
0x6AA71E: push    edi
0x6AA71F: call    FormHeapFree
0x6AA724: add     esp, 4
0x6AA727: mov     eax, edi
0x6AA729: pop     edi
0x6AA72A: pop     esi
0x6AA72B: retn    4
