0x91BA70: mov     ecx, [esp+arg_0]
0x91BA74: sub     esp, 8
0x91BA77: push    esi
0x91BA78: mov     esi, [ecx+48h]
0x91BA7B: xor     eax, eax
0x91BA7D: test    esi, esi
0x91BA7F: jle     short loc_91BA94
0x91BA81: mov     edx, [ecx+44h]
0x91BA84: cmp     dword ptr [edx], 1134h
0x91BA8A: jz      short loc_91BA9C
0x91BA8C: inc     eax
0x91BA8D: add     edx, 10h
0x91BA90: cmp     eax, esi
0x91BA92: jl      short loc_91BA84
0x91BA94: lea     eax, [ecx+14h]
0x91BA97: pop     esi
0x91BA98: add     esp, 8
0x91BA9B: retn
0x91BA9C: push    1134h
0x91BAA1: lea     eax, [esp+10h+var_8]
0x91BAA5: push    eax
0x91BAA6: call    sub_47F990
0x91BAAB: mov     eax, [eax]
0x91BAAD: pop     esi
0x91BAAE: add     esp, 8
0x91BAB1: retn
