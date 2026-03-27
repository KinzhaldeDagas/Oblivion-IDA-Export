0x5979A0: push    esi
0x5979A1: push    3F0h
0x5979A6: mov     esi, ecx
0x5979A8: call    InterfaceManager_MenuModeHasFocus
0x5979AD: add     esp, 4
0x5979B0: test    al, al
0x5979B2: jz      short loc_597A0A
0x5979B4: mov     eax, [esp+4+arg_0]
0x5979B8: cmp     eax, 0Dh
0x5979BB: jnz     short loc_5979E1
0x5979BD: fld1
0x5979BF: fcomp   [esp+4+arg_4]
0x5979C3: fnstsw  ax
0x5979C5: test    ah, 41h
0x5979C8: jp      short loc_597A0A
0x5979CA: mov     eax, [esi]
0x5979CC: mov     edx, [eax+0Ch]
0x5979CF: push    0
0x5979D1: push    2Ah ; '*'
0x5979D3: mov     ecx, esi
0x5979D5: mov     byte ptr [esi+56h], 1
0x5979D9: call    edx
0x5979DB: mov     al, 1
0x5979DD: pop     esi
0x5979DE: retn    8
0x5979E1: cmp     eax, 0Eh
0x5979E4: jnz     short loc_597A0A
0x5979E6: fld1
0x5979E8: fcomp   [esp+4+arg_4]
0x5979EC: fnstsw  ax
0x5979EE: test    ah, 41h
0x5979F1: jp      short loc_597A0A
0x5979F3: mov     eax, [esi]
0x5979F5: mov     edx, [eax+0Ch]
0x5979F8: push    0
0x5979FA: push    2Bh ; '+'
0x5979FC: mov     ecx, esi
0x5979FE: mov     byte ptr [esi+56h], 0
0x597A02: call    edx
0x597A04: mov     al, 1
0x597A06: pop     esi
0x597A07: retn    8
0x597A0A: xor     al, al
0x597A0C: pop     esi
0x597A0D: retn    8
