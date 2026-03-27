0x4B1530: movzx   eax, word ptr [ecx+38h]
0x4B1534: cmp     ax, 0FFFFh
0x4B1538: jnz     short loc_4B154F
0x4B153A: mov     eax, [ecx+34h]
0x4B153D: push    esi
0x4B153E: lea     esi, [eax+1]
0x4B1541: mov     dl, [eax]
0x4B1543: add     eax, 1
0x4B1546: test    dl, dl
0x4B1548: jnz     short loc_4B1541
0x4B154A: sub     eax, esi
0x4B154C: pop     esi
0x4B154D: jmp     short loc_4B1552
0x4B154F: movzx   eax, ax
0x4B1552: test    eax, eax
0x4B1554: jz      short locret_4B1571
0x4B1556: mov     eax, [ecx+30h]
0x4B1559: mov     edx, [eax+14h]
0x4B155C: add     ecx, 30h ; '0'
0x4B155F: call    edx
0x4B1561: mov     ecx, ds:0B33A1Ch
0x4B1567: push    1
0x4B1569: push    1
0x4B156B: push    eax
0x4B156C: call    QueuedModelLoader_RemoveModel
0x4B1571: retn    4
