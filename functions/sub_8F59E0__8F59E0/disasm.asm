0x8F59E0: push    ebx
0x8F59E1: mov     ebx, [esp+4+arg_4]
0x8F59E5: push    ebp
0x8F59E6: mov     ebp, [esp+8+arg_0]
0x8F59EA: push    esi
0x8F59EB: mov     esi, ecx
0x8F59ED: mov     eax, [esi+10h]
0x8F59F0: push    edi
0x8F59F1: mov     edi, [esi+14h]
0x8F59F4: sub     edi, eax
0x8F59F6: cmp     ebx, edi
0x8F59F8: jle     short loc_8F5A2E
0x8F59FA: lea     ebx, [ebx+0]
0x8F5A00: mov     ecx, [esi+0Ch]
0x8F5A03: push    edi
0x8F5A04: add     ecx, eax
0x8F5A06: push    ecx
0x8F5A07: push    ebp
0x8F5A08: call    sub_8B1890
0x8F5A0D: add     [esi+10h], edi
0x8F5A10: mov     edx, [esi]
0x8F5A12: add     esp, 0Ch
0x8F5A15: mov     ecx, esi
0x8F5A17: add     ebp, edi
0x8F5A19: sub     ebx, edi
0x8F5A1B: call    dword ptr [edx+2Ch]
0x8F5A1E: test    eax, eax
0x8F5A20: jnz     short loc_8F5A54
0x8F5A22: mov     eax, [esi+10h]
0x8F5A25: mov     edi, [esi+14h]
0x8F5A28: sub     edi, eax
0x8F5A2A: cmp     ebx, edi
0x8F5A2C: jg      short loc_8F5A00
0x8F5A2E: mov     eax, [esi+0Ch]
0x8F5A31: mov     ecx, [esi+10h]
0x8F5A34: push    ebx
0x8F5A35: add     eax, ecx
0x8F5A37: push    eax
0x8F5A38: push    ebp
0x8F5A39: call    sub_8B1890
0x8F5A3E: mov     eax, [esi+10h]
0x8F5A41: add     esp, 0Ch
0x8F5A44: add     eax, ebx
0x8F5A46: pop     edi
0x8F5A47: mov     [esi+10h], eax
0x8F5A4A: mov     eax, [esp+0Ch+arg_4]
0x8F5A4E: pop     esi
0x8F5A4F: pop     ebp
0x8F5A50: pop     ebx
0x8F5A51: retn    8
0x8F5A54: mov     eax, [esp+10h+arg_4]
0x8F5A58: pop     edi
0x8F5A59: pop     esi
0x8F5A5A: pop     ebp
0x8F5A5B: sub     eax, ebx
0x8F5A5D: pop     ebx
0x8F5A5E: retn    8
