0x423E50: push    ebx
0x423E51: push    esi
0x423E52: push    13h; a2
0x423E54: mov     esi, ecx
0x423E56: call    BaseExtraList_GetExtraData
0x423E5B: test    eax, eax
0x423E5D: jz      short loc_423E65
0x423E5F: movzx   ebx, byte ptr [eax+0Ch]
0x423E63: jmp     short loc_423E6A
0x423E65: mov     ebx, 1
0x423E6A: mov     eax, [esp+8+arg_0]
0x423E6E: not     eax
0x423E70: push    13h; a2
0x423E72: mov     ecx, esi; this
0x423E74: and     ebx, eax
0x423E76: call    BaseExtraList_GetExtraData
0x423E7B: test    eax, eax
0x423E7D: jnz     short loc_423E97
0x423E7F: cmp     ebx, 1
0x423E82: jz      short loc_423E92
0x423E84: mov     ecx, esi
0x423E86: call    sub_41EB90
0x423E8B: test    eax, eax
0x423E8D: jz      short loc_423E92
0x423E8F: mov     [eax+0Ch], bl
0x423E92: pop     esi
0x423E93: pop     ebx
0x423E94: retn    4
0x423E97: cmp     ebx, 1
0x423E9A: jnz     short loc_423E8B
0x423E9C: cmp     dword ptr [eax+10h], 0
0x423EA0: jnz     short loc_423E8B
0x423EA2: push    ebx
0x423EA3: push    eax
0x423EA4: mov     ecx, esi
0x423EA6: call    BaseExtraList_RemoveExtraByPtr
0x423EAB: pop     esi
0x423EAC: pop     ebx
0x423EAD: retn    4
