0x997C77: test    byte ptr [ecx+0Ch], 40h
0x997C7B: jz      short loc_997C83
0x997C7D: cmp     dword ptr [ecx+8], 0
0x997C81: jz      short loc_997CA7
0x997C83: dec     dword ptr [ecx+4]
0x997C86: js      short loc_997C93
0x997C88: mov     edx, [ecx]
0x997C8A: mov     [edx], al
0x997C8C: inc     dword ptr [ecx]
0x997C8E: movzx   eax, al
0x997C91: jmp     short loc_997C9F
0x997C93: movsx   eax, al
0x997C96: push    ecx; File
0x997C97: push    eax; Ch
0x997C98: call    __flsbuf
0x997C9D: pop     ecx
0x997C9E: pop     ecx
0x997C9F: cmp     eax, 0FFFFFFFFh
0x997CA2: jnz     short loc_997CA7
0x997CA4: or      [esi], eax
0x997CA6: retn
0x997CA7: inc     dword ptr [esi]
0x997CA9: retn
