0x6E3AA0: push    esi
0x6E3AA1: push    edi
0x6E3AA2: mov     edi, ecx
0x6E3AA4: mov     esi, [edi+1Ch]
0x6E3AA7: test    esi, esi
0x6E3AA9: jz      short loc_6E3ACE
0x6E3AAB: lea     eax, [esi+4]
0x6E3AAE: push    eax; lpAddend
0x6E3AAF: call    dword ptr ds:0A2807Ch
0x6E3AB5: test    eax, eax
0x6E3AB7: jnz     short loc_6E3AC7
0x6E3AB9: test    esi, esi
0x6E3ABB: jz      short loc_6E3AC7
0x6E3ABD: mov     edx, [esi]
0x6E3ABF: mov     eax, [edx]
0x6E3AC1: push    1
0x6E3AC3: mov     ecx, esi
0x6E3AC5: call    eax
0x6E3AC7: mov     dword ptr [edi+1Ch], 0
0x6E3ACE: mov     ecx, [esp+8+arg_0]
0x6E3AD2: mov     edx, [esp+8+arg_4]
0x6E3AD6: mov     eax, [esp+8+arg_8]
0x6E3ADA: mov     [edi+0Ch], ecx
0x6E3ADD: mov     ecx, [esp+8+arg_C]
0x6E3AE1: mov     [edi+10h], edx
0x6E3AE4: mov     [edi+14h], eax
0x6E3AE7: mov     [edi+18h], ecx
0x6E3AEA: pop     edi
0x6E3AEB: pop     esi
0x6E3AEC: retn    10h
