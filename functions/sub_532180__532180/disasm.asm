0x532180: push    0FFFFFFFFh
0x532182: push    offset SEH_56C0F0
0x532187: mov     eax, large fs:0
0x53218D: push    eax
0x53218E: push    ecx
0x53218F: push    ebx
0x532190: push    esi
0x532191: push    edi
0x532192: mov     eax, ds:0B30AACh
0x532197: xor     eax, esp
0x532199: push    eax
0x53219A: lea     eax, [esp+20h+var_C]
0x53219E: mov     large fs:0, eax
0x5321A4: mov     edi, ecx
0x5321A6: mov     [esp+20h+var_10], edi
0x5321AA: mov     esi, [edi+4]
0x5321AD: test    esi, esi
0x5321AF: mov     ebx, ds:0A2807Ch
0x5321B5: mov     [esp+20h+var_4], 0
0x5321BD: jz      short loc_5321D7
0x5321BF: lea     eax, [esi+4]
0x5321C2: push    eax; lpAddend
0x5321C3: call    ebx ; InterlockedDecrement
0x5321C5: test    eax, eax
0x5321C7: jnz     short loc_5321D7
0x5321C9: test    esi, esi
0x5321CB: jz      short loc_5321D7
0x5321CD: mov     edx, [esi]
0x5321CF: mov     eax, [edx]
0x5321D1: push    1
0x5321D3: mov     ecx, esi
0x5321D5: call    eax
0x5321D7: mov     esi, [edi]
0x5321D9: test    esi, esi
0x5321DB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5321E3: jz      short loc_5321FD
0x5321E5: lea     ecx, [esi+4]
0x5321E8: push    ecx; lpAddend
0x5321E9: call    ebx ; InterlockedDecrement
0x5321EB: test    eax, eax
0x5321ED: jnz     short loc_5321FD
0x5321EF: test    esi, esi
0x5321F1: jz      short loc_5321FD
0x5321F3: mov     edx, [esi]
0x5321F5: mov     eax, [edx]
0x5321F7: push    1
0x5321F9: mov     ecx, esi
0x5321FB: call    eax
0x5321FD: mov     ecx, dword ptr [esp+20h+var_C]
0x532201: mov     large fs:0, ecx
0x532208: pop     ecx
0x532209: pop     edi
0x53220A: pop     esi
0x53220B: pop     ebx
0x53220C: add     esp, 10h
0x53220F: retn
