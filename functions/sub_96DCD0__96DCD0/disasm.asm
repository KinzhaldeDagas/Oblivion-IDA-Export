0x96DCD0: push    esi
0x96DCD1: mov     esi, ecx
0x96DCD3: mov     ecx, [esi+8]
0x96DCD6: test    ecx, ecx
0x96DCD8: jz      short loc_96DD33
0x96DCDA: mov     eax, [ecx]
0x96DCDC: mov     edx, [eax+10h]
0x96DCDF: push    edi
0x96DCE0: call    edx
0x96DCE2: mov     edi, eax
0x96DCE4: test    edi, edi
0x96DCE6: jz      short loc_96DD32
0x96DCE8: cmp     dword ptr [esi+40h], 0
0x96DCEC: jnz     short loc_96DD32
0x96DCEE: mov     eax, [edi+0B4h]
0x96DCF4: movzx   eax, word ptr [eax+8]
0x96DCF8: test    ax, ax
0x96DCFB: jz      short loc_96DD32
0x96DCFD: mov     [esi+4Ah], ax
0x96DD01: movzx   eax, ax
0x96DD04: xor     ecx, ecx
0x96DD06: mov     edx, 0Ch
0x96DD0B: mul     edx
0x96DD0D: seto    cl
0x96DD10: neg     ecx
0x96DD12: or      ecx, eax
0x96DD14: push    ecx; Size
0x96DD15: call    FormHeapAlloc
0x96DD1A: mov     [esi+40h], eax
0x96DD1D: mov     byte ptr [esi+48h], 1
0x96DD21: mov     eax, [edi+0B4h]
0x96DD27: mov     cx, [eax+40h]
0x96DD2B: add     esp, 4
0x96DD2E: mov     [esi+4Ch], cx
0x96DD32: pop     edi
0x96DD33: pop     esi
0x96DD34: retn
