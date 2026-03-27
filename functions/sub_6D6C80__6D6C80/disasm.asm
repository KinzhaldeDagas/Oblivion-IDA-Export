0x6D6C80: cmp     dword ptr [ecx+44h], 0
0x6D6C84: jz      short loc_6D6C89
0x6D6C86: mov     al, 1
0x6D6C88: retn
0x6D6C89: mov     eax, [ecx+30h]
0x6D6C8C: test    eax, eax
0x6D6C8E: jnz     short loc_6D6C93
0x6D6C90: xor     al, al
0x6D6C92: retn
0x6D6C93: cmp     byte ptr [ecx+48h], 0
0x6D6C97: mov     edx, [ecx+4Ch]
0x6D6C9A: jz      short loc_6D6CC7
0x6D6C9C: mov     eax, [eax+2Ch]
0x6D6C9F: test    eax, eax
0x6D6CA1: jz      short loc_6D6CBC
0x6D6CA3: push    esi
0x6D6CA4: movzx   esi, word ptr [eax+0Ah]
0x6D6CA8: cmp     edx, esi
0x6D6CAA: pop     esi
0x6D6CAB: jnb     short loc_6D6CBC
0x6D6CAD: mov     eax, [eax+4]
0x6D6CB0: mov     edx, [eax+edx*4]
0x6D6CB3: test    edx, edx
0x6D6CB5: mov     [ecx+44h], edx
0x6D6CB8: setnz   al
0x6D6CBB: retn
0x6D6CBC: xor     edx, edx
0x6D6CBE: test    edx, edx
0x6D6CC0: mov     [ecx+44h], edx
0x6D6CC3: setnz   al
0x6D6CC6: retn
0x6D6CC7: mov     eax, [eax+20h]
0x6D6CCA: mov     edx, [eax+edx*4]
0x6D6CCD: test    edx, edx
0x6D6CCF: mov     [ecx+44h], edx
0x6D6CD2: setnz   al
0x6D6CD5: retn
