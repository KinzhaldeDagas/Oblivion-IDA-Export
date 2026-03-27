0x423DF0: push    ebx
0x423DF1: push    esi
0x423DF2: push    13h; a2
0x423DF4: mov     esi, ecx
0x423DF6: call    BaseExtraList_GetExtraData
0x423DFB: test    eax, eax
0x423DFD: jz      short loc_423E05
0x423DFF: movzx   ebx, byte ptr [eax+0Ch]
0x423E03: jmp     short loc_423E0A
0x423E05: mov     ebx, 1
0x423E0A: or      ebx, [esp+8+arg_0]
0x423E0E: push    13h; a2
0x423E10: mov     ecx, esi; this
0x423E12: call    BaseExtraList_GetExtraData
0x423E17: test    eax, eax
0x423E19: jnz     short loc_423E33
0x423E1B: cmp     ebx, 1
0x423E1E: jz      short loc_423E2E
0x423E20: mov     ecx, esi
0x423E22: call    sub_41EB90
0x423E27: test    eax, eax
0x423E29: jz      short loc_423E2E
0x423E2B: mov     [eax+0Ch], bl
0x423E2E: pop     esi
0x423E2F: pop     ebx
0x423E30: retn    4
0x423E33: cmp     ebx, 1
0x423E36: jnz     short loc_423E27
0x423E38: cmp     dword ptr [eax+10h], 0
0x423E3C: jnz     short loc_423E27
0x423E3E: push    ebx
0x423E3F: push    eax
0x423E40: mov     ecx, esi
0x423E42: call    BaseExtraList_RemoveExtraByPtr
0x423E47: pop     esi
0x423E48: pop     ebx
0x423E49: retn    4
