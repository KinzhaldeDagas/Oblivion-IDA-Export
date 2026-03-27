0x4FCC40: push    esi
0x4FCC41: mov     esi, ecx
0x4FCC43: push    edi
0x4FCC44: xor     edi, edi
0x4FCC46: push    200h
0x4FCC4B: lea     eax, [esi+4]
0x4FCC4E: push    edi
0x4FCC4F: push    eax
0x4FCC50: mov     [esi], edi
0x4FCC52: mov     [esi+204h], edi
0x4FCC58: mov     [esi+208h], edi
0x4FCC5E: mov     [esi+40Ch], edi
0x4FCC64: mov     [esi+418h], edi
0x4FCC6A: call    __memset
0x4FCC6F: push    200h
0x4FCC74: lea     ecx, [esi+20Ch]
0x4FCC7A: push    edi
0x4FCC7B: push    ecx
0x4FCC7C: call    __memset
0x4FCC81: add     esp, 18h
0x4FCC84: pop     edi
0x4FCC85: mov     eax, esi
0x4FCC87: pop     esi
0x4FCC88: retn
