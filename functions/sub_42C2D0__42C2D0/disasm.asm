0x42C2D0: cmp     [esp+arg_4], 0
0x42C2D5: mov     eax, [esp+arg_0]
0x42C2D9: jnz     short loc_42C2F6
0x42C2DB: mov     edx, [eax+0Ch]
0x42C2DE: mov     cl, [ecx+194h]
0x42C2E4: shr     edx, 1Fh
0x42C2E7: shr     cl, 3
0x42C2EA: xor     dl, cl
0x42C2EC: test    dl, 1
0x42C2EF: jz      short loc_42C2F6
0x42C2F1: xor     al, al
0x42C2F3: retn    8
0x42C2F6: test    dword ptr [eax+0Ch], 7FFFFFFFh
0x42C2FD: setnz   al
0x42C300: retn    8
