0x480930: push    edi
0x480931: mov     edi, [esp+4+arg_0]
0x480935: test    edi, edi
0x480937: jz      short loc_480996
0x480939: push    esi
0x48093A: mov     esi, [edi+0Ch]
0x48093D: test    esi, esi
0x48093F: jz      short loc_480951
0x480941: mov     eax, [esi]
0x480943: mov     edx, [eax+68h]
0x480946: mov     ecx, esi
0x480948: call    edx
0x48094A: mov     esi, [esi+34h]
0x48094D: test    esi, esi
0x48094F: jnz     short loc_480941
0x480951: mov     eax, [edi]
0x480953: mov     edx, [eax+8]
0x480956: mov     ecx, edi
0x480958: call    edx
0x48095A: mov     edi, eax
0x48095C: test    edi, edi
0x48095E: jz      short loc_480995
0x480960: movzx   eax, word ptr [edi+0B6h]
0x480967: xor     esi, esi
0x480969: test    eax, eax
0x48096B: jbe     short loc_480995
0x48096D: cmp     eax, esi
0x48096F: ja      short loc_480975
0x480971: xor     eax, eax
0x480973: jmp     short loc_48097E
0x480975: mov     eax, [edi+0B0h]
0x48097B: mov     eax, [eax+esi*4]
0x48097E: push    eax
0x48097F: call    sub_480930
0x480984: movzx   eax, word ptr [edi+0B6h]
0x48098B: add     esi, 1
0x48098E: add     esp, 4
0x480991: cmp     eax, esi
0x480993: ja      short loc_480975
0x480995: pop     esi
0x480996: pop     edi
0x480997: retn
