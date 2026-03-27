0x7C0AFE: or      esi, 0FFFFFFFFh; jumptable 007C05BA default case
0x7C0B01: cmp     ecx, edi
0x7C0B03: mov     byte ptr [esp+arg_28], 0
0x7C0B08: jz      short loc_7C0B14
0x7C0B0A: add     [ecx+5Ch], esi
0x7C0B0D: jnz     short loc_7C0B14
0x7C0B0F: call    sub_772560
0x7C0B14: cmp     ebx, edi
0x7C0B16: mov     [esp+arg_28], esi
0x7C0B1A: jz      short loc_7C0B28
0x7C0B1C: add     [ebx+60h], esi
0x7C0B1F: jnz     short loc_7C0B28
0x7C0B21: mov     ecx, ebx
0x7C0B23: call    sub_7604D0
0x7C0B28: xor     eax, eax
0x7C0B2A: mov     ecx, [esp+arg_20]
0x7C0B2E: mov     large fs:0, ecx
0x7C0B35: pop     ecx
0x7C0B36: pop     edi
0x7C0B37: pop     esi
0x7C0B38: pop     ebp
0x7C0B39: pop     ebx
0x7C0B3A: add     esp, 1Ch
0x7C0B3D: retn    1Ch
