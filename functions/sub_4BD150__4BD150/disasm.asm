0x4BD150: push    0FFFFFFFFh
0x4BD152: push    offset SEH_4BD150
0x4BD157: mov     eax, large fs:0
0x4BD15D: push    eax
0x4BD15E: push    ecx
0x4BD15F: push    ebx
0x4BD160: push    esi
0x4BD161: push    edi
0x4BD162: mov     eax, ds:0B30AACh
0x4BD167: xor     eax, esp
0x4BD169: push    eax
0x4BD16A: lea     eax, [esp+20h+var_C]
0x4BD16E: mov     large fs:0, eax
0x4BD174: mov     esi, ecx
0x4BD176: mov     [esp+20h+var_10], esi
0x4BD17A: mov     dword ptr [esi+4], 0
0x4BD181: mov     eax, [esp+20h+arg_0]
0x4BD185: mov     ebx, [esp+20h+arg_4]
0x4BD189: mov     dword ptr [esi+8], 0
0x4BD190: mov     [esi], eax
0x4BD192: mov     edi, [esi+4]
0x4BD195: cmp     edi, [ebx]
0x4BD197: mov     [esp+20h+var_4], 0
0x4BD19F: jz      short loc_4BD1D4
0x4BD1A1: test    edi, edi
0x4BD1A3: jz      short loc_4BD1C1
0x4BD1A5: lea     ecx, [edi+8]
0x4BD1A8: push    ecx; lpAddend
0x4BD1A9: call    dword ptr ds:0A2807Ch
0x4BD1AF: test    eax, eax
0x4BD1B1: jnz     short loc_4BD1C1
0x4BD1B3: test    edi, edi
0x4BD1B5: jz      short loc_4BD1C1
0x4BD1B7: mov     edx, [edi]
0x4BD1B9: mov     eax, [edx]
0x4BD1BB: push    1
0x4BD1BD: mov     ecx, edi
0x4BD1BF: call    eax
0x4BD1C1: mov     eax, [ebx]
0x4BD1C3: test    eax, eax
0x4BD1C5: mov     [esi+4], eax
0x4BD1C8: jz      short loc_4BD1D4
0x4BD1CA: add     eax, 8
0x4BD1CD: push    eax; lpAddend
0x4BD1CE: call    dword ptr ds:0A28078h
0x4BD1D4: mov     eax, esi
0x4BD1D6: mov     ecx, dword ptr [esp+20h+var_C]
0x4BD1DA: mov     large fs:0, ecx
0x4BD1E1: pop     ecx
0x4BD1E2: pop     edi
0x4BD1E3: pop     esi
0x4BD1E4: pop     ebx
0x4BD1E5: add     esp, 10h
0x4BD1E8: retn    8
