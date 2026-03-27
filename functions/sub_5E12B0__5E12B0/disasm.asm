0x5E12B0: cmp     dword ptr [ecx+58h], 0
0x5E12B4: jz      short loc_5E12C7
0x5E12B6: mov     eax, [ecx+58h]
0x5E12B9: mov     edx, [eax]
0x5E12BB: push    ecx
0x5E12BC: mov     ecx, eax
0x5E12BE: mov     eax, [edx+0E8h]
0x5E12C4: call    eax
0x5E12C6: retn
0x5E12C7: xor     eax, eax
0x5E12C9: retn
