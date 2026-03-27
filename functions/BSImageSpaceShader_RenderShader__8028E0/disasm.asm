0x8028E0: push    ebx
0x8028E1: mov     ebx, 1
0x8028E6: cmp     [esp+4+arg_C], bl
0x8028EA: push    ebp
0x8028EB: mov     ebp, ecx
0x8028ED: jnz     short loc_8028F5
0x8028EF: push    0
0x8028F1: push    0
0x8028F3: jmp     short loc_80290B
0x8028F5: mov     eax, [esp+8+arg_8]
0x8028F9: mov     ecx, [eax]; this
0x8028FB: test    ecx, ecx
0x8028FD: jz      short loc_802906
0x8028FF: call    BSRenderedTexture__UseTextureToRender
0x802904: jmp     short loc_802908
0x802906: xor     eax, eax
0x802908: push    0; clearFlags
0x80290A: push    eax; a1
0x80290B: call    StartUsingRenderTarget
0x802910: mov     ecx, [esp+10h+arg_4]
0x802914: add     esp, 8
0x802917: push    esi
0x802918: mov     esi, [ebp+7Ch]
0x80291B: push    edi
0x80291C: mov     edi, [ecx]
0x80291E: cmp     esi, edi
0x802920: jz      short loc_802952
0x802922: test    esi, esi
0x802924: jz      short loc_802941
0x802926: lea     edx, [esi+4]
0x802929: push    edx; lpAddend
0x80292A: call    dword ptr ds:0A2807Ch
0x802930: test    eax, eax
0x802932: jnz     short loc_802941
0x802934: test    esi, esi
0x802936: jz      short loc_802941
0x802938: mov     eax, [esi]
0x80293A: mov     edx, [eax]
0x80293C: push    ebx
0x80293D: mov     ecx, esi
0x80293F: call    edx
0x802941: test    edi, edi
0x802943: mov     [ebp+7Ch], edi
0x802946: jz      short loc_802952
0x802948: add     edi, 4
0x80294B: push    edi; lpAddend
0x80294C: call    dword ptr ds:0A28078h
0x802952: mov     ecx, ds:0B3F928h
0x802958: cmp     [ecx+200h], ebx
0x80295E: pop     edi
0x80295F: pop     esi
0x802960: jz      short loc_80296A
0x802962: cmp     [ecx+204h], ebx
0x802968: jnz     short loc_802984
0x80296A: cmp     [ecx+20Ch], bl
0x802970: jnz     short loc_802984
0x802972: mov     eax, [ecx]
0x802974: mov     edx, [eax+144h]
0x80297A: push    0
0x80297C: call    edx
0x80297E: mov     ecx, ds:0B3F928h
0x802984: push    ecx
0x802985: mov     ecx, [esp+0Ch+arg_0]; this
0x802989: call    sub_709C60
0x80298E: call    sub_7D7110
0x802993: pop     ebp
0x802994: pop     ebx
0x802995: retn    10h
