0x728A00: mov     eax, [esp+arg_C]
0x728A04: push    ebx
0x728A05: mov     ebx, [esp+4+arg_4]
0x728A09: push    ebp
0x728A0A: push    esi
0x728A0B: mov     esi, ecx
0x728A0D: mov     ecx, [esp+0Ch+arg_8]
0x728A11: push    edi
0x728A12: mov     edi, [esp+10h+arg_0]
0x728A16: add     eax, ecx
0x728A18: sar     eax, 1
0x728A1A: movzx   ebp, word ptr [edi+eax*2]
0x728A1E: movzx   eax, word ptr [edi+ecx*2]
0x728A22: push    ebx
0x728A23: push    ebp
0x728A24: push    eax
0x728A25: mov     ecx, esi
0x728A27: mov     [esp+1Ch+arg_8], eax
0x728A2B: call    sub_728440
0x728A30: test    eax, eax
0x728A32: push    ebx
0x728A33: jge     short loc_728A70
0x728A35: mov     ecx, [esp+14h+arg_C]
0x728A39: movzx   edi, word ptr [edi+ecx*2]
0x728A3D: push    edi
0x728A3E: push    ebp
0x728A3F: mov     ecx, esi
0x728A41: call    sub_728440
0x728A46: test    eax, eax
0x728A48: jl      short loc_728AA6
0x728A4A: push    ebx
0x728A4B: mov     ebx, [esp+14h+arg_8]
0x728A4F: push    edi
0x728A50: push    ebx
0x728A51: mov     ecx, esi
0x728A53: call    sub_728440
0x728A58: test    eax, eax
0x728A5A: jge     short loc_728A66
0x728A5C: movzx   eax, di
0x728A5F: pop     edi
0x728A60: pop     esi
0x728A61: pop     ebp
0x728A62: pop     ebx
0x728A63: retn    10h
0x728A66: pop     edi
0x728A67: pop     esi
0x728A68: pop     ebp
0x728A69: movzx   eax, bx
0x728A6C: pop     ebx
0x728A6D: retn    10h
0x728A70: mov     edx, [esp+14h+arg_C]
0x728A74: movzx   edi, word ptr [edi+edx*2]
0x728A78: mov     eax, [esp+14h+arg_8]
0x728A7C: push    edi
0x728A7D: push    eax
0x728A7E: mov     ecx, esi
0x728A80: call    sub_728440
0x728A85: test    eax, eax
0x728A87: jge     short loc_728A95
0x728A89: movzx   eax, word ptr [esp+10h+arg_8]
0x728A8E: pop     edi
0x728A8F: pop     esi
0x728A90: pop     ebp
0x728A91: pop     ebx
0x728A92: retn    10h
0x728A95: push    ebx
0x728A96: push    edi
0x728A97: push    ebp
0x728A98: mov     ecx, esi
0x728A9A: call    sub_728440
0x728A9F: test    eax, eax
0x728AA1: movzx   eax, di
0x728AA4: jl      short loc_728AA9
0x728AA6: movzx   eax, bp
0x728AA9: pop     edi
0x728AAA: pop     esi
0x728AAB: pop     ebp
0x728AAC: pop     ebx
0x728AAD: retn    10h
