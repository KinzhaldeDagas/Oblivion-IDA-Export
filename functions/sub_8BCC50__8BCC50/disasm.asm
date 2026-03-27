0x8BCC50: push    0FFFFFFFFh
0x8BCC52: push    offset SEH_88E880
0x8BCC57: mov     eax, large fs:0
0x8BCC5D: push    eax
0x8BCC5E: push    ecx
0x8BCC5F: push    ebx
0x8BCC60: push    ebp
0x8BCC61: push    esi
0x8BCC62: push    edi
0x8BCC63: mov     eax, ds:0B30AACh
0x8BCC68: xor     eax, esp
0x8BCC6A: push    eax
0x8BCC6B: lea     eax, [esp+24h+var_C]
0x8BCC6F: mov     large fs:0, eax
0x8BCC75: mov     edi, ecx
0x8BCC77: xor     eax, eax
0x8BCC79: xor     ebx, ebx
0x8BCC7B: cmp     [edi+0Ch], eax
0x8BCC7E: jbe     short loc_8BCCCA
0x8BCC80: mov     [esp+24h+var_10], eax
0x8BCC84: mov     ecx, [edi+4]
0x8BCC87: mov     esi, [ecx+ebx*4]
0x8BCC8A: cmp     esi, eax
0x8BCC8C: lea     ebp, [ecx+ebx*4]
0x8BCC8F: mov     [esp+24h+var_4], eax
0x8BCC93: jz      short loc_8BCCBA
0x8BCC95: lea     edx, [esi+4]
0x8BCC98: push    edx; lpAddend
0x8BCC99: call    dword ptr ds:0A2807Ch
0x8BCC9F: test    eax, eax
0x8BCCA1: jnz     short loc_8BCCB1
0x8BCCA3: test    esi, esi
0x8BCCA5: jz      short loc_8BCCB1
0x8BCCA7: mov     eax, [esi]
0x8BCCA9: mov     edx, [eax]
0x8BCCAB: push    1
0x8BCCAD: mov     ecx, esi
0x8BCCAF: call    edx
0x8BCCB1: mov     dword ptr [ebp+0], 0
0x8BCCB8: xor     eax, eax
0x8BCCBA: add     ebx, 1
0x8BCCBD: cmp     ebx, [edi+0Ch]
0x8BCCC0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BCCC8: jb      short loc_8BCC84
0x8BCCCA: mov     [edi+10h], eax
0x8BCCCD: mov     [edi+0Ch], eax
0x8BCCD0: mov     ecx, dword ptr [esp+24h+var_C]
0x8BCCD4: mov     large fs:0, ecx
0x8BCCDB: pop     ecx
0x8BCCDC: pop     edi
0x8BCCDD: pop     esi
0x8BCCDE: pop     ebp
0x8BCCDF: pop     ebx
0x8BCCE0: add     esp, 10h
0x8BCCE3: retn
