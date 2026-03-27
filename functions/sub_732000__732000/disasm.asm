0x732000: cmp     dword ptr [ecx+10h], 0
0x732004: mov     eax, ds:0B3F928h
0x732009: jz      short loc_73203D
0x73200B: test    eax, eax
0x73200D: jz      short loc_73203D
0x73200F: mov     edx, [esp+arg_0]
0x732013: cmp     dword ptr [edx+10h], 0
0x732017: jz      short loc_73203D
0x732019: push    esi
0x73201A: mov     esi, [eax]
0x73201C: push    edi
0x73201D: mov     edi, [esp+8+arg_C]
0x732021: push    edi
0x732022: mov     edi, [esp+0Ch+arg_8]
0x732026: push    edi
0x732027: mov     edi, [esp+10h+arg_4]
0x73202B: push    edi
0x73202C: push    edx
0x73202D: push    ecx
0x73202E: mov     ecx, eax
0x732030: mov     eax, [esi+0DCh]
0x732036: call    eax
0x732038: pop     edi
0x732039: pop     esi
0x73203A: retn    10h
0x73203D: xor     al, al
0x73203F: retn    10h
