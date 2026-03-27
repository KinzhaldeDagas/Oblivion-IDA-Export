0x4A3BB0: push    esi
0x4A3BB1: mov     esi, [esp+4+arg_0]
0x4A3BB5: test    esi, esi
0x4A3BB7: push    edi
0x4A3BB8: mov     edi, ecx
0x4A3BBA: jnz     short loc_4A3BC3
0x4A3BBC: pop     edi
0x4A3BBD: xor     al, al
0x4A3BBF: pop     esi
0x4A3BC0: retn    4
0x4A3BC3: mov     ecx, esi
0x4A3BC5: call    TESFile_GetChunkType
0x4A3BCA: cmp     eax, 4E4F4349h
0x4A3BCF: jnz     short loc_4A3BDE
0x4A3BD1: mov     eax, [edi+8]
0x4A3BD4: push    esi
0x4A3BD5: push    eax
0x4A3BD6: call    TESTexture_Load
0x4A3BDB: add     esp, 8
0x4A3BDE: pop     edi
0x4A3BDF: mov     al, 1
0x4A3BE1: pop     esi
0x4A3BE2: retn    4
