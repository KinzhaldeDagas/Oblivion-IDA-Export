0x41DEA0: mov     eax, TlsIndex
0x41DEA5: mov     ecx, large fs:2Ch
0x41DEAC: push    esi
0x41DEAD: mov     esi, [ecx+eax*4]
0x41DEB0: push    edi
0x41DEB1: mov     edi, dword_B33780
0x41DEB7: cmp     [esi+0Ch], edi
0x41DEBD: jz      short loc_41DEE5
0x41DEBF: push    174h
0x41DEC4: lea     edx, [esi+10h]
0x41DECA: push    0
0x41DECC: push    edx
0x41DECD: mov     dword ptr [esi+8], 0
0x41DED7: call    __memset
0x41DEDC: add     esp, 0Ch
0x41DEDF: mov     [esi+0Ch], edi
0x41DEE5: pop     edi
0x41DEE6: pop     esi
0x41DEE7: retn
