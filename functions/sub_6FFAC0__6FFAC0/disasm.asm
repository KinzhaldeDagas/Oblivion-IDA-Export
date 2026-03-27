0x6FFAC0: push    ebx
0x6FFAC1: push    ebp
0x6FFAC2: mov     ebx, ecx
0x6FFAC4: xor     ebp, ebp
0x6FFAC6: cmp     [ebx+14h], bp
0x6FFACA: jz      short loc_6FFB0C
0x6FFACC: push    offset stru_B3F600; lpCriticalSection
0x6FFAD1: call    dword ptr ds:0A2806Ch
0x6FFAD7: call    dword ptr ds:0A2808Ch
0x6FFADD: mov     ds:0B3F678h, eax
0x6FFAE2: mov     eax, 1
0x6FFAE7: add     ds:0B3F67Ch, eax
0x6FFAED: cmp     [esp+8+arg_0], ebp
0x6FFAF1: jnz     short loc_6FFB13
0x6FFAF3: sub     ds:0B3F67Ch, eax
0x6FFAF9: jnz     short loc_6FFB01
0x6FFAFB: mov     ds:0B3F678h, ebp
0x6FFB01: push    offset stru_B3F600; lpCriticalSection
0x6FFB06: call    dword ptr ds:0A28074h
0x6FFB0C: pop     ebp
0x6FFB0D: xor     al, al
0x6FFB0F: pop     ebx
0x6FFB10: retn    4
0x6FFB13: mov     cx, [ebx+14h]
0x6FFB17: push    esi
0x6FFB18: sub     cx, ax
0x6FFB1B: push    edi
0x6FFB1C: movzx   edi, cx
0x6FFB1F: cmp     di, bp
0x6FFB22: jl      short loc_6FFB86
0x6FFB24: movsx   eax, bp
0x6FFB27: movsx   edx, di
0x6FFB2A: add     edx, eax
0x6FFB2C: sar     edx, 1
0x6FFB2E: movzx   esi, dx
0x6FFB31: mov     edx, [ebx+10h]
0x6FFB34: movsx   ecx, si
0x6FFB37: mov     ecx, [edx+ecx*4]
0x6FFB3A: call    sub_452A60
0x6FFB3F: mov     ecx, [esp+10h+arg_0]
0x6FFB43: mov     dl, [ecx]
0x6FFB45: cmp     dl, [eax]
0x6FFB47: jnz     short loc_6FFB63
0x6FFB49: test    dl, dl
0x6FFB4B: jz      short loc_6FFB5F
0x6FFB4D: mov     dl, [ecx+1]
0x6FFB50: cmp     dl, [eax+1]
0x6FFB53: jnz     short loc_6FFB63
0x6FFB55: add     ecx, 2
0x6FFB58: add     eax, 2
0x6FFB5B: test    dl, dl
0x6FFB5D: jnz     short loc_6FFB43
0x6FFB5F: xor     eax, eax
0x6FFB61: jmp     short loc_6FFB68
0x6FFB63: sbb     eax, eax
0x6FFB65: sbb     eax, 0FFFFFFFFh
0x6FFB68: test    eax, eax
0x6FFB6A: jz      short loc_6FFBAC
0x6FFB6C: jle     short loc_6FFB76
0x6FFB6E: add     esi, 1
0x6FFB71: movzx   ebp, si
0x6FFB74: jmp     short loc_6FFB7C
0x6FFB76: add     esi, 0FFFFFFFFh
0x6FFB79: movzx   edi, si
0x6FFB7C: cmp     bp, di
0x6FFB7F: jle     short loc_6FFB24
0x6FFB81: mov     eax, 1
0x6FFB86: sub     ds:0B3F67Ch, eax
0x6FFB8C: jnz     short loc_6FFB98
0x6FFB8E: mov     dword ptr ds:0B3F678h, 0
0x6FFB98: push    offset stru_B3F600; lpCriticalSection
0x6FFB9D: call    dword ptr ds:0A28074h
0x6FFBA3: pop     edi
0x6FFBA4: pop     esi
0x6FFBA5: pop     ebp
0x6FFBA6: xor     al, al
0x6FFBA8: pop     ebx
0x6FFBA9: retn    4
0x6FFBAC: push    esi
0x6FFBAD: mov     ecx, ebx
0x6FFBAF: call    sub_6FF480
0x6FFBB4: sub     dword ptr ds:0B3F67Ch, 1
0x6FFBBB: jnz     short loc_6FFBC7
0x6FFBBD: mov     dword ptr ds:0B3F678h, 0
0x6FFBC7: push    offset stru_B3F600; lpCriticalSection
0x6FFBCC: call    dword ptr ds:0A28074h
0x6FFBD2: pop     edi
0x6FFBD3: pop     esi
0x6FFBD4: pop     ebp
0x6FFBD5: mov     al, 1
0x6FFBD7: pop     ebx
0x6FFBD8: retn    4
