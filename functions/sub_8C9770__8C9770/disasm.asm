0x8C9770: push    esi
0x8C9771: push    edi
0x8C9772: mov     edi, ecx
0x8C9774: test    edi, edi
0x8C9776: jz      short loc_8C978B
0x8C9778: mov     eax, [edi+8]
0x8C977B: test    eax, eax
0x8C977D: jz      short loc_8C978B
0x8C977F: mov     eax, [eax+10h]
0x8C9782: test    eax, eax
0x8C9784: jz      short loc_8C978B
0x8C9786: mov     ecx, [eax+8]
0x8C9789: jmp     short loc_8C978D
0x8C978B: xor     ecx, ecx
0x8C978D: test    ecx, ecx
0x8C978F: mov     esi, [esp+8+arg_0]
0x8C9793: jz      short loc_8C979D
0x8C9795: mov     eax, [ecx]
0x8C9797: mov     edx, [eax+24h]
0x8C979A: push    esi
0x8C979B: call    edx
0x8C979D: push    esi
0x8C979E: mov     ecx, edi
0x8C97A0: call    sub_6EC2C0
0x8C97A5: pop     edi
0x8C97A6: pop     esi
0x8C97A7: retn    4
