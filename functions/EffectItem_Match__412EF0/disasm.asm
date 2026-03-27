0x412EF0: mov     edx, [esp+arg_0]
0x412EF4: mov     eax, [edx]
0x412EF6: cmp     eax, [ecx]
0x412EF8: setz    al
0x412EFB: test    al, al
0x412EFD: jz      short EffectItem_Match___Done
0x412EFF: push    esi
0x412F00: mov     esi, [ecx+1Ch]
0x412F03: test    dword ptr [esi+58h], 180000h
0x412F0A: pop     esi
0x412F0B: jz      short EffectItem_Match___Done
0x412F0D: mov     edx, [edx+14h]
0x412F10: cmp     edx, [ecx+14h]
0x412F13: setz    al
0x412F16: retn    4
