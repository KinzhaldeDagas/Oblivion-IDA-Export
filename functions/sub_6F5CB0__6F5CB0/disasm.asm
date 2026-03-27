0x6F5CB0: mov     eax, [esp+arg_8]
0x6F5CB4: cmp     eax, 4
0x6F5CB7: mov     ecx, [esp+arg_4]
0x6F5CBB: mov     edx, [esp+arg_0]
0x6F5CBF: push    esi
0x6F5CC0: push    edi
0x6F5CC1: jb      short loc_6F5CD7
0x6F5CC3: mov     esi, [edx]
0x6F5CC5: cmp     esi, [ecx]
0x6F5CC7: jnz     short loc_6F5CDB
0x6F5CC9: sub     eax, 4
0x6F5CCC: add     ecx, 4
0x6F5CCF: add     edx, 4
0x6F5CD2: cmp     eax, 4
0x6F5CD5: jnb     short loc_6F5CC3
0x6F5CD7: test    eax, eax
0x6F5CD9: jz      short loc_6F5D39
0x6F5CDB: movzx   esi, byte ptr [edx]
0x6F5CDE: movzx   edi, byte ptr [ecx]
0x6F5CE1: sub     esi, edi
0x6F5CE3: jnz     short loc_6F5D2A
0x6F5CE5: sub     eax, 1
0x6F5CE8: add     ecx, 1
0x6F5CEB: add     edx, 1
0x6F5CEE: test    eax, eax
0x6F5CF0: jz      short loc_6F5D39
0x6F5CF2: movzx   esi, byte ptr [edx]
0x6F5CF5: movzx   edi, byte ptr [ecx]
0x6F5CF8: sub     esi, edi
0x6F5CFA: jnz     short loc_6F5D2A
0x6F5CFC: sub     eax, 1
0x6F5CFF: add     ecx, 1
0x6F5D02: add     edx, 1
0x6F5D05: test    eax, eax
0x6F5D07: jz      short loc_6F5D39
0x6F5D09: movzx   esi, byte ptr [edx]
0x6F5D0C: movzx   edi, byte ptr [ecx]
0x6F5D0F: sub     esi, edi
0x6F5D11: jnz     short loc_6F5D2A
0x6F5D13: sub     eax, 1
0x6F5D16: add     ecx, 1
0x6F5D19: add     edx, 1
0x6F5D1C: test    eax, eax
0x6F5D1E: jz      short loc_6F5D39
0x6F5D20: movzx   esi, byte ptr [edx]
0x6F5D23: movzx   eax, byte ptr [ecx]
0x6F5D26: sub     esi, eax
0x6F5D28: jz      short loc_6F5D39
0x6F5D2A: test    esi, esi
0x6F5D2C: mov     eax, 1
0x6F5D31: jg      short loc_6F5D3B
0x6F5D33: pop     edi
0x6F5D34: or      eax, 0FFFFFFFFh
0x6F5D37: pop     esi
0x6F5D38: retn
0x6F5D39: xor     eax, eax
0x6F5D3B: pop     edi
0x6F5D3C: pop     esi
0x6F5D3D: retn
