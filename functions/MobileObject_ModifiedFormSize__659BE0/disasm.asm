0x659BE0: push    esi
0x659BE1: push    edi
0x659BE2: mov     edi, [esp+8+arg_0]
0x659BE6: push    edi
0x659BE7: mov     esi, ecx
0x659BE9: call    TESObjectREFR_GetModifiedSize
0x659BEE: add     ax, 1
0x659BF2: cmp     dword ptr [esi+58h], 0
0x659BF6: movzx   eax, ax
0x659BF9: mov     [esp+8+arg_0], eax
0x659BFD: jz      short loc_659C1E
0x659BFF: mov     ecx, [esi+58h]
0x659C02: mov     edx, [ecx]
0x659C04: mov     eax, [edx+3F0h]
0x659C0A: push    esi
0x659C0B: push    edi
0x659C0C: call    eax
0x659C0E: mov     cx, word ptr [esp+8+arg_0]
0x659C13: add     cx, ax
0x659C16: pop     edi
0x659C17: mov     ax, cx
0x659C1A: pop     esi
0x659C1B: retn    4
0x659C1E: mov     ax, word ptr [esp+8+arg_0]
0x659C23: pop     edi
0x659C24: pop     esi
0x659C25: retn    4
