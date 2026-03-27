0x9A49A0: push    ecx
0x9A49A1: push    esi
0x9A49A2: mov     esi, [esp+8+arg_0]
0x9A49A6: mov     eax, [esi+0Ch]
0x9A49A9: lea     ecx, [esp+8+var_4]
0x9A49AD: push    ecx; int
0x9A49AE: lea     edx, [esp+0Ch+arg_0]
0x9A49B2: push    edx; int
0x9A49B3: push    eax; Src
0x9A49B4: mov     [esp+14h+var_4], 4
0x9A49BC: call    sub_9A47E0
0x9A49C1: add     esp, 0Ch
0x9A49C4: test    al, al
0x9A49C6: jnz     short loc_9A49D2
0x9A49C8: mov     eax, 80000040h
0x9A49CD: pop     esi
0x9A49CE: pop     ecx
0x9A49CF: retn    4
0x9A49D2: mov     edx, [esp+8+var_4]
0x9A49D6: mov     ecx, [esp+8+arg_0]
0x9A49DA: push    ebx
0x9A49DB: push    edx
0x9A49DC: push    ecx
0x9A49DD: call    sub_9A48B0
0x9A49E2: movzx   eax, byte_B4294C[eax]
0x9A49E9: mov     ebx, [esi+14h]
0x9A49EC: and     ebx, 0FFFFFF00h
0x9A49F2: or      eax, ebx
0x9A49F4: xor     ebx, ebx
0x9A49F6: add     esp, 8
0x9A49F9: cmp     ecx, ebx
0x9A49FB: mov     [esi+14h], eax
0x9A49FE: jz      loc_9A4AB1
0x9A4A04: cmp     ecx, 45h ; 'E'
0x9A4A07: jnb     short loc_9A4A6A
0x9A4A09: cmp     ecx, 21h ; '!'
0x9A4A0C: jz      short loc_9A4A60
0x9A4A0E: cmp     ecx, 23h ; '#'
0x9A4A11: jz      short loc_9A4A60
0x9A4A13: cmp     ecx, 22h ; '"'
0x9A4A16: jz      short loc_9A4A53
0x9A4A18: cmp     ecx, 24h ; '$'
0x9A4A1B: jz      short loc_9A4A53
0x9A4A1D: cmp     ecx, 19h
0x9A4A20: jz      short loc_9A4A4A
0x9A4A22: cmp     ecx, 1Ah
0x9A4A25: jz      short loc_9A4A4A
0x9A4A27: cmp     ecx, 1Bh
0x9A4A2A: jz      short loc_9A4A4A
0x9A4A2C: cmp     ecx, 1Ch
0x9A4A2F: jz      short loc_9A4A4A
0x9A4A31: cmp     ecx, 1Dh
0x9A4A34: jz      short loc_9A4A4A
0x9A4A36: cmp     ecx, 1Eh
0x9A4A39: jz      short loc_9A4A4A
0x9A4A3B: cmp     ecx, 1Fh
0x9A4A3E: jz      short loc_9A4A4A
0x9A4A40: cmp     ecx, 20h ; ' '
0x9A4A43: jz      short loc_9A4A4A
0x9A4A45: mov     [esi+20h], edx
0x9A4A48: jmp     short loc_9A4A6A
0x9A4A4A: mov     dword ptr [esi+20h], 4
0x9A4A51: jmp     short loc_9A4A6A
0x9A4A53: movzx   edx, word ptr [esi+1Ah]
0x9A4A57: add     edx, edx
0x9A4A59: add     edx, edx
0x9A4A5B: mov     [esi+20h], edx
0x9A4A5E: jmp     short loc_9A4A6A
0x9A4A60: movzx   eax, word ptr [esi+1Ah]
0x9A4A64: lea     eax, [eax+eax*2]
0x9A4A67: mov     [esi+20h], eax
0x9A4A6A: mov     [esi+10h], ecx
0x9A4A6D: sub     ecx, 50h ; 'P'
0x9A4A70: jz      short loc_9A4A94
0x9A4A72: sub     ecx, 1
0x9A4A75: jnz     short loc_9A4A8C
0x9A4A77: mov     eax, 10h
0x9A4A7C: mov     [esi+28h], eax
0x9A4A7F: mov     [esi+2Ch], eax
0x9A4A82: mov     [esi+34h], bl
0x9A4A85: mov     dword ptr [esi+30h], offset unk_B329D4
0x9A4A8C: pop     ebx
0x9A4A8D: xor     eax, eax
0x9A4A8F: pop     esi
0x9A4A90: pop     ecx
0x9A4A91: retn    4
0x9A4A94: mov     eax, 10h
0x9A4A99: mov     [esi+34h], bl
0x9A4A9C: mov     [esi+28h], eax
0x9A4A9F: mov     [esi+2Ch], eax
0x9A4AA2: pop     ebx
0x9A4AA3: mov     dword ptr [esi+30h], offset unk_B329C4
0x9A4AAA: xor     eax, eax
0x9A4AAC: pop     esi
0x9A4AAD: pop     ecx
0x9A4AAE: retn    4
0x9A4AB1: pop     ebx
0x9A4AB2: mov     eax, 80000040h
0x9A4AB7: pop     esi
0x9A4AB8: pop     ecx
0x9A4AB9: retn    4
