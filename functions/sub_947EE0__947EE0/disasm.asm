0x947EE0: sub     esp, 8
0x947EE3: push    ebx
0x947EE4: push    esi
0x947EE5: push    edi
0x947EE6: mov     edi, [esp+14h+arg_0]
0x947EEA: mov     eax, [edi]
0x947EEC: mov     ebx, ecx
0x947EEE: lea     ecx, [esp+14h+var_8]
0x947EF2: push    ecx
0x947EF3: lea     edx, [esp+18h+var_4]
0x947EF7: xor     esi, esi
0x947EF9: push    edx
0x947EFA: mov     ecx, edi
0x947EFC: mov     [esp+1Ch+var_4], esi
0x947F00: mov     [esp+1Ch+var_8], esi
0x947F04: call    dword ptr [eax+8]
0x947F07: cmp     [esp+14h+var_8], esi
0x947F0B: jle     short loc_947F2A
0x947F0D: add     ebx, 8
0x947F10: mov     eax, [esp+14h+var_4]
0x947F14: movzx   ecx, byte ptr [esi+eax]
0x947F18: push    edi
0x947F19: push    ecx
0x947F1A: mov     ecx, ebx
0x947F1C: call    sub_8B0E80
0x947F21: mov     eax, [esp+14h+var_8]
0x947F25: inc     esi
0x947F26: cmp     esi, eax
0x947F28: jl      short loc_947F10
0x947F2A: pop     edi
0x947F2B: pop     esi
0x947F2C: pop     ebx
0x947F2D: add     esp, 8
0x947F30: retn    4
