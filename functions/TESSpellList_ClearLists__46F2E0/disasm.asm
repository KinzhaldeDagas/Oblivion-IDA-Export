0x46F2E0: push    esi
0x46F2E1: push    edi
0x46F2E2: mov     edi, ecx
0x46F2E4: lea     esi, [edi+4]
0x46F2E7: test    esi, esi
0x46F2E9: jz      short loc_46F319
0x46F2EB: jmp     short loc_46F2F0
0x46F2ED: align 10h
0x46F2F0: cmp     dword ptr [esi], 0
0x46F2F3: jz      short loc_46F319
0x46F2F5: mov     eax, [esi+4]
0x46F2F8: test    eax, eax
0x46F2FA: jz      short loc_46F311
0x46F2FC: mov     ecx, [eax+4]
0x46F2FF: mov     [esi+4], ecx
0x46F302: mov     edx, [eax]
0x46F304: push    eax
0x46F305: mov     [esi], edx
0x46F307: call    FormHeapFree
0x46F30C: add     esp, 4
0x46F30F: jmp     short loc_46F2F0
0x46F311: mov     dword ptr [esi], 0
0x46F317: jmp     short loc_46F2F0
0x46F319: lea     esi, [edi+0Ch]
0x46F31C: test    esi, esi
0x46F31E: jz      short loc_46F349
0x46F320: cmp     dword ptr [esi], 0
0x46F323: jz      short loc_46F349
0x46F325: mov     eax, [esi+4]
0x46F328: test    eax, eax
0x46F32A: jz      short loc_46F341
0x46F32C: mov     ecx, [eax+4]
0x46F32F: mov     [esi+4], ecx
0x46F332: mov     edx, [eax]
0x46F334: push    eax
0x46F335: mov     [esi], edx
0x46F337: call    FormHeapFree
0x46F33C: add     esp, 4
0x46F33F: jmp     short loc_46F320
0x46F341: mov     dword ptr [esi], 0
0x46F347: jmp     short loc_46F320
0x46F349: pop     edi
0x46F34A: pop     esi
0x46F34B: retn
