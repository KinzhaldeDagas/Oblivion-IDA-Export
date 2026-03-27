0x44D610: sub     esp, 8
0x44D613: push    ebx
0x44D614: mov     edx, ecx
0x44D616: push    ebp
0x44D617: lea     ebp, [edx+54h]
0x44D61A: push    esi
0x44D61B: xor     ecx, ecx
0x44D61D: test    ebp, ebp
0x44D61F: push    edi
0x44D620: mov     [esp+18h+var_4], edx
0x44D624: mov     eax, ebp
0x44D626: jz      short loc_44D637
0x44D628: cmp     dword ptr [eax], 0
0x44D62B: jz      short loc_44D630
0x44D62D: add     ecx, 1
0x44D630: mov     eax, [eax+4]
0x44D633: test    eax, eax
0x44D635: jnz     short loc_44D628
0x44D637: lea     eax, [ecx-1]
0x44D63A: test    eax, eax
0x44D63C: jle     short loc_44D69C
0x44D63E: mov     [esp+18h+var_8], eax
0x44D642: test    ebp, ebp
0x44D644: mov     esi, ebp
0x44D646: jz      short loc_44D691
0x44D648: mov     ebx, [esi]
0x44D64A: test    ebx, ebx
0x44D64C: jz      short loc_44D691
0x44D64E: mov     eax, [esi+4]
0x44D651: test    eax, eax
0x44D653: jz      short loc_44D68A
0x44D655: mov     edi, [eax]
0x44D657: test    edi, edi
0x44D659: jz      short loc_44D68A
0x44D65B: mov     eax, [edi+1Ch]
0x44D65E: test    eax, eax
0x44D660: mov     ecx, eax
0x44D662: jnz     short loc_44D669
0x44D664: mov     ecx, offset EmptyString
0x44D669: mov     eax, [ebx+1Ch]
0x44D66C: test    eax, eax
0x44D66E: jnz     short loc_44D675
0x44D670: mov     eax, offset EmptyString
0x44D675: push    ecx; unsigned __int8 *
0x44D676: push    eax; unsigned __int8 *
0x44D677: call    __mbsicmp
0x44D67C: add     esp, 8
0x44D67F: test    eax, eax
0x44D681: jle     short loc_44D68A
0x44D683: mov     eax, [esi+4]
0x44D686: mov     [esi], edi
0x44D688: mov     [eax], ebx
0x44D68A: mov     esi, [esi+4]
0x44D68D: test    esi, esi
0x44D68F: jnz     short loc_44D648
0x44D691: sub     [esp+18h+var_8], 1
0x44D696: jnz     short loc_44D642
0x44D698: mov     edx, [esp+18h+var_4]
0x44D69C: lea     ebp, [edx+44h]
0x44D69F: xor     ecx, ecx
0x44D6A1: test    ebp, ebp
0x44D6A3: mov     eax, ebp
0x44D6A5: jz      short loc_44D6B6
0x44D6A7: cmp     dword ptr [eax], 0
0x44D6AA: jz      short loc_44D6AF
0x44D6AC: add     ecx, 1
0x44D6AF: mov     eax, [eax+4]
0x44D6B2: test    eax, eax
0x44D6B4: jnz     short loc_44D6A7
0x44D6B6: lea     eax, [ecx-1]
0x44D6B9: test    eax, eax
0x44D6BB: jle     short loc_44D717
0x44D6BD: mov     [esp+18h+var_8], eax
0x44D6C1: test    ebp, ebp
0x44D6C3: mov     esi, ebp
0x44D6C5: jz      short loc_44D710
0x44D6C7: mov     ebx, [esi]
0x44D6C9: test    ebx, ebx
0x44D6CB: jz      short loc_44D710
0x44D6CD: mov     eax, [esi+4]
0x44D6D0: test    eax, eax
0x44D6D2: jz      short loc_44D709
0x44D6D4: mov     edi, [eax]
0x44D6D6: test    edi, edi
0x44D6D8: jz      short loc_44D709
0x44D6DA: mov     eax, [edi+1Ch]
0x44D6DD: test    eax, eax
0x44D6DF: mov     ecx, eax
0x44D6E1: jnz     short loc_44D6E8
0x44D6E3: mov     ecx, offset EmptyString
0x44D6E8: mov     eax, [ebx+1Ch]
0x44D6EB: test    eax, eax
0x44D6ED: jnz     short loc_44D6F4
0x44D6EF: mov     eax, offset EmptyString
0x44D6F4: push    ecx; unsigned __int8 *
0x44D6F5: push    eax; unsigned __int8 *
0x44D6F6: call    __mbsicmp
0x44D6FB: add     esp, 8
0x44D6FE: test    eax, eax
0x44D700: jle     short loc_44D709
0x44D702: mov     ecx, [esi+4]
0x44D705: mov     [esi], edi
0x44D707: mov     [ecx], ebx
0x44D709: mov     esi, [esi+4]
0x44D70C: test    esi, esi
0x44D70E: jnz     short loc_44D6C7
0x44D710: sub     [esp+18h+var_8], 1
0x44D715: jnz     short loc_44D6C1
0x44D717: pop     edi
0x44D718: pop     esi
0x44D719: pop     ebp
0x44D71A: pop     ebx
0x44D71B: add     esp, 8
0x44D71E: retn
