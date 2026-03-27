0x42FC90: push    esi
0x42FC91: mov     esi, ecx
0x42FC93: test    esi, esi
0x42FC95: jz      short loc_42FD07
0x42FC97: mov     eax, [esi+0Ch]
0x42FC9A: test    eax, eax
0x42FC9C: jz      short loc_42FD07
0x42FC9E: push    ebx; lpCriticalSection
0x42FC9F: mov     bl, [esp+8+arg_0]
0x42FCA3: test    bl, bl
0x42FCA5: jz      short loc_42FCB4
0x42FCA7: mov     ecx, [eax+4]
0x42FCAA: push    offset unk_A2F830
0x42FCAF: call    NiEnterCriticalSection
0x42FCB4: mov     eax, [esi+8]
0x42FCB7: cmp     eax, 1
0x42FCBA: jz      short loc_42FCC1
0x42FCBC: cmp     eax, 2
0x42FCBF: jnz     short loc_42FCF7
0x42FCC1: mov     eax, [esi+0Ch]
0x42FCC4: test    eax, eax
0x42FCC6: jz      short loc_42FCE7
0x42FCC8: push    edi
0x42FCC9: lea     edi, [eax+2Ch]
0x42FCCC: mov     eax, [edi+8]
0x42FCCF: push    0FFFFFFFFh; dwMilliseconds
0x42FCD1: push    eax; hHandle
0x42FCD2: call    ds:WaitForSingleObject
0x42FCD8: cmp     eax, 102h
0x42FCDD: jz      short loc_42FCE6
0x42FCDF: push    edi; lpAddend
0x42FCE0: call    ds:InterlockedDecrement
0x42FCE6: pop     edi
0x42FCE7: mov     edx, [esi]
0x42FCE9: mov     eax, [edx+8]
0x42FCEC: mov     ecx, esi
0x42FCEE: call    eax
0x42FCF0: mov     dword ptr [esi+8], 0
0x42FCF7: test    bl, bl
0x42FCF9: pop     ebx
0x42FCFA: jz      short loc_42FD07
0x42FCFC: mov     ecx, [esi+0Ch]
0x42FCFF: mov     ecx, [ecx+4]; lpCriticalSection
0x42FD02: call    NiLeaveCriticalSection_0
0x42FD07: pop     esi
0x42FD08: retn    4
