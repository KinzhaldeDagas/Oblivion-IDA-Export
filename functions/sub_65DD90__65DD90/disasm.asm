0x65DD90: xor     edx, edx
0x65DD92: xor     eax, eax
0x65DD94: cmp     [ecx+0Ah], dx
0x65DD98: jbe     short loc_65DDB4
0x65DD9A: push    esi
0x65DD9B: push    edi
0x65DD9C: lea     esp, [esp+0]
0x65DDA0: mov     edi, [ecx+4]
0x65DDA3: movzx   esi, ax
0x65DDA6: add     eax, 1
0x65DDA9: mov     [edi+esi*4], edx
0x65DDAC: cmp     ax, [ecx+0Ah]
0x65DDB0: jb      short loc_65DDA0
0x65DDB2: pop     edi
0x65DDB3: pop     esi
0x65DDB4: mov     [ecx+0Ch], dx
0x65DDB8: mov     [ecx+0Ah], dx
0x65DDBC: retn
