0x931A30: sub     esp, 10h
0x931A33: push    ebp
0x931A34: push    edi
0x931A35: mov     edi, [esp+18h+arg_0]
0x931A39: mov     eax, [edi+8]
0x931A3C: mov     ebp, [edi+4]
0x931A3F: xor     edx, edx
0x931A41: test    eax, eax
0x931A43: mov     [esp+18h+var_10], edx
0x931A47: jle     loc_931AE7
0x931A4D: push    ebx
0x931A4E: push    esi
0x931A4F: nop
0x931A50: mov     eax, [edi+4]
0x931A53: mov     esi, [eax+edx*8]
0x931A56: movzx   eax, word ptr [eax+edx*8+4]
0x931A5B: cmp     edx, eax
0x931A5D: jge     short loc_931AD5
0x931A5F: movzx   ecx, word ptr [ebp+eax*8+4]
0x931A64: cmp     edx, ecx
0x931A66: jge     short loc_931AD5
0x931A68: movzx   eax, word ptr [ebp+eax*8+0]
0x931A6D: movzx   ecx, word ptr [ebp+ecx*8+0]
0x931A72: movzx   esi, si
0x931A75: mov     [esp+20h+var_C], esi
0x931A79: mov     esi, [esp+20h+arg_4]
0x931A7D: mov     ebx, [esi+10h]
0x931A80: add     esi, 0Ch
0x931A83: mov     [esp+20h+var_4], eax
0x931A87: mov     eax, [esi+8]
0x931A8A: lea     edi, [ebx+1]
0x931A8D: and     eax, 3FFFFFFFh
0x931A92: cmp     eax, edi
0x931A94: mov     [esp+20h+var_8], ecx
0x931A98: jge     short loc_931AB2
0x931A9A: add     eax, eax
0x931A9C: cmp     edi, eax
0x931A9E: jl      short loc_931AA2
0x931AA0: mov     eax, edi
0x931AA2: push    0Ch
0x931AA4: push    eax
0x931AA5: push    esi
0x931AA6: call    sub_8A6E40
0x931AAB: mov     edx, [esp+2Ch+var_10]
0x931AAF: add     esp, 0Ch
0x931AB2: mov     ecx, [esi]
0x931AB4: lea     eax, [ebx+ebx*2]
0x931AB7: lea     eax, [ecx+eax*4]
0x931ABA: mov     ecx, [esp+20h+var_C]
0x931ABE: mov     [esi+4], edi
0x931AC1: mov     edi, [esp+20h+arg_0]
0x931AC5: mov     [eax], ecx
0x931AC7: mov     ecx, [esp+20h+var_8]
0x931ACB: mov     [eax+4], ecx
0x931ACE: mov     ecx, [esp+20h+var_4]
0x931AD2: mov     [eax+8], ecx
0x931AD5: mov     eax, [edi+8]
0x931AD8: inc     edx
0x931AD9: cmp     edx, eax
0x931ADB: mov     [esp+20h+var_10], edx
0x931ADF: jl      loc_931A50
0x931AE5: pop     esi
0x931AE6: pop     ebx
0x931AE7: pop     edi
0x931AE8: pop     ebp
0x931AE9: add     esp, 10h
0x931AEC: retn
