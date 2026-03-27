0x8BD190: push    esi
0x8BD191: mov     esi, [esp+4+arg_0]
0x8BD195: push    edi
0x8BD196: push    esi
0x8BD197: mov     edi, ecx
0x8BD199: call    sub_721550
0x8BD19E: mov     ecx, esi
0x8BD1A0: call    sub_7124D0
0x8BD1A5: test    eax, eax
0x8BD1A7: jbe     short loc_8BD1C9
0x8BD1A9: push    ebx
0x8BD1AA: mov     ebx, eax
0x8BD1AC: lea     esp, [esp+0]
0x8BD1B0: mov     ecx, esi
0x8BD1B2: call    sub_7124A0
0x8BD1B7: test    eax, eax
0x8BD1B9: jz      short loc_8BD1C3
0x8BD1BB: push    eax
0x8BD1BC: mov     ecx, edi
0x8BD1BE: call    sub_8BD090
0x8BD1C3: sub     ebx, 1
0x8BD1C6: jnz     short loc_8BD1B0
0x8BD1C8: pop     ebx
0x8BD1C9: pop     edi
0x8BD1CA: pop     esi
0x8BD1CB: retn    4
