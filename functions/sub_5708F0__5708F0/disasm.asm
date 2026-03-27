0x5708F0: sub     esp, 8
0x5708F3: push    esi
0x5708F4: mov     esi, [esp+0Ch+arg_0]
0x5708F8: test    esi, esi
0x5708FA: mov     [esp+0Ch+var_4], ecx
0x5708FE: jz      loc_570A22
0x570904: push    ebx
0x570905: push    ebp
0x570906: push    edi
0x570907: push    esi
0x570908: push    offset dword_B40864
0x57090D: call    NiRTTI_Cast
0x570912: mov     ebx, [esp+20h+arg_8]
0x570916: mov     ebp, [esp+20h+arg_4]
0x57091A: add     esp, 8
0x57091D: test    eax, eax
0x57091F: mov     [esp+18h+var_8], eax
0x570923: jz      loc_5709D8
0x570929: xor     ecx, ecx
0x57092B: cmp     [eax+0D0h], ecx
0x570931: mov     [esp+18h+arg_8], ecx
0x570935: jbe     loc_5709D8
0x57093B: jmp     short loc_570940
0x57093D: align 10h
0x570940: push    ecx
0x570941: mov     ecx, eax
0x570943: call    sub_4954B0
0x570948: mov     esi, eax
0x57094A: test    esi, esi
0x57094C: jz      short loc_5709B9
0x57094E: mov     eax, [esi]
0x570950: mov     edx, [eax+4]
0x570953: mov     ecx, esi
0x570955: call    edx
0x570957: test    eax, eax
0x570959: jz      short loc_57096E
0x57095B: jmp     short loc_570960
0x57095D: align 10h
0x570960: cmp     eax, offset dword_B40C3C
0x570965: jz      short loc_57099A
0x570967: mov     eax, [eax+4]
0x57096A: test    eax, eax
0x57096C: jnz     short loc_570960
0x57096E: xor     al, al
0x570970: neg     al
0x570972: sbb     eax, eax
0x570974: and     eax, esi
0x570976: jz      short loc_5709B9
0x570978: mov     esi, [ebx]
0x57097A: mov     dl, 1
0x57097C: lea     ecx, [esi-1]
0x57097F: nop
0x570980: test    ecx, ecx
0x570982: jl      short loc_57099E
0x570984: mov     edi, [ebp+4]
0x570987: mov     edi, [edi+ecx*4]
0x57098A: cmp     edi, [eax+18h]
0x57098D: jnz     short loc_570991
0x57098F: xor     dl, dl
0x570991: sub     ecx, 1
0x570994: test    dl, dl
0x570996: jnz     short loc_570980
0x570998: jmp     short loc_5709B9
0x57099A: mov     al, 1
0x57099C: jmp     short loc_570970
0x57099E: test    dl, dl
0x5709A0: jz      short loc_5709B9
0x5709A2: mov     eax, [eax+18h]
0x5709A5: lea     ecx, [esp+18h+arg_4]
0x5709A9: push    ecx
0x5709AA: push    esi
0x5709AB: mov     ecx, ebp
0x5709AD: mov     [esp+20h+arg_4], eax
0x5709B1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x5709B6: add     dword ptr [ebx], 1
0x5709B9: mov     ecx, [esp+18h+arg_8]
0x5709BD: mov     eax, [esp+18h+var_8]
0x5709C1: add     ecx, 1
0x5709C4: cmp     ecx, [eax+0D0h]
0x5709CA: mov     [esp+18h+arg_8], ecx
0x5709CE: jb      loc_570940
0x5709D4: mov     esi, [esp+18h+arg_0]
0x5709D8: mov     edx, [esi]
0x5709DA: mov     eax, [edx+8]
0x5709DD: mov     ecx, esi
0x5709DF: call    eax
0x5709E1: mov     edi, eax
0x5709E3: test    edi, edi
0x5709E5: jz      short loc_570A1F
0x5709E7: movzx   eax, word ptr [edi+0B6h]
0x5709EE: xor     esi, esi
0x5709F0: test    eax, eax
0x5709F2: jbe     short loc_570A1F
0x5709F4: cmp     eax, esi
0x5709F6: ja      short loc_5709FC
0x5709F8: xor     eax, eax
0x5709FA: jmp     short loc_570A05
0x5709FC: mov     ecx, [edi+0B0h]
0x570A02: mov     eax, [ecx+esi*4]
0x570A05: mov     ecx, [esp+18h+var_4]
0x570A09: push    ebx
0x570A0A: push    ebp
0x570A0B: push    eax
0x570A0C: call    sub_5708F0
0x570A11: movzx   eax, word ptr [edi+0B6h]
0x570A18: add     esi, 1
0x570A1B: cmp     eax, esi
0x570A1D: ja      short loc_5709FC
0x570A1F: pop     edi
0x570A20: pop     ebp
0x570A21: pop     ebx
0x570A22: pop     esi
0x570A23: add     esp, 8
0x570A26: retn    0Ch
