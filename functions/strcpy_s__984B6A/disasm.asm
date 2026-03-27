0x984B6A: mov     ecx, [esp+Dst]
0x984B6E: push    ebx
0x984B6F: xor     ebx, ebx
0x984B71: cmp     ecx, ebx
0x984B73: push    esi
0x984B74: push    edi
0x984B75: jz      short loc_984B7F
0x984B77: mov     edi, [esp+0Ch+SizeInBytes]
0x984B7B: cmp     edi, ebx
0x984B7D: ja      short loc_984B9A
0x984B7F: call    __errno
0x984B84: push    16h
0x984B86: pop     esi
0x984B87: mov     [eax], esi
0x984B89: push    ebx
0x984B8A: push    ebx
0x984B8B: push    ebx
0x984B8C: push    ebx
0x984B8D: push    ebx
0x984B8E: call    __invalid_parameter
0x984B93: add     esp, 14h
0x984B96: mov     eax, esi
0x984B98: jmp     short loc_984BCB
0x984B9A: mov     esi, [esp+0Ch+Src]
0x984B9E: cmp     esi, ebx
0x984BA0: jnz     short loc_984BA6
0x984BA2: mov     [ecx], bl
0x984BA4: jmp     short loc_984B7F
0x984BA6: mov     edx, ecx
0x984BA8: mov     al, [esi]
0x984BAA: mov     [edx], al
0x984BAC: inc     edx
0x984BAD: inc     esi
0x984BAE: cmp     al, bl
0x984BB0: jz      short loc_984BB5
0x984BB2: dec     edi
0x984BB3: jnz     short loc_984BA8
0x984BB5: cmp     edi, ebx
0x984BB7: jnz     short loc_984BC9
0x984BB9: mov     [ecx], bl
0x984BBB: call    __errno
0x984BC0: push    22h ; '"'
0x984BC2: pop     ecx
0x984BC3: mov     [eax], ecx
0x984BC5: mov     esi, ecx
0x984BC7: jmp     short loc_984B89
0x984BC9: xor     eax, eax
0x984BCB: pop     edi
0x984BCC: pop     esi
0x984BCD: pop     ebx
0x984BCE: retn
