0x5479F0: sub     esp, 10h
0x5479F3: push    ebx
0x5479F4: push    ebp
0x5479F5: push    esi
0x5479F6: push    edi
0x5479F7: or      edi, 0FFFFFFFFh
0x5479FA: push    0; Seed
0x5479FC: mov     [esp+24h+var_10], edi
0x547A00: mov     [esp+24h+var_C], edi
0x547A04: mov     [esp+24h+var_8], edi
0x547A08: mov     [esp+24h+var_4], edi
0x547A0C: call    GetRandomLargeInteger?
0x547A11: mov     ebx, [esp+24h+arg_0]
0x547A15: add     esp, 4
0x547A18: mov     ebp, eax
0x547A1A: mov     esi, 4
0x547A1F: nop
0x547A20: mov     ecx, esi
0x547A22: mov     eax, ebx
0x547A24: shl     eax, cl
0x547A26: push    eax; Seed
0x547A27: call    GetRandomLargeInteger?
0x547A2C: cdq
0x547A2D: idiv    esi
0x547A2F: add     esp, 4
0x547A32: cmp     [esp+edx*4+20h+var_10], edi
0x547A36: jz      short loc_547A46
0x547A38: cmp     edx, 3
0x547A3B: jge     short loc_547A40
0x547A3D: add     edx, 1
0x547A40: cmp     [esp+edx*4+20h+var_10], edi
0x547A44: jnz     short loc_547A38
0x547A46: mov     [esp+edx*4+20h+var_10], esi
0x547A4A: sub     esi, 1
0x547A4D: test    esi, esi
0x547A4F: jg      short loc_547A20
0x547A51: push    ebp; Seed
0x547A52: call    GetRandomLargeInteger?
0x547A57: mov     ecx, [esp+24h+arg_4]
0x547A5B: mov     edx, [esp+24h+var_10]
0x547A5F: mov     eax, [esp+24h+arg_8]
0x547A63: mov     [ecx], edx
0x547A65: mov     ecx, [esp+24h+var_C]
0x547A69: mov     edx, [esp+24h+arg_C]
0x547A6D: add     esp, 4
0x547A70: mov     [eax], ecx
0x547A72: mov     eax, [esp+20h+var_8]
0x547A76: mov     ecx, [esp+20h+arg_10]
0x547A7A: pop     edi
0x547A7B: pop     esi
0x547A7C: mov     [edx], eax
0x547A7E: mov     edx, [esp+18h+var_4]
0x547A82: pop     ebp
0x547A83: mov     [ecx], edx
0x547A85: pop     ebx
0x547A86: add     esp, 10h
0x547A89: retn
