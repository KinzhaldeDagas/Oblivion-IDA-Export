0x925AE0: sub     esp, 10h
0x925AE3: push    ebx
0x925AE4: push    ebp
0x925AE5: push    esi
0x925AE6: mov     esi, ecx
0x925AE8: mov     eax, [esi+3Ch]
0x925AEB: lea     ebx, [eax+eax*2]
0x925AEE: shl     ebx, 4
0x925AF1: push    edi
0x925AF2: add     ebx, 0B0h ; '°'
0x925AF8: xor     edx, edx
0x925AFA: xor     ecx, ecx
0x925AFC: xor     edi, edi
0x925AFE: cmp     eax, 1
0x925B01: mov     [esp+20h+var_10], ebx
0x925B05: jnz     short loc_925B13
0x925B07: mov     ecx, 4
0x925B0C: mov     edx, 20h ; ' '
0x925B11: mov     edi, eax
0x925B13: mov     eax, [esi+34h]
0x925B16: add     ecx, 4
0x925B19: add     edx, 30h ; '0'
0x925B1C: inc     edi
0x925B1D: mov     [esp+20h+var_8], ecx
0x925B21: mov     [esp+20h+var_C], edx
0x925B25: mov     [esp+20h+var_4], edi
0x925B29: mov     ecx, [eax+8]
0x925B2C: mov     edx, [ecx+1Ch]
0x925B2F: mov     edi, [edx+0A0h]
0x925B35: test    edi, edi
0x925B37: jz      short loc_925B5A
0x925B39: mov     ecx, edi; lpCriticalSection
0x925B3B: call    sub_8A7720
0x925B40: mov     eax, [esi+34h]
0x925B43: mov     ecx, [eax+8]
0x925B46: mov     edx, [ecx]
0x925B48: lea     ebx, [esp+20h+var_10]
0x925B4C: push    ebx
0x925B4D: push    eax
0x925B4E: call    dword ptr [edx+0Ch]
0x925B51: push    edi; lpCriticalSection
0x925B52: call    dword ptr ds:0A28074h
0x925B58: jmp     short loc_925B65
0x925B5A: mov     edx, [ecx]
0x925B5C: lea     edi, [esp+20h+var_10]
0x925B60: push    edi
0x925B61: push    eax
0x925B62: call    dword ptr [edx+0Ch]
0x925B65: or      byte ptr [esi+44h], 6
0x925B69: mov     eax, [esi+28h]
0x925B6C: mov     ecx, [esi+24h]
0x925B6F: mov     ebp, [esi+24h]
0x925B72: lea     edi, [esi+20h]
0x925B75: and     eax, 3FFFFFFFh
0x925B7A: cmp     ecx, eax
0x925B7C: jnz     short loc_925B89
0x925B7E: push    20h ; ' '
0x925B80: push    edi
0x925B81: call    sub_8A6EE0
0x925B86: add     esp, 8
0x925B89: mov     eax, [edi+4]
0x925B8C: mov     ecx, [edi]
0x925B8E: mov     ebx, eax
0x925B90: shl     ebx, 5
0x925B93: add     ebx, ecx
0x925B95: inc     eax
0x925B96: mov     [edi+4], eax
0x925B99: mov     ecx, [esi+40h]
0x925B9C: mov     eax, [esi+3Ch]
0x925B9F: lea     edi, [esi+38h]
0x925BA2: and     ecx, 3FFFFFFFh
0x925BA8: cmp     eax, ecx
0x925BAA: jnz     short loc_925BB7
0x925BAC: push    14h
0x925BAE: push    edi
0x925BAF: call    sub_8A6EE0
0x925BB4: add     esp, 8
0x925BB7: mov     ecx, [edi+4]
0x925BBA: mov     eax, [edi]
0x925BBC: lea     edx, [ecx+ecx*4]
0x925BBF: lea     eax, [eax+edx*4]
0x925BC2: inc     ecx
0x925BC3: test    ebp, ebp
0x925BC5: mov     [edi+4], ecx
0x925BC8: mov     dword ptr [eax], 0
0x925BCE: mov     dword ptr [eax+4], 0
0x925BD5: mov     byte ptr [eax+0Fh], 1
0x925BD9: jle     short loc_925BE5
0x925BDB: test    byte ptr [eax-5], 2
0x925BDF: jnz     short loc_925BE5
0x925BE1: mov     byte ptr [eax+0Fh], 3
0x925BE5: mov     ecx, [esp+20h+arg_0]
0x925BE9: mov     edx, [esp+20h+arg_4]
0x925BED: mov     [ecx], ebx
0x925BEF: push    ebp
0x925BF0: lea     ecx, [esi+0Ch]
0x925BF3: mov     [edx], eax
0x925BF5: call    sub_925A80
0x925BFA: pop     edi
0x925BFB: pop     esi
0x925BFC: pop     ebp
0x925BFD: pop     ebx
0x925BFE: add     esp, 10h
0x925C01: retn    8
