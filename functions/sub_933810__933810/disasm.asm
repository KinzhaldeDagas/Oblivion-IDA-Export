0x933810: sub     esp, 8
0x933813: mov     dx, [esp+8+arg_0]
0x933818: xor     eax, eax
0x93381A: push    esi
0x93381B: lea     esi, [ecx+4]
0x93381E: mov     [ecx+8], eax
0x933821: mov     ecx, [esi+4]
0x933824: mov     word ptr [esp+0Ch+var_8+2], ax
0x933829: mov     word ptr [esp+0Ch+var_4], ax
0x93382E: mov     eax, [esi+8]
0x933831: and     eax, 3FFFFFFFh
0x933836: cmp     ecx, eax
0x933838: mov     word ptr [esp+0Ch+var_8], dx
0x93383D: jnz     short loc_93384A
0x93383F: push    8
0x933841: push    esi
0x933842: call    sub_8A6EE0
0x933847: add     esp, 8
0x93384A: mov     ecx, [esi+4]
0x93384D: mov     edx, [esi]
0x93384F: mov     eax, [esp+0Ch+var_8]
0x933853: mov     [edx+ecx*8], eax
0x933856: mov     eax, [esp+0Ch+var_4]
0x93385A: mov     [edx+ecx*8+4], eax
0x93385E: inc     dword ptr [esi+4]
0x933861: pop     esi
0x933862: add     esp, 8
0x933865: retn    4
