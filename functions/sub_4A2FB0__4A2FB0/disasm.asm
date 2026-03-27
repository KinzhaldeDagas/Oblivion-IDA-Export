0x4A2FB0: push    esi
0x4A2FB1: mov     esi, [ecx+1Ch]
0x4A2FB4: test    esi, esi
0x4A2FB6: jz      short loc_4A2FE4
0x4A2FB8: mov     ecx, [ecx+18h]
0x4A2FBB: test    ecx, ecx
0x4A2FBD: jz      short loc_4A2FE4
0x4A2FBF: call    sub_4A44A0
0x4A2FC4: test    al, al
0x4A2FC6: jz      short loc_4A2FE4
0x4A2FC8: mov     ecx, [esi]
0x4A2FCA: test    ecx, ecx
0x4A2FCC: jz      short loc_4A2FE0
0x4A2FCE: push    1
0x4A2FD0: call    sub_4A78A0
0x4A2FD5: test    al, al
0x4A2FD7: jz      short loc_4A2FE4
0x4A2FD9: mov     esi, [esi+4]
0x4A2FDC: test    esi, esi
0x4A2FDE: jnz     short loc_4A2FC8
0x4A2FE0: mov     al, 1
0x4A2FE2: pop     esi
0x4A2FE3: retn
0x4A2FE4: xor     al, al
0x4A2FE6: pop     esi
0x4A2FE7: retn
