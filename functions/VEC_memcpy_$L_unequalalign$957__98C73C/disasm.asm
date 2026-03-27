0x98C73C: mov     esi, [ebp+0Ch]
0x98C73F: mov     edi, [ebp+8]
0x98C742: mov     ecx, [ebp+10h]
0x98C745: mov     edx, ecx
0x98C747: shr     ecx, 2
0x98C74A: rep movsd
0x98C74C: mov     ecx, edx
0x98C74E: and     ecx, 3
0x98C751: rep movsb
0x98C753: mov     eax, [ebp+8]
