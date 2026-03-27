0x466E60: push    esi
0x466E61: push    68h ; 'h'
0x466E63: mov     esi, ecx
0x466E65: push    0
0x466E67: push    esi
0x466E68: call    __memset
0x466E6D: add     esp, 0Ch
0x466E70: mov     eax, esi
0x466E72: pop     esi
0x466E73: retn
