0x70A9C0: sub     esp, 34h
0x70A9C3: push    esi
0x70A9C4: push    edi
0x70A9C5: mov     edi, ecx
0x70A9C7: xor     esi, esi
0x70A9C9: cmp     [edi+0B6h], si
0x70A9D0: jbe     short loc_70A9F4
0x70A9D2: mov     eax, [edi+0B0h]
0x70A9D8: mov     ecx, [eax+esi*4]
0x70A9DB: test    ecx, ecx
0x70A9DD: jz      short loc_70A9E6
0x70A9DF: mov     edx, [ecx]
0x70A9E1: mov     eax, [edx+50h]
0x70A9E4: call    eax
0x70A9E6: movzx   ecx, word ptr [edi+0B6h]
0x70A9ED: add     esi, 1
0x70A9F0: cmp     esi, ecx
0x70A9F2: jb      short loc_70A9D2
0x70A9F4: lea     edx, [esp+3Ch+var_34]
0x70A9F8: push    edx
0x70A9F9: lea     ecx, [edi+64h]
0x70A9FC: call    sub_718A80
0x70AA01: lea     eax, [esp+3Ch+var_34]
0x70AA05: push    eax
0x70AA06: lea     ecx, [edi+20h]
0x70AA09: push    ecx
0x70AA0A: lea     ecx, [edi+0CCh]
0x70AA10: call    sub_72A820
0x70AA15: pop     edi
0x70AA16: pop     esi
0x70AA17: add     esp, 34h
0x70AA1A: retn
