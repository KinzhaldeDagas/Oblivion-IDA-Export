0x9928DB: push    ebp
0x9928DC: mov     ebp, esp
0x9928DE: xor     edx, edx
0x9928E0: cmp     [ebp+arg_4], 7FF00000h
0x9928E7: jnz     short loc_9928F3
0x9928E9: cmp     [ebp+arg_0], edx
0x9928EC: jnz     short loc_992906
0x9928EE: xor     eax, eax
0x9928F0: inc     eax
0x9928F1: pop     ebp
0x9928F2: retn
0x9928F3: cmp     [ebp+arg_4], 0FFF00000h
0x9928FA: jnz     short loc_992906
0x9928FC: cmp     [ebp+arg_0], edx
0x9928FF: jnz     short loc_992906
0x992901: push    2
0x992903: pop     eax
0x992904: pop     ebp
0x992905: retn
0x992906: mov     ecx, [ebp+arg_4+2]
0x992909: mov     eax, 7FF8h
0x99290E: and     ecx, eax
0x992910: cmp     cx, ax
0x992913: jnz     short loc_992919
0x992915: push    3
0x992917: jmp     short loc_992903
0x992919: cmp     cx, 7FF0h
0x99291E: jnz     short loc_992932
0x992920: test    [ebp+arg_4], 7FFFFh
0x992927: jnz     short loc_99292E
0x992929: cmp     [ebp+arg_0], edx
0x99292C: jz      short loc_992932
0x99292E: push    4
0x992930: jmp     short loc_992903
0x992932: xor     eax, eax
0x992934: pop     ebp
0x992935: retn
