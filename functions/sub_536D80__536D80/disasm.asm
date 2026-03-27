0x536D80: push    edi
0x536D81: mov     edi, ecx
0x536D83: mov     ecx, [esp+4+arg_0]
0x536D87: mov     eax, [edi+8]
0x536D8A: add     ecx, 14h
0x536D8D: test    eax, eax
0x536D8F: jz      short loc_536DCA
0x536D91: mov     edx, [ecx+1Ch]
0x536D94: and     edx, 3Fh
0x536D97: cmp     dl, 0Ch
0x536D9A: jnz     short loc_536DCA
0x536D9C: push    esi
0x536D9D: mov     esi, eax
0x536D9F: nop
0x536DA0: cmp     [esi+8], ecx
0x536DA3: jz      short loc_536DB1
0x536DA5: mov     esi, [esi+4]
0x536DA8: test    esi, esi
0x536DAA: jnz     short loc_536DA0
0x536DAC: pop     esi
0x536DAD: pop     edi
0x536DAE: retn    4
0x536DB1: test    esi, esi
0x536DB3: jz      short loc_536DC9
0x536DB5: push    eax
0x536DB6: mov     ecx, esi
0x536DB8: call    sub_536980
0x536DBD: push    esi
0x536DBE: mov     [edi+8], eax
0x536DC1: call    FormHeapFree
0x536DC6: add     esp, 4
0x536DC9: pop     esi
0x536DCA: pop     edi
0x536DCB: retn    4
