0x9A16B5: push    esi
0x9A16B6: mov     esi, dword_BA9DB4
0x9A16BC: jmp     short loc_9A16E0
0x9A16BE: push    edi; size_t
0x9A16BF: push    eax; unsigned __int8 *
0x9A16C0: push    [esp+0Ch+arg_0]; unsigned __int8 *
0x9A16C4: call    __mbsnbicoll
0x9A16C9: add     esp, 0Ch
0x9A16CC: test    eax, eax
0x9A16CE: jnz     short loc_9A16DD
0x9A16D0: mov     eax, [esi]
0x9A16D2: mov     al, [edi+eax]
0x9A16D5: cmp     al, 3Dh ; '='
0x9A16D7: jz      short loc_9A16F5
0x9A16D9: test    al, al
0x9A16DB: jz      short loc_9A16F5
0x9A16DD: add     esi, 4
0x9A16E0: mov     eax, [esi]
0x9A16E2: test    eax, eax
0x9A16E4: jnz     short loc_9A16BE
0x9A16E6: mov     eax, esi
0x9A16E8: sub     eax, dword_BA9DB4
0x9A16EE: pop     esi
0x9A16EF: sar     eax, 2
0x9A16F2: neg     eax
0x9A16F4: retn
0x9A16F5: mov     eax, esi
0x9A16F7: sub     eax, dword_BA9DB4
0x9A16FD: pop     esi
0x9A16FE: sar     eax, 2
0x9A1701: retn
