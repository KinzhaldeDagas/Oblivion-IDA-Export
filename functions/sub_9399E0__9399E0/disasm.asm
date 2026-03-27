0x9399E0: sub     esp, 50h
0x9399E3: push    ebx
0x9399E4: push    ebp
0x9399E5: push    esi
0x9399E6: movzx   esi, byte ptr [ecx+2]
0x9399EA: xor     eax, eax
0x9399EC: cmp     esi, eax
0x9399EE: push    edi
0x9399EF: mov     [esp+60h+var_50], eax
0x9399F3: mov     [esp+60h+var_4C], eax
0x9399F7: mov     [esp+60h+var_48], eax
0x9399FB: mov     [esp+60h+var_44], eax
0x9399FF: jle     short loc_939A55
0x939A01: movzx   edi, byte ptr [ecx+2]
0x939A05: lea     eax, [ecx+8]
0x939A08: mov     bl, 1
0x939A0A: lea     ebx, [ebx+0]
0x939A10: movzx   ebp, byte ptr [eax-3]
0x939A14: movzx   edx, byte ptr [eax-4]
0x939A18: add     edx, ebp
0x939A1A: movzx   ebp, byte ptr [eax]
0x939A1D: shr     ebp, 4
0x939A20: mov     byte ptr [esp+ebp+60h+var_50], bl
0x939A24: movzx   ebp, byte ptr [eax+1]
0x939A28: shr     ebp, 4
0x939A2B: cmp     edx, 3
0x939A2E: mov     byte ptr [esp+ebp+60h+var_50], bl
0x939A32: jl      short loc_939A3F
0x939A34: movzx   ebp, byte ptr [eax+2]
0x939A38: shr     ebp, 4
0x939A3B: mov     byte ptr [esp+ebp+60h+var_50], bl
0x939A3F: cmp     edx, 4
0x939A42: jnz     short loc_939A4F
0x939A44: movzx   edx, byte ptr [eax+3]
0x939A48: shr     edx, 4
0x939A4B: mov     byte ptr [esp+edx+60h+var_50], bl
0x939A4F: add     eax, 8
0x939A52: dec     edi
0x939A53: jnz     short loc_939A10
0x939A55: movzx   eax, byte ptr [ecx]
0x939A58: lea     edi, [ecx+esi*8+4]
0x939A5C: movzx   esi, byte ptr [ecx+1]
0x939A60: add     esi, eax
0x939A62: xor     eax, eax
0x939A64: xor     edx, edx
0x939A66: xor     ebp, ebp
0x939A68: test    esi, esi
0x939A6A: jle     short loc_939A8D
0x939A6C: lea     esp, [esp+0]
0x939A70: mov     bl, byte ptr [esp+eax+60h+var_50]
0x939A74: test    bl, bl
0x939A76: mov     [esp+eax*4+60h+var_40], ebp
0x939A7A: jz      short loc_939A88
0x939A7C: mov     bx, [edi+eax*2]
0x939A80: mov     [edi+edx*2], bx
0x939A84: inc     edx
0x939A85: add     ebp, 10h
0x939A88: inc     eax
0x939A89: cmp     eax, esi
0x939A8B: jl      short loc_939A70
0x939A8D: movzx   eax, byte ptr [ecx]
0x939A90: mov     eax, [esp+eax*4+60h+var_40]
0x939A94: shr     eax, 4
0x939A97: sub     dl, al
0x939A99: mov     [ecx], al
0x939A9B: mov     al, [ecx+2]
0x939A9E: xor     esi, esi
0x939AA0: test    al, al
0x939AA2: mov     [ecx+1], dl
0x939AA5: jbe     short loc_939AF2
0x939AA7: lea     eax, [ecx+9]
0x939AAA: lea     ebx, [ebx+0]
0x939AB0: movzx   edx, byte ptr [eax-1]
0x939AB4: shr     edx, 4
0x939AB7: mov     dl, byte ptr [esp+edx*4+60h+var_40]
0x939ABB: mov     [eax-1], dl
0x939ABE: movzx   edx, byte ptr [eax]
0x939AC1: shr     edx, 4
0x939AC4: mov     dl, byte ptr [esp+edx*4+60h+var_40]
0x939AC8: mov     [eax], dl
0x939ACA: movzx   edx, byte ptr [eax+1]
0x939ACE: shr     edx, 4
0x939AD1: mov     dl, byte ptr [esp+edx*4+60h+var_40]
0x939AD5: mov     [eax+1], dl
0x939AD8: movzx   edx, byte ptr [eax+2]
0x939ADC: shr     edx, 4
0x939ADF: mov     dl, byte ptr [esp+edx*4+60h+var_40]
0x939AE3: mov     [eax+2], dl
0x939AE6: movzx   edx, byte ptr [ecx+2]
0x939AEA: inc     esi
0x939AEB: add     eax, 8
0x939AEE: cmp     esi, edx
0x939AF0: jl      short loc_939AB0
0x939AF2: pop     edi
0x939AF3: pop     esi
0x939AF4: pop     ebp
0x939AF5: pop     ebx
0x939AF6: add     esp, 50h
0x939AF9: retn
