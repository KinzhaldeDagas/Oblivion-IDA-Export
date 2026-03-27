0x959BC0: push    ebx
0x959BC1: xor     ebx, ebx
0x959BC3: push    esi
0x959BC4: mov     esi, ecx
0x959BC6: mov     [esi+14h], ebx
0x959BC9: mov     dword ptr [esi+18h], offset ??_7?$NiTArray@PAVRecord@NiPick@@@@6B@; const NiTArray<NiPick::Record *>::`vftable'
0x959BD0: mov     [esi+20h], bx
0x959BD4: mov     word ptr [esi+26h], 1
0x959BDA: mov     [esi+22h], bx
0x959BDE: mov     [esi+24h], bx
0x959BE2: mov     [esi+1Ch], ebx
0x959BE5: push    edi
0x959BE6: mov     [esi], ebx
0x959BE8: mov     [esi+4], ebx
0x959BEB: mov     dword ptr [esi+8], 1
0x959BF2: mov     dword ptr [esi+0Ch], 1
0x959BF9: mov     byte ptr [esi+10h], 1
0x959BFD: mov     [esi+11h], bl
0x959C00: mov     edi, [esi+14h]
0x959C03: cmp     edi, ebx
0x959C05: jz      short loc_959C26
0x959C07: lea     eax, [edi+4]
0x959C0A: push    eax; lpAddend
0x959C0B: call    dword ptr ds:0A2807Ch
0x959C11: test    eax, eax
0x959C13: jnz     short loc_959C23
0x959C15: cmp     edi, ebx
0x959C17: jz      short loc_959C23
0x959C19: mov     edx, [edi]
0x959C1B: mov     eax, [edx]
0x959C1D: push    1
0x959C1F: mov     ecx, edi
0x959C21: call    eax
0x959C23: mov     [esi+14h], ebx
0x959C26: pop     edi
0x959C27: mov     [esi+2Ch], bl
0x959C2A: mov     [esi+2Dh], bl
0x959C2D: mov     [esi+2Eh], bl
0x959C30: mov     [esi+2Fh], bl
0x959C33: mov     [esi+28h], ebx
0x959C36: mov     eax, esi
0x959C38: pop     esi
0x959C39: pop     ebx
0x959C3A: retn
