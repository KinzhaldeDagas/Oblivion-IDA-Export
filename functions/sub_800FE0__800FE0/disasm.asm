0x800FE0: push    esi
0x800FE1: mov     esi, ecx
0x800FE3: mov     ecx, [esi+18h]
0x800FE6: mov     eax, [ecx]
0x800FE8: mov     edx, [eax+4]
0x800FEB: push    edi
0x800FEC: mov     edi, [esp+8+a5]
0x800FF0: push    edi
0x800FF1: call    edx
0x800FF3: mov     eax, [esp+8+a8]
0x800FF7: mov     ecx, [esp+8+a7]
0x800FFB: mov     edx, [esp+8+a6]
0x800FFF: push    eax; a8
0x801000: mov     eax, [esp+0Ch+a4]
0x801004: push    ecx; a7
0x801005: mov     ecx, [esp+10h+a3]
0x801009: push    edx; a6
0x80100A: mov     edx, [esp+14h+a2]
0x80100E: push    edi; a5
0x80100F: push    eax; a4
0x801010: push    ecx; a3
0x801011: push    edx; a2
0x801012: mov     ecx, esi; this
0x801014: call    sub_77A150
0x801019: pop     edi
0x80101A: pop     esi
0x80101B: retn    1Ch
