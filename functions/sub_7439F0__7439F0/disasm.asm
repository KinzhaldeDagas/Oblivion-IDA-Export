0x7439F0: push    esi
0x7439F1: mov     esi, eax
0x7439F3: mov     eax, [esi+1Ch]
0x7439F6: mov     ecx, [esi+10h]
0x7439F9: push    edi
0x7439FA: mov     edi, [eax+14h]
0x7439FD: cmp     edi, ecx
0x7439FF: jbe     short loc_743A03
0x743A01: mov     edi, ecx
0x743A03: test    edi, edi
0x743A05: jz      short loc_743A3C
0x743A07: mov     eax, [eax+10h]
0x743A0A: mov     ecx, [esi+0Ch]
0x743A0D: push    edi; Size
0x743A0E: push    eax; Src
0x743A0F: push    ecx; Dst
0x743A10: call    _memcpy
0x743A15: mov     eax, [esi+1Ch]
0x743A18: add     [esi+0Ch], edi
0x743A1B: add     [eax+10h], edi
0x743A1E: add     [esi+14h], edi
0x743A21: sub     [esi+10h], edi
0x743A24: mov     eax, [esi+1Ch]
0x743A27: sub     [eax+14h], edi
0x743A2A: mov     esi, [esi+1Ch]
0x743A2D: add     esp, 0Ch
0x743A30: cmp     dword ptr [esi+14h], 0
0x743A34: jnz     short loc_743A3C
0x743A36: mov     edx, [esi+8]
0x743A39: mov     [esi+10h], edx
0x743A3C: pop     edi
0x743A3D: pop     esi
0x743A3E: retn
