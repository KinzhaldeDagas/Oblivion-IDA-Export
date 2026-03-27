0x983090: push    ebp
0x983091: mov     ebp, esp
0x983093: sub     esp, 14h
0x983096: mov     eax, [eax+10h]
0x983099: or      [ebp+var_8], 0FFFFFFFFh
0x98309D: push    ebx
0x98309E: mov     ebx, [eax+8]
0x9830A1: xor     ecx, ecx
0x9830A3: cmp     ebx, ecx
0x9830A5: push    esi
0x9830A6: push    edi; struct PMD *
0x9830A7: mov     edi, [eax+0Ch]
0x9830AA: mov     [ebp+var_10], ecx
0x9830AD: mov     [ebp+var_14], ecx
0x9830B0: mov     [ebp+var_C], ecx
0x9830B3: mov     [ebp+var_4], ecx
0x9830B6: jbe     loc_98318B
0x9830BC: mov     eax, [ebp+var_4]
0x9830BF: mov     esi, [edi+eax*4]
0x9830C2: sub     eax, [ebp+var_8]
0x9830C5: cmp     eax, [ebp+var_C]
0x9830C8: jbe     short loc_9830FC
0x9830CA: mov     eax, [esi]
0x9830CC: mov     ecx, [ebp+arg_C]
0x9830CF: cmp     eax, ecx
0x9830D1: jz      short loc_9830E6
0x9830D3: add     ecx, 8
0x9830D6: push    ecx; Str2
0x9830D7: add     eax, 8
0x9830DA: push    eax; Str1
0x9830DB: call    _strcmp
0x9830E0: test    eax, eax
0x9830E2: pop     ecx
0x9830E3: pop     ecx
0x9830E4: jnz     short loc_9830FC
0x9830E6: mov     eax, [ebp+var_14]
0x9830E9: test    eax, eax
0x9830EB: jnz     short loc_98313D
0x9830ED: mov     eax, [ebp+var_4]
0x9830F0: mov     [ebp+var_8], eax
0x9830F3: mov     eax, [esi+4]
0x9830F6: mov     [ebp+var_10], esi
0x9830F9: mov     [ebp+var_C], eax
0x9830FC: mov     eax, [esi]
0x9830FE: mov     ecx, [ebp+arg_4]
0x983101: cmp     eax, ecx
0x983103: jz      short loc_983118
0x983105: add     ecx, 8
0x983108: push    ecx; Str2
0x983109: add     eax, 8
0x98310C: push    eax; Str1
0x98310D: call    _strcmp
0x983112: test    eax, eax
0x983114: pop     ecx
0x983115: pop     ecx
0x983116: jnz     short loc_983133
0x983118: push    [ebp+arg_0]; void *
0x98311B: lea     eax, [esi+8]
0x98311E: call    ?PMDtoOffset@@YAHPAXABUPMD@@@Z
0x983123: cmp     eax, [ebp+arg_8]
0x983126: pop     ecx
0x983127: jnz     short loc_983133
0x983129: mov     eax, [ebp+var_10]
0x98312C: test    eax, eax
0x98312E: jnz     short loc_98314D
0x983130: mov     [ebp+var_14], esi
0x983133: inc     [ebp+var_4]
0x983136: cmp     [ebp+var_4], ebx
0x983139: jb      short loc_9830BC
0x98313B: jmp     short loc_98318B
0x98313D: test    byte ptr [esi+14h], 3
0x983141: jnz     short loc_98318B
0x983143: test    byte ptr [eax+14h], 1
0x983147: jnz     short loc_98318B
0x983149: mov     eax, esi
0x98314B: jmp     short loc_98318D
0x98314D: mov     ecx, [ebp+var_4]
0x983150: sub     ecx, [ebp+var_8]
0x983153: cmp     ecx, [ebp+var_C]
0x983156: ja      short loc_983185
0x983158: test    byte ptr [eax+14h], 40h
0x98315C: jnz     short loc_98316C
0x98315E: cmp     [ebp+var_8], 0
0x983162: jnz     short loc_98318D
0x983164: test    byte ptr [esi+14h], 1
0x983168: jnz     short loc_98318B
0x98316A: jmp     short loc_98318D
0x98316C: mov     edx, [eax+18h]
0x98316F: mov     edx, [edx+0Ch]
0x983172: mov     ecx, [edx+ecx*4]
0x983175: mov     cl, [ecx+14h]
0x983178: and     cl, 1
0x98317B: neg     cl
0x98317D: sbb     ecx, ecx
0x98317F: not     ecx
0x983181: and     eax, ecx
0x983183: jmp     short loc_98318D
0x983185: test    byte ptr [eax+14h], 3
0x983189: jz      short loc_983164
0x98318B: xor     eax, eax
0x98318D: pop     edi
0x98318E: pop     esi
0x98318F: pop     ebx
0x983190: leave
0x983191: retn
