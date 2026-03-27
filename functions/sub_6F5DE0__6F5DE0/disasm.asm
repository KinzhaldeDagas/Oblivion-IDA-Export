0x6F5DE0: push    ebx
0x6F5DE1: push    ebp
0x6F5DE2: mov     ebp, [esp+8+arg_0]
0x6F5DE6: push    esi
0x6F5DE7: push    edi
0x6F5DE8: mov     edi, ecx
0x6F5DEA: cmp     [edi+14h], ebp
0x6F5DED: jnb     short loc_6F5DF4
0x6F5DEF: call    ?_Xran@_String_base@std@@SAXXZ; std::_String_base::_Xran(void)
0x6F5DF4: mov     eax, [edi+14h]
0x6F5DF7: mov     esi, [esp+10h+arg_4]
0x6F5DFB: sub     eax, ebp
0x6F5DFD: cmp     eax, esi
0x6F5DFF: jnb     short loc_6F5E03
0x6F5E01: mov     esi, eax
0x6F5E03: mov     ebx, [esp+10h+arg_C]
0x6F5E07: cmp     esi, ebx
0x6F5E09: mov     eax, esi
0x6F5E0B: jb      short loc_6F5E0F
0x6F5E0D: mov     eax, ebx
0x6F5E0F: cmp     dword ptr [edi+18h], 10h
0x6F5E13: jb      short loc_6F5E1A
0x6F5E15: mov     edi, [edi+4]
0x6F5E18: jmp     short loc_6F5E1D
0x6F5E1A: add     edi, 4
0x6F5E1D: push    eax
0x6F5E1E: mov     eax, [esp+14h+arg_8]
0x6F5E22: push    eax
0x6F5E23: add     edi, ebp
0x6F5E25: push    edi
0x6F5E26: call    sub_6F5CB0
0x6F5E2B: add     esp, 0Ch
0x6F5E2E: test    eax, eax
0x6F5E30: jnz     short loc_6F5E47
0x6F5E32: cmp     esi, ebx
0x6F5E34: jnb     short loc_6F5E40
0x6F5E36: pop     edi
0x6F5E37: pop     esi
0x6F5E38: pop     ebp
0x6F5E39: or      eax, 0FFFFFFFFh
0x6F5E3C: pop     ebx
0x6F5E3D: retn    10h
0x6F5E40: xor     eax, eax
0x6F5E42: cmp     esi, ebx
0x6F5E44: setnz   al
0x6F5E47: pop     edi
0x6F5E48: pop     esi
0x6F5E49: pop     ebp
0x6F5E4A: pop     ebx
0x6F5E4B: retn    10h
