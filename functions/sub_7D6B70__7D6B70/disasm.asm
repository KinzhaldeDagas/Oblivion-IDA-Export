0x7D6B70: push    ecx
0x7D6B71: xor     ecx, ecx
0x7D6B73: mov     [esp+4+var_4], ecx
0x7D6B76: mov     eax, ds:0B45D74h
0x7D6B7B: test    eax, eax
0x7D6B7D: push    esi
0x7D6B7E: push    edi
0x7D6B7F: jz      short loc_7D6B8E
0x7D6B81: mov     esi, [esp+0Ch+var_4]
0x7D6B85: lea     eax, ds:0B45D74h[eax*4]
0x7D6B8C: jmp     short loc_7D6B9D
0x7D6B8E: xor     esi, esi
0x7D6B90: mov     [esp+0Ch+var_4], esi
0x7D6B94: lea     eax, [esp+0Ch+var_4]
0x7D6B98: mov     ecx, 1
0x7D6B9D: test    cl, 1
0x7D6BA0: mov     edi, [eax]
0x7D6BA2: jz      short loc_7D6BC0
0x7D6BA4: test    esi, esi
0x7D6BA6: jz      short loc_7D6BC0
0x7D6BA8: lea     eax, [esi+4]
0x7D6BAB: push    eax; lpAddend
0x7D6BAC: call    dword ptr ds:0A2807Ch
0x7D6BB2: test    eax, eax
0x7D6BB4: jnz     short loc_7D6BC0
0x7D6BB6: mov     edx, [esi]
0x7D6BB8: mov     eax, [edx]
0x7D6BBA: push    1
0x7D6BBC: mov     ecx, esi
0x7D6BBE: call    eax
0x7D6BC0: mov     eax, edi
0x7D6BC2: pop     edi
0x7D6BC3: pop     esi
0x7D6BC4: pop     ecx
0x7D6BC5: retn
