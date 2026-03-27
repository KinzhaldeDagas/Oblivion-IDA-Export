0x734870: push    esi
0x734871: xor     esi, esi
0x734873: cmp     [ecx+10Eh], si
0x73487A: jbe     short loc_7348A4
0x73487C: mov     edx, [esp+4+arg_4]
0x734880: push    edi
0x734881: mov     edi, [esp+8+arg_0]
0x734885: mov     al, [edi]
0x734887: mov     [edx+2], al
0x73488A: mov     [edx+1], al
0x73488D: mov     [edx], al
0x73488F: movzx   eax, word ptr [ecx+10Eh]
0x734896: add     esi, 1
0x734899: add     edx, 3
0x73489C: add     edi, 1
0x73489F: cmp     esi, eax
0x7348A1: jb      short loc_734885
0x7348A3: pop     edi
0x7348A4: pop     esi
0x7348A5: retn    8
