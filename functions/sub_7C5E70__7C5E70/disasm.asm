0x7C5E70: push    edi
0x7C5E71: mov     edi, ecx
0x7C5E73: mov     ecx, [esp+4+arg_0]
0x7C5E77: test    ecx, ecx
0x7C5E79: jz      short loc_7C5EE4
0x7C5E7B: mov     eax, [ecx]
0x7C5E7D: mov     edx, [eax+8]
0x7C5E80: push    esi
0x7C5E81: call    edx
0x7C5E83: mov     esi, eax
0x7C5E85: test    esi, esi
0x7C5E87: jz      short loc_7C5EE3
0x7C5E89: push    ebx
0x7C5E8A: xor     bl, bl
0x7C5E8C: cmp     ds:0B43384h, bl
0x7C5E92: jz      short loc_7C5EB3
0x7C5E94: push    offset stru_B43400; lpCriticalSection
0x7C5E99: call    dword ptr ds:0A2806Ch
0x7C5E9F: call    dword ptr ds:0A2808Ch
0x7C5EA5: add     dword ptr ds:0B4347Ch, 1
0x7C5EAC: mov     ds:0B43478h, eax
0x7C5EB1: mov     bl, 1
0x7C5EB3: push    esi
0x7C5EB4: mov     ecx, edi
0x7C5EB6: call    sub_7C5D90
0x7C5EBB: test    bl, bl
0x7C5EBD: pop     ebx
0x7C5EBE: jz      short loc_7C5EE3
0x7C5EC0: sub     dword ptr ds:0B4347Ch, 1
0x7C5EC7: jnz     short loc_7C5ED3
0x7C5EC9: mov     dword ptr ds:0B43478h, 0
0x7C5ED3: pop     esi
0x7C5ED4: pop     edi
0x7C5ED5: mov     [esp+arg_0], offset stru_B43400
0x7C5EDD: jmp     dword ptr ds:0A28074h
0x7C5EE3: pop     esi
0x7C5EE4: pop     edi
0x7C5EE5: retn    4
