0x716BF0: mov     edx, [esp+arg_0]
0x716BF4: test    edx, edx
0x716BF6: jnz     short loc_716BFD
0x716BF8: xor     al, al
0x716BFA: retn    4
0x716BFD: mov     eax, [ecx+0Ch]
0x716C00: test    eax, eax
0x716C02: jz      short loc_716C0E
0x716C04: cmp     dword ptr [edx+0Ch], 0
0x716C08: jz      short loc_716BF8
0x716C0A: test    eax, eax
0x716C0C: jnz     short loc_716C18
0x716C0E: cmp     dword ptr [edx+0Ch], 0
0x716C12: jnz     short loc_716BF8
0x716C14: test    eax, eax
0x716C16: jz      short loc_716C49
0x716C18: mov     ecx, [edx+0Ch]
0x716C1B: jmp     short loc_716C20
0x716C1D: align 10h
0x716C20: mov     dl, [eax]
0x716C22: cmp     dl, [ecx]
0x716C24: jnz     short loc_716C40
0x716C26: test    dl, dl
0x716C28: jz      short loc_716C3C
0x716C2A: mov     dl, [eax+1]
0x716C2D: cmp     dl, [ecx+1]
0x716C30: jnz     short loc_716C40
0x716C32: add     eax, 2
0x716C35: add     ecx, 2
0x716C38: test    dl, dl
0x716C3A: jnz     short loc_716C20
0x716C3C: xor     eax, eax
0x716C3E: jmp     short loc_716C45
0x716C40: sbb     eax, eax
0x716C42: sbb     eax, 0FFFFFFFFh
0x716C45: test    eax, eax
0x716C47: jnz     short loc_716BF8
0x716C49: mov     al, 1
0x716C4B: retn    4
