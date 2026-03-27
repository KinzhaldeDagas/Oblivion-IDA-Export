0x6CAC60: push    ecx
0x6CAC61: push    ebx
0x6CAC62: push    edi
0x6CAC63: mov     edi, ecx
0x6CAC65: xor     ebx, ebx
0x6CAC67: cmp     [edi+44h], ebx
0x6CAC6A: jz      short loc_6CAC78
0x6CAC6C: fldz
0x6CAC6E: push    ebx; char
0x6CAC6F: push    ecx
0x6CAC70: fstp    [esp+14h+var_14]; float
0x6CAC73: call    sub_6C9CB0
0x6CAC78: cmp     [edi+0Ch], ebx
0x6CAC7B: mov     [esp+0Ch+var_4], ebx
0x6CAC7F: jbe     short loc_6CACD5
0x6CAC81: push    ebp
0x6CAC82: push    esi
0x6CAC83: mov     eax, [edi+14h]
0x6CAC86: mov     esi, [eax+ebx+4]
0x6CAC8A: test    esi, esi
0x6CAC8C: lea     ebp, [eax+ebx+4]
0x6CAC90: jz      short loc_6CACB5
0x6CAC92: lea     ecx, [esi+4]
0x6CAC95: push    ecx; lpAddend
0x6CAC96: call    dword ptr ds:0A2807Ch
0x6CAC9C: test    eax, eax
0x6CAC9E: jnz     short loc_6CACAE
0x6CACA0: test    esi, esi
0x6CACA2: jz      short loc_6CACAE
0x6CACA4: mov     edx, [esi]
0x6CACA6: mov     eax, [edx]
0x6CACA8: push    1
0x6CACAA: mov     ecx, esi
0x6CACAC: call    eax
0x6CACAE: mov     dword ptr [ebp+0], 0
0x6CACB5: mov     eax, [esp+14h+var_4]
0x6CACB9: mov     ecx, [edi+14h]
0x6CACBC: mov     dword ptr [ecx+ebx+8], 0
0x6CACC4: add     eax, 1
0x6CACC7: add     ebx, 10h
0x6CACCA: cmp     eax, [edi+0Ch]
0x6CACCD: mov     [esp+14h+var_4], eax
0x6CACD1: jb      short loc_6CAC83
0x6CACD3: pop     esi
0x6CACD4: pop     ebp
0x6CACD5: pop     edi
0x6CACD6: pop     ebx
0x6CACD7: pop     ecx
0x6CACD8: retn
