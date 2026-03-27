0x8B0C60: sub     esp, 0Ch
0x8B0C63: push    esi
0x8B0C64: mov     esi, [ecx+20h]
0x8B0C67: test    esi, esi
0x8B0C69: jz      loc_8B0CF4
0x8B0C6F: cmp     dword ptr [ecx+10h], 0
0x8B0C73: fld     dword ptr ds:0A32048h
0x8B0C79: fstp    [esp+10h+var_8]
0x8B0C7D: fld     dword ptr ds:0A3B888h
0x8B0C83: fstp    [esp+10h+var_C]
0x8B0C87: jle     short loc_8B0CE6
0x8B0C89: push    ebx
0x8B0C8A: mov     ebx, [ecx+14h]
0x8B0C8D: push    edi
0x8B0C8E: mov     edi, [ecx+10h]
0x8B0C91: test    ebx, ebx
0x8B0C93: jle     short loc_8B0CDF
0x8B0C95: mov     edx, ebx
0x8B0C97: jmp     short loc_8B0CA0
0x8B0C99: align 10h
0x8B0CA0: fld     dword ptr [esi+8]
0x8B0CA3: fstp    [esp+18h+var_4]
0x8B0CA7: fld     [esp+18h+var_4]
0x8B0CAB: fld     st
0x8B0CAD: fld     [esp+18h+var_8]
0x8B0CB1: fcomp   st(1)
0x8B0CB3: fnstsw  ax
0x8B0CB5: test    ah, 41h
0x8B0CB8: jnz     short loc_8B0CC2
0x8B0CBA: fxch    st(1)
0x8B0CBC: fst     [esp+18h+var_8]
0x8B0CC0: fxch    st(1)
0x8B0CC2: fld     [esp+18h+var_C]
0x8B0CC6: fcompp
0x8B0CC8: fnstsw  ax
0x8B0CCA: test    ah, 5
0x8B0CCD: jp      short loc_8B0CD5
0x8B0CCF: fstp    [esp+18h+var_C]
0x8B0CD3: jmp     short loc_8B0CD7
0x8B0CD5: fstp    st
0x8B0CD7: add     esi, 0Ch
0x8B0CDA: sub     edx, 1
0x8B0CDD: jnz     short loc_8B0CA0
0x8B0CDF: sub     edi, 1
0x8B0CE2: jnz     short loc_8B0C91
0x8B0CE4: pop     edi
0x8B0CE5: pop     ebx
0x8B0CE6: fld     [esp+10h+var_C]
0x8B0CEA: fstp    dword ptr [ecx+1Ch]
0x8B0CED: fld     [esp+10h+var_8]
0x8B0CF1: fstp    dword ptr [ecx+18h]
0x8B0CF4: pop     esi
0x8B0CF5: add     esp, 0Ch
0x8B0CF8: retn
