0x732200: mov     eax, [esp+this]
0x732204: push    esi
0x732205: mov     esi, ecx
0x732207: cmp     eax, [esi+8]
0x73220A: jz      short loc_732270
0x73220C: cmp     eax, [esi+4]
0x73220F: jnb     short loc_732214
0x732211: mov     [esi+4], eax
0x732214: test    eax, eax
0x732216: push    edi
0x732217: mov     edi, [esi]
0x732219: mov     [esi+8], eax
0x73221C: jbe     short loc_732260
0x73221E: xor     ecx, ecx
0x732220: mov     edx, 4
0x732225: mul     edx
0x732227: seto    cl
0x73222A: neg     ecx
0x73222C: or      ecx, eax
0x73222E: push    ecx; Size
0x73222F: call    FormHeapAlloc
0x732234: mov     [esi], eax
0x732236: mov     esi, [esi+4]
0x732239: add     esp, 4
0x73223C: test    esi, esi
0x73223E: jz      short loc_732266
0x732240: lea     ecx, ds:0[esi*4]
0x732247: push    ecx; Size
0x732248: push    edi; Src
0x732249: push    eax; Dst
0x73224A: call    _memcpy
0x73224F: add     esp, 0Ch
0x732252: push    edi
0x732253: call    FormHeapFree
0x732258: add     esp, 4
0x73225B: pop     edi
0x73225C: pop     esi
0x73225D: retn    4
0x732260: mov     dword ptr [esi], 0
0x732266: push    edi
0x732267: call    FormHeapFree
0x73226C: add     esp, 4
0x73226F: pop     edi
0x732270: pop     esi
0x732271: retn    4
