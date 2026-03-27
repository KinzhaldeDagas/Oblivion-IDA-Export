0x85C610: push    0FFFFFFFFh
0x85C612: push    offset SEH_85DE70
0x85C617: mov     eax, large fs:0
0x85C61D: push    eax
0x85C61E: push    ecx
0x85C61F: push    ebx
0x85C620: push    ebp
0x85C621: push    esi
0x85C622: push    edi
0x85C623: mov     eax, ds:0B30AACh
0x85C628: xor     eax, esp
0x85C62A: push    eax
0x85C62B: lea     eax, [esp+24h+var_C]
0x85C62F: mov     large fs:0, eax
0x85C635: mov     ebx, ecx
0x85C637: mov     esi, ds:0B477ACh
0x85C63D: mov     eax, [esi+24h]
0x85C640: mov     ecx, [esp+24h+arg_C]
0x85C644: mov     edi, [eax]
0x85C646: push    0
0x85C648: push    ecx
0x85C649: mov     ecx, ebx
0x85C64B: mov     [esp+2Ch+var_10], edi
0x85C64F: call    sub_848FD0
0x85C654: mov     edi, [edi+4]
0x85C657: mov     ebp, eax
0x85C659: cmp     edi, ebp
0x85C65B: jz      short loc_85C692
0x85C65D: test    edi, edi
0x85C65F: jz      short loc_85C67D
0x85C661: lea     edx, [edi+4]
0x85C664: push    edx; lpAddend
0x85C665: call    dword ptr ds:0A2807Ch
0x85C66B: test    eax, eax
0x85C66D: jnz     short loc_85C67D
0x85C66F: test    edi, edi
0x85C671: jz      short loc_85C67D
0x85C673: mov     eax, [edi]
0x85C675: mov     edx, [eax]
0x85C677: push    1
0x85C679: mov     ecx, edi
0x85C67B: call    edx
0x85C67D: test    ebp, ebp
0x85C67F: mov     eax, [esp+24h+var_10]
0x85C683: mov     [eax+4], ebp
0x85C686: jz      short loc_85C692
0x85C688: add     ebp, 4
0x85C68B: push    ebp; lpAddend
0x85C68C: call    dword ptr ds:0A28078h
0x85C692: cmp     byte ptr [esp+24h+arg_10], 0
0x85C697: jnz     short loc_85C6D4
0x85C699: mov     edi, 1
0x85C69E: add     [esi+60h], edi
0x85C6A1: mov     [esp+24h+arg_10], esi
0x85C6A5: mov     edx, [ebx+38h]
0x85C6A8: lea     ecx, [esp+24h+arg_10]
0x85C6AC: push    ecx
0x85C6AD: push    edx
0x85C6AE: lea     ecx, [ebx+40h]
0x85C6B1: mov     [esp+2Ch+var_4], 0
0x85C6B9: call    sub_76CE40
0x85C6BE: or      eax, 0FFFFFFFFh
0x85C6C1: add     [esi+60h], eax
0x85C6C4: mov     [esp+24h+var_4], eax
0x85C6C8: jnz     short loc_85C6D1
0x85C6CA: mov     ecx, esi
0x85C6CC: call    sub_7604D0
0x85C6D1: add     [ebx+38h], edi
0x85C6D4: mov     ecx, dword ptr [esp+24h+var_C]
0x85C6D8: mov     large fs:0, ecx
0x85C6DF: pop     ecx
0x85C6E0: pop     edi
0x85C6E1: pop     esi
0x85C6E2: pop     ebp
0x85C6E3: pop     ebx
0x85C6E4: add     esp, 10h
0x85C6E7: retn    14h
