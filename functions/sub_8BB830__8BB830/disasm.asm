0x8BB830: mov     eax, [ecx+1Ch]
0x8BB833: push    esi
0x8BB834: lea     esi, [ecx+14h]
0x8BB837: mov     ecx, [esi+4]
0x8BB83A: and     eax, 3FFFFFFFh
0x8BB83F: cmp     ecx, eax
0x8BB841: jnz     short loc_8BB84E
0x8BB843: push    4
0x8BB845: push    esi
0x8BB846: call    sub_8A6EE0
0x8BB84B: add     esp, 8
0x8BB84E: mov     ecx, [esi+4]
0x8BB851: mov     edx, [esi]
0x8BB853: mov     eax, [esp+4+arg_0]
0x8BB857: mov     [edx+ecx*4], eax
0x8BB85A: inc     dword ptr [esi+4]
0x8BB85D: pop     esi
0x8BB85E: retn    8
