0x947B60: push    esi
0x947B61: mov     esi, ecx
0x947B63: push    edi
0x947B64: mov     edi, [esi+18h]
0x947B67: test    edi, edi
0x947B69: mov     dword ptr [esi], offset off_AA2A0C
0x947B6F: jz      short loc_947B88
0x947B71: push    edi; lpCriticalSection
0x947B72: call    dword ptr ds:0A28068h
0x947B78: mov     ecx, ds:0BA7D98h
0x947B7E: mov     eax, [ecx]
0x947B80: push    12h
0x947B82: push    18h
0x947B84: push    edi
0x947B85: call    dword ptr [eax+14h]
0x947B88: mov     eax, [esi+10h]
0x947B8B: test    eax, eax
0x947B8D: jle     short loc_947BB2
0x947B8F: push    ebx
0x947B90: xor     edi, edi
0x947B92: mov     ebx, eax
0x947B94: mov     ecx, [esi+0Ch]
0x947B97: mov     ecx, [ecx+edi]
0x947B9A: mov     eax, [ecx-4]
0x947B9D: sub     ecx, 0Ch
0x947BA0: dec     eax
0x947BA1: mov     [ecx+8], eax
0x947BA4: jns     short loc_947BAB
0x947BA6: call    sub_8B1930
0x947BAB: add     edi, 0Ch
0x947BAE: dec     ebx
0x947BAF: jnz     short loc_947B94
0x947BB1: pop     ebx
0x947BB2: mov     eax, [esi+14h]
0x947BB5: test    eax, eax
0x947BB7: js      short loc_947BF0
0x947BB9: mov     ecx, large fs:2Ch
0x947BC0: mov     edx, ds:0BA9DE4h
0x947BC6: mov     edx, [ecx+edx*4]
0x947BC9: mov     ecx, [edx+19Ch]
0x947BCF: test    ecx, ecx
0x947BD1: jnz     short loc_947BD9
0x947BD3: mov     ecx, ds:0BA7D9Ch
0x947BD9: mov     edx, [esi+0Ch]
0x947BDC: and     eax, 3FFFFFFFh
0x947BE1: lea     eax, [eax+eax*2]
0x947BE4: push    14h
0x947BE6: shl     eax, 2
0x947BE9: push    eax
0x947BEA: push    edx
0x947BEB: call    sub_8A75D0
0x947BF0: pop     edi
0x947BF1: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x947BF7: pop     esi
0x947BF8: retn
