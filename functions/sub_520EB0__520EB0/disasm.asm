0x520EB0: push    edi
0x520EB1: mov     edi, [esp+4+arg_0]
0x520EB5: test    edi, edi
0x520EB7: jz      short loc_520EED
0x520EB9: mov     eax, [edi]
0x520EBB: mov     edx, [eax+6Ch]
0x520EBE: push    ebx
0x520EBF: push    esi
0x520EC0: mov     ecx, edi
0x520EC2: call    edx
0x520EC4: mov     ecx, edi
0x520EC6: call    sub_5204C0
0x520ECB: mov     ebx, eax
0x520ECD: xor     esi, esi
0x520ECF: test    ebx, ebx
0x520ED1: jbe     short loc_520EEB
0x520ED3: push    esi
0x520ED4: mov     ecx, edi
0x520ED6: call    sub_520260
0x520EDB: push    eax
0x520EDC: call    sub_520EB0
0x520EE1: add     esi, 1
0x520EE4: add     esp, 4
0x520EE7: cmp     esi, ebx
0x520EE9: jb      short loc_520ED3
0x520EEB: pop     esi
0x520EEC: pop     ebx
0x520EED: pop     edi
0x520EEE: retn
