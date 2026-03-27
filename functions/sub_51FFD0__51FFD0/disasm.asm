0x51FFD0: push    ebx
0x51FFD1: push    esi
0x51FFD2: mov     esi, ecx
0x51FFD4: mov     ecx, [esp+8+arg_0]
0x51FFD8: xor     bl, bl
0x51FFDA: test    ecx, ecx
0x51FFDC: jz      short loc_52001F
0x51FFDE: mov     eax, [ecx+0E8h]
0x51FFE4: test    eax, eax
0x51FFE6: jz      short loc_52001F
0x51FFE8: add     eax, 8Ch ; 'Œ'
0x51FFED: jz      short loc_52001F
0x51FFEF: nop
0x51FFF0: cmp     [eax], esi
0x51FFF2: jz      short loc_520002
0x51FFF4: mov     eax, [eax+4]
0x51FFF7: test    eax, eax
0x51FFF9: jnz     short loc_51FFF0
0x51FFFB: pop     esi
0x51FFFC: mov     al, bl
0x51FFFE: pop     ebx
0x51FFFF: retn    4
0x520002: call    TESActorBase_IsFemale
0x520007: sub     eax, 0
0x52000A: jz      short loc_520017
0x52000C: sub     eax, 1
0x52000F: jnz     short loc_52001F
0x520011: test    byte ptr [esi+48h], 4
0x520015: jmp     short loc_52001B
0x520017: test    byte ptr [esi+48h], 2
0x52001B: jnz     short loc_52001F
0x52001D: mov     bl, 1
0x52001F: pop     esi
0x520020: mov     al, bl
0x520022: pop     ebx
0x520023: retn    4
