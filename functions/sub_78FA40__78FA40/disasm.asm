0x78FA40: push    esi
0x78FA41: mov     esi, ecx
0x78FA43: mov     eax, [esi+4]
0x78FA46: test    eax, eax
0x78FA48: push    edi
0x78FA49: mov     edi, [esp+8+arg_0]
0x78FA4D: jz      short loc_78FA69
0x78FA4F: mov     ecx, [esi+8]
0x78FA52: sub     ecx, eax
0x78FA54: mov     eax, 30C30C31h
0x78FA59: imul    ecx
0x78FA5B: sar     edx, 4
0x78FA5E: mov     eax, edx
0x78FA60: shr     eax, 1Fh
0x78FA63: add     eax, edx
0x78FA65: cmp     edi, eax
0x78FA67: jb      short loc_78FA6E
0x78FA69: call    __invalid_parameter_noinfo
0x78FA6E: mov     eax, edi
0x78FA70: imul    eax, 54h ; 'T'
0x78FA73: add     eax, [esi+4]
0x78FA76: pop     edi
0x78FA77: pop     esi
0x78FA78: retn    4
