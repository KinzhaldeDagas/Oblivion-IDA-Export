0x72BC00: mov     eax, [esp+arg_4]
0x72BC04: push    ebx
0x72BC05: mov     ebx, [esp+4+arg_0]
0x72BC09: push    ebp
0x72BC0A: push    esi
0x72BC0B: push    edi
0x72BC0C: push    eax
0x72BC0D: push    ebx
0x72BC0E: mov     edi, ecx
0x72BC10: call    sub_700770
0x72BC15: mov     esi, [ebx+8]
0x72BC18: cmp     esi, [edi+8]
0x72BC1B: mov     ebp, ds:0A2807Ch
0x72BC21: jz      short loc_72BC53
0x72BC23: test    esi, esi
0x72BC25: jz      short loc_72BC3F
0x72BC27: lea     ecx, [esi+4]
0x72BC2A: push    ecx; lpAddend
0x72BC2B: call    ebp ; InterlockedDecrement
0x72BC2D: test    eax, eax
0x72BC2F: jnz     short loc_72BC3F
0x72BC31: test    esi, esi
0x72BC33: jz      short loc_72BC3F
0x72BC35: mov     edx, [esi]
0x72BC37: mov     eax, [edx]
0x72BC39: push    1
0x72BC3B: mov     ecx, esi
0x72BC3D: call    eax
0x72BC3F: mov     eax, [edi+8]
0x72BC42: test    eax, eax
0x72BC44: mov     [ebx+8], eax
0x72BC47: jz      short loc_72BC53
0x72BC49: add     eax, 4
0x72BC4C: push    eax; lpAddend
0x72BC4D: call    dword ptr ds:0A28078h
0x72BC53: mov     esi, [ebx+0Ch]
0x72BC56: cmp     esi, [edi+0Ch]
0x72BC59: jz      short loc_72BC8B
0x72BC5B: test    esi, esi
0x72BC5D: jz      short loc_72BC77
0x72BC5F: lea     ecx, [esi+4]
0x72BC62: push    ecx; lpAddend
0x72BC63: call    ebp ; InterlockedDecrement
0x72BC65: test    eax, eax
0x72BC67: jnz     short loc_72BC77
0x72BC69: test    esi, esi
0x72BC6B: jz      short loc_72BC77
0x72BC6D: mov     edx, [esi]
0x72BC6F: mov     eax, [edx]
0x72BC71: push    1
0x72BC73: mov     ecx, esi
0x72BC75: call    eax
0x72BC77: mov     edi, [edi+0Ch]
0x72BC7A: test    edi, edi
0x72BC7C: mov     [ebx+0Ch], edi
0x72BC7F: jz      short loc_72BC8B
0x72BC81: add     edi, 4
0x72BC84: push    edi; lpAddend
0x72BC85: call    dword ptr ds:0A28078h
0x72BC8B: pop     edi
0x72BC8C: pop     esi
0x72BC8D: pop     ebp
0x72BC8E: pop     ebx
0x72BC8F: retn    8
