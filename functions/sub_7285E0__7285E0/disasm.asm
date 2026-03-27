0x7285E0: cmp     dword ptr [ecx+1Ch], 0
0x7285E4: push    esi
0x7285E5: jz      short loc_7285F4
0x7285E7: movzx   eax, word ptr [ecx+8]
0x7285EB: lea     esi, [eax+eax*2]
0x7285EE: add     esi, esi
0x7285F0: add     esi, esi
0x7285F2: jmp     short loc_7285F6
0x7285F4: xor     esi, esi
0x7285F6: cmp     dword ptr [ecx+20h], 0
0x7285FA: jz      short loc_72861C
0x7285FC: mov     ax, [ecx+2Ch]
0x728600: movzx   edx, word ptr [ecx+8]
0x728604: and     ax, 0F000h
0x728608: neg     ax
0x72860B: sbb     eax, eax
0x72860D: and     eax, 2
0x728610: add     eax, 1
0x728613: imul    eax, edx
0x728616: lea     eax, [eax+eax*2]
0x728619: lea     esi, [esi+eax*4]
0x72861C: cmp     dword ptr [ecx+24h], 0
0x728620: jz      short loc_72862B
0x728622: movzx   edx, word ptr [ecx+8]
0x728626: shl     edx, 4
0x728629: add     esi, edx
0x72862B: cmp     dword ptr [ecx+28h], 0
0x72862F: jz      short loc_728642
0x728631: movzx   eax, byte ptr [ecx+2Ch]
0x728635: movzx   edx, word ptr [ecx+8]
0x728639: and     eax, 3Fh
0x72863C: imul    eax, edx
0x72863F: lea     esi, [esi+eax*8]
0x728642: call    nullsub_return0_0arg
0x728647: add     eax, esi
0x728649: pop     esi
0x72864A: retn
