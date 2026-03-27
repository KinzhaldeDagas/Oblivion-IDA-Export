0x917940: push    esi
0x917941: mov     esi, ecx
0x917943: mov     ecx, [esi+10h]
0x917946: mov     dword ptr [esi], offset off_A9D0E8
0x91794C: cmp     word ptr [ecx+4], 0
0x917951: jz      short loc_917964
0x917953: dec     word ptr [ecx+6]
0x917957: cmp     word ptr [ecx+6], 0
0x91795C: jnz     short loc_917964
0x91795E: mov     eax, [ecx]
0x917960: push    1
0x917962: call    dword ptr [eax]
0x917964: test    [esp+4+arg_0], 1
0x917969: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x91796F: jz      short loc_917984
0x917971: movzx   eax, word ptr [esi+4]
0x917975: mov     ecx, ds:0BA7D98h
0x91797B: mov     edx, [ecx]
0x91797D: push    24h ; '$'
0x91797F: push    eax
0x917980: push    esi
0x917981: call    dword ptr [edx+14h]
0x917984: mov     eax, esi
0x917986: pop     esi
0x917987: retn    4
