0x981630: mov     edx, [esp+arg_8]
0x981634: mov     ecx, [esp+arg_0]
0x981638: test    edx, edx
0x98163A: jz      short toend
0x98163C: xor     eax, eax
0x98163E: mov     al, [esp+arg_4]
0x981642: test    al, al
0x981644: jnz     short loc_98165C
0x981646: cmp     edx, 100h
0x98164C: jb      short loc_98165C
0x98164E: cmp     dword ptr ds:0BAABE0h, 0
0x981655: jz      short loc_98165C
0x981657: jmp     __VEC_memzero
0x98165C: push    edi
0x98165D: mov     edi, ecx
0x98165F: cmp     edx, 4
0x981662: jb      short tail
0x981664: neg     ecx
0x981666: and     ecx, 3
0x981669: jz      short dwords
0x98166B: sub     edx, ecx
0x98166D: mov     [edi], al
0x98166F: add     edi, 1
0x981672: sub     ecx, 1
0x981675: jnz     short adjust_loop
0x981677: mov     ecx, eax
0x981679: shl     eax, 8
0x98167C: add     eax, ecx
0x98167E: mov     ecx, eax
0x981680: shl     eax, 10h
0x981683: add     eax, ecx
0x981685: mov     ecx, edx
0x981687: and     edx, 3
0x98168A: shr     ecx, 2
0x98168D: jz      short tail
0x98168F: rep stosd
0x981691: test    edx, edx
0x981693: jz      short finish
0x981695: mov     [edi], al
0x981697: add     edi, 1
0x98169A: sub     edx, 1
0x98169D: jnz     short tail
0x98169F: mov     eax, [esp+4+arg_0]
0x9816A3: pop     edi
0x9816A4: retn
0x9816A5: mov     eax, [esp+arg_0]
0x9816A9: retn
