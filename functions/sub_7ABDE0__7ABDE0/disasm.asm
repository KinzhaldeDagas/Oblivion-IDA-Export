0x7ABDE0: push    esi
0x7ABDE1: mov     esi, ecx
0x7ABDE3: mov     eax, [esi+0Ch]
0x7ABDE6: test    eax, eax
0x7ABDE8: jnz     short loc_7ABDF4
0x7ABDEA: lea     ecx, [esi+10h]
0x7ABDED: call    sub_44D810
0x7ABDF2: jmp     short loc_7ABDF9
0x7ABDF4: mov     ecx, [eax]
0x7ABDF6: mov     [esi+0Ch], ecx
0x7ABDF9: mov     edx, [esp+4+arg_0]
0x7ABDFD: mov     ecx, [edx]
0x7ABDFF: mov     [eax+8], ecx
0x7ABE02: mov     dword ptr [eax], 0
0x7ABE08: mov     edx, [esi+8]
0x7ABE0B: mov     [eax+4], edx
0x7ABE0E: mov     ecx, [esi+8]
0x7ABE11: test    ecx, ecx
0x7ABE13: jz      short loc_7ABE22
0x7ABE15: mov     [ecx], eax
0x7ABE17: add     dword ptr [esi+10h], 1
0x7ABE1B: mov     [esi+8], eax
0x7ABE1E: pop     esi
0x7ABE1F: retn    4
0x7ABE22: add     dword ptr [esi+10h], 1
0x7ABE26: mov     [esi+4], eax
0x7ABE29: mov     [esi+8], eax
0x7ABE2C: pop     esi
0x7ABE2D: retn    4
