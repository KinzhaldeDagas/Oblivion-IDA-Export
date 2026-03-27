0x414C00: push    ebx
0x414C01: mov     ebx, [esp+4+arg_4]
0x414C05: xor     al, al
0x414C07: test    ebx, ebx
0x414C09: push    edi
0x414C0A: jle     short EffectItemList_HasEffectCodes___Done
0x414C0C: mov     ecx, [esp+8+arg_0]
0x414C10: cmp     dword ptr [ecx+8], 0
0x414C14: mov     edi, ecx
0x414C16: jnz     short loc_414C21
0x414C18: cmp     dword ptr [ecx+4], 0
0x414C1C: jnz     short loc_414C21
0x414C1E: pop     edi
0x414C1F: pop     ebx
0x414C20: retn
0x414C21: test    ecx, ecx
0x414C23: jz      short EffectItemList_HasEffectCodes___Done
0x414C25: push    ebp
0x414C26: push    esi
