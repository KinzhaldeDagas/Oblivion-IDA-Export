0x773100: mov     eax, [esp+arg_0]
0x773104: movzx   eax, word ptr ds:0B427B0h[eax*2]
0x77310C: cmp     ax, 5
0x773110: jnb     locret_77322F
0x773116: cmp     [esp+arg_8], 0
0x77311B: push    ebx
0x77311C: movzx   eax, ax
0x77311F: jz      short loc_773184
0x773121: cmp     byte ptr [eax+ecx+80h], 0
0x773129: jz      short loc_773135
0x77312B: mov     edx, [esp+4+arg_4]
0x77312F: mov     [ecx+eax*4+6Ch], edx
0x773133: jmp     short loc_773199
0x773135: cmp     byte ptr [eax+ecx+0A4h], 0
0x77313D: jz      short loc_773168
0x77313F: or      edx, 0FFFFFFFFh
0x773142: mov     byte ptr [eax+ecx+0A4h], 0
0x77314A: add     [ecx+88h], edx
0x773150: cmp     byte ptr [eax+ecx+0B0h], 0
0x773158: jz      short loc_773160
0x77315A: add     [ecx+0ACh], edx
0x773160: mov     byte ptr [eax+ecx+0B0h], 0
0x773168: mov     edx, [esp+4+arg_4]
0x77316C: mov     ebx, 1
0x773171: mov     [eax+ecx+80h], bl
0x773178: mov     [ecx+eax*4+6Ch], edx
0x77317C: add     [ecx+64h], ebx
0x77317F: jmp     loc_773219
0x773184: cmp     byte ptr [eax+ecx+0A4h], 0
0x77318C: jz      short loc_7731CC
0x77318E: mov     edx, [esp+4+arg_4]
0x773192: mov     [ecx+eax*4+90h], edx
0x773199: mov     dl, [esp+4+arg_C]
0x77319D: test    dl, dl
0x77319F: lea     eax, [eax+ecx+0B0h]
0x7731A6: jz      short loc_7731BA
0x7731A8: cmp     byte ptr [eax], 0
0x7731AB: jnz     short loc_7731C6
0x7731AD: add     dword ptr [ecx+0ACh], 1
0x7731B4: mov     [eax], dl
0x7731B6: pop     ebx
0x7731B7: retn    10h
0x7731BA: cmp     byte ptr [eax], 0
0x7731BD: jz      short loc_7731C6
0x7731BF: add     dword ptr [ecx+0ACh], 0FFFFFFFFh
0x7731C6: mov     [eax], dl
0x7731C8: pop     ebx
0x7731C9: retn    10h
0x7731CC: cmp     byte ptr [eax+ecx+80h], 0
0x7731D4: jz      short loc_7731FC
0x7731D6: or      edx, 0FFFFFFFFh
0x7731D9: mov     byte ptr [eax+ecx+80h], 0
0x7731E1: add     [ecx+64h], edx
0x7731E4: cmp     byte ptr [eax+ecx+0B0h], 0
0x7731EC: jz      short loc_7731F4
0x7731EE: add     [ecx+0ACh], edx
0x7731F4: mov     byte ptr [eax+ecx+0B0h], 0
0x7731FC: mov     edx, [esp+4+arg_4]
0x773200: mov     ebx, 1
0x773205: mov     [eax+ecx+0A4h], bl
0x77320C: mov     [ecx+eax*4+90h], edx
0x773213: add     [ecx+88h], ebx
0x773219: mov     dl, [esp+4+arg_C]
0x77321D: test    dl, dl
0x77321F: jz      short loc_773227
0x773221: add     [ecx+0ACh], ebx
0x773227: mov     [eax+ecx+0B0h], dl
0x77322E: pop     ebx
0x77322F: retn    10h
