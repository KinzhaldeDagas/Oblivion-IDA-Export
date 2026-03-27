0x942BD0: push    ebx
0x942BD1: mov     ebx, [esp+4+arg_0]
0x942BD5: push    ebp
0x942BD6: push    esi
0x942BD7: push    edi
0x942BD8: mov     edi, ecx
0x942BDA: mov     ecx, ds:0BA7D98h
0x942BE0: mov     esi, [edi+8]
0x942BE3: mov     eax, [ecx]
0x942BE5: mov     ebp, [edi]
0x942BE7: lea     edx, [ebx+ebx*2]
0x942BEA: push    14h
0x942BEC: shl     edx, 2
0x942BEF: push    edx
0x942BF0: inc     esi
0x942BF1: call    dword ptr [eax+10h]
0x942BF4: lea     ecx, ds:0[ebx*4]
0x942BFB: push    ecx
0x942BFC: push    0FFh
0x942C01: push    eax
0x942C02: mov     [edi], eax
0x942C04: call    sub_8B18C0
0x942C09: add     esp, 0Ch
0x942C0C: dec     ebx
0x942C0D: mov     [edi+8], ebx
0x942C10: xor     ebx, ebx
0x942C12: test    esi, esi
0x942C14: mov     dword ptr [edi+4], 0
0x942C1B: jle     short loc_942C52
0x942C1D: lea     edx, [ebp+esi*4+0]
0x942C21: mov     [esp+10h+arg_0], edx
0x942C25: cmp     dword ptr [ebp+ebx*4+0], 0FFFFFFFFh
0x942C2A: jz      short loc_942C42
0x942C2C: mov     edx, [esp+10h+arg_0]
0x942C30: lea     eax, [ebx+esi*2]
0x942C33: mov     ecx, [ebp+eax*4+0]
0x942C37: mov     eax, [edx]
0x942C39: push    ecx
0x942C3A: push    eax
0x942C3B: mov     ecx, edi
0x942C3D: call    sub_9429D0
0x942C42: mov     ecx, [esp+10h+arg_0]
0x942C46: inc     ebx
0x942C47: add     ecx, 4
0x942C4A: cmp     ebx, esi
0x942C4C: mov     [esp+10h+arg_0], ecx
0x942C50: jl      short loc_942C25
0x942C52: mov     ecx, ds:0BA7D98h
0x942C58: mov     edx, [ecx]
0x942C5A: push    14h
0x942C5C: lea     eax, [esi+esi*2]
0x942C5F: shl     eax, 2
0x942C62: push    eax
0x942C63: push    ebp
0x942C64: call    dword ptr [edx+14h]
0x942C67: pop     edi
0x942C68: pop     esi
0x942C69: pop     ebp
0x942C6A: pop     ebx
0x942C6B: retn    4
