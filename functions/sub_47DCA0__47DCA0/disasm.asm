0x47DCA0: push    ebx
0x47DCA1: push    esi
0x47DCA2: mov     ebx, ecx
0x47DCA4: push    edi
0x47DCA5: mov     esi, ebx
0x47DCA7: mov     edi, 5
0x47DCAC: lea     esp, [esp+0]
0x47DCB0: mov     ecx, esi; this
0x47DCB2: call    sub_716DB0
0x47DCB7: add     esi, 10h
0x47DCBA: sub     edi, 1
0x47DCBD: jns     short loc_47DCB0
0x47DCBF: pop     edi
0x47DCC0: pop     esi
0x47DCC1: mov     dword ptr [ebx+60h], 3Fh ; '?'
0x47DCC8: mov     eax, ebx
0x47DCCA: pop     ebx
0x47DCCB: retn
