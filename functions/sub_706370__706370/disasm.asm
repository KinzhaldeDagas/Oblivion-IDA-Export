0x706370: push    esi
0x706371: push    edi
0x706372: mov     edi, [esp+8+arg_0]
0x706376: push    edi
0x706377: mov     esi, ecx
0x706379: call    sub_6D7E00
0x70637E: test    al, al
0x706380: jz      short loc_7063A0
0x706382: movzx   eax, word ptr [edi+18h]
0x706386: movzx   ecx, word ptr [esi+18h]
0x70638A: mov     dl, al
0x70638C: xor     dl, cl
0x70638E: test    dl, 30h
0x706391: jnz     short loc_7063A0
0x706393: xor     al, cl
0x706395: test    al, 8
0x706397: jnz     short loc_7063A0
0x706399: pop     edi
0x70639A: mov     al, 1
0x70639C: pop     esi
0x70639D: retn    4
0x7063A0: pop     edi
0x7063A1: xor     al, al
0x7063A3: pop     esi
0x7063A4: retn    4
