0x8A75D0: mov     eax, [esp+arg_4]
0x8A75D4: cmp     eax, 2000h
0x8A75D9: push    esi
0x8A75DA: jg      short loc_8A7635
0x8A75DC: mov     esi, [ecx+30h]
0x8A75DF: test    esi, esi
0x8A75E1: jz      short loc_8A7635
0x8A75E3: cmp     eax, 200h
0x8A75E8: jg      short loc_8A75F4
0x8A75EA: movsx   eax, byte ptr [eax+ecx+100h]
0x8A75F2: jmp     short loc_8A75FF
0x8A75F4: dec     eax
0x8A75F5: sar     eax, 0Ah
0x8A75F8: mov     eax, [ecx+eax*4+304h]
0x8A75FF: mov     edx, [ecx+eax*4+78h]
0x8A7603: cmp     edx, esi
0x8A7605: jge     short loc_8A761E
0x8A7607: mov     esi, [ecx+eax*4+34h]
0x8A760B: inc     edx
0x8A760C: mov     [ecx+eax*4+78h], edx
0x8A7610: mov     edx, [esp+4+arg_0]
0x8A7614: mov     [edx], esi
0x8A7616: mov     [ecx+eax*4+34h], edx
0x8A761A: pop     esi
0x8A761B: retn    0Ch
0x8A761E: mov     esi, [esp+4+arg_8]
0x8A7622: mov     ecx, [ecx+10h]
0x8A7625: mov     edx, [ecx]
0x8A7627: push    esi
0x8A7628: push    eax
0x8A7629: mov     eax, [esp+0Ch+arg_0]
0x8A762D: push    eax
0x8A762E: call    dword ptr [edx+1Ch]
0x8A7631: pop     esi
0x8A7632: retn    0Ch
0x8A7635: mov     esi, [esp+4+arg_8]
0x8A7639: mov     ecx, [ecx+10h]
0x8A763C: mov     edx, [ecx]
0x8A763E: push    esi
0x8A763F: push    eax
0x8A7640: mov     eax, [esp+0Ch+arg_0]
0x8A7644: push    eax
0x8A7645: call    dword ptr [edx+14h]
0x8A7648: pop     esi
0x8A7649: retn    0Ch
