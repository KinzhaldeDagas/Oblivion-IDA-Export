0x8AF6D0: mov     eax, [ecx+18h]
0x8AF6D3: push    esi
0x8AF6D4: lea     esi, [ecx+10h]
0x8AF6D7: mov     ecx, [esi+4]
0x8AF6DA: and     eax, 3FFFFFFFh
0x8AF6DF: cmp     ecx, eax
0x8AF6E1: jnz     short loc_8AF6EE
0x8AF6E3: push    30h ; '0'
0x8AF6E5: push    esi
0x8AF6E6: call    sub_8A6EE0
0x8AF6EB: add     esp, 8
0x8AF6EE: mov     ecx, [esi+4]
0x8AF6F1: mov     edx, [esi]
0x8AF6F3: lea     eax, [ecx+ecx*2]
0x8AF6F6: shl     eax, 4
0x8AF6F9: add     eax, edx
0x8AF6FB: inc     ecx
0x8AF6FC: mov     [esi+4], ecx
0x8AF6FF: mov     esi, [esp+4+arg_0]
0x8AF703: movaps  xmm0, xmmword ptr [esi]
0x8AF706: movaps  xmmword ptr [eax], xmm0
0x8AF709: movaps  xmm0, xmmword ptr [esi+10h]
0x8AF70D: movaps  xmmword ptr [eax+10h], xmm0
0x8AF711: mov     ecx, [esi+20h]
0x8AF714: mov     edx, [ecx+0Ch]
0x8AF717: test    edx, edx
0x8AF719: jz      short loc_8AF729
0x8AF71B: jmp     short loc_8AF720
0x8AF71D: align 10h
0x8AF720: mov     ecx, edx
0x8AF722: mov     edx, [ecx+0Ch]
0x8AF725: test    edx, edx
0x8AF727: jnz     short loc_8AF720
0x8AF729: mov     [eax+20h], ecx
0x8AF72C: mov     ecx, [esi+20h]
0x8AF72F: mov     edx, [ecx+4]
0x8AF732: mov     [eax+24h], edx
0x8AF735: mov     edx, [esi+24h]
0x8AF738: mov     ecx, [edx+0Ch]
0x8AF73B: test    ecx, ecx
0x8AF73D: jz      short loc_8AF749
0x8AF73F: nop
0x8AF740: mov     edx, ecx
0x8AF742: mov     ecx, [edx+0Ch]
0x8AF745: test    ecx, ecx
0x8AF747: jnz     short loc_8AF740
0x8AF749: mov     [eax+28h], edx
0x8AF74C: mov     ecx, [esi+24h]
0x8AF74F: mov     edx, [ecx+4]
0x8AF752: mov     [eax+2Ch], edx
0x8AF755: pop     esi
0x8AF756: retn    4
