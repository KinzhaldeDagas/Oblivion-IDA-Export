0x8BA1B0: push    ebp
0x8BA1B1: mov     ebp, esp
0x8BA1B3: and     esp, 0FFFFFFF0h
0x8BA1B6: sub     esp, 24h
0x8BA1B9: push    ebx
0x8BA1BA: mov     ebx, large fs:2Ch
0x8BA1C1: push    esi
0x8BA1C2: mov     esi, ds:0BA9DE4h
0x8BA1C8: mov     eax, [ebx+esi*4]
0x8BA1CB: mov     edx, [eax+1A4h]
0x8BA1D1: push    edi
0x8BA1D2: cmp     edx, [eax+1A8h]
0x8BA1D8: jnb     short loc_8BA204
0x8BA1DA: mov     edi, eax
0x8BA1DC: mov     esi, [edi+1A4h]
0x8BA1E2: mov     dword ptr [esi], offset aTtraycstcached; "TtRayCstCached"
0x8BA1E8: rdtsc
0x8BA1EA: mov     [esp+30h+var_24], eax
0x8BA1EE: mov     eax, [esp+30h+var_24]
0x8BA1F2: mov     [esi+4], eax
0x8BA1F5: add     esi, 0Ch
0x8BA1F8: mov     [edi+1A4h], esi
0x8BA1FE: mov     esi, ds:0BA9DE4h
0x8BA204: mov     edi, [ebp+arg_8]
0x8BA207: test    edi, edi
0x8BA209: mov     eax, [ebp+arg_4]
0x8BA20C: mov     edx, [ebp+arg_10]
0x8BA20F: mov     [ecx+4], eax
0x8BA212: mov     [ecx+0Ch], edx
0x8BA215: mov     dword ptr [ecx+10h], 0
0x8BA21C: jz      short loc_8BA223
0x8BA21E: lea     edx, [edi+14h]
0x8BA221: jmp     short loc_8BA225
0x8BA223: xor     edx, edx
0x8BA225: mov     [ecx+8], edx
0x8BA228: mov     dl, [eax+20h]
0x8BA22B: test    dl, dl
0x8BA22D: jz      short loc_8BA242
0x8BA22F: test    edi, edi
0x8BA231: jz      short loc_8BA23B
0x8BA233: add     edi, 10h
0x8BA236: mov     [ecx+44h], edi
0x8BA239: jmp     short loc_8BA249
0x8BA23B: xor     edi, edi
0x8BA23D: mov     [ecx+44h], edi
0x8BA240: jmp     short loc_8BA249
0x8BA242: mov     dword ptr [ecx+44h], 0
0x8BA249: movaps  xmm0, xmmword ptr [eax]
0x8BA24C: add     eax, 10h
0x8BA24F: mov     [esp+30h+var_C], eax
0x8BA253: mov     eax, [ebp+arg_C]
0x8BA256: push    0
0x8BA258: push    ecx
0x8BA259: mov     [esp+38h+var_4], eax
0x8BA25D: mov     eax, [ebp+arg_0]
0x8BA260: mov     edx, [eax]
0x8BA262: lea     ecx, [esp+38h+var_20]
0x8BA266: push    ecx
0x8BA267: mov     ecx, eax
0x8BA269: mov     [esp+3Ch+var_10], 1
0x8BA271: mov     [esp+3Ch+var_8], 10h
0x8BA279: movaps  [esp+3Ch+var_20], xmm0
0x8BA27E: call    dword ptr [edx+38h]
0x8BA281: mov     eax, [ebx+esi*4]
0x8BA284: mov     edx, [eax+1A4h]
0x8BA28A: cmp     edx, [eax+1A8h]
0x8BA290: jnb     short loc_8BA2B6
0x8BA292: mov     esi, eax
0x8BA294: mov     ecx, [esi+1A4h]
0x8BA29A: mov     dword ptr [ecx], offset aEt; "Et"
0x8BA2A0: rdtsc
0x8BA2A2: mov     [esp+30h+var_24], eax
0x8BA2A6: mov     eax, [esp+30h+var_24]
0x8BA2AA: mov     [ecx+4], eax
0x8BA2AD: add     ecx, 0Ch
0x8BA2B0: mov     [esi+1A4h], ecx
0x8BA2B6: pop     edi
0x8BA2B7: pop     esi
0x8BA2B8: pop     ebx
0x8BA2B9: mov     esp, ebp
0x8BA2BB: pop     ebp
0x8BA2BC: retn    14h
