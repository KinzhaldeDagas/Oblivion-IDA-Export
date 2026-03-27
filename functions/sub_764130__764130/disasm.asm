0x764130: xor     edx, edx
0x764132: push    esi
0x764133: xor     eax, eax
0x764135: cmp     [ecx+0AC2h], dx
0x76413C: push    edi
0x76413D: jbe     short loc_764158
0x76413F: nop
0x764140: mov     edi, [ecx+0ABCh]
0x764146: movzx   esi, ax
0x764149: add     eax, 1
0x76414C: mov     [edi+esi*4], edx
0x76414F: cmp     ax, [ecx+0AC2h]
0x764156: jb      short loc_764140
0x764158: mov     [ecx+0AC2h], dx
0x76415F: mov     [ecx+0AC4h], dx
0x764166: xor     eax, eax
0x764168: cmp     [ecx+0AD2h], dx
0x76416F: jbe     short loc_764189
0x764171: mov     edi, [ecx+0ACCh]
0x764177: movzx   esi, ax
0x76417A: add     eax, 1
0x76417D: mov     [edi+esi*4], edx
0x764180: cmp     ax, [ecx+0AD2h]
0x764187: jb      short loc_764171
0x764189: pop     edi
0x76418A: mov     [ecx+0AD4h], dx
0x764191: mov     [ecx+0AD2h], dx
0x764198: pop     esi
0x764199: retn
