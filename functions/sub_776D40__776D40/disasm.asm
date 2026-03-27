0x776D40: mov     eax, [esp+arg_10]
0x776D44: test    eax, eax
0x776D46: jbe     short locret_776D7A
0x776D48: push    ebx
0x776D49: mov     ebx, [esp+4+Size]
0x776D4D: push    ebp
0x776D4E: mov     ebp, [esp+8+arg_8]
0x776D52: push    esi
0x776D53: mov     esi, [esp+0Ch+Dst]
0x776D57: push    edi
0x776D58: mov     edi, [esp+10h+Src]
0x776D5C: mov     [esp+10h+arg_10], eax
0x776D60: push    ebx; Size
0x776D61: push    edi; Src
0x776D62: push    esi; Dst
0x776D63: call    _memcpy
0x776D68: add     esp, 0Ch
0x776D6B: add     esi, ebp
0x776D6D: add     edi, ebx
0x776D6F: sub     [esp+10h+arg_10], 1
0x776D74: jnz     short loc_776D60
0x776D76: pop     edi
0x776D77: pop     esi
0x776D78: pop     ebp
0x776D79: pop     ebx
0x776D7A: retn    14h
