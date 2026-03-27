0x4FCC00: xor     eax, eax
0x4FCC02: push    esi
0x4FCC03: mov     esi, ecx
0x4FCC05: push    200h
0x4FCC0A: push    eax
0x4FCC0B: push    esi
0x4FCC0C: mov     [esi+200h], eax
0x4FCC12: mov     [esi+20Ch], eax
0x4FCC18: mov     [esi+204h], al
0x4FCC1E: mov     [esi+208h], eax
0x4FCC24: mov     [esi+210h], eax
0x4FCC2A: call    __memset
0x4FCC2F: add     esp, 0Ch
0x4FCC32: mov     eax, esi
0x4FCC34: pop     esi
0x4FCC35: retn
