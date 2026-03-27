0x8A9D10: sub     esp, 0Ch
0x8A9D13: push    esi
0x8A9D14: push    edi
0x8A9D15: mov     edi, [esp+14h+arg_0]
0x8A9D19: mov     esi, [edi+8]
0x8A9D1C: test    esi, esi
0x8A9D1E: jz      loc_8A9DD7
0x8A9D24: mov     eax, [esi+88h]
0x8A9D2A: test    eax, eax
0x8A9D2C: jz      short loc_8A9D49
0x8A9D2E: lea     eax, [esp+14h+var_8]
0x8A9D32: push    eax
0x8A9D33: mov     ecx, esi
0x8A9D35: mov     [esp+18h+var_8], 15h
0x8A9D3A: mov     [esp+18h+var_4], edi
0x8A9D3E: call    sub_898820
0x8A9D43: pop     edi
0x8A9D44: pop     esi
0x8A9D45: add     esp, 0Ch
0x8A9D48: retn
0x8A9D49: mov     dword ptr [esi+88h], 1
0x8A9D53: mov     eax, [edi+14h]
0x8A9D56: test    eax, eax
0x8A9D58: mov     [esp+14h+var_C], edi
0x8A9D5C: jz      short loc_8A9D6E
0x8A9D5E: push    esi
0x8A9D5F: lea     ecx, [esp+18h+var_C]
0x8A9D63: push    1
0x8A9D65: push    ecx
0x8A9D66: call    sub_8D7400
0x8A9D6B: add     esp, 0Ch
0x8A9D6E: mov     ecx, [esi+8]
0x8A9D71: mov     edx, [ecx]
0x8A9D73: push    esi
0x8A9D74: push    1
0x8A9D76: lea     eax, [esp+1Ch+var_C]
0x8A9D7A: push    eax
0x8A9D7B: call    dword ptr [edx+1Ch]
0x8A9D7E: lea     ecx, [esp+14h+arg_0]
0x8A9D82: push    ecx
0x8A9D83: mov     ecx, edi
0x8A9D85: call    sub_8A63F0
0x8A9D8A: cmp     byte ptr [eax], 0
0x8A9D8D: jnz     short loc_8A9DB4
0x8A9D8F: mov     al, [esi+0A6h]
0x8A9D95: test    al, al
0x8A9D97: jz      short loc_8A9DAA
0x8A9D99: mov     al, [edi+91h]
0x8A9D9F: test    al, al
0x8A9DA1: jnz     short loc_8A9DAA
0x8A9DA3: mov     ecx, edi
0x8A9DA5: call    sub_8A6410
0x8A9DAA: push    edi
0x8A9DAB: push    esi
0x8A9DAC: call    sub_8DD030
0x8A9DB1: add     esp, 8
0x8A9DB4: dec     dword ptr [esi+88h]
0x8A9DBA: jnz     short loc_8A9DD7
0x8A9DBC: mov     eax, [esi+84h]
0x8A9DC2: test    eax, eax
0x8A9DC4: jz      short loc_8A9DD7
0x8A9DC6: mov     al, [esi+90h]
0x8A9DCC: test    al, al
0x8A9DCE: jnz     short loc_8A9DD7
0x8A9DD0: mov     ecx, esi
0x8A9DD2: call    sub_899210
0x8A9DD7: pop     edi
0x8A9DD8: pop     esi
0x8A9DD9: add     esp, 0Ch
0x8A9DDC: retn
