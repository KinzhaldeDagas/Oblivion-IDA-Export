0x712AE0: sub     esp, 0Ch
0x712AE3: push    ebx
0x712AE4: push    esi
0x712AE5: push    edi
0x712AE6: mov     edi, ecx
0x712AE8: mov     eax, [edi+21Ch]
0x712AEE: push    1
0x712AF0: lea     ecx, [esp+1Ch+var_8]
0x712AF4: push    ecx
0x712AF5: push    4
0x712AF7: lea     edx, [esp+24h+var_C]
0x712AFB: push    edx
0x712AFC: push    eax
0x712AFD: mov     eax, [eax+4]
0x712B00: mov     [esp+2Ch+var_8], 4
0x712B08: call    eax
0x712B0A: mov     eax, [edi+238h]
0x712B10: lea     esi, [edi+234h]
0x712B16: add     esp, 14h
0x712B19: cmp     [esi+8], eax
0x712B1C: jnz     short loc_712B33
0x712B1E: test    eax, eax
0x712B20: jbe     short loc_712B26
0x712B22: add     eax, eax
0x712B24: jmp     short loc_712B2B
0x712B26: mov     eax, 1
0x712B2B: push    eax
0x712B2C: mov     ecx, esi
0x712B2E: call    sub_6E8CA0
0x712B33: mov     ecx, [esi+8]
0x712B36: mov     eax, [esp+18h+var_C]
0x712B3A: mov     edx, [esi]
0x712B3C: mov     [edx+ecx*4], eax
0x712B3F: mov     eax, [esp+18h+var_C]
0x712B43: add     dword ptr [esi+8], 1
0x712B47: xor     ebx, ebx
0x712B49: test    eax, eax
0x712B4B: jbe     short loc_712BB0
0x712B4D: lea     esi, [edi+224h]
0x712B53: mov     eax, [edi+21Ch]
0x712B59: push    1
0x712B5B: lea     ecx, [esp+1Ch+var_8]
0x712B5F: push    ecx
0x712B60: push    4
0x712B62: lea     edx, [esp+24h+var_4]
0x712B66: push    edx
0x712B67: push    eax
0x712B68: mov     eax, [eax+4]
0x712B6B: mov     [esp+2Ch+var_8], 4
0x712B73: call    eax
0x712B75: mov     eax, [esi+4]
0x712B78: add     esp, 14h
0x712B7B: cmp     [esi+8], eax
0x712B7E: jnz     short loc_712B95
0x712B80: test    eax, eax
0x712B82: jbe     short loc_712B88
0x712B84: add     eax, eax
0x712B86: jmp     short loc_712B8D
0x712B88: mov     eax, 1
0x712B8D: push    eax
0x712B8E: mov     ecx, esi
0x712B90: call    sub_6E8CA0
0x712B95: mov     ecx, [esi+8]
0x712B98: mov     eax, [esp+18h+var_4]
0x712B9C: mov     edx, [esi]
0x712B9E: mov     [edx+ecx*4], eax
0x712BA1: mov     eax, [esp+18h+var_C]
0x712BA5: add     dword ptr [esi+8], 1
0x712BA9: add     ebx, 1
0x712BAC: cmp     ebx, eax
0x712BAE: jb      short loc_712B53
0x712BB0: pop     edi
0x712BB1: pop     esi
0x712BB2: pop     ebx
0x712BB3: add     esp, 0Ch
0x712BB6: retn
