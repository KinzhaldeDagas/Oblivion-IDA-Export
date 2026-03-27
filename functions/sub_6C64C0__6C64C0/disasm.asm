0x6C64C0: push    0FFFFFFFFh
0x6C64C2: push    offset SEH_56C0F0
0x6C64C7: mov     eax, large fs:0
0x6C64CD: push    eax
0x6C64CE: push    ecx
0x6C64CF: push    ebx
0x6C64D0: push    esi
0x6C64D1: push    edi
0x6C64D2: mov     eax, ds:0B30AACh
0x6C64D7: xor     eax, esp
0x6C64D9: push    eax
0x6C64DA: lea     eax, [esp+20h+var_C]
0x6C64DE: mov     large fs:0, eax
0x6C64E4: mov     edi, ecx
0x6C64E6: mov     [esp+20h+var_10], edi
0x6C64EA: mov     esi, [edi+4]
0x6C64ED: test    esi, esi
0x6C64EF: mov     ebx, ds:0A2807Ch
0x6C64F5: mov     [esp+20h+var_4], 0
0x6C64FD: jz      short loc_6C6517
0x6C64FF: lea     eax, [esi+4]
0x6C6502: push    eax; lpAddend
0x6C6503: call    ebx ; InterlockedDecrement
0x6C6505: test    eax, eax
0x6C6507: jnz     short loc_6C6517
0x6C6509: test    esi, esi
0x6C650B: jz      short loc_6C6517
0x6C650D: mov     edx, [esi]
0x6C650F: mov     eax, [edx]
0x6C6511: push    1
0x6C6513: mov     ecx, esi
0x6C6515: call    eax
0x6C6517: mov     esi, [edi]
0x6C6519: test    esi, esi
0x6C651B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C6523: jz      short loc_6C653D
0x6C6525: lea     ecx, [esi+4]
0x6C6528: push    ecx; lpAddend
0x6C6529: call    ebx ; InterlockedDecrement
0x6C652B: test    eax, eax
0x6C652D: jnz     short loc_6C653D
0x6C652F: test    esi, esi
0x6C6531: jz      short loc_6C653D
0x6C6533: mov     edx, [esi]
0x6C6535: mov     eax, [edx]
0x6C6537: push    1
0x6C6539: mov     ecx, esi
0x6C653B: call    eax
0x6C653D: mov     ecx, dword ptr [esp+20h+var_C]
0x6C6541: mov     large fs:0, ecx
0x6C6548: pop     ecx
0x6C6549: pop     edi
0x6C654A: pop     esi
0x6C654B: pop     ebx
0x6C654C: add     esp, 10h
0x6C654F: retn
