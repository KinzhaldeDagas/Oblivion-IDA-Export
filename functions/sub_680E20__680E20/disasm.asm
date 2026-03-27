0x680E20: push    ebx
0x680E21: push    esi
0x680E22: mov     ebx, ecx
0x680E24: mov     esi, [ebx]
0x680E26: push    edi
0x680E27: mov     edi, [esp+0Ch+arg_0]
0x680E2B: cmp     esi, edi
0x680E2D: jz      short loc_680E5F
0x680E2F: test    esi, esi
0x680E31: jz      short loc_680E4F
0x680E33: lea     eax, [esi+4]
0x680E36: push    eax; lpAddend
0x680E37: call    dword ptr ds:0A2807Ch
0x680E3D: test    eax, eax
0x680E3F: jnz     short loc_680E4F
0x680E41: test    esi, esi
0x680E43: jz      short loc_680E4F
0x680E45: mov     edx, [esi]
0x680E47: mov     eax, [edx]
0x680E49: push    1
0x680E4B: mov     ecx, esi
0x680E4D: call    eax
0x680E4F: test    edi, edi
0x680E51: mov     [ebx], edi
0x680E53: jz      short loc_680E5F
0x680E55: add     edi, 4
0x680E58: push    edi; lpAddend
0x680E59: call    dword ptr ds:0A28078h
0x680E5F: pop     edi
0x680E60: pop     esi
0x680E61: pop     ebx
0x680E62: retn    4
