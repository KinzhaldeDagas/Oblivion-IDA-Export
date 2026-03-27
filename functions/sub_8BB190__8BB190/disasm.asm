0x8BB190: mov     edx, [esp+DstBuf]
0x8BB194: push    esi
0x8BB195: mov     esi, ecx
0x8BB197: mov     eax, [esi+0Ch]
0x8BB19A: mov     ecx, [esp+4+Count]
0x8BB19E: push    eax; Count
0x8BB19F: push    ecx; Count
0x8BB1A0: push    1; ElementSize
0x8BB1A2: push    edx; DstBuf
0x8BB1A3: call    _fread
0x8BB1A8: add     esp, 10h
0x8BB1AB: test    eax, eax
0x8BB1AD: jg      short loc_8BB1B3
0x8BB1AF: mov     byte ptr [esi+10h], 0
0x8BB1B3: pop     esi
0x8BB1B4: retn    8
