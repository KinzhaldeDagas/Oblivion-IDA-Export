0x6299F0: push    ebx
0x6299F1: mov     ebx, [esp+4+arg_0]
0x6299F5: mov     eax, [ebx+1BCh]
0x6299FB: push    edi
0x6299FC: mov     edi, ecx
0x6299FE: mov     [edi+1BCh], eax
0x629A04: mov     ecx, [ebx+1C0h]
0x629A0A: mov     [edi+1C0h], ecx
0x629A10: mov     edx, [ebx+1C4h]
0x629A16: mov     [edi+1C4h], edx
0x629A1C: mov     eax, [ebx+1C8h]
0x629A22: mov     [edi+1C8h], eax
0x629A28: fld     dword ptr [ebx+1ACh]
0x629A2E: fstp    dword ptr [edi+1ACh]
0x629A34: fld     dword ptr [ebx+1B0h]
0x629A3A: fstp    dword ptr [edi+1B0h]
0x629A40: fld     dword ptr [ebx+1B4h]
0x629A46: fstp    dword ptr [edi+1B4h]
0x629A4C: mov     cl, [ebx+25Dh]
0x629A52: mov     [edi+25Dh], cl
0x629A58: mov     eax, [ebx+18Ch]
0x629A5E: test    eax, eax
0x629A60: mov     [esp+8+arg_0], eax
0x629A64: jz      short loc_629ACE
0x629A66: push    ebp
0x629A67: push    esi
0x629A68: jmp     short loc_629A74
0x629A6A: align 10h
0x629A70: mov     eax, [esp+10h+arg_0]
0x629A74: mov     ebp, [eax]
0x629A76: test    ebp, ebp
0x629A78: jz      short loc_629ACC
0x629A7A: mov     esi, [edi+18Ch]
0x629A80: cmp     dword ptr [esi+4], 0
0x629A84: jz      short loc_629A8F
0x629A86: mov     esi, [esi+4]
0x629A89: cmp     dword ptr [esi+4], 0
0x629A8D: jnz     short loc_629A86
0x629A8F: cmp     dword ptr [esi], 0
0x629A92: jz      short loc_629ABF
0x629A94: push    8; Size
0x629A96: call    FormHeapAlloc
0x629A9B: add     esp, 4
0x629A9E: test    eax, eax
0x629AA0: jz      short loc_629AB4
0x629AA2: mov     [eax], ebp
0x629AA4: mov     dword ptr [eax+4], 0
0x629AAB: mov     [esi+4], eax
0x629AAE: mov     eax, [esp+10h+arg_0]
0x629AB2: jmp     short loc_629AC1
0x629AB4: xor     eax, eax
0x629AB6: mov     [esi+4], eax
0x629AB9: mov     eax, [esp+10h+arg_0]
0x629ABD: jmp     short loc_629AC1
0x629ABF: mov     [esi], ebp
0x629AC1: mov     eax, [eax+4]
0x629AC4: test    eax, eax
0x629AC6: mov     [esp+10h+arg_0], eax
0x629ACA: jnz     short loc_629A70
0x629ACC: pop     esi
0x629ACD: pop     ebp
0x629ACE: mov     edx, [ebx+1ECh]
0x629AD4: mov     [edi+1ECh], edx
0x629ADA: mov     eax, [ebx+1F0h]
0x629AE0: mov     [edi+1F0h], eax
0x629AE6: fld     dword ptr [ebx+294h]
0x629AEC: fstp    dword ptr [edi+294h]
0x629AF2: mov     ecx, [ebx+298h]
0x629AF8: mov     [edi+298h], ecx
0x629AFE: mov     edx, [ebx+29Ch]
0x629B04: mov     [edi+29Ch], edx
0x629B0A: mov     eax, [ebx+2A0h]
0x629B10: mov     [edi+2A0h], eax
0x629B16: mov     cl, [ebx+2A9h]
0x629B1C: mov     [edi+2A9h], cl
0x629B22: mov     edx, [ebx+2B4h]
0x629B28: mov     [edi+2B4h], edx
0x629B2E: mov     al, [ebx+2B8h]
0x629B34: mov     [edi+2B8h], al
0x629B3A: mov     ecx, [ebx+258h]
0x629B40: mov     [edi+258h], ecx
0x629B46: pop     edi
0x629B47: pop     ebx
0x629B48: retn    4
