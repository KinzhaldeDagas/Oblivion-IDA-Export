0x4521D0: push    ebp
0x4521D1: mov     ebp, [esp+4+arg_0]
0x4521D5: push    edi
0x4521D6: mov     edi, [ecx+4Ch]
0x4521D9: mov     edx, ebp
0x4521DB: shr     edx, 18h
0x4521DE: test    edi, edi
0x4521E0: jz      short loc_452227
0x4521E2: cmp     dl, 0FFh
0x4521E5: jz      short loc_452227
0x4521E7: push    ebx
0x4521E8: push    esi
0x4521E9: movzx   esi, byte ptr [ecx+48h]
0x4521ED: or      bl, 0FFh
0x4521F0: xor     eax, eax
0x4521F2: test    esi, esi
0x4521F4: jle     short loc_45221E
0x4521F6: cmp     [edi+eax], dl
0x4521F9: jnz     short loc_4521FD
0x4521FB: mov     bl, al
0x4521FD: add     eax, 1
0x452200: cmp     eax, esi
0x452202: jl      short loc_4521F6
0x452204: cmp     bl, 0FFh
0x452207: jz      short loc_45221E
0x452209: movzx   eax, bl
0x45220C: pop     esi
0x45220D: pop     ebx
0x45220E: and     ebp, 0FFFFFFh
0x452214: shl     eax, 18h
0x452217: pop     edi
0x452218: add     eax, ebp
0x45221A: pop     ebp
0x45221B: retn    4
0x45221E: pop     esi
0x45221F: pop     ebx
0x452220: pop     edi
0x452221: xor     eax, eax
0x452223: pop     ebp
0x452224: retn    4
0x452227: pop     edi
0x452228: mov     eax, ebp
0x45222A: pop     ebp
0x45222B: retn    4
