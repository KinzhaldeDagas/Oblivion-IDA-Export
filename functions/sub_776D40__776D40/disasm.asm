0x776D40: mov     eax, [esp+elementCount]; MoonSugarEffect decode: strided memcpy helper used by fallback packer to copy source vertex arrays into mapped stream bytes.
0x776D44: test    eax, eax
0x776D46: jbe     short locret_776D7A
0x776D48: push    ebx
0x776D49: mov     ebx, [esp+4+Size]
0x776D4D: push    ebp
0x776D4E: mov     ebp, [esp+8+destinationStride]
0x776D52: push    esi
0x776D53: mov     esi, [esp+0Ch+Dst]
0x776D57: push    edi
0x776D58: mov     edi, [esp+10h+Src]
0x776D5C: mov     [esp+10h+elementCount], eax
0x776D60: push    ebx; byteCount
0x776D61: push    edi; source
0x776D62: push    esi; destination
0x776D63: call    _memcpy;
0x776D68: add     esp, 0Ch
0x776D6B: add     esi, ebp
0x776D6D: add     edi, ebx
0x776D6F: sub     [esp+10h+elementCount], 1
0x776D74: jnz     short loc_776D60
0x776D76: pop     edi
0x776D77: pop     esi
0x776D78: pop     ebp
0x776D79: pop     ebx
0x776D7A: retn    14h
