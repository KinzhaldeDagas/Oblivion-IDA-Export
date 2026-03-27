0x942B40: mov     eax, [esp+arg_0]
0x942B44: push    esi
0x942B45: push    edi
0x942B46: mov     edi, [esp+8+arg_4]
0x942B4A: push    eax
0x942B4B: mov     esi, ecx
0x942B4D: call    sub_942A80
0x942B52: mov     ecx, [esi+8]
0x942B55: cmp     eax, ecx
0x942B57: jg      short loc_942B67
0x942B59: lea     edx, [eax+ecx*2+2]
0x942B5D: mov     eax, [esi]
0x942B5F: mov     eax, [eax+edx*4]
0x942B62: pop     edi
0x942B63: pop     esi
0x942B64: retn    8
0x942B67: mov     eax, edi
0x942B69: pop     edi
0x942B6A: pop     esi
0x942B6B: retn    8
