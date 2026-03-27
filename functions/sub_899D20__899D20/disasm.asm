0x899D20: mov     eax, [ecx+114h]
0x899D26: push    esi
0x899D27: lea     esi, [ecx+10Ch]
0x899D2D: mov     ecx, [esi+4]
0x899D30: and     eax, 3FFFFFFFh
0x899D35: cmp     ecx, eax
0x899D37: jnz     short loc_899D44
0x899D39: push    4
0x899D3B: push    esi
0x899D3C: call    sub_8A6EE0
0x899D41: add     esp, 8
0x899D44: mov     ecx, [esi+4]
0x899D47: mov     edx, [esi]
0x899D49: mov     eax, [esp+4+arg_0]
0x899D4D: mov     [edx+ecx*4], eax
0x899D50: inc     dword ptr [esi+4]
0x899D53: pop     esi
0x899D54: retn    4
