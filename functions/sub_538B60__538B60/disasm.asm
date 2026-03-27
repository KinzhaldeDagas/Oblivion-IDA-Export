0x538B60: push    0FFFFFFFFh
0x538B62: push    offset SEH_56C0F0
0x538B67: mov     eax, large fs:0
0x538B6D: push    eax
0x538B6E: push    ecx
0x538B6F: push    ebx
0x538B70: push    esi
0x538B71: push    edi
0x538B72: mov     eax, ds:0B30AACh
0x538B77: xor     eax, esp
0x538B79: push    eax
0x538B7A: lea     eax, [esp+20h+var_C]
0x538B7E: mov     large fs:0, eax
0x538B84: mov     edi, ecx
0x538B86: mov     [esp+20h+var_10], edi
0x538B8A: mov     esi, [edi]
0x538B8C: test    esi, esi
0x538B8E: mov     ebx, ds:0A2807Ch
0x538B94: mov     [esp+20h+var_4], 0
0x538B9C: jz      short loc_538BBC
0x538B9E: lea     eax, [esi+4]
0x538BA1: push    eax; lpAddend
0x538BA2: call    ebx ; InterlockedDecrement
0x538BA4: test    eax, eax
0x538BA6: jnz     short loc_538BB6
0x538BA8: test    esi, esi
0x538BAA: jz      short loc_538BB6
0x538BAC: mov     edx, [esi]
0x538BAE: mov     eax, [edx]
0x538BB0: push    1
0x538BB2: mov     ecx, esi
0x538BB4: call    eax
0x538BB6: mov     dword ptr [edi], 0
0x538BBC: mov     esi, [edi]
0x538BBE: test    esi, esi
0x538BC0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x538BC8: jz      short loc_538BE2
0x538BCA: lea     ecx, [esi+4]
0x538BCD: push    ecx; lpAddend
0x538BCE: call    ebx ; InterlockedDecrement
0x538BD0: test    eax, eax
0x538BD2: jnz     short loc_538BE2
0x538BD4: test    esi, esi
0x538BD6: jz      short loc_538BE2
0x538BD8: mov     edx, [esi]
0x538BDA: mov     eax, [edx]
0x538BDC: push    1
0x538BDE: mov     ecx, esi
0x538BE0: call    eax
0x538BE2: mov     ecx, dword ptr [esp+20h+var_C]
0x538BE6: mov     large fs:0, ecx
0x538BED: pop     ecx
0x538BEE: pop     edi
0x538BEF: pop     esi
0x538BF0: pop     ebx
0x538BF1: add     esp, 10h
0x538BF4: retn
