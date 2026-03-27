0x8DA800: mov     eax, [esp+arg_4]
0x8DA804: push    ebx
0x8DA805: mov     ebx, [esp+4+arg_0]
0x8DA809: push    esi
0x8DA80A: mov     esi, ecx
0x8DA80C: mov     ecx, [esi+eax*4+10Ch]
0x8DA813: or      [esi+ebx*4+10Ch], ecx
0x8DA81A: mov     eax, [esi+1C08h]
0x8DA820: push    edi
0x8DA821: xor     edi, edi
0x8DA823: test    eax, eax
0x8DA825: jle     short loc_8DA85C
0x8DA827: push    ebp
0x8DA828: mov     ebp, [esp+10h+arg_8]
0x8DA82C: lea     esp, [esp+0]
0x8DA830: mov     edx, [esi+1C04h]
0x8DA836: mov     ecx, [edx+edi*8+4]
0x8DA83A: cmp     ecx, ebx
0x8DA83C: lea     eax, [edx+edi*8]
0x8DA83F: jnz     short loc_8DA850
0x8DA841: mov     eax, [eax]
0x8DA843: lea     edx, [ebp+1]
0x8DA846: push    edx
0x8DA847: push    ecx
0x8DA848: push    eax
0x8DA849: mov     ecx, esi
0x8DA84B: call    sub_8DA800
0x8DA850: mov     eax, [esi+1C08h]
0x8DA856: inc     edi
0x8DA857: cmp     edi, eax
0x8DA859: jl      short loc_8DA830
0x8DA85B: pop     ebp
0x8DA85C: pop     edi
0x8DA85D: pop     esi
0x8DA85E: pop     ebx
0x8DA85F: retn    0Ch
