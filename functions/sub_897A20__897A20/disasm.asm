0x897A20: push    esi
0x897A21: mov     esi, [esp+4+arg_0]
0x897A25: test    esi, esi
0x897A27: jz      short loc_897A8B
0x897A29: push    esi
0x897A2A: call    sub_4A05E0
0x897A2F: add     esp, 4
0x897A32: test    eax, eax
0x897A34: jz      short loc_897A3B
0x897A36: or      word ptr [eax+0Ch], 40h
0x897A3B: cmp     [esp+4+arg_4], 0
0x897A40: jz      short loc_897A8B
0x897A42: mov     eax, [esi]
0x897A44: mov     edx, [eax+8]
0x897A47: push    edi
0x897A48: mov     ecx, esi
0x897A4A: call    edx
0x897A4C: mov     edi, eax
0x897A4E: test    edi, edi
0x897A50: jz      short loc_897A8A
0x897A52: movzx   esi, word ptr [edi+0B6h]
0x897A59: test    esi, esi
0x897A5B: jz      short loc_897A8A
0x897A5D: lea     ecx, [ecx+0]
0x897A60: movzx   eax, word ptr [edi+0B6h]
0x897A67: sub     esi, 1
0x897A6A: cmp     eax, esi
0x897A6C: ja      short loc_897A72
0x897A6E: xor     eax, eax
0x897A70: jmp     short loc_897A7B
0x897A72: mov     ecx, [edi+0B0h]
0x897A78: mov     eax, [ecx+esi*4]
0x897A7B: push    1
0x897A7D: push    eax
0x897A7E: call    sub_897A20
0x897A83: add     esp, 8
0x897A86: test    esi, esi
0x897A88: jnz     short loc_897A60
0x897A8A: pop     edi
0x897A8B: pop     esi
0x897A8C: retn
