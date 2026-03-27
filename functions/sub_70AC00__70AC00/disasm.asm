0x70AC00: push    ebx
0x70AC01: mov     ebx, [esp+4+arg_0]
0x70AC05: push    edi
0x70AC06: push    ebx
0x70AC07: mov     edi, ecx
0x70AC09: call    sub_7073F0
0x70AC0E: test    eax, eax
0x70AC10: jnz     short loc_70AC4E
0x70AC12: movzx   eax, word ptr [edi+0B6h]
0x70AC19: push    esi
0x70AC1A: xor     esi, esi
0x70AC1C: test    eax, eax
0x70AC1E: jbe     short loc_70AC4B
0x70AC20: cmp     eax, esi
0x70AC22: jbe     short loc_70AC3D
0x70AC24: mov     eax, [edi+0B0h]
0x70AC2A: mov     ecx, [eax+esi*4]
0x70AC2D: test    ecx, ecx
0x70AC2F: jz      short loc_70AC3D
0x70AC31: mov     edx, [ecx]
0x70AC33: mov     eax, [edx+58h]
0x70AC36: push    ebx
0x70AC37: call    eax
0x70AC39: test    eax, eax
0x70AC3B: jnz     short loc_70AC4D
0x70AC3D: movzx   eax, word ptr [edi+0B6h]
0x70AC44: add     esi, 1
0x70AC47: cmp     eax, esi
0x70AC49: ja      short loc_70AC24
0x70AC4B: xor     eax, eax
0x70AC4D: pop     esi
0x70AC4E: pop     edi
0x70AC4F: pop     ebx
0x70AC50: retn    4
