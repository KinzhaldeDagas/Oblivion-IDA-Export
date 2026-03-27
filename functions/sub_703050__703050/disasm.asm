0x703050: movzx   eax, word ptr [ecx+8]
0x703054: test    ax, ax
0x703057: mov     byte ptr [ecx+6Eh], 0
0x70305B: jbe     short locret_70306D
0x70305D: mov     edx, [ecx+1Ch]
0x703060: movzx   eax, ax
0x703063: push    edx
0x703064: push    eax
0x703065: add     ecx, 0Ch
0x703068: call    sub_72A0F0
0x70306D: retn
