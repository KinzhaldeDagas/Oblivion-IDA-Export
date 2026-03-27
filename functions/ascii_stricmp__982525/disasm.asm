0x982525: mov     edx, [esp+arg_4]
0x982529: push    esi
0x98252A: mov     esi, [esp+4+arg_0]
0x98252E: push    edi
0x98252F: movzx   eax, byte ptr [esi]
0x982532: lea     ecx, [eax-41h]
0x982535: inc     esi
0x982536: cmp     ecx, 19h
0x982539: ja      short loc_98253E
0x98253B: add     eax, 20h ; ' '
0x98253E: movzx   ecx, byte ptr [edx]
0x982541: lea     edi, [ecx-41h]
0x982544: inc     edx
0x982545: cmp     edi, 19h
0x982548: ja      short loc_98254D
0x98254A: add     ecx, 20h ; ' '
0x98254D: test    eax, eax
0x98254F: jz      short loc_982555
0x982551: cmp     eax, ecx
0x982553: jz      short loc_98252F
0x982555: pop     edi
0x982556: sub     eax, ecx
0x982558: pop     esi
0x982559: retn
