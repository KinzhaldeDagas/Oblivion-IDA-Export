0x7A8790: push    ecx; OBLIVION AUTHORITY (2026-08-30): Uninitialized fill_n wrapper for SLodEntry; returns destination+count.
0x7A8791: mov     edx, [esp+4+value]
0x7A8795: push    esi
0x7A8796: mov     esi, [esp+8+count]
0x7A879A: push    edi
0x7A879B: mov     edi, [esp+0Ch+destination]
0x7A879F: mov     byte ptr [esp+0Ch+var_4], 0
0x7A87A4: mov     eax, [esp+0Ch+var_4]
0x7A87A8: push    eax
0x7A87A9: mov     eax, [esp+10h+value]
0x7A87AD: push    edx
0x7A87AE: push    ecx
0x7A87AF: push    eax; value
0x7A87B0: push    esi; count
0x7A87B1: push    edi; destination
0x7A87B2: call    OB_LeafLodEntry_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Placement-fills count uninitialized 8-byte SLodEntry slots from one source pair.
0x7A87B7: add     esp, 18h
0x7A87BA: lea     eax, [edi+esi*8]
0x7A87BD: pop     edi
0x7A87BE: pop     esi
0x7A87BF: pop     ecx
0x7A87C0: retn    0Ch
