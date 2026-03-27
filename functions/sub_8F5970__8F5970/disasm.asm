0x8F5970: push    ecx
0x8F5971: push    esi
0x8F5972: mov     esi, ecx
0x8F5974: mov     ecx, [esi+8]
0x8F5977: mov     eax, [ecx]
0x8F5979: lea     edx, [esp+8+var_1]
0x8F597D: push    edx
0x8F597E: call    dword ptr [eax+8]
0x8F5981: cmp     byte ptr [eax], 0
0x8F5984: jnz     short loc_8F598E
0x8F5986: mov     eax, 1
0x8F598B: pop     esi
0x8F598C: pop     ecx
0x8F598D: retn
0x8F598E: push    ebx
0x8F598F: push    ebp
0x8F5990: push    edi
0x8F5991: mov     ecx, esi
0x8F5993: call    sub_8F58D0
0x8F5998: mov     edi, [esi+18h]
0x8F599B: sub     edi, [esi+14h]
0x8F599E: xor     ebx, ebx
0x8F59A0: test    edi, edi
0x8F59A2: jle     short loc_8F59C8
0x8F59A4: mov     edx, [esi+0Ch]
0x8F59A7: mov     ebp, [esi+10h]
0x8F59AA: mov     ecx, [esi+8]
0x8F59AD: mov     eax, [ecx]
0x8F59AF: push    edi
0x8F59B0: add     edx, ebp
0x8F59B2: push    edx
0x8F59B3: call    dword ptr [eax+0Ch]
0x8F59B6: mov     edx, [esi+14h]
0x8F59B9: add     edx, eax
0x8F59BB: add     ebx, eax
0x8F59BD: cmp     eax, edi
0x8F59BF: mov     [esi+14h], edx
0x8F59C2: jnz     short loc_8F59D0
0x8F59C4: cmp     ebx, edi
0x8F59C6: jl      short loc_8F59A4
0x8F59C8: pop     edi
0x8F59C9: pop     ebp
0x8F59CA: pop     ebx
0x8F59CB: xor     eax, eax
0x8F59CD: pop     esi
0x8F59CE: pop     ecx
0x8F59CF: retn
0x8F59D0: pop     edi
0x8F59D1: xor     eax, eax
0x8F59D3: pop     ebp
0x8F59D4: test    ebx, ebx
0x8F59D6: pop     ebx
0x8F59D7: setz    al
0x8F59DA: pop     esi
0x8F59DB: pop     ecx
0x8F59DC: retn
