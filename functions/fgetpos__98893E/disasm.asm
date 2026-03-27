0x98893E: push    edi
0x98893F: xor     edi, edi
0x988941: cmp     [esp+4+File], edi
0x988945: jnz     short loc_988964
0x988947: call    __errno
0x98894C: push    edi
0x98894D: push    edi
0x98894E: push    edi
0x98894F: push    edi
0x988950: push    edi
0x988951: mov     dword ptr [eax], 16h
0x988957: call    __invalid_parameter
0x98895C: add     esp, 14h
0x98895F: or      eax, 0FFFFFFFFh
0x988962: pop     edi
0x988963: retn
0x988964: push    esi
0x988965: mov     esi, [esp+8+Pos]
0x988969: cmp     esi, edi
0x98896B: jnz     short loc_98898A
0x98896D: call    __errno
0x988972: push    edi
0x988973: push    edi
0x988974: push    edi
0x988975: push    edi
0x988976: push    edi
0x988977: mov     dword ptr [eax], 16h
0x98897D: call    __invalid_parameter
0x988982: add     esp, 14h
0x988985: or      eax, 0FFFFFFFFh
0x988988: jmp     short loc_9889A6
0x98898A: push    [esp+8+File]; File
0x98898E: call    __ftelli64
0x988993: pop     ecx
0x988994: mov     ecx, eax
0x988996: mov     [esi], eax
0x988998: and     ecx, edx
0x98899A: or      eax, 0FFFFFFFFh
0x98899D: cmp     ecx, eax
0x98899F: mov     [esi+4], edx
0x9889A2: jz      short loc_9889A6
0x9889A4: xor     eax, eax
0x9889A6: pop     esi
0x9889A7: pop     edi
0x9889A8: retn
