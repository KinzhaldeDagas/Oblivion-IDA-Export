0x555A00: sub     esp, 8
0x555A03: push    ebx
0x555A04: mov     ebx, [esp+0Ch+arg_0]
0x555A08: push    ebp
0x555A09: mov     ebp, [esp+10h+arg_4]
0x555A0D: push    esi
0x555A0E: push    edi
0x555A0F: mov     edi, [esp+18h+arg_8]
0x555A13: xor     esi, esi
0x555A15: cmp     esi, ebp
0x555A17: jnz     short loc_555A1F
0x555A19: fld     [esp+18h+arg_C]
0x555A1D: jmp     short loc_555A43
0x555A1F: cmp     dword ptr ds:0B39B80h, 0
0x555A26: jnz     short loc_555A2D
0x555A28: call    sub_553550
0x555A2D: mov     ecx, ds:0B39B80h
0x555A33: push    ebx
0x555A34: push    edi
0x555A35: push    esi
0x555A36: push    0
0x555A38: add     ecx, 0C8h ; 'È'
0x555A3E: call    sub_6EDD30
0x555A43: fstp    [esp+esi*4+18h+var_8]
0x555A47: add     esi, 1
0x555A4A: cmp     esi, 2
0x555A4D: jl      short loc_555A15
0x555A4F: cmp     dword ptr ds:0B39B80h, 0
0x555A56: jnz     short loc_555A5D
0x555A58: call    sub_553550
0x555A5D: mov     ecx, ds:0B39B80h
0x555A63: push    ebx
0x555A64: lea     eax, [esp+1Ch+var_8]
0x555A68: push    eax
0x555A69: push    edi
0x555A6A: push    0
0x555A6C: add     ecx, 0C8h ; 'È'
0x555A72: call    sub_6EDE10
0x555A77: pop     edi
0x555A78: pop     esi
0x555A79: pop     ebp
0x555A7A: pop     ebx
0x555A7B: add     esp, 8
0x555A7E: retn
